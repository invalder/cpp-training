/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:29:33 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/13 21:44:25 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VISIBILITY_H
# define VISIBILITY_H

class Sample
{
	public:
			int		PublicFoo;

			// need to consider what makes more sense to place the constructor \
			// and destructor in private or public
			Sample(void);
			~Sample(void);

			void	PublicBar(void) const;

	private:
			// use _ prefix for all private identifier
			// it gives reader a quick idea of which is public or private
			int		_PrivateFoo;

			void	_PrivateBar(void) const;

};



#endif
