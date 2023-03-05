#include <iostream>
#include <iomanip>
using namespace std;

struct dados{
	double nota1;  //nota da primeira prova
	double nota2;  //nota da segunda prova
	int mat;  //matricula do aluno 
};

int main(){
	//declaração de variáveis
	dados x;
	
	//entrada de dados
	cout << "Digite o seu numero de matricula: " << endl;
	cin >> x.mat;
	cout << "Digite a nota da primeira prova: " << endl;
	cin >> x.nota1;
	cout << "Digite a nota da segunda prova: " << endl;
	cin >> x.nota2;
	
	//saida de dados
	cout << "Matricula do aluno: " << x.mat << endl;
	cout << fixed << setprecision(2);
	cout << "Nota da primeira prova: " << x.nota1 << endl;
	cout << "Nota da segunda prova: " << x.nota2 << endl;
	
	return 0;
}