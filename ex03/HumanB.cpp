/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:52:21 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/11 15:19:49 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

#include <iostream>
#include <string>

HumanB::HumanB(std::string name) : _name(name) {}

HumanB::~HumanB(void) {}

void HumanB::setName(std::string name)
{
  this->_name = name;
}

void HumanB::setWeapon(Weapon& weapon)
{
  this->_weapon = &weapon;
}

Weapon& HumanB::getWeapon(void)
{
  return *this->_weapon;
}

std::string HumanB::getName(void)
{
  return this->_name;
}

void HumanB::attack(void)
{
  std::cout << this->_name << " attacks with their " << this->_weapon->getType() << "\n";
}
