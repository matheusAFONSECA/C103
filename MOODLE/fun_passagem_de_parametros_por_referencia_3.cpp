#include <iostream>
using namespace std;

void troca(int &X, int &Y){  //fun��o de troca
	int aux;
	
	aux = X;
	X = Y;
	Y = aux;
	
	return;
}

int main(){
	//declara��o de vari�veis
	int x, y;  //valores que ser�o trocados
	
	//entrada de x, y, chamada de fun��o e sa�da
	cin >> x >> y;
	troca(x, y);
	cout << x << " " << y <<endl;
	
	return 0;
}