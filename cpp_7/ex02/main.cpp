/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:56:57 by yer-raki          #+#    #+#             */
/*   Updated: 2022/02/10 18:52:33 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"

int main()
{
    int val;
    
    srand(time(NULL));
    Array<int> a(5);
    int *compar = new int(5);
    for (int i = 0; i < 5; i++)
    {
        val = rand() % 100;
        a[i] = val;
        compar[i] = val;
    }
    for (int i = 0; i < 5; i++)
    {
        if (compar[i] != a[i])
            std::cout << "somethiong wrong!!!" << std::endl;
    }
    try
    {
        a[5] = 3;
        // a[-5] = 3;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    delete compar;
}