#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void media(int x, int y, float &m){  //calculo da média geometrica
	float aux;  //var aux
	
	aux = x*y;
	m = sqrt(aux);
	
	return;
}

int main(){
	//declaração de variáveis
	int x, y;  //n° que serão usados
	float m;  //media geometrica
	
	//entrada de dados e chamada de função
	do{
		cin >> x;
	}while(x < 0);
	do{
		cin >> y;
	}while(y < 0);
	media(x, y, m);
	
	//saída de dados
	cout << fixed << setprecision(2);
	cout << "Media: " << m << endl;
	
	return 0;
}