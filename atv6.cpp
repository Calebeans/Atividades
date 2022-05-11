#include <iostream>
#include <windows.h>

using namespace std;
#define gasolina 7.5
#define etanol 5.1

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  double kmG = 0.0, kmE = 0.0, distanciaP = 0.0, custoG = 0.0, custoE = 0.0;

  int esc = 0;
  cout << "Informe quantos quilômetros por litro seu carro faz com gasolina:" << endl;
  cin >> kmG;
  cout << "Informe quantos quilômetros por litro seu carro faz com etanol:" << endl;
  cin >> kmE;

  cout << "Qual será a distancia percorrida?" << endl;
  cin >> distanciaP;

  custoG = ((kmG * distanciaP) * gasolina) / 100;

  custoE = ((kmE * distanciaP) * etanol) / 100;

  cout << "Custo com Gasolina: " << custoG << endl;
  cout << "Custo com Etanol: " << custoE << endl;

  cout << "Irá abastecer com gasolina ou etanou?" << endl;
  cout << "1-Gasolina e 2-Etanol:" << endl;
  cin >> esc;

  switch (esc)
  {
  case 1:
    cout << "Seu gasto foi: " << custoG;
    break;
  case 2:
    cout << "Seu gasto foi: " << custoE;

  default:
    break;
  }

  cout << endl;
  return 0;
}