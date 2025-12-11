/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:54:41 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/11 15:13:38 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#include <string>

Weapon::Weapon(void) {}
Weapon::Weapon(std::string type) : _type(type) {}
Weapon::~Weapon(void) {}

void Weapon::setType(std::string type)
{
  this->_type = type;
}

std::string Weapon::getType(void)
{
  return this->_type;
}
