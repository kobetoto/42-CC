// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"


int		main( void ) {

	/*
	**ALIAS
	*/
	typedef std::vector<Account::t>							  accounts_t;//== std::vector contenant des éléments de type Account::t soit account
	typedef std::vector<int>								  ints_t;
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t;
												/*
												std::pair<int, std::string> p(42, "Hello");
												std::cout << p.second;  // Hello
												std::cout << p.first;   // 42
												*/
	/*********************************************** */





	/*
	**VAR AMOUNT (arr, size of arr, vector, it(aka ptr))
	*/
	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };//arr => 0-7 (8 elements) 
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) ); //taille du tableau = 32octet(taille total) / 4(taille d'un int) = 8
	accounts_t				accounts( amounts, amounts + amounts_size );//amounts ->ptr to the 1st arr element / amounts + amounts_size ptr just AFTER the last elem
	accounts_t::iterator	acc_begin	= accounts.begin(); // object like a "ptr" pour parcourir un conteneur (vector, list, etc.)
	accounts_t::iterator	acc_end		= accounts.end();
	/*
	**VAR DEPOSIT (arr, size of arr, vector, it(aka ptr))
	*/
	int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9, 20 };
	size_t const		d_size( sizeof(d) / sizeof(int) );
	ints_t				deposits( d, d + d_size );
	ints_t::iterator	dep_begin	= deposits.begin();
	ints_t::iterator	dep_end		= deposits.end();

	/*
	**VAR WITHDRAWS (arr, size of arr, vector, it(aka ptr))
	*/
	int	const			w[]			= { 321, 34, 657, 4, 76, 275, 657, 7654 };
	size_t const		w_size( sizeof(w) / sizeof(int) );
	ints_t				withdrawals( w, w + w_size );
	ints_t::iterator	wit_begin	= withdrawals.begin();
	ints_t::iterator	wit_end		= withdrawals.end();
	/*********************************************** */
















	/*
	**DISPLAY INFOS + PROGR ENGINE
	*/

	//displayAccountsInfos of each account
	Account::displayAccountsInfos(); //==> [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0

	//displayStatus of each account
	std::for_each( acc_begin, acc_end, std::mem_fn( &Account::displayStatus ) ); //[19920104_091532] index:0;amount:42;created

	/*
	**RUN THROUGH -->ACC + DEPO--> (prog engine)
	*/
	for ( acc_int_t it( acc_begin, dep_begin );//parcourir 2vector en paralele pour lier account et depots
		  it.first != acc_end && it.second != dep_end;//tant que l'it ne pointe pas sur la fin du vector it(first++, second++) 
		  ++(it.first), ++(it.second) ) {
		(*(it.first)).makeDeposit( *(it.second) ); //account.makeDeposit(int) ==>
	}









	Account::displayAccountsInfos();//[19920104_091532] accounts:8;total:21524;deposits:8;withdrawals:0


	//displayStatus of each account
	std::for_each( acc_begin, acc_end, std::mem_fn( &Account::displayStatus ) );

	for ( acc_int_t it( acc_begin, wit_begin );
		  it.first != acc_end && it.second != wit_end;
		  ++(it.first), ++(it.second) ) {
		(*(it.first)).makeWithdrawal( *(it.second) );
	}










	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fn( &Account::displayStatus ) );//[19920104_091532] index:0;amount:47;closed


	return 0;
}


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //
