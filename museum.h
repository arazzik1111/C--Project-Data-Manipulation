#include <iostream>
#include <fstream>
#include <cctype>
#include <cstring>
using namespace std;


class Museum{
public:
  string option;
  void write();
  void write_exponat();
  void delete_line(const char* file_name, int n);
  void delete_it();
  void sub_readline(int target);
  void readline();
  void get(string option5);
};