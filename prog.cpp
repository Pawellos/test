#include <iostream>
#include <stdio.h>
#include "funkcje.h"

using namespace std;

int main()
{
  cout << "Hello World!" << endl;
  cout << "czyli witaj zjebany swiecie" << endl;
  cout << "zartowalem nie jest zjebany tylko trudny" << endl;
int pierwsza;
int druga;

  cout << "Podaj 1 liczbe" <<endl;
  cin >> pierwsza; 
  cout << "podaj 2 liczbe" <<endl;
  cin >> druga;
  cout << "wynik = " << suma(pierwsza,druga)<< endl;
  return 0;
}
