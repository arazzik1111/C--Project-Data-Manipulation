#include <iostream>
#include <fstream>
#include <cctype>
#include <cstring>
using namespace std;
#include "museum.h"


int target_line;
//Museum::Museum{
//public:
void Museum::get(string option5){
  option = option5;
  //return option;
}
void Museum::write(){           //
  //string option = "DONATOR";
  ofstream outfile;
  string name, surname, adress, cnp;
  cout << "Numele: ";
  getline (cin, name);
  cout << "Prenume: ";
  getline (cin, surname);
  cout << "Adresa: ";
  getline (cin, adress);
  cout << "CNP: ";
  getline (cin, cnp);
  string option2;
  for (int x=0; x<option.length(); x++){
        option2 += (toupper(option[x]));}
  outfile.open("DATA.txt", ios_base::app);
  outfile << "\n["<<option2<<"]\nNumele: "<< name<<"\nPrenume: "<<surname<<"\nAdresa: "<<adress<<"\nCNP: "<<cnp<<"\n"; 
}
void Museum::write_exponat(){
  ofstream outfile;
  string name, description, registration, section, restored, price;
  cout << "Numele: ";
  getline (cin, name);
  cout << "Descrierea exponatului: ";
  getline (cin, description);
  cout << "Nr-ul de registrare: ";
  getline (cin, registration);
  cout << "Sectia: ";
  getline (cin, section);
  cout << "Restaurat sau nu: ";
  getline (cin, restored);
  cout << "Pretul (in €): ";
  getline (cin, price);
  string option2;
  for (int x=0; x<option.length(); x++){
        option2 += (toupper(option[x]));}
  outfile.open("DATA.txt", ios_base::app); 
  outfile << "\n["<<option2<<"]\nNumele: "<< name<<"\nDescrierea: "<<description<<"\nNr-ul de inregistrare: "<<registration<<"\nSectia: "<<section<<"\nRestaurat: "<<restored<<"\nPret: "<<price<< " €"<<"\n"; 
}
void Museum::delete_line(const char* file_name, int n)
{
    ifstream is(file_name);
    ofstream ofs;
    ofs.open("temp.txt", ofstream::out);
    char c;
    int line_no = 1;
    while (is.get(c)){
        if (c == '\n')
        line_no++;
        if (line_no != n)
            ofs << c;}
    ofs.close();
    is.close();
    remove(file_name);
    rename("temp.txt", file_name);}
void Museum::delete_it(){
  ifstream fileInput;
  int offset;
  string line;
  string search;
  cout << "Scrie Numele pentru a sterge datele: ";
  getline(cin, search);
  fileInput.open("DATA.txt");
  if(fileInput.is_open()) {
      unsigned int curLine = 0;
  while(getline(fileInput, line)) {
      curLine++;
      if (line.find(search, 0) != string::npos) {
          target_line = curLine;
    }
}
  fileInput.close();}
delete_line("DATA.txt", target_line);
delete_line("DATA.txt", target_line);
delete_line("DATA.txt", target_line);
delete_line("DATA.txt", target_line);
delete_line("DATA.txt", target_line);
  if (option == "exponat"){
    delete_line("DATA.txt", target_line);
    delete_line("DATA.txt", target_line);
  }
delete_line("DATA.txt", target_line-1);
  }

void Museum::sub_readline(int target){ 
  string line;
  int counter = 1;
  ifstream myfile ("DATA.txt");
  if (myfile.is_open())
  {
  while (! myfile.eof() )
    {
      getline (myfile,line);
      if (target == counter){
      cout << line << endl;}
      counter++;
  }
    myfile.close();}}

void Museum::readline(){
  ifstream fileInput;
  int offset;
  string line;
  string search;
  string sub_sub_option;
  cout << "Afișează-le pe toate (all) / Vreau să caut (search): ";
  getline(cin, sub_sub_option);
  if (sub_sub_option == "all"){
    string option2;
    for (int x=0; x<option.length(); x++){
        option2 += (toupper(option[x]));}
    search = option2;
  }
  else {
  cout << "Scrie Numele pentru a afisa datele: ";
  getline(cin, search);}
  fileInput.open("DATA.txt");
  if(fileInput.is_open()) {
      unsigned int curLine = 0;
  while(getline(fileInput, line)) {
      curLine++;
      if (line.find(search, 0) != string::npos) {
          target_line = curLine;
          sub_readline(target_line+1);
          sub_readline(target_line+2);
          sub_readline(target_line+3);
          sub_readline(target_line+4);
          if (option == "exponat"){
            sub_readline(target_line+5);
            sub_readline(target_line+6);
            cout<<"\n";}
          else
            cout<<"\n";
  }
    }
}
  fileInput.close();}
  
//FOR CLASS MUSEUM
//};