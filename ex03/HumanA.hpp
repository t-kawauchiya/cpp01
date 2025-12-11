/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:39:55 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/11 15:22:37 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMAN_A_H_
#define _HUMAN_A_H_

#include "Weapon.hpp"

#include <string>

class HumanA
{
public:
  HumanA(std::string name, Weapon& weapon);
  ~HumanA(void);
  void setName(std::string name);
  void setWeapon(Weapon& weapon);
  std::string getName(void);
  Weapon& getWeapon(void);
  void attack(void);

private:
  std::string _name;
  Weapon& _weapon;
};

#endif /* _HUMAN_A_H_ */
