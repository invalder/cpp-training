/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:29:33 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/14 19:31:04 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
public:
	Sample(void);
	~Sample(void);

	int	getFoo(void) const;
	int	Compare(Sample *other) const;

	// non member function
	// when the function does not have anything to do with the other class
	// functions, but you want it to be part of the class
	static int getNbInst(void);

private:
	int	_foo;

	// non member attribute
	// number of instances: this information only makes sense at the class level
	static int _nbInst;
};

#endif
