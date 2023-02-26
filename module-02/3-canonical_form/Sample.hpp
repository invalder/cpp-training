/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:31:43 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/26 17:41:34 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SAMPLE_HPP__
# define __SAMPLE_HPP__

# include <iostream>

class Sample
{
private:
	int	_foo;
public:
	Sample(void); // Default Constructor
	Sample(const int n); //Parametric constructor
	Sample(Sample const & src); // Copy constructor
	~Sample(void); //Deconstructor

	Sample & operator=(Sample const & rhs); //Canonical Form

	int	getFoo(void) const;

};

std::ostream & operator<<(std::ostream & o, Sample const & i);

#endif
