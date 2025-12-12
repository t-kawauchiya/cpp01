/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:32:39 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/12 17:39:44 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>

int main()
{
  Harl harl;

  std::cout << "-- debug() --\n";
  harl.complain("DEBUG");
  std::cout << "-- info() --\n";
  harl.complain("INFO");
  std::cout << "-- warning() --\n";
  harl.complain("WARNING");
  std::cout << "-- error() --\n";
  harl.complain("ERROR");
}
