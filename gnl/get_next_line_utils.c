/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:16:09 by thodavid          #+#    #+#             */
/*   Updated: 2024/12/05 14:26:17 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h" 

/*			BOOL => if('\n') 1 else 0					*/

int	find_new_line(t_list *stash)
{
	int	i;
	t_list	*line;

	i = 0;

	if(stash == NULL)
		return (0);
	line = ft_lst_get_last(stash);

	while (line->content[i]) 
	{
		if (line->content[i] == '\n')
			return (1);	
		i++;
	}
	return (0);
}



/*			len of the current line (with /n) and malloc it			*/
void	generate_line(char **line, t_list *stash)
{
	int	i;
	int	len;

	len = 0;
	while (stash)
	{
		i = 0;
		while (stash -> content[i])
		{
			if (stash -> content[i] == '\n')
			{
				len ++;
				break;
			}
			len++;
			i++;
		}
		stash = stash -> next;
	}
	*line = malloc(sizeof(char) * (len +1));
	if(!*line)
		return ;
} 





/*			1. read from fd and add to stash				*/

void    read_and_stash(int fd, t_list **stash)
{
	char    *buffer;
	int             readed;

	readed = 1;
	while (!find_new_line(*stash) && readed != 0)
	{
		buffer = malloc(sizeof(char) * (BUFFER_SIZE +1));
		if (!buffer)
			return;
		readed = (int)read(fd, buffer, BUFFER_SIZE);

		if((*stash == NULL && readed == 0) || readed == -1)
		{
			free(buffer);
			return;
		}
		buffer[readed] = '\0';
		add_to_stash(stash, buffer, readed);
		free(buffer);
	}
}






/*		add the content of the buffer to the end of your stash			*/

void	add_to_stash(t_list **stash, char *buffer, int readed)
{
	int	i;
	t_list	*last;
	t_list	*new_node;

	i = 0;
	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return;
	new_node -> next = NULL;
	new_node -> content = malloc(sizeof(char) * (readed +1));
	if( new_node -> content == NULL)
		return;
	while (buffer[i] && i < readed)
	{
		new_node -> content[i] = buffer[i];
		i++;
	}
	new_node -> content[i] = '\0';
	if(*stash == NULL)
	{
		*stash = new_node;
		return;
	}
	last = ft_lst_get_last(*stash);
	last -> next = new_node;

}

/*              return a pointer to the last node                                       */

t_list  *ft_lst_get_last(t_list *stash)
{
        t_list  *current;

        current = stash;
        while (current && current -> next)
                current = current -> next;
        return (current);
}




/*		extract all char from stash and add it to line	(stop after the \n)	*/

void	extract_line(t_list *stash, char **line)
{
	int	i;
	int	j;

	if(stash == NULL)
		return;
	generate_line(line, stash);
	if (*line == NULL)
		return;
	j = 0;
	while (stash)
	{
		i = 0;
		while(stash -> content[i])
		{
			if(stash -> content[i] == '\n')
			{
				(*line)[j++] = stash-> content[i];
				break;
			}
			(*line)[j++] = stash -> content[i++];
		}

		stash = stash -> next;
	}
	(*line)[j] = '\0';
}





/*		clean the char who was read (so clear the stash				)*/

void	clean_stash(t_list **stash)
{
	t_list	*last;
	t_list	*clean_node;
	int	i;
	int	j;

	i = 0;
	if (stash == NULL)
		return;
	clean_node = malloc(sizeof(t_list));
	if(!clean_node)
		return;
	clean_node -> next = NULL;
	last = ft_lst_get_last(*stash);
	while (last -> content[i] && last -> content[i] != '\n')
		i++;
	if (last -> content && last -> content[i] == '\n')
		i++;
	clean_node -> content = malloc(sizeof(char) * ((ft_strlen(last -> content) - i) +1));
	if (clean_node -> content == NULL)
		return;
	j = 0;
	while(last -> content[i])
		clean_node->content[j++] = last->content[i++];
	clean_node -> content[j] = '\0';
	free_stash(*stash);
	*stash  = clean_node;       

}




/*              free the entire stash  		                                     	*/

void	free_stash(t_list *stash)
{
	t_list	*current;
	t_list	*next;

	current = stash;
	while (current)
	{
		free(current -> content);
		next = current -> next;
		free(current);
		current  = next;
	}
}


int	ft_strlen(char *s)
{
	if(!s)
		return (0);
	int	i;

	i = 0;
	while (s[i])
		i++;
	return i;
}
