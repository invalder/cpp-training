/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:52:56 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/18 15:30:28 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
# define __CAT_HPP__

# include "Animal.hpp"

class Cat : virtual public Animal
{
	public:
		Cat(void);
		Cat(Cat const & ref);
		Cat& operator=(Cat const & ref);

		~Cat(void);

		void	makeSound(void) const;
};

#endif
