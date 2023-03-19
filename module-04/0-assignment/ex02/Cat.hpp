/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:52:56 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/19 07:20:17 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
# define __CAT_HPP__

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : virtual public Animal
{
	private:
		Brain	*__brain;
	public:
		Cat(void);
		Cat(Cat const & ref);
		Cat& operator=(Cat const & ref);

		~Cat(void);

		void	makeSound(void) const;
};

#endif
