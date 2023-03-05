#include <iostream>
#include <iomanip>

using namespace std;

void peso(float h, char sexo){  //definir� o peso ideal a partir do sexo
	float peso_ideal;  //dir� o peso ideal
	if(sexo == 'M')
		peso_ideal =(72.7*h) - 58;
	else
		peso_ideal = (62.1*h) - 44.7;
	
	cout << fixed << setprecision(2);
	cout << "Peso ideal = " << peso_ideal << " kg" << endl;

	return;		
}

int main(){
	//declara��o de vari�veis
	float h;  //altura
	char sexo;  //sexo da pessoa
	
	//entrada da altura e sexo da pessoa
	cin >> h;
	cin >> sexo;
	
	//chamada da fun��o e sa�da de dados
	peso(h, sexo);
	
	return 0;
}