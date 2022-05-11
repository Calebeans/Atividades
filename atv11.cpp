#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int n;
    cout << "Informe o numero de entrada: ";
    cin >> n;
    bool a = false, b = false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            a = !a;
        }
        if (x == 2)
        {
            a = !a;
            b = !b;
        }
    }
    cout << a << endl;
    cout << b << endl;

    cout << endl;
    return 0;
}