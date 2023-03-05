#include <iostream>
using namespace std;

struct dado
{
	int k;  //chave
	int status;  // 0->vazio    1->ocupado
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

int hash_insert(dado t[], int m, int k)
{
	int i;  //contador
	int j;  //pos na sondagem linear

	i = 0;
	do
	{
		j = hash1(k, i, m);
		if(t[j].status != 1)
		{
			t[j].k = k;  //inserçao da chave no lugar da chave
			t[j].status = 1;  //posição ocupada
			return j;
		}
		else
			i++;
	}
	while(i != m);

	return -1;  //espaço ocupado
}

int main()
{
	//declaração de variáveis
	dado T[10];  //tabela hash
	int m;  //tamanho da tabela
	int i;  //contador

	//lendo o tamanho da tabela
	cin >> m;

	//inicializando a tabela
	for(i = 0; i < m; i++)
		T[i].status = 0;

	//entrando com a chave e chamando a função
	cin >> k;

	return 0;
}
