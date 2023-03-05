#include <iostream>
#include <iomanip>
using namespace std;

void convert(float F, float &C, float &K){  //fun��o que far� a convers�o
	
	C = (F-32) * (5.0/9);  //convers�o F -> C
	K = C + 273;  //convers�o C -> K
	
	return;
}

int main(){
	//declara��o de vari�veis
	float f;  //temp em fahrenheit
	float c;  //temp em celsius
	float k;  //temp em kelvin
	
	//entrada de dados e chamada de fun��o
	cin >> f;
	convert(f, c, k);
	
	//saida de dados
	cout << fixed << setprecision(2);
	cout << "Celsius: " << c << endl;
	cout << "Kelvin: " << k << endl;
	
	return 0;
}