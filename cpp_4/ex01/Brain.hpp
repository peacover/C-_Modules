/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 10:24:29 by yer-raki          #+#    #+#             */
/*   Updated: 2021/12/13 17:46:56 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "animal.hpp"

class Brain
{
    public:
        Brain();
        ~Brain();

        Brain(Brain const & src);
        Brain & operator=(Brain const & rhs);
        std::string & getIdeas() const;
        void    setIdea(std::string *idea);
        void    printId() {
            for (int i = 0; i < 100 ; i++)
                std::cout << _ideas[i] << std::endl;
            return ;
        }
    private:
        std::string _ideas[100];
};


#endif