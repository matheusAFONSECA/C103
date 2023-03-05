#include <iostream>
#include <iomanip>
using namespace std;

void convert(float F, float &C, float &K){  //função que fará a conversão
	
	C = (F-32) * (5.0/9);  //conversão F -> C
	K = C + 273;  //conversão C -> K
	
	return;
}

int main(){
	//declaração de variáveis
	float f;  //temp em fahrenheit
	float c;  //temp em celsius
	float k;  //temp em kelvin
	
	//entrada de dados e chamada de função
	cin >> f;
	convert(f, c, k);
	
	//saida de dados
	cout << fixed << setprecision(2);
	cout << "Celsius: " << c << endl;
	cout << "Kelvin: " << k << endl;
	
	return 0;
}