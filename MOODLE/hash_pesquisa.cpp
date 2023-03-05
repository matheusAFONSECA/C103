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

int hash_search(dado T[], int m, int k)  //fun��o de pesquisa por meio de sondagem linear na tabela hash
{
	int i;  //contador
	int j;  //pos na sondagem linear
	
	i = 0;
	do{
		j = hash1(k, i, m);
		if(T[j].k == k)  //caso em que foi encontrado
			return j;
		i++;
	}while(T[j].status != 0 && i < m);
	return -1;  //n�o encontrado
}

int main()
{
	//declara��o de vari�veis
	dado T[50];  //tabela hash
	int m;  //tamanho da tabela
	int i;  //contador
	int aux;  //var aux
	int x;  //n� procurado

	//lendo o tamanho da tabela
	cin >> m;

	//inicializando a tabela
	for(i = 0; i < m; i++)
	{
		T[i].status = 0;
		T[i].k = -1;
	}

	//entrando com as chave, chamando a fun��o de inser��o na tabela hash e chave para ser procurada
	cin >> aux;
	while(aux != 0)
	{
		hash_insert(T, m, aux);
		cin >> aux;
	}
	cin >> x;

	//chamada de fun��o de procura e saida
	aux = hash_search(T, m, x);
	if(aux == -1)  //caso que n�o encontra
		cout << "Chave " << x << " nao encontrada" << endl;
	else
		cout << "Chave " << x << " encontrada na posicao " << aux << endl;
	
	return 0;
}
