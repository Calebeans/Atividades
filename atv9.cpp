#include <iostream>
 
using namespace std;
 
int main() {
    char m;
    int i;
    for(i=0;i<=127;i++){
        printf("%d = %c = %X\n",i,i,i);
    }
}