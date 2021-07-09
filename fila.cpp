#include <iostream>
#include <queue>

using namespace std;

int main(){
  queue<int> fila;
  int entrada;
  cout << "\nDigite valores inteiros ou 's' para sair: \n;
    
  while(cin >> entrada)
  {
    fila.push(entrada);
  }
  
  cout << "\nConteudo da fila: \n";
  while(!fila.empty())
  {
    cout << fila.front() << endl;
    
    fila.pop();
  }
  
  cout << endl << endl;
  
  system("PAUSE");
  
return 0;
}
