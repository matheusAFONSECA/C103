#include <iostream>
#include <cmath>
using namespace std;

int delta(int a, double b, int c){  //fun��o que vai calcular o delta
	//delta = b^2 - 4*a*c
	int aux;  //var aux
	
	aux = pow(b, 2) - 4*a*c;
	
	return aux;
}

int main()
{
	//declara��o de vari�veis
	int a, c;  //coeficientes da equa��o de segundo grau
	double b;  //coeficiente da equa��o de segundo grau
	int aux;  //var aux 
	
	//entrada de valores
	do{
		cin >> a;
	}while(a == 0);  //condi��o que n�o existe fun��o do segundo grau
	cin >> b >> c;
	
	//chamada de fun��o para calcular delta e sa�da do valor
	aux = delta(a, b, c);
	cout << "delta = " << aux << endl;
	
	return 0;
}