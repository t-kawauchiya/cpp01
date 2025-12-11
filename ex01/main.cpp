/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 13:55:06 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/11 13:58:18 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

int main()
{
  Zombie* horde;

  horde = zombieHorde(10, "zoncchi");
  for (int i = 0; i < 10; i++)
  {
    std::cout << "horde[i].announce()\n";
    horde[i].announce();
  }
  delete[] horde;
}
