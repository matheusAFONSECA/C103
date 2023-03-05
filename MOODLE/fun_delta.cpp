#include <iostream>
#include <cmath>
using namespace std;

int delta(int a, double b, int c){  //função que vai calcular o delta
	//delta = b^2 - 4*a*c
	int aux;  //var aux
	
	aux = pow(b, 2) - 4*a*c;
	
	return aux;
}

int main()
{
	//declaração de variáveis
	int a, c;  //coeficientes da equação de segundo grau
	double b;  //coeficiente da equação de segundo grau
	int aux;  //var aux 
	
	//entrada de valores
	do{
		cin >> a;
	}while(a == 0);  //condição que não existe função do segundo grau
	cin >> b >> c;
	
	//chamada de função para calcular delta e saída do valor
	aux = delta(a, b, c);
	cout << "delta = " << aux << endl;
	
	return 0;
}