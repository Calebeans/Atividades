#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int n=0;

  cout<<"Digite o tamanho da árvore: ";
  cin>>n;

  for(int i=0; i<n; i++){
      cout<<" ";
      for(int j=0; j<n; j++){
      cout<<"*";
      }
      cout<<" "<<endl;
  }
 
 
  cout << endl;
  return 0;
}