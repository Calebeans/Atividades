#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int n = 0, i = 0, j = 0, k = 0, m = 0, c = 0;

  cout << "Digite o tamanho da árvore: ";
  cin >> n;

  for (i = 1; i <= n; i++)
  {
    for (j = n; j >= i; j--)
      cout << " ";
    for (k = 1; k <= i * 2 - 1; k++)
      cout << "*";
    cout << "\n";
  }

  for (m = n / 2; m < n; m++)
  {
    for (c = 1; c <= k / 2; c++)
      cout << " ";
    cout << "*\n";
  }

  cout << endl;
  return 0;
}