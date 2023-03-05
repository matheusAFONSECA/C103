#include <iostream>
using namespace std;

int h1(int k, int m)  //fun��o de hashing: k mod m
{
	int aux;  //var aux

	aux = k % m;

	if(aux < 0)  //caso aux negativo, soma m
		return aux + m;
	else
		return aux;
}

int h2(int k, int m)  //fun��o de hashing: 1 +(k mod (m-1))
{
	int aux;  //var aux

	aux = 1 + (k % (m -1));

	if(aux < 0)  //caso aux negativo, soma m
		return aux + m;
	else
		return aux;
}

int dhash(int k, int m, int i)  //fun��o de double hashing: (h1(k) + i*h2(k)) mod m 
{
	return ((h1(k, m) + i*h2(k, m)) % m);
}

int main()
{
	//declara��o de vari�veis
	int m;  //tamanho da tabela hash
	int k;  //chave
	int i;  //contador
	
	//entrada de dados
	cin >> k >> m;
	
	//inser��o na tabela hash e sa�da da mesma
	for(i = 0; i < m; i++)
		cout << dhash(k, m, i) << " ";
	cout << endl;
		
	return 0;
}
