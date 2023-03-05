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

int binaria(int vetor[], int tamanho, int x)   //fun�ao bin�ria de procura
{
	bool achou;  //var aux para busca
	int baixo, meio, alto;  //var aux

	baixo = 0;
	alto = tamanho - 1;
	achou = false;
	while((baixo <= alto) && (achou == false))
	{
		meio = (baixo + alto) / 2;
		if (x < vetor[meio])
			alto = meio - 1;
		else if (x > vetor [meio])
			baixo = meio + 1;
		else
			achou = true;  //caso em que foi encontrado
	}

	if (achou)  //caso encontrado
		return meio;
	else  //caso n�o seja encontrado
		return -1;
}

int main()
{
	//declara��o de vari�veis
	int vetor[100];  //vetor que guarda as matriculas
	int x;  //matricula procurada
	int tamanho;  //quantidade de matriculas
	int i, j;  //contador
	int aux;  //var aux

	//entrada da quantidade de matriculas e matricula desejada
	cin >> tamanho;
	for(i = 0; i < tamanho; i++)
	{
		cin >> vetor[i];
	}
	cin >> x;
	j = 0;
	i--;

	//chamada de fun��o de ordena��o e de pesquisa
	quickSort(vetor, tamanho, j, i);
	aux = binaria(vetor, tamanho, x);

	//saida do corredor do aluno
	if(aux == -1)
		cout << "Nao localizado"  << endl;
	else
		cout << "Corredor " << aux << endl;

	return 0;
}
