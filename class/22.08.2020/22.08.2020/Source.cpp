#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	const int Size = 30;
	int Arrey[Size];
	int i = 0;
	srand(time(0));
	for (i = 0; i < Size; i++)
	{
		Arrey[i] = rand()%100;
		cout << "Masuv z 30 chusel: " << Arrey[i] << endl;

	}
	system("pause");
	return 0;
}