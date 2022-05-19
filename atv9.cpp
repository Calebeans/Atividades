#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    char n;
    int i;
    for (i = 0; i <= 127; i++)
    {
        printf("%d = %c\n", i, i);
    }
}