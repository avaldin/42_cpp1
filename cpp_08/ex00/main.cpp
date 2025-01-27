/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaldin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:05:53 by avaldin           #+#    #+#             */
/*   Updated: 2025/01/27 13:44:53 by avaldin          ###   ########.fr       */
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

	for (int i = 0; i < 20; ++i) { vect[i] = i; }
	for (int i = 0; i < 20; ++i) { list.push_back(i); }
	for (int i = 0; i < 20; ++i) { deque[i] = i; }

	find = easyfind(vect, 4);
	std::cout << *find << " in vect is at the place " << find << std::endl;

	find = easyfind(list, 4);
	std::cout << *find << " in list is at the place " << find << std::endl;

	find = easyfind(deque, 4);
	std::cout << *find << " in deque is at the place " << find << std::endl;
	return 0;
}