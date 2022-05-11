#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  double a = 0.0, b = 0.0, c = 0.0, delta = 0.0, raizDelta = 0.0, x1 = 0.0, x2 = 0.0;

  do
  {
    cout << "Informe os valores das constantes:" << endl;
    cout << "Informe a constante a: ";
    cin >> a;
    cout << "Informe a constante b: ";
    cin >> b;
    cout << "Informe a constante c: ";
    cin >> c;
  } while (a == 0);

  delta = pow(b, 2.0) - 4 * a * c;
  if (delta < 0)
  {
    cout << "Função não possui raiz real";
  }
  else if (delta == 0)
  {
    cout << "Função com apenas uma raiz real" << endl;
    raizDelta = sqrt(delta);
    x1 = (-(b)) / 2 * a;

    if (x1 >= 0)
    {
      cout << "x1: " << x1;
    }
  }
  else
  {

    raizDelta = sqrt(delta);
    x1 = (-(b) + raizDelta) / 2 * a;
    x2 = (-(b)-raizDelta) / 2 * a;

    cout << "x1: " << x1 << endl;
    cout << "x2: " << x2;
  }

  cout << endl;
  return 0;
}