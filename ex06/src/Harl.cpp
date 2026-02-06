/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:07:39 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/06 15:34:58 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>
#include <string>

Harl::Harl(int minLevel) : _minLevel(minLevel) {}

Harl::~Harl(void) {}

void Harl::complain(std::string level)
{
  switch (toEnum(level))
  {
  case Harl::DEBUG:
    Harl::debug();
    break;
  case Harl::INFO:
    Harl::info();
    break;
  case Harl::WARNING:
    Harl::warning();
    break;
  case Harl::ERROR:
    Harl::error();
    break;
  default:
    break;
  }
  return;
}

Harl::Level Harl::toEnum(std::string level)
{
  std::string table[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  for (int i = 0; i < 4; i++)
    if (table[i].compare(level) == 0)
      return (Harl::Level)i;
  return Harl::INVALID;
}

void Harl::setMinLevel(std::string level)
{
  this->_minLevel = toEnum(level);
}

std::string Harl::getMinLevel(void)
{
  std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  return str[this->_minLevel];
}

void Harl::debug(void)
{
  std::cout << "[ DEBUG ]\n";
  std::cout << "I love having extra bacon for my "
               "7XL-double-cheese-triple-pickle-special-ketchup burger. I "
               "really do!\n";
}

void Harl::info(void)
{
  std::cout << "[ INFO ]\n";
  std::cout << "I cannot believe adding extra bacon costs more money. "
               "You didn’t put enough bacon in my burger! If you did, "
               "I wouldn’t be asking for more!\n";
}

void Harl::warning(void)
{
  std::cout << "[ WARNING ]\n";
  std::cout << "I think I deserve to have some extra bacon for free. "
               "I’ve been coming foryears, "
               "whereas you started working here just last month.\n";
}

void Harl::error(void)
{
  std::cout << "[ ERROR ]\n";
  std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}
