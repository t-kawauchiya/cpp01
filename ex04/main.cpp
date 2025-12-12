/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 15:43:24 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/12 16:35:57 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

static std::string read_file(std::string filename);
static void write_file(std::string filename, std::string inputfile);
static std::string replace_str(std::string file, std::string str1, std::string str2);

int main(int argc, char** argv)
{
  std::string infile;
  std::string outfile;

  if (argc != 4)
  {
    std::cerr << "Usage: " << argv[0] << " <filename> <str1> <str2>" << std::endl;
    return 1;
  }
  std::string filename(argv[1]);
  std::string str1(argv[2]);
  std::string str2(argv[3]);
  try
  {
    infile = read_file(filename);
    std::cout << "infile:\n" << infile << "\n";
    outfile = replace_str(infile, str1, str2);
    std::cout << "outfile:\n" << outfile << "\n";
    write_file(filename + ".replace", outfile);
  }
  catch (const std::exception& e)
  {
    std::cerr << "Error: " << e.what() << std::endl;
  }
}

static std::string read_file(std::string filename)
{
  std::ifstream ifs(filename.c_str());

  if (!ifs)
    throw std::runtime_error("couldn't open input file");
  std::string content((std::istreambuf_iterator<char>(ifs)), std::istreambuf_iterator<char>());
  return content;
}

static std::string replace_str(std::string file, std::string str1, std::string str2)
{
  std::string ret;
  size_t pos;
  size_t prev_pos = 0;

  if (str1.empty())
    return file;
  while (true)
  {
    pos = file.find(str1, prev_pos);
    if (pos == std::string::npos)
    {
      ret.append(file, prev_pos, std::string::npos);
      return ret;
    }
    ret.append(file, prev_pos, pos - prev_pos);
    ret.append(str2);
    prev_pos = pos + str1.length();
  }
}

static void write_file(std::string filename, std::string inputfile)
{
  std::ofstream ofs(filename.c_str());

  if (!ofs)
    throw std::runtime_error("couldn't open output file");
  ofs << inputfile;
}
