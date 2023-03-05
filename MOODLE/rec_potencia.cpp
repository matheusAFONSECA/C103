#include <iostream>
using namespace std;

int pot(int a, int n){  //função que calcula a potência
	if(n == 0)
		return 1;
	else
		return a * pot(a, n-1);
}

int main(){
	//declaração de variáveis
	int n;  //expoente
	int a;  //base
	
	//entrada de dados, chamada função recursiva e saída
	cin >> a >> n;
	cout << pot(a, n) << endl;
	
	return 0;
}