#include <iostream>
const int MAX = 10;
using namespace std;

int main(){

	int *intPtr;
	intPtr = new int [MAX];
	
	for(int j=0; j<MAX; j++){
		intPtr[j] = j*j;
	}
	
	for(int j = 0; j < MAX; j++){
		cout << "\nValor de intPtr[" << j << "] = " << *(intPtr + j)
	}
	
	cout << endl << endl;
	
	delete [] intPtr;
	cout << "Desalocando memória... \n\n";
	system("PAUSE");
	
	return 0;	

}
