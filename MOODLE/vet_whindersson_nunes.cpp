#include <iostream>
using namespace std;

int main()
{
	//declaração de variáveis
	int N;  //quantidade de videos
	int vetor[1000];  //guardar quantidade de views
	int i, j=0, k=0;  //contadores
	int aux;  //var aux
	
	//entrada da quantidade de videos e suas views
	do{
		cin >> N;
	}while(N<0 && N>1000);
	for(i = 0; i < N; i++){
		cin >> aux;
		if(aux > 0)
			vetor[i] = aux;
	}
	
	//análise de views e saída de dados
	for(i = 0; i < N; i++){
		if(vetor[i] > 10000000)
			j++;
		else
			k++;
	}
	cout << j << " video(s) com mais de 10M views" << endl;
	cout << k << " video(s) com menos de 10M views" << endl;
	
	return 0;
}