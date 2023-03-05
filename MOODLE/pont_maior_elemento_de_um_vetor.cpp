#include <iostream>
using namespace std;

int main()
{
	//declaração de variáveis
	int *v;  //pont de alocação de memória
	int vetor[100];  //elementos de um vetor
	int tam;  //tamanho do vetor
	int i;  //contador
	int maior;  //maior elemento do vetor

	//entrada do tamanho do vetor e entrada dos valores no vetor
	cin >> tam;
	for(i = 0; i < tam; i++)
		cin >> vetor[i];

	//entrada dos valores no ponteiro e definição do maior
	v = new int[tam];
	for(i = 0; i < tam; i++)
	{
		v[i] = vetor[i];
		if(i == 0)  //parâmetro de maior elemento
			maior = v[i];
		else if(maior < v[i])  //condição de mudança do maior elemento
			maior = v[i];
	}
	cout << maior << endl;
	
	delete[] v;

	return 0;
}
