/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:56:57 by yer-raki          #+#    #+#             */
/*   Updated: 2022/02/12 08:02:04 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"

int main()
{
    int val;
    
    srand(time(NULL));
    Array<int> a(5);
    Array<int> compar = a;
    for (int i = 0; i < 5; i++)
    {
        val = rand() % 100;
        a[i] = val;
        compar[i] = val;
        std::cout << "i = " << i << " | "<< a[i] << " | " << compar[i] << std::endl;
    }
    Array<int> test(a);
    for (int i = 0; i < 5; i++)
    {
        if (compar[i] != a[i])
        {
            std::cout << "i = " << i << " | "<< a[i] << " | " << compar[i] << std::endl;
            std::cout << "something wrong!!!" << std::endl;
        }
    }
    try
    {
        std::cout << "old a val : " << a[4] << std::endl;
        a[4] = 33;
        std::cout << "new a val : " << a[4] << std::endl;
        std::cout << "test val : " << test[4] << std::endl;
        // a[5] = 3;
        // a[-5] = 3;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}