/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:46:19 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/11 15:22:03 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

#include <iostream>
#include <string>

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {}

HumanA::~HumanA(void) {}

void HumanA::setName(std::string name)
{
  this->_name = name;
}

std::string HumanA::getName(void)
{
  return this->_name;
}

void HumanA::attack(void)
{
  std::cout << this->_name << " attacks with their " << this->_weapon.getType() << "\n";
}
