#include <iostream>
using namespace std;

int hash_aux(int k, int m)  //função de hashing: k mod m
{
	int aux;  //var aux

	aux = k % m;

	if(aux < 0)  //caso aux negativo, soma m
		return aux + m;
	else
		return aux;
}

int hash1(int k, int i, int m)  //função de sondagem linear: (h'(k)+i) mod m
{
	int aux;  //var aux

	aux = (hash_aux(k, m) + i) % m;
	return aux;
}

int main()
{
	//declaração de variáveis
	int m;  //tamanho do vetor hash
	int k;  //chave
	int i;  //contador

	//entrada de k e m e saída de posição no vetor hash
	cin >> k;
	cin >> m;
	for(i = 0; i < m; i++)
		cout << hash1(k, i, m) << " ";
	cout << endl;

	return 0;
}
