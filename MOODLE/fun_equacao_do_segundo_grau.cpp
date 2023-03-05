#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double delta(int a, double b, int c){  //fun��o que vai calcular o delta
	//delta = b^2 - 4*a*c
	double aux;  //var aux
	
	aux = pow(b, 2) - (4*a*c);
	
	return aux;
}

double raiz_1(int a, double b, double aux){  //calculo da raiz 1
	double retorno;  //var aux
	
	retorno = (sqrt(aux) - b) / (2 * a);
	
	return retorno;
}

double raiz_2(int a, double b, double aux){  //calculo da raiz 2
	double retorno;  //var aux
	
	retorno = ( - sqrt(aux) - b) / (2 * a);
	
	return retorno;
}

int main(){
	//declara��o de vari�veis
	int a, c;  //coeficientes da equa��o de segundo grau
	double b;  //coeficiente da equa��o de segundo grau
	double aux;  //var aux -> delta
	double x1, x2;  //raizes da equa��o
	
	//entrada de valores
	do{
		cin >> a;
	}while(a == 0);  //condi��o que n�o existe fun��o do segundo grau
	cin >> b >> c;
	
	//chamada de fun��o para calcular delta
	aux = delta(a, b, c);
	if(aux < 0)  //ra�zes imagin�rias e diferentes
		cout << "Nao ha raizes reais" << endl;
	else if(aux == 0){  //ra�zes iguais e reais
        x1 = raiz_1(a, b, aux);
		cout << "x = " << x1 << endl;
    }	
    else if (aux > 0){ //duas ra�zes reais e diferentes
		cout << fixed << setprecision(2);
		x1 = raiz_2(a, b, aux);
		cout << "x1 = " << x1 << endl;
		x2 = raiz_1(a, b, aux);
		cout << "x2 = " << x2 << endl;
	}
	
	return 0;
}