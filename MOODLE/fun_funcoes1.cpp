#include <iostream>
#include <cmath>
using namespace std;

int valor_a(double x){  //calcula o valor de a
	int retorno;  //aux
	
	retorno = 2*pow(x,2) + 3*x-1;
	
	return retorno;
}

int valor_b(double x){  //calcula o valor de b
	int retorno;  //aux
	
	retorno = pow(x, 3);
	
	return retorno;
}

int valor_c(double y){  //calcula o valor de c
	int retorno;  //aux
	
	retorno = pow(y, 3);
	
	return retorno;
}

int main(){
	//declara��o de vari�veis
	double x, y;  //n� de entrada de dados
	int a, b, c;  //n� de sa�da de dados
	
	//entrada do valor de x e y
	cin >> x >> y;
	
	//chamar fun��es para calculos de a, b, c e sa�da de seus valores
	a = valor_a(x);
	cout << "a = " << a << endl;
	b = valor_b(x);
	cout << "b = " << b << endl;
	c = valor_c(y);
	cout << "c = " << c << endl;
	
	return 0;
}