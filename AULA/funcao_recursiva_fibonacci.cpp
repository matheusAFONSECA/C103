#include <iostream>
using namespace std;

int fibonacci(int n){
	if(n == 0 || n == 1)  //condi��o de parada
		return 1;
	else  //chamada recursiva
		return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
	//declara��o de vari�veis
	int n;  //n� que ser� calculado o fibonacci
	
	//entrada de dados, chamada de fun��o e sa�da de dados
	cin >> n;
	cout << "Sequencia de  " << n << " fibonacci: " << fibonacci(n) << endl;
	
	return 0;
}