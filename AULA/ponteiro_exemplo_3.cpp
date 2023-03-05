#include <iostream>
using namespace std;

void soma(int x, int y, int *s)  //fun��o de soma feita por meio de ponteiro
{
	*s = x + y;
}

/*
-> fazer a passagem por meio de ponteiro � o mesmo que fazer a passagem por ref�ncia
em c++
*/

int main()
{
	//declara��o de vari�veis
	int a, b, c = 0;

	cin >> a >> b;

	soma(a, b, c);

	cout << c;

	return 0;
}
