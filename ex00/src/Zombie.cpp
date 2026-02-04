/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 12:21:33 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/04 20:11:22 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie(void) : name("no name") {}

Zombie::~Zombie(void)
{
  std::cout << "a Zombie was destructed. <name: " << this->name << "> \n";
}

void Zombie::setName(std::string name)
{
  this->name = name;
}

std::string Zombie::getName(void)
{
  return this->name;
}

void Zombie::announce(void)
{
  std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}
