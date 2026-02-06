/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:40:15 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/06 15:03:48 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_H_
#define _WEAPON_H_

#include <string>

class Weapon
{
public:
  Weapon(void);
  Weapon(const std::string type);
  ~Weapon(void);
  void setType(const std::string type);
  const std::string& getType(void) const;

private:
  std::string _type;
};

#endif /* _WEAPON_H_ */
