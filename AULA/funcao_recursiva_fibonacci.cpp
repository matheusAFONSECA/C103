#include <iostream>
using namespace std;

int fibonacci(int n){
	if(n == 0 || n == 1)  //condição de parada
		return 1;
	else  //chamada recursiva
		return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
	//declaração de variáveis
	int n;  //n° que será calculado o fibonacci
	
	//entrada de dados, chamada de função e saída de dados
	cin >> n;
	cout << "Sequencia de  " << n << " fibonacci: " << fibonacci(n) << endl;
	
	return 0;
}