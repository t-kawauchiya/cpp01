/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:07:39 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/04 20:41:30 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>
#include <string>

Harl::Harl(void) {}

Harl::~Harl(void) {}

void Harl::complain(std::string level)
{
  void (Harl::*funcp)(void) = NULL;
  if (level.compare("DEBUG") == 0)
    funcp = &Harl::debug;
  else if (level.compare("INFO") == 0)
    funcp = &Harl::info;
  else if (level.compare("WARNING") == 0)
    funcp = &Harl::warning;
  else if (level.compare("ERROR") == 0)
    funcp = &Harl::error;
  if (funcp)
    (this->*funcp)();
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
