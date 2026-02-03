/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 16:53:09 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/12 17:23:24 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HARL_H_
#define _HARL_H_

#include <string>

class Harl
{
public:
  Harl(void);
  ~Harl(void);
  void complain(std::string level);

private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
};

#endif
