/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 15:43:24 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/06 13:37:37 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

static std::string read_file(std::string filename);
static void write_file(const std::string& filename, const std::string& outfile);
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
    outfile = replace_str(infile, str1, str2);
    write_file(filename + ".replace", outfile);
  }
  catch (const std::exception& e)
  {
    std::cerr << "Error: " << e.what() << std::endl;
    return 1;
  }
  return 0;
}

static std::string read_file(std::string filename)
{
  std::ifstream ifs(filename.c_str());

  if (!ifs)
    throw std::runtime_error("couldn't open input file: " + filename);

  std::ostringstream oss;
  oss << ifs.rdbuf();

  if (!ifs.eof() && ifs.fail())
    throw std::runtime_error("read failed: " + filename);

  return oss.str();
}

static std::string replace_str(std::string file, std::string str1, std::string str2)
{
  std::string ret;
  size_t find_pos;
  size_t read_pos = 0;

  if (str1.empty())
    return file;
  while (true)
  {
    find_pos = file.find(str1, read_pos);
    if (find_pos == std::string::npos)
    {
      ret.append(file, read_pos);
      return ret;
    }
    ret.append(file, read_pos, find_pos - read_pos);
    ret.append(str2);
    read_pos = find_pos + str1.length();
  }
}

static void write_file(const std::string& filename, const std::string& outfile)
{
  std::ofstream ofs(filename.c_str());
  if (!ofs)
    throw std::runtime_error("couldn't open output file: " + filename);

  ofs << outfile;
  if (!ofs)
    throw std::runtime_error("write failed: " + filename);
}
