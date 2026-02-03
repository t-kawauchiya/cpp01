/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:56:41 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/11 12:50:30 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
  Zombie* zmb;
  randomChump("takawauc");

  zmb = new Zombie();
  zmb->announce();
  zmb->setName("hoge");
  zmb->announce();
  delete zmb;
}
