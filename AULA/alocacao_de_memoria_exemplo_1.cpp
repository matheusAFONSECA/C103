#include <iostream>
using namespace std;

struct dado
{
	int info1;  //var de exemplo
	int info2;  //var de exemplo
};

int main()
{
	//declaração de variáveis
	dado *v;
	
	v = new dado;  //atribuição de memória dinâmica
	
	v->info1 = 2;
	v->info2 = 8;
	
	delete[] v;  //nunca esquecer de colocar essa função porque se não o 
				//código não vai parar de usar memória
	
	return 0;
}