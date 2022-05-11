#include <iostream>
#include <windows.h>
#include <tgmath.h>
#include <iomanip>

using namespace std;

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  double cA = 0, cO = 0, hip = 0;

  cout << "Informe os catetos: " << endl;
  cin >> cA >> cO;
  hip = sqrt(exp(2.0 * log(cA)) + exp(2.0 * log(cO)));
  cout.precision(2);
  cout << "Hipotenusa: " << fixed << hip;

  cout << endl;
  return 0;
}