#include <iostream>
using namespace std;

struct dado
{
	int info1;  //var de exemplo
	int info2;  //var de exemplo
};

int main()
{
	//declara��o de vari�veis
	dado *v;
	
	v = new dado;  //atribui��o de mem�ria din�mica
	
	v->info1 = 2;
	v->info2 = 8;
	
	delete[] v;  //nunca esquecer de colocar essa fun��o porque se n�o o 
				//c�digo n�o vai parar de usar mem�ria
	
	return 0;
}