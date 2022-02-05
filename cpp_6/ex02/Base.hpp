/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:01:07 by yer-raki          #+#    #+#             */
/*   Updated: 2022/02/05 18:56:29 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class Base
{
    public:
        virtual ~Base();
};

class A : public Base
{
    public:
        ~A();
};

class B : public Base
{
    public:
        ~B();
};

class C : public Base
{
    public:
        ~C();
};
#endif