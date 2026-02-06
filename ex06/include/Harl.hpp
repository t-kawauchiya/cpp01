/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 16:53:09 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/06 13:49:45 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HARL_H_
#define _HARL_H_

#include <string>

class Harl
{
public:
  enum Level
  {
    DEBUG = 0,
    INFO = 1,
    WARNING = 2,
    ERROR = 3,
    INVALID = 4
  };

  Harl(int minLevel);
  ~Harl(void);

  void setMinLevel(std::string level);
  std::string getMinLevel(void);

  void complain(std::string level);
  static Level toLevel(std::string level);

private:
  int _minLevel;

  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
};

#endif
