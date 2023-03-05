#include <iostream>
#include <cmath>
using namespace std;

void quickSort(int vetor[], int tamanho, int i, int j)  //fun��o de orden��o quickSort
{
	/*
	-> Quando a posi��o esquerda for maior que a posi��o direita, o c�digo "para" e
	redefine  qual a posi��o do pivo
	-> trab � uma vari�vel auxiliar para trocar o valor dos vetores quando os mesmos
	estiverem nas posi��es erradas
	-> pivo � a vari�vel que serve de par�metro
	-> n�o esquecer que essa fun��o precisa da biblioteca cmath declarada
	*/
	int trab, esq, dir, pivo;
	esq = i;
	dir = j;
	pivo = vetor[(int)round((esq + dir) / 2.0)];
	do
	{
		while (vetor[esq] < pivo)
			esq++;
		while (vetor[dir] > pivo)
			dir--;
		if (esq <= dir)
		{
			trab = vetor[esq];
			vetor[esq] = vetor[dir];
			vetor[dir] = trab;
			esq++;
			dir--;
		}
	}
	while (esq <= dir);
	/*
	-> separa��o do vetor em vetores menores para poder terminar de ordenar, ainda
	ser� usado o quickSort, ou seja, aqui � uma chamada recursiva
	*/
	if (dir - i >= 0)
		quickSort(vetor, tamanho, i, dir);
	if (j - esq >= 0)
		quickSort(vetor, tamanho, esq, j);
}

int main()
{
	//declara��o de vari�veis
	int vetor[100];  //vetor que vai guardar os elementos
	int tamanho;  //tamanho do vetor
	int i, j;  //contador
	int aux;  //var aux

	//entrada de dados no vetor
	i = 0;
	cin >> aux;
	while(aux != -1)
	{
		vetor[i] = aux;
		cin >> aux;
		i++;
	}
	tamanho = i;
	j = 0;

	//ordena��o do vetor por meio de uma fun��o
	quickSort(vetor, tamanho, j, i);

	//saida do vetor ordenado
	for(i = 0; i < tamanho; i++)
		cout << vetor[i] << " ";
	cout << endl;

	return 0;
}
