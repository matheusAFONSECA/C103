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

int hash1(int k, int i, int m)  //fun��o de sondagem linear: (h'(k)+i) mod m
{
	int aux;  //var aux

	aux = (hash_aux(k, m) + i) % m;
	return aux;
}

int main()
{
	//declara��o de vari�veis
	int m;  //tamanho do vetor hash
	int k;  //chave
	int i;  //contador

	//entrada de k e m e sa�da de posi��o no vetor hash
	cin >> k;
	cin >> m;
	for(i = 0; i < m; i++)
		cout << hash1(k, i, m) << " ";
	cout << endl;

	return 0;
}
