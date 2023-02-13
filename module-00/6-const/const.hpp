/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:29:33 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/13 21:22:11 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONST_H
# define CONST_H

class Sample
{
	public:
		// attributes
		float const	pi;
		int			qd;

		Sample(float const p3);
		~Sample(void);

		void	bar(void) const;
};



#endif
