#include <iostream>
using namespace std;

void soma(int x, int y, int *s)  //função de soma feita por meio de ponteiro
{
	*s = x + y;
}

/*
-> fazer a passagem por meio de ponteiro é o mesmo que fazer a passagem por refência
em c++
*/

int main()
{
	//declaração de variáveis
	int a, b, c = 0;

	cin >> a >> b;

	soma(a, b, c);

	cout << c;

	return 0;
}
