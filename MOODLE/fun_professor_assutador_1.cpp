#include <iostream>
#include <iomanip>
using namespace std;


double media(double vetor[], int N){  //função para calcular a média
	int i;  //contador
	double retorno = 0;  //retorna a média
	
	for(i = 0; i < N; i++)
		retorno = retorno + vetor[i];
	retorno = retorno / N;
	
	return retorno;
}

int main(){
	//declaração de variáveis
	int N;  //quantidade de alunos
	double vetor[100];  //vetor que guarda as notas
	int i, j=0, k=0;  //contador
	double media_total;  //vet para média
	
	//entrada da quantidade de alunos e notas
	do{
		cin >> N;
	}while(N < 0);
	for(i = 0; i < N; i++)
		do{
			cin >> vetor[i];
		}while(vetor[i] > 100 || vetor[i] < 0);
	
	//calculo da média, análise de notas e saída 
	media_total = media(vetor, N);
	for(i = 0; i < N; i++){
		if(vetor[i] > media_total)
			j++;
		else 
			k++;
	}
	cout << fixed << setprecision(2);
	cout << "Media da turma: " << media_total << endl;
	
	return 0;
}