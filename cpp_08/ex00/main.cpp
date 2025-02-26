/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaldin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:05:53 by avaldin           #+#    #+#             */
/*   Updated: 2025/02/26 09:26:47 by avaldin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>
#include <deque>

int	main() {
	std::vector<int> vect;
	std::list<int>	list;
	std::deque<int> deque;
	int *find;

	for (int i = 0; i < 20; ++i) { vect.push_back(i); }
	for (int i = 0; i < 20; ++i) { list.push_back(i); }
	for (int i = 0; i < 20; ++i) { deque.push_back(i); }

	try {
	find = easyfind(vect, 4);
	std::cout << *find << " in vect is at the place " << find << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "not finded" << std::endl;
	}


	try {
		find = easyfind(deque, 50);
		std::cout << *find << " in deque is at the place " << find << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "not finded" << std::endl;
	}


	try {
		find = easyfind(list, 4);
		std::cout << *find << " in list is at the place " << find << std::endl;	}
	catch (std::exception &e)
	{
		std::cout << "not finded" << std::endl;
	}

	return 0;
}