#include <iostream>
using namespace std;

int main(){
	//declaração de variáveis
	int i, j;  //contadores
	int x;  //var aux
	int n = 8;  //tamanho do problema
	int cont = 0;  //n° de vezes que x=2*i vai ser executado
	
	for(i = 0; i < n; i++){  //n
		j = 1;
		while(j < n){  //log(n)
			x = 2 * i;
			j = j * 2;
			cont++;
		}
	}  //T(n) = n * log(n), porque: T(n) = Nexterno*Ninterno = N*log(N)
	cout << "cont = " << cont << endl;
	
	return 0;
}