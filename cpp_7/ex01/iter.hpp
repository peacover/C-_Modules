/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:12:53 by yer-raki          #+#    #+#             */
/*   Updated: 2022/02/06 16:45:30 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>

void    iter(T *arr, int len, void func(T const &arr))
{
    for (int i = 0; i < len; i++)
        func(arr[i]);
}

template <typename T>

void    func(T const &arr)
{
    std::cout << arr << std::endl;
}