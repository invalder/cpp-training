/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 16:05:50 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/19 07:20:52 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : virtual public Animal
{
	private:
		Brain	*__brain;
	public:
		Dog(void);
		Dog(Dog const & ref);
		Dog& operator=(Dog const & ref);

		~Dog(void);

		void	makeSound(void) const;
};

#endif
