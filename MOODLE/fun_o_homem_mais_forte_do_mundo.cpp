#include <iostream>
#include <cstring>
using namespace std;

struct dados{  //struct que guardara os vetores
	char nome[200];  //nome do competidor
	int nota1, nota2, nota3, nota4;
};

int main(){
	//declaração de variáveis
	dados x[100];  //vetor da struct
	int N;  //quantidade de competidores
	int i;  //contador
	int soma[100];  //guarda a soma das notas
	int maior, j;  //var aux
 	
	//entrada de atletas inscritos, seus nomes e notas
	do{
		cin >> N;
	}while(N < 0);
	for(i = 0; i < N; i++){
		cin.ignore();
		cin.getline(x[i].nome, 200);
		cin >> x[i].nota1 >> x[i].nota2 >> x[i].nota3 >> x[i].nota4;
		soma[i] = x[i].nota1 + x[i].nota2 + x[i].nota3 + x[i].nota4;
	}
	
	//análise de resultados e divulgação de vencedor
	for(i = 0; i < N; i++){
		if(i == 0){
			maior = soma[i];
			j = i;
		}
		else if(soma[i] > maior){
			maior = soma[i];
			j = i;
		}
	}
	cout << "Vencedor: " << x[j].nome << endl;
	
	return 0;
}