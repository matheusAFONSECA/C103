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
	//declaração de variáveis
	dado *v;  //pont de alocação de memória
	
	v = new dado;
	
	//entrada dos notas
	cin >> v->n1;
	cin >> v->n2;
	cin >> v->n3;
	cin >> v->n4;
	
	//calculo da média e saída da mesma
	v->media = (v->n1 + v->n2 + v->n3 + v->n4)/4;
	cout << fixed << setprecision(2);
	cout << v->media << endl;
	
	delete[] v;
	
	return 0;
}