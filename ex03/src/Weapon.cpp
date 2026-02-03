/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:54:41 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/03 16:12:18 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#include <string>

Weapon::Weapon(void) : _type("no weapon") {}
Weapon::Weapon(std::string type) : _type(type) {}
Weapon::~Weapon(void) {}

void Weapon::setType(std::string type)
{
  this->_type = type;
}

std::string Weapon::getType(void) const
{
  return this->_type;
}
