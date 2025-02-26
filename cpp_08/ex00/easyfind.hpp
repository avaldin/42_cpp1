/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaldin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:06:23 by avaldin           #+#    #+#             */
/*   Updated: 2025/02/26 09:23:19 by avaldin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP_08_EASYFIND_HPP
#define CPP_08_EASYFIND_HPP

#include <string>
#include <algorithm>
#include <iostream>

template<typename T>

int	*easyfind(T &cont, int i) {
	typename T::iterator it;

	it = std::find(cont.begin(), cont.end(), i);
	if (it == cont.end())
		throw std::exception();
	return (&(*it));
}

#endif
