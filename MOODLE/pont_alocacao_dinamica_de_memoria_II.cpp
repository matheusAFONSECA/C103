#include <iostream>
#include <iomanip>
using namespace std;

struct dado
{
	float n1;  //nota da primeira prova
	float n2;  //nota da segunda prova
	float n3;  //nota da terceira prova
	float n4;  //nota da quarta prova
	double media;  //media das provas
};

int main()
{
	//declara��o de vari�veis
	dado *v;  //pont de aloca��o de mem�ria
	int tam;  //tamanho do vetor
	int i;  //contador
	double media_total=0;  //media total da turma

	//entrada do tamanho do vetor
	cin >> tam;
	v = new dado[tam];

	//entrada dos notas e m�dias de cada um
	for(i = 0; i < tam; i++)
	{
		cin >> v[i].n1 >> v[i].n2 >> v[i].n3 >> v[i].n4;
		v[i].media = (v[i].n1 + v[i].n2 + v[i].n3 + v[i].n4) / 4;
	}

	//calculo da m�dia total e sa�da da mesma
	for(i = 0; i < tam; i++)
		media_total = media_total + v[i].media;
	media_total = media_total / tam;
	cout << fixed << setprecision(2);
	cout << media_total << endl;

	delete[] v;

	return 0;
}
