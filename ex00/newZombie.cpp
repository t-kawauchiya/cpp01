/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 11:51:57 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/11 11:51:59 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <string>

Zombie* newZombie(std::string name)
{
  Zombie* ret;
  ret = new Zombie();
  ret->setName(name);
  return ret;
}
