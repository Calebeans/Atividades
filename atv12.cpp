#include <iostream>
#include <windows.h>
#include <string.h>

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    char frase[100], letra;
    int caracterT, cont = 0;

    cout << "Entre com uma frase :" << endl;

    gets(frase);

    caracterT = strlen(frase);

    cin >> letra;

    for (int i = 0; i < caracterT; i++)
    {
        if (letra == frase[i])
        {
            cont++;
        }
    }

    cout << "Quantidade da letra " << letra << ": " << cont << endl;

    cout << "A frase possui: " << caracterT << " caracteres\n";
    return 0;
}