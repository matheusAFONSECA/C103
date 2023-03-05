#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declara��o de vari�veis
	int *v;  //pont de aloca��o de mem�ria
	int vetor[100];  //elementos de um vetor
	int tam;  //tamanho do vetor
	int i;  //contador
	double media;  //media dos valores

	//entrada do tamanho do vetor e entrada dos valores no vetor
	cin >> tam;
	v = new int[tam];
	for(i = 0; i < tam; i++)
		cin >> vetor[i];

	//entrada dos valores no ponteiro e calculo da m�dia
	media = 0;
	for(i = 0; i < tam; i++)
	{
		v[i] = vetor[i];
		media = media + v[i];
	}
	cout << fixed << setprecision(2);
	cout << media / tam << endl;

	delete[] v;

	return 0;
}
