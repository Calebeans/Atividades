#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int m[3][3], v[3];

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << "Informe os elementos da matriz:" << endl;
      cin >> m[i][j];
    }
  }
  v[0] = m[0][0] + m[1][0] + m[2][0];
  v[1] = m[0][1] + m[1][1] + m[2][1];
  v[2] = m[0][2] + m[1][2] + m[2][2];

  for (int j = 0; j < 3; j++)
  {
    cout << v[j] << endl;
  }
  cout << endl;
  return 0;
}