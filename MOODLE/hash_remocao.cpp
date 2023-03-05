#include <iostream>
#include <locale>
using namespace std;

struct dado
{
	int k;  //chave
	int status;  // 0->vazio    1->ocupado		2->removido
};

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

int hash_insert(dado T[], int m, int k)  //função de inserção de elementos na tabela hash
{
	int i;  //contador
	int j;  //pos na sondagem linear

	i = 0;
	do
	{
		j = hash1(k, i, m);
		if(T[j].status != 1)
		{
			T[j].k = k;  //inserçao da chave no lugar da chave
			T[j].status = 1;  //posição ocupada
			return j;  ////posição em que K foi inserida em T (tabela hash)
		}
		else
			i++;
	}
	while(i != m);

	return -1;  //espaço ocupado
}

int hash_search(dado T[], int m, int k)  //função de pesquisa por meio de sondagem linear na tabela hash
{
	int i;  //contador
	int j;  //pos na sondagem linear

	i = 0;
	do
	{
		j = hash1(k, i, m);
		if(T[j].k == k)  //caso em que foi encontrado
			return j;
		i++;
	}
	while(T[j].status != 0 && i < m);

	return -1;  //não encontrado
}

int hash_remove(dado T[], int m, int k)  //função para remover elementos da tabela hash
{
	int j;  //var aux

	j = hash_search(T, m, k);
	if(j != -1)
	{
		T[j].status = 2;  //elemento foi removido
		T[j].k = -1;  //espaço da chave vazio agora
		return 0;  //chave removida
	}
	else
		return -1;  //k não está na tabela
}

int main()
{
	//declaração de variáveis
	dado T[20];  //tabela hash
	int m;  //tamanho da tabela
	int i;  //contador
	int aux;  //var aux
	int x;  //elemento a ser removido

	//lendo o tamanho da tabela
	cin >> m;

	//inicializando a tabela
	for(i = 0; i < m; i++)
	{
		T[i].status = 0;
		T[i].k = -1;
	}

	//entrando com as chave e inserindo-as na tabela hash
	cin >> aux;
	while(aux != 0)
	{
		hash_insert(T, m, aux);
		cin >> aux;
	}

	//chave que queremos remover e a saída da tabela hash com o elemento removido
	cin >> x;
	hash_remove(T, m, x);
	for(i = 0; i < m; i++)
		cout << T[i].k << " ";
	cout << endl;

	return 0;
}
