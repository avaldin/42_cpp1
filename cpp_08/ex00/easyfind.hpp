/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaldin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:06:23 by avaldin           #+#    #+#             */
/*   Updated: 2025/01/27 13:52:10 by avaldin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP_08_EASYFIND_HPP
#define CPP_08_EASYFIND_HPP

#include <string>

template<typename T>

int	*easyfind(T cont, int i) {
	for (typename T::iterator it = cont.begin(); it != cont.end() ; ++it) {
		if (*it == i)
			return (&(*it));
	}
	return (&(*cont.end()));
}

#endif
