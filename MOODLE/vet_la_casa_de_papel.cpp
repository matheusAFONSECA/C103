#include <iostream>
using namespace std;

int main()
{
	//declaração de variáveis
	int vetor[1000];  //deslike ou like
	int N;  //quantidade de pessoas
	int i;  //contador
	int like = 0, deslike = 0;  //var aux
	
	//entrada da quantidade de pessoas e seus likes ou deslikes
	do{
		cin >> N;
	}while(N > 1000  || N < 0);
	for(i = 0; i < 	N; i++){
		cin >> vetor[i];
	}
	
	//análise das opiniões e saida de dados
	for(i = 0; i < 	N; i++){
		if(vetor[i] == 1)
			like++;
		else
			deslike++;
	}
	if(like == deslike)
		cout << "Deu empate" << endl;
	else if (like > deslike)
		cout << "A maioria gostou" << endl;
	else
		cout << "A maioria nao gostou" << endl;
	
	return 0;
}