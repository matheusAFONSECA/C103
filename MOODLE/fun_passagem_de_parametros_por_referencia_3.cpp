#include <iostream>
using namespace std;

void troca(int &X, int &Y){  //função de troca
	int aux;
	
	aux = X;
	X = Y;
	Y = aux;
	
	return;
}

int main(){
	//declaração de variáveis
	int x, y;  //valores que serão trocados
	
	//entrada de x, y, chamada de função e saída
	cin >> x >> y;
	troca(x, y);
	cout << x << " " << y <<endl;
	
	return 0;
}