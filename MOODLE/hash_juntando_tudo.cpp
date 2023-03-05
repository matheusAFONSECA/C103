#include <iostream>
#include <locale>
using namespace std;

struct dado
{
	int k;  //chave
	int status;  // 0->vazio    1->ocupado		2->removido
};

int h1(int k, int m)  //função de hashing: k mod m
{
	int aux;  //var aux

	aux = k % m;

	if(aux < 0)  //caso aux negativo, soma m
		return aux + m;
	else
		return aux;
}

int h2(int k, int m)  //função de hashing: 1 +(k mod (m-1))
{
	int aux;  //var aux

	aux = 1 + (k % (m -1));

	if(aux < 0)  //caso aux negativo, soma m
		return aux + m;
	else
		return aux;
}

int dhash(int k, int m, int i)  //função de double hashing: (h1(k) + i*h2(k)) mod m 
{
	return ((h1(k, m) + i*h2(k, m)) % m);
}


int hash_insert(dado T[], int m, int k)  //função de inserção de elementos na tabela hash
{
	int i;  //contador
	int j;  //pos na sondagem linear

	i = 0;
	do
	{
		j = dhash(k, m, i);
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
		j = dhash(k, m, i);
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
	int aux, j;  //var aux
	int x;  //elemento inserido, removido ou pesquisado

	//lendo o tamanho da tabela
	cin >> m;

	//inicializando a tabela
	for(i = 0; i < m; i++)
	{
		T[i].status = 0;
		T[i].k = -1;
	}

	/*
	-> Aqui começa a entrada, saída, remoção e pesquisa da tabela hash
	*/
	j = 0;  //condição de inicialização da tabela hash
	while(j != 1)
	{
		cin >> aux;
		if(aux == 5)  //parada de código
			j = 1;  //condição de parada da tabela hash
		else if(aux == 1)  //inserção de elemento
		{
			cin >> x;
			hash_insert(T, m, x);
		}
		else if(aux == 2)  //pesquisa de elemento
		{
			cin >> x;
			cout << hash_search(T, m, x) << endl;
		}
		else if(aux == 3)  //remoção de elemento
		{
			cin >> x;
			hash_remove(T, m, x);
		}
		else if(aux == 4)  //listagem da tabela hash
		{
			for(i = 0; i < m; i++)
				cout << T[i].k << " ";
			cout << endl;
		}
	}

	return 0;
}
