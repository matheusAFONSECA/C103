#include <iostream>
using namespace std;

int main(){
	//declara��o de vari�veis
	int i;  //contador
	int cont;  //# vezes que a linha x=2*i foi executada
	int x;  //var aux
	int N=64;  //tamanho do problema
	
	i = N;
	cont = 0;
	while(i > 1)
	{
		x = 2 * i;
		i = i / 2;
		cont++;
	}
	
	cout << "cont = " << cont << endl;
	
	
	return 0;
}