#include <iostream>
#include <iomanip>
using namespace std;

struct dados{  //struct que armazena dados
	int nota;  //bota do padawan
	char nome[200];  //nome do padawan
};

int main(){
	//declaração de variéveis
	dados x[200];  //nomeação da variável struct
	double media;  //média do padawan
	int N;  //quantidade de padawans
	int i, j;  //contador
	int maior;  //nota do melhor candidato
	
	//entrada de dados
	media = 0;
	cin >> N;
	for(i = 0; i < N; i++){
		cin.ignore();
		cin.getline(x[i].nome, 200);
		cin >> x[i].nota;
		media = media + x[i].nota;
	}
	
	//calculo da média, análise de dados e saída
	media = media / N;
	for(i = 0; i < N; i++){
		if(i == 0){  //parâmetro para a maior nota
			maior = x[i].nota;
			j = i;
		}
		else if(maior < x[i].nota){  //condição para mudar a maior nota
			maior = x[i].nota;
			j = i;
		}
	}
	cout << "Padawan com mais pontos: " << x[j].nome << endl;
	cout << "Pontos: " << maior << endl;
	cout << fixed << setprecision(2);
	cout << "Media da turma: " << media << " pontos" <<endl;
	
	
	return 0;
}