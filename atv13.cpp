#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int num;
  int a1 = 0, razao = 0, n = 0, termo = 0, cont = 0, soma = 0, an = 0;
  cout << "[1] Progressão Aritmética" << endl;
  cout << "[2] Progressão Geométrica" << endl;
  cout << "[3] Sair" << endl;
  cin >> num;

  switch (num)
  {
  case 1:
    system("cls");
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
    break;

  case 2:
    system("cls");
    cout << "Numero de termos:" << endl;
    cin >> n;
    cout << "Primeiro termo:" << endl;
    cin >> a1;
    cout << "Informe a razão:" << endl;
    cin >> razao;

    an = a1 * pow(razao, n - 1);
    cout << "Termos: ";
    for (int i = a1; i <= an; i *= razao)
    {
      cout << i << " ";
    }
    soma = (a1 * ((pow(razao, n) - 1))) / (razao - 1);
    cout << endl
         << "Soma: " << soma << endl;

    break;

  case 3:
    system("cls");
    break;
  }

  cout << endl;
  return 0;
}