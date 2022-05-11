#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int a1 = 0, razao = 0, n = 0, termo = 0, cont = 0, soma = 0;

  cout << "Informe o primeiro termo:" << endl;
  cin >> a1;
  cout << "Informe quantos termos que serão calculados na PA:" << endl;
  cin >> n;
  cout << "Informe a razão:" << endl;
  cin >> razao;

  while (cont < n)
  {
    termo = a1 + cont * razao;
    cout << termo << endl;
    cont = cont + 1;
    soma = soma + termo;
  }
  cout << "Soma de termos: " << soma;

  cout << endl;
  return 0;
}