/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:50:59 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/26 17:52:51 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.hpp"

int main(){
	Sample instance1;
	Sample instance2(42);
	Sample instance3(instance1);

	std::cout << "The value of _foo is : " << instance1 << std::endl;
	std::cout << "The value of _foo is : " << instance2 << std::endl;
	std::cout << "The value of _foo is : " << instance3 << std::endl;

	instance3 = instance2;
	std::cout << "The value of _foo is : " << instance3 << std::endl;

	return 0;
}
