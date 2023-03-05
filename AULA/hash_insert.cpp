#include <iostream>
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
			t[j].k = k;  //inser�ao da chave no lugar da chave
			t[j].status = 1;  //posi��o ocupada
			return j;
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
	dado T[10];  //tabela hash
	int m;  //tamanho da tabela
	int i;  //contador

	//lendo o tamanho da tabela
	cin >> m;

	//inicializando a tabela
	for(i = 0; i < m; i++)
		T[i].status = 0;

	//entrando com a chave e chamando a fun��o
	cin >> k;

	return 0;
}
