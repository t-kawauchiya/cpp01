/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:32:39 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/03 18:01:02 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>

int main(int argc, char** argv)
{
  int level;
  if (argc != 2)
  {
    std::cout << "Usage: " << argv[0] << " <Log level>" << std::endl;
    return 1;
  }
  level = Harl::toLevel(argv[1]);
  if (level == Harl::INVALID)
  {
    std::cout << "<Log level> must be \"DEBUG\" or \"INFO\" or \"WARNING\" or \"ERROR\""
              << std::endl;
    return 1;
  }

  Harl harl(level);

  std::cout << "-- debug() --\n";
  harl.complain("DEBUG");
  std::cout << "-- info() --\n";
  harl.complain("INFO");
  std::cout << "-- warning() --\n";
  harl.complain("WARNING");
  std::cout << "-- error() --\n";
  harl.complain("ERROR");
}
