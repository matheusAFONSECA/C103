#include <iostream>
using namespace std;

int main()
{
	//declara��o de vari�veis
	int *v;  //pont de aloca��o de mem�ria
	int vetor[100];  //elementos de um vetor
	int tam;  //tamanho do vetor
	int i;  //contador
	int maior;  //maior elemento do vetor

	//entrada do tamanho do vetor e entrada dos valores no vetor
	cin >> tam;
	for(i = 0; i < tam; i++)
		cin >> vetor[i];

	//entrada dos valores no ponteiro e defini��o do maior
	v = new int[tam];
	for(i = 0; i < tam; i++)
	{
		v[i] = vetor[i];
		if(i == 0)  //par�metro de maior elemento
			maior = v[i];
		else if(maior < v[i])  //condi��o de mudan�a do maior elemento
			maior = v[i];
	}
	cout << maior << endl;
	
	delete[] v;

	return 0;
}
