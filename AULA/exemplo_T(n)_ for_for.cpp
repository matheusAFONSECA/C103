#include <iostream>
using namespace std;

int main(){
	//declaração de variáveis
	int i, j;  //contadores
	int x;  //var aux
	int n = 8;  //tamanho do problema
	int cont = 0;  //n° de vezes que x=2*i vai ser executado
	
	for(i = 0; i < n; i++)
		for(j = 0; i < n; j++){
			x = 2 * i;
			cont++;
		}  //T(n) = n^2, porque: T(n) = Nexterno*Ninterno = N^2
	cout << "cont = " << cont << endl;
	
	return 0;
}