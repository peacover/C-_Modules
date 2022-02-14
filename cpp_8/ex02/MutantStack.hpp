/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:12:00 by yer-raki          #+#    #+#             */
/*   Updated: 2022/02/14 16:41:58 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{
    
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        
        MutantStack() {}
        ~MutantStack() {}
        MutantStack(MutantStack const &src) { *this = src; }
        MutantStack &operator=(MutantStack const &src) { this->c = src.c; }
        
        iterator begin() { return (this->c.begin()); }
        iterator end() { return (this->c.end()); }
    private:

};

#endif