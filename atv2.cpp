#include <iostream>
#include <windows.h>
using namespace std;

int fatorial(int a)
{
    int fat = 1;
    for (int i = 1; i <= a; i++)
    {
        fat = fat * i;
    }
    return fat;
}

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    int a, f;
    cin >> a;
    f = fatorial(a);
    cout << "Fatorial de " << a << " é: " << f;
}