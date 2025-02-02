/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaldin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 16:02:42 by avaldin           #+#    #+#             */
/*   Updated: 2025/02/02 16:51:20 by avaldin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "RPN.hpp"

int main (int argc, char** argv) {
	if (argc != 2) {
		std::cout << "-> ./RPN arg" << std::endl;
		return (1);
	}
	try {
	std::stringstream ss(argv[1]);
	RPN rpn = RPN();
	rpn.exec(ss);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}