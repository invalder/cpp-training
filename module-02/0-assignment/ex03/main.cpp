/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:47:04 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/10 22:07:44 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
Input: A = (0, 0), B = (10, 30), C = (20, 0), P(10, 15)
Output: Inside
Explanation:
              B(10,30)
                / \
               /   \
              /     \
             /   P   \      P'
            /         \
     A(0,0) ----------- C(20,0)
Input: A = (0, 0), B = (10, 30), C = (20, 0), P(30, 15)
Output: Outside
Explanation:
              B(10,30)
                / \
               /   \
              /     \
             /       \      P
            /         \
     A(0,0) ----------- C(20,0)
Solution:
Let the coordinates of three corners be (x1, y1), (x2, y2) and (x3, y3). And coordinates of the given point P be (x, y)
Calculate area of the given triangle, i.e., area of the triangle ABC in the above diagram.
Area A = [ x1(y2 – y3) + x2(y3 – y1) + x3(y1-y2) ] / 2
Calculate area of the triangle PAB. We can use the same formula for this. Let this area be A1.
Calculate area of the triangle PBC. Let this area be A2.
Calculate area of the triangle PAC. Let this area be A3.
If P lies inside the triangle, then A1 + A2 + A3 must be equal to A.
*/

int main ( void ) {
    if ( bsp( Point(0.0f, 0.0f), Point(10.0f, 30.0f), Point(20.0f, 0.0f), Point(30.0f, 15.0f) ) == true ) {
        std::cout << "Point is in the triangle" << std::endl;
    } else {
        std::cout << "Point is not in the triangle" << std::endl;
    }
    return 0;
}
