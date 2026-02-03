/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:07:39 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/12 17:37:35 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>
#include <string>

Harl::Harl(void) {}

Harl::~Harl(void) {}

void Harl::complain(std::string level)
{
  int index;
  void (Harl::* funcp[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
  index = -1;
  if (level.compare("DEBUG") == 0)
    index = 0;
  if (level.compare("INFO") == 0)
    index = 1;
  if (level.compare("WARNING") == 0)
    index = 2;
  if (level.compare("ERROR") == 0)
    index = 3;
  if (index != -1)
    (this->*funcp[index])();
}

void Harl::debug(void)
{
  std::cout << "I love having extra bacon for my "
               "7XL-double-cheese-triple-pickle-special-ketchup burger. I "
               "really do!\n";
}

void Harl::info(void)
{
  std::cout << "I cannot believe adding extra bacon costs more money. "
               "You didn’t put enough bacon in my burger! If you did, "
               "I wouldn’t be asking for more!\n";
}

void Harl::warning(void)
{

  std::cout << "I think I deserve to have some extra bacon for free. "
               "I’ve been coming foryears, "
               "whereas you started working here just last month.\n";
}

void Harl::error(void)
{
  std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}
