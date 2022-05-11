#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int lado = 0, pedaco = 1;

  cout << "Informe o tamanho do lado de chocolate: " << endl;
  cin >> lado;

  while (lado >= 2)
  {
    pedaco = pedaco * 4;
    lado = lado / 2;
  }
  cout << "Pedaços: " << pedaco << endl;

  cout << endl;
  return 0;
}