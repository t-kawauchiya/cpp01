/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:39:55 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/03 16:15:17 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMAN_A_H_
#define _HUMAN_A_H_

#include "Weapon.hpp"

#include <string>

class HumanA
{
public:
  HumanA(const std::string name, Weapon& weapon);
  ~HumanA(void);
  void setName(const std::string name);
  void setWeapon(const Weapon& weapon);
  std::string getName(void) const;
  Weapon& getWeapon(void) const;
  void attack(void) const;

private:
  std::string _name;
  Weapon& _weapon;
};

#endif /* _HUMAN_A_H_ */
