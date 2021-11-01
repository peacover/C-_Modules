/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:49:08 by yer-raki          #+#    #+#             */
/*   Updated: 2021/11/01 18:55:46 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{
	public:
		Animal();
		virtual ~Animal();
		
		void makeSound();
	private:
		std::string type;
}
#endif