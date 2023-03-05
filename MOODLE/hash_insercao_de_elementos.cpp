#include <iostream>
#include <locale>
using namespace std;

struct dado
{
	int k;  //chave
	int status;  // 0->vazio    1->ocupado
};

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

int hash_insert(dado T[], int m, int k)  //fun��o de inser��o de elementos na tabela hash
{
	int i;  //contador
	int j;  //pos na sondagem linear

	i = 0;
	do
	{
		j = hash1(k, i, m);
		if(T[j].status != 1)
		{
			T[j].k = k;  //inser�ao da chave no lugar da chave
			T[j].status = 1;  //posi��o ocupada
			return j;  ////posi��o em que K foi inserida em T (tabela hash)
		}
		else
			i++;
	}
	while(i != m);

	return -1;  //espa�o ocupado
}

int main()
{
	//declara��o de vari�veis
	dado T[20];  //tabela hash
	int m;  //tamanho da tabela
	int i;  //contador
	int aux;  //var aux

	//lendo o tamanho da tabela
	cin >> m;

	//inicializando a tabela
	for(i = 0; i < m; i++)
	{
		T[i].status = 0;
		T[i].k = -1;
	}

	//entrando com as chave e chamando a fun��o de inser��o
	cin >> aux;
	while(aux != 0)
	{
		hash_insert(T, m, aux);
		cin >> aux;
	}

	//saida de dados da tabela
	for(i = 0; i < m; i++)
		cout << T[i].k << " ";
	cout << endl;

	return 0;
}
