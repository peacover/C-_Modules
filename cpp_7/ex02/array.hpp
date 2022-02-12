/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:57:31 by yer-raki          #+#    #+#             */
/*   Updated: 2022/02/12 08:01:34 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>

template <typename T>

class Array
{
    public:
        Array() : _arr(NULL), _len(0){}
        ~Array()
        {
            if (_arr)
                delete [] _arr;
        }
        Array(unsigned int n) : _arr(new T[n]), _len(n) {}
        Array(Array const & src)
        {
            *this = src;
        }
        Array   &operator=(Array const & src)
        {
            if (this == &src)
                return (*this);
            _len = src.size();
            _arr = new T[_len];
            for (unsigned int i = 0; i < _len; i++)
                _arr[i] = src._arr[i];
            return (*this);
        }
        
        void   *operator new[] (size_t n)
        {
            // T *ptr;
            // ptr = new T[n];
            // return ptr;
            return (new T[n]);
        }

        T   &operator[] (unsigned int index)const
        {
            if (index >= _len)
                throw OutOfBoundException();
            else
                return _arr[index];
        }
        
		
        unsigned int size() const;
        class OutOfBoundException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return ("OutOfBoundException.");
                }
        };
    private:
        T				*_arr;
        unsigned int	_len;
};

template <typename T>
unsigned int Array<T>::size() const
{
    return (_len);
}