#include <iostream>
using namespace std;

int fatorial(int n){  //função para calculo de fatorial
	if(n==0)  //condição de parada
		return 1; 
	else  //chamada recursiva
		return n*fatorial(n-1);
	
	/*
	Função recursiva é aquela que chama outra função no processo de sua execução
	para conseguir terminar o seu processamento, como nessa função que "chama" a
	si mesma para terminar o calculo do faorial.
	         -> "FOR DESFARÇADO"
	*/
}

int main(){
	//declaração de variáveis
	int n;  //n° que será calculado o fatorial
	
	//entrada de dados, chamada de função e saída de dados
	cin >> n;
	cout << "Fatorial de " << n << "! = " << fatorial(n) << endl;
	
	return 0;
}