/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:53:28 by yer-raki          #+#    #+#             */
/*   Updated: 2021/12/15 10:37:22 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:

		Cat();
		Cat(Cat const & src);
		virtual ~Cat();
		Cat &		operator=( Cat const & rhs );
		
		virtual void makeSound() const;
		std::string getBrain() const;
		void    setBrain(std::string idea);
	private:
		Brain *_br;
};

#endif