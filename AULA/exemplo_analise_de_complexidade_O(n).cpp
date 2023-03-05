#include <iostream>
using namespace std;

int main()
{
	//declara��o de vari�veis
	int i, j;  //contadores
	int x;  //var aux
	
	for(i=0; i<n; i++)  //T(n) = n
		x = 2*i;
	
	for(i=0; i<2*n; i++)  //T(n) = 2n
		x = 2*i;
	
	for(i=0; i<n; i++)  //T(n) = n^2
		for(j=0; i<n; j++)
			x = i+j;	
	//T(n) = n + 2n + n^2 = 3n + n^2
	/*
	Na an�lise do pior caso - O(n)- ignora-se os n�meros,
	esquece-se os Ns "irrelevantes" e conserva s� os Ns
	importantes (Ns que demoram mais o seu processamento).
	Analisando o T(n) acima, tem-se:
			T(n) = 3n + n^2
			O(n) = n^2
			
    LEMBRANDO: N^3, N!, 2^N - s�o os piores caso
	*/ 
	
	return 0;
}