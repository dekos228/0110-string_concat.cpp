// string_concat.cpp
#include <iostream>
#include <cstdlib>
#include <string>

int main()
{
  using namespace std;

  string line1, line2; // Сразу две переменные, пустые строки.
  getline(cin, line1);
  getline(cin, line2);

  cout << (line1 + line2) << endl; // + "склеивает" строки.
  return EXIT_SUCCESS;
}
