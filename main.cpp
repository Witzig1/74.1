#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
string tab[200];
bool zadanie(char c) {
  if (c >= '0' && c <= '9') return true;
  else 
  return false;
}

bool numer(string s) {
  for (int i = 0; i < s.length(); i++) {
    if (!zadanie(s[i])) return false;
  }
  return true;
}

void z1() {
  cout << "Zadanie 1:" << endl;
  int count = 0;
  for (int i = 0; i < 200; i++) {
    if (numer(tab[i])) count++;
  }
  cout << count << endl << endl;
}

int main(int argc, char** argv) {
	ifstream plik("hasla.txt");
  for (int i = 0; i < 200; i++) plik >> tab[i];
  plik.close();

  z1();
	return 0;
}
