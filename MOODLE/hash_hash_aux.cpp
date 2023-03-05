#include <iostream>
using namespace std;

int hash_aux(int k, int m)  //fun��o de hashing: k mod m
{
	int aux;  //var aux

	aux = k % m;

	if(aux < 0)  //caso aux negativo, soma m
		return aux + m;
	else
		return aux;
}

int main()
{
	//declara��o de vari�veis
	int m;  //tamanho do vetor hash
	int k;  //chave

	//entrada de k e m e sa�da de posi��o no vetor hash
	cin >> k;
	cin >> m;
	while(m != 0 && k != 0)
	{
		cout << hash_aux(k, m) << endl;
		cin >> k;
		cin >> m;
	}

	return 0;
}