#include <iostream>
using namespace std;

int main()
{
	//declaração de variáveis
	int *v;  //pont de alocação de memória
	int vetor[100];  //elementos de um vetor
	int tam;  //tamanho do vetor
	int i;  //contador
	int k;  //contador de quantidade de elementos pares e positivos

	//entrada do tamanho do vetor e entrada de elementos no vetor
	cin >> tam;
	for(i = 0; i < tam; i++)
		cin >> vetor[i];

	//entrada dos valores no ponteiro e contagem de n° pares e positivos
	v = new int[tam];
	k = 0;
	for(i = 0; i < tam; i++)
	{
		v[i] = vetor[i];
		if(v[i] % 2 == 0 && v[i] > 0) //condição para ser par e positivo
			k++;
	}
	cout << k << endl;

	delete[] v;

	return 0;
}
