/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:01:51 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/03 15:29:35 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
  std::string str = "HI THIS IS BRAIN";
  std::string* stringPTR = &str;
  std::string& stringREF = str;

  std::cout << "address of \"str\"      : " << &str << "\n"
            << "address of \"stringPTR\": " << stringPTR << "\n"
            << "address of \"stringREF\": " << &stringREF << "\n";
  std::cout << "value of \"str\"      : " << str << "\n"
            << "value of \"stringPTR\": " << *stringPTR << "\n"
            << "value of \"stringREF\": " << stringREF << "\n";
}
