/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 13:55:06 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/04 20:14:33 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

int main()
{
  Zombie* horde;
  int num;
  num = 10;

  std::cout << "< zombieHorde() has called. >\n";
  horde = zombieHorde(num, "zoncchi");
  for (int i = 0; i < num; i++)
  {
    std::cout << "horde[" << i << "].announce()\n";
    horde[i].announce();
  }
  delete[] horde;
}
