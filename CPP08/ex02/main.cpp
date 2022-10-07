/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 21:38:44 by aionescu          #+#    #+#             */
/*   Updated: 2022/08/18 21:15:10 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int	main(void)
{
	std::cout << std::endl;
	std::cout << "WITH MUTANTSTACK:" << std::endl;
	std::cout << std::endl;
	
	MutantStack<int> mstack;
	mstack.push(5);
	std::cout << "Pushed " << mstack.top() << std::endl;
	mstack.push(17);
	std::cout << "Pushed " << mstack.top() << std::endl;
	
	std::cout << "Top is " << mstack.top() << std::endl;
	
	std::cout << "Popping " << mstack.top() << std::endl;
	mstack.pop();
	
	std::cout << "Size is " << mstack.size() << std::endl;
	
	mstack.push(3);
	std::cout << "Pushed " << mstack.top() << std::endl;
	mstack.push(5);
	std::cout << "Pushed " << mstack.top() << std::endl;
	mstack.push(737);
	std::cout << "Pushed " << mstack.top() << std::endl;
	//[...]
	mstack.push(0);
	std::cout << "Pushed " << mstack.top() << std::endl;
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "Current MutantStack:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	
	MutantStack<int> mstack2(mstack);
	
	mstack.pop();
	mstack.pop();
	mstack.pop();
	mstack.pop();
	mstack.pop();
	it = mstack.begin();
	ite = mstack.end();
	std::cout << "Emptied first MutantStack:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	
	MutantStack<int>::iterator it2 = mstack2.begin();
	MutantStack<int>::iterator ite2 = mstack2.end();
	++it2;
	--it2;
	std::cout << "Second MutantStack:" << std::endl;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	
	std::cout << std::endl;
	std::cout << "-------------------------------------------------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "WITH LIST:" << std::endl;
	std::cout << std::endl;
	
	std::list<int>	MyList;
	MyList.push_back(5);
	std::cout << "Pushed " << MyList.back() << std::endl;
	MyList.push_back(17);
	std::cout << "Pushed " << MyList.back() << std::endl;
	
	std::cout << "Back is " << MyList.back() << std::endl;
	
	std::cout << "Popping " << MyList.back() << std::endl;
	MyList.pop_back();
	
	std::cout << "Size is " << MyList.size() << std::endl;
	
	MyList.push_back(3);
	std::cout << "Pushed " << MyList.back() << std::endl;
	MyList.push_back(5);
	std::cout << "Pushed " << MyList.back() << std::endl;
	MyList.push_back(737);
	std::cout << "Pushed " << MyList.back() << std::endl;
	//[...]
	MyList.push_back(0);
	std::cout << "Pushed " << MyList.back() << std::endl;
	
	std::list<int>::iterator itList = MyList.begin();
	std::list<int>::iterator iteList = MyList.end();
	++itList;
	--itList;
	std::cout << "Current List:" << std::endl;
	while (itList != iteList)
	{
		std::cout << *itList << std::endl;
		++itList;
	}
	return 0;
}
