#include <iostream>
#include <cmath>
using namespace std;

void quickSort(int vetor[], int tamanho, int i, int j)  //função de ordenção quickSort
{
	/*
	-> Quando a posição esquerda for maior que a posição direita, o código "para" e
	redefine  qual a posição do pivo
	-> trab é uma variável auxiliar para trocar o valor dos vetores quando os mesmos
	estiverem nas posições erradas
	-> pivo é a variável que serve de parâmetro
	-> não esquecer que essa função precisa da biblioteca cmath declarada
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
	-> separação do vetor em vetores menores para poder terminar de ordenar, ainda
	será usado o quickSort, ou seja, aqui é uma chamada recursiva
	*/
	if (dir - i >= 0)
		quickSort(vetor, tamanho, i, dir);
	if (j - esq >= 0)
		quickSort(vetor, tamanho, esq, j);
}

int main()
{
	//declaração de variáveis


	return 0;
}
