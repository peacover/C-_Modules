/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:10:00 by yer-raki          #+#    #+#             */
/*   Updated: 2022/02/12 15:45:46 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void    easyfind(T arg, int integer)
{
    std::vector<int>::iterator it;
    
    it = find(arg.begin(), arg.end(), integer);
    if (it != arg.end())
    {
        std::cout << "Element : " << integer << " found at position : " << it - arg.begin() << std::endl;
    }
    else
        std::cout << "Element not found.";
}