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

int hash2(int k, int i, int m, int c1, int c2)  //fun��o de sondagem quadr�tica inserir elementos na tabela hash
{
	return (hash_aux(k, m) + c1*i + c2*i*i) % m;
}

int main()
{
	//declara��o de vari�veis
	int k;  //chave a ser inserida
	int m;  //tamanho da tabela hash7
	int i;  //contador
	int c1, c2;  //complemento 1 e 2

	//entrada do tamanho da tabela, da chave e dos complementos
	cin >> k >> m >> c1 >> c2;
	
	//inser��o de elementos na tabela e sa�da da mesma
	for(i = 0; i < m; i++)
		cout << hash2(k, i, m, c1, c2) << " ";
	cout << endl;

	return 0;
}
