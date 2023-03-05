#include <iostream>
#include <iomanip>

using namespace std;

void peso(float h, char sexo){  //definirá o peso ideal a partir do sexo
	float peso_ideal;  //dirá o peso ideal
	if(sexo == 'M')
		peso_ideal =(72.7*h) - 58;
	else
		peso_ideal = (62.1*h) - 44.7;
	
	cout << fixed << setprecision(2);
	cout << "Peso ideal = " << peso_ideal << " kg" << endl;

	return;		
}

int main(){
	//declaração de variáveis
	float h;  //altura
	char sexo;  //sexo da pessoa
	
	//entrada da altura e sexo da pessoa
	cin >> h;
	cin >> sexo;
	
	//chamada da função e saída de dados
	peso(h, sexo);
	
	return 0;
}