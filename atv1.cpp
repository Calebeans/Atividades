#include <iostream>
#include <windows.h>
using namespace std;

long fibo(int n)
{
    if (n < 2)
    {
        return n;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}
int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    int n = 0;
    cout << "Informe o número de termos da sequência: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << fibo(i) << endl;
    }
    cout << endl;
    return 0;
}