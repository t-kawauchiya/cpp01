/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:46:19 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/03 16:16:05 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

#include <iostream>
#include <string>

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {}

HumanA::~HumanA(void) {}

void HumanA::setName(const std::string name)
{
  this->_name = name;
}

std::string HumanA::getName(void) const
{
  return this->_name;
}

void HumanA::attack(void) const
{
  std::cout << this->_name << " attacks with their " << this->_weapon.getType() << "\n";
}
