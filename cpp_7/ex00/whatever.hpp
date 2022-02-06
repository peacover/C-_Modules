/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:13:28 by yer-raki          #+#    #+#             */
/*   Updated: 2022/02/06 15:57:06 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>

void    swap(T &x, T &y)
{
    T tmp;
    tmp = x;
    x = y;
    y = tmp;
}

template <typename T>

T const &  min(T const &x, T const &y)
{
    return ((x < y) ? x : y);
}

template <typename T>

T const &  max(T const &x, T const &y)
{
    return ((x > y) ? x : y);
}