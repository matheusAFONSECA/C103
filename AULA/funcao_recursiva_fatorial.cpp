#include <iostream>
using namespace std;

int fatorial(int n){  //fun��o para calculo de fatorial
	if(n==0)  //condi��o de parada
		return 1; 
	else  //chamada recursiva
		return n*fatorial(n-1);
	
	/*
	Fun��o recursiva � aquela que chama outra fun��o no processo de sua execu��o
	para conseguir terminar o seu processamento, como nessa fun��o que "chama" a
	si mesma para terminar o calculo do faorial.
	         -> "FOR DESFAR�ADO"
	*/
}

int main(){
	//declara��o de vari�veis
	int n;  //n� que ser� calculado o fatorial
	
	//entrada de dados, chamada de fun��o e sa�da de dados
	cin >> n;
	cout << "Fatorial de " << n << "! = " << fatorial(n) << endl;
	
	return 0;
}