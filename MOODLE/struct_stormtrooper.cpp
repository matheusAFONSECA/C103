#include <iostream>
#include <iomanip>
using namespace std;

struct dados{
	int stor;  //n° do stormtrooper
	float IM;  //índice de maldade
	float FA;  //força de abate
	double GA;  //grau de aptidão
};

int main(){
	//declaração de dados
	dados x[200];
	int aux;  //var aux
	int i, j, k;  //contador
	double maior;  //auxiliar na conta dor maior GA
	
	//entrada de dados e calculo de GA
	cin >> aux;
	i == 0;
	while(aux != 0)
	{
		x[i].stor = aux;
		cin >> x[i].IM;
		cin >> x[i].FA;
		x[i].GA = (x[i].IM+x[i].FA)/2;
		i++;
		cin >> aux; 
	}
	j = i++;
	
	//análise de dados e saída
	for(i = 0; i < j; i++){
		if(i==0){
			k = i;
			maior = x[i].GA;
		}
		else if (maior<x[i].GA){
			k = i;
			maior = x[i].GA;
		}
	}
	cout << "Stormtrooper escolhido: " << x[k].stor << endl;
	cout << fixed << setprecision(2);
	cout << "GA = " << maior << endl;
	
	return 0;
}