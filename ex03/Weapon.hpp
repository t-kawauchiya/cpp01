/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:40:15 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/11 15:11:16 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_H_
#define _WEAPON_H_

#include <string>

class Weapon
{
public:
  Weapon(void);
  Weapon(std::string type);
  ~Weapon(void);
  void setType(std::string type);
  std::string getType(void);

private:
  std::string _type;
};

#endif /* _WEAPON_H_ */
