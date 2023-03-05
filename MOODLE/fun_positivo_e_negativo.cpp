#include <iostream>

using namespace std;

int sinal(int numero){  //função que analiza o sinal
	if(numero == 0)
		return 0;
	else if(numero > 0)
		return 1;
	else
		return -1;
	
}

int main(){
	//declaração de variáveis
	int x;  //número que será analisado
	int saida;  //dirá o sinal do n°
	
	//entrada do valor
	cin >> x;
	
	//chamada da função: 0 -> zero; 1 -> positivo; -1 -> negativo
	saida = sinal(x); 
	
	//saida da resposta
	if(saida == 0)
		cout << "Zero" << endl;
	else if(saida == 1)
		cout << "Positivo" << endl;
	else
		cout << "Negativo" << endl;
	
	return 0;
}