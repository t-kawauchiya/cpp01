/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:52:21 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/07 15:38:52 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

#include <iostream>
#include <string>

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {}

HumanB::~HumanB(void) {}

void HumanB::setName(const std::string name)
{
  this->_name = name;
}

void HumanB::setWeapon(Weapon& weapon)
{
  this->_weapon = &weapon;
}

const Weapon& HumanB::getWeapon(void) const
{
  return *this->_weapon;
}

const std::string& HumanB::getName(void) const
{
  return this->_name;
}

void HumanB::attack(void)
{
  if (_weapon)
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << "\n";
  else
    std::cout << this->_name << " attacks with their bare hands" << "\n";
}
