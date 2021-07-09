#include <iostream>
const int MAX = 100;
using namespace std;

int main(){

  double a[MAX];
  double *ptr = a;
  double media;
  double soma = 0.0;
  int n;
  
  do{
    cout << "\nInforme a quantidade de elemenos no array de 2 a 100:"
    cin >> n;
    cout << endl << endl;
  } while (n < 2 || n > MAX);
  
  for(int j = 0 ; j < n ; j++){
    cout << "a[" << j << "] = ";
    cin >> *(a + j);
  }
  
  for(int j = 0; j < n; j++){
    soma += *(ptr + 1
  }
  media = soma / n;
  cout << "\nSoma total = " << soma;
  cout << "\n\nMedia obitida = " << media << endl << endl;
  system("PAUSE");
              
    return 0;            
  }
