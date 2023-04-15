#include <iostream>
using namespace std;
#include <fstream>
#include <cctype>
#include <cstring>
#include "museum.h"
                          // GLOBALS


int main () {
  Museum m1;
  cout << "Alege dintre variante, gestionarea 'exponat/restaurator/donator' sau 'quit' pentru a iesi: ";
  string option4;
  getline (cin, option4);
  m1.get(option4);
  string sub_option;
  while (option4 != "quit"){
    m1.get(option4);
  if (option4 == "exponat"){
    m1.get(option4);
    cout << "Citire (read) / Adăugare (add) / Deletion (del): ";
    getline(cin, sub_option);
    if (sub_option == "add"){
      m1.get(option4);
    m1.write_exponat();}
    else if (sub_option == "del"){
      m1.get(option4);
      m1.delete_it();}
    else if (sub_option == "read"){
      m1.get(option4);
      m1.readline();}
  }
  else if (option4 == "restaurator" || option4 == "donator"){
    m1.get(option4);
    cout << "Citire (read) / Adăugare (add) / Deletion (del): ";
    getline(cin, sub_option);
    if (sub_option == "add"){
      m1.get(option4);
    m1.write();}
    else if (sub_option == "del"){
      m1.get(option4);
      m1.delete_it();}
    else if (sub_option == "read"){
      m1.get(option4);
      m1.readline();}
    }
  else
    cout << "comanda nerecunoscuta!\n";
  cout << "Alege dintre variante, gestionarea 'exponat/restaurator/donator' sau 'quit' pentru a iesi: ";
  getline (cin, option4);
    m1.get(option4);
    }
  return 0;
}

