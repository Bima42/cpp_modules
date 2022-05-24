#ifndef MAIN_H
# define MAIN_H

#include <iostream>
#include <fstream>
#include <string>

int	checkArgs(std::string &arg, std::string &s1, std::string &s2, std::ifstream &file);
int	replaceString(std::string arg, std::string s1, std::string s2);

#endif
