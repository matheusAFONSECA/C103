#include <iostream>
using namespace std;

int main()
{
	//declara��o de vari�veis
	int *v;  //pont de aloca��o de mem�ria
	int vetor[100];  //vetor que guardar� os elemenrtos
	int tam;  //tamanho do vetor
	int i;  //contador

	//entrada do tamanho do vetor e dos elementos no vetor
	cin >> tam;
	v = new int[tam];
	for(i = 0; i < tam; i++)
		cin >> vetor[i];

	//entrada dos valores no ponteiro e sa�da dos mesmo
	for(i = 0; i < tam; i++)
		v[i] = vetor[i];
	for(i = 0; i < tam; i++)
		cout << v[i] << " ";
	cout << endl;

	delete[] v;

	return 0;
}
