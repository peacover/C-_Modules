/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:10:04 by yer-raki          #+#    #+#             */
/*   Updated: 2022/02/12 15:54:39 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    int tofind;
    int tmp;
    
    srand(time(NULL));
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        tmp = rand() % 100;
        std::cout << " " << tmp;
        v.push_back(tmp);
    }
    std::cout << "\n" << "-----------------------------" << std::endl;
    tofind = 9;
    easyfind(v, tofind);
    std::cout << "\n" << "-----------------------------" << std::endl;
    v.push_back(tofind);
    easyfind(v, tofind);
}