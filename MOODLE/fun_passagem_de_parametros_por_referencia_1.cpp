#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void media(int x, int y, float &m){  //calculo da m�dia geometrica
	float aux;  //var aux
	
	aux = x*y;
	m = sqrt(aux);
	
	return;
}

int main(){
	//declara��o de vari�veis
	int x, y;  //n� que ser�o usados
	float m;  //media geometrica
	
	//entrada de dados e chamada de fun��o
	do{
		cin >> x;
	}while(x < 0);
	do{
		cin >> y;
	}while(y < 0);
	media(x, y, m);
	
	//sa�da de dados
	cout << fixed << setprecision(2);
	cout << "Media: " << m << endl;
	
	return 0;
}