/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init-list.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:29:33 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/13 20:52:06 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INIT_LIST_H
# define INIT_LIST_H

class Sample
{
public:
	// attributes
	char	a1;
	int		a2;
	float	a3;

	Sample(char p1, int p2, float p3);
	~Sample(void);

	void	bar(char *);
};



#endif
