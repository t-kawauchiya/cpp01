/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:39:55 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/07 15:37:15 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMAN_B_H_
#define _HUMAN_B_H_

#include "Weapon.hpp"

#include <string>

class HumanB
{
public:
  HumanB(const std::string name);
  ~HumanB(void);

  void setName(const std::string name);
  void setWeapon(Weapon& weapon);
  const std::string& getName(void) const;
  const Weapon& getWeapon(void) const;

  void attack(void);

private:
  std::string _name;
  Weapon* _weapon;
};

#endif /* _HUMAN_B_H_ */
