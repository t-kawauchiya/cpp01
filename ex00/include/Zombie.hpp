/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:57:27 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/04 20:12:45 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_H_
#define _ZOMBIE_H_

#include <string>

class Zombie
{
public:
  Zombie(void);
  ~Zombie(void);

  void setName(std::string name);
  std::string getName(void);

  void announce(void);

private:
  std::string name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif /* _ZOMBIE_H_ */
