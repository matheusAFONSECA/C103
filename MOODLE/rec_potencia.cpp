#include <iostream>
using namespace std;

int pot(int a, int n){  //fun��o que calcula a pot�ncia
	if(n == 0)
		return 1;
	else
		return a * pot(a, n-1);
}

int main(){
	//declara��o de vari�veis
	int n;  //expoente
	int a;  //base
	
	//entrada de dados, chamada fun��o recursiva e sa�da
	cin >> a >> n;
	cout << pot(a, n) << endl;
	
	return 0;
}