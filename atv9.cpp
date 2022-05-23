#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int s = -127;

    cout << " Carac   Dec   Hex\n\n";
    for (char i = -127; i < 127; i++){
        cout << " " << i << "    "<< s << "     ";
        printf("%X", s);
        cout << "\n";
        s++;
    }
    cout << "\n     Carac   Dec     Hex\n\n";
    cout << "   \x122 ENTER \x122   10      A\n\n";
    system("PAUSE");
    return 0;
}