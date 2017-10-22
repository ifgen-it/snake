#include <iostream>
#include <conio.h>
#include <ctime>
void S_out(unsigned char S, int x, int y);

using namespace std;
long long Fact(int x);
long long Fib(int x);


int x = 1;
int y = 1;

int main(){
	//setlocale(LC_ALL, "Russian");
#define UP 0x1E
#define DOWN 0x1F
#define RIGHT 0x10
#define LEFT 0x11
#define SOLID 0xdb
	unsigned char S = RIGHT;

	//��������� ������ - ���� ��� ������ � ������ � ��� ������� �� �����
	const int N1 = 20;
	const int N2 = 20;

	unsigned char Arr[N1][N2] = {0};
	Arr[0][0] = 0xc9;
	Arr[0][N2-1] = 0xbb;
	Arr[N1-1][0] = 0xc8;
	Arr[N1-1][N2-1] = 0xbc;

	for (size_t i = 1; i < N2 - 1; i++)
	{
		Arr[0][i] = 0xcd;
		Arr[N1-1][i] = 0xcd;
	}
	for (size_t i = 1; i < N1 - 1; i++)
	{
		Arr[i][0] = 0xba;
		Arr[i][N2-1] = 0xba;
	}

	// �������� ���������� ����� ������� �������� SOLID ��� ��������
	for (size_t i = 1; i < N2 - 1; i++)
	{
		for (size_t j = 1; j < N2 - 1; j++){
			Arr[i][j] = 0;
		}
	}

	//������� ���� � ������:
	Arr[y][x] = S;


	// ������ ������, ������� �������

	//�������� ������ - ����:
	for (size_t i = 0; i < N1; i++)
	{
		for (size_t j = 0; j < N2; j++)
		{
			cout << Arr[i][j];
		}
		cout << endl;

	}
	
	//���������� ������

	/*unsigned char S = RIGHT;
	unsigned char T = 0xdb;
	cout << S << endl;*/
	

	// ���� �������� ������ �� ����:


	while (true)
	{

		int k = _getch();
		k = _getch();
		Arr[y][x] = SOLID; // ������� ���� � �������� ����� || �������� ���� ���������

		switch (k)
		{

		case 77: // ������� ������
			if (x>=1 && x<= N2 - 3)
			{
				x++;
				S = RIGHT;
			}
			
			break;
		case 75: // ������� �����
			if (x >= 2 && x <= N2 - 2) {
				x--;
				S = LEFT;
			}
			break;
		case 80: // ������� ����
			if (y >= 1 && y <= N1 - 3) {
				y++;
				S = DOWN;
			}
			break;
		case 72: // ������� �����
			if (y >= 2 && y <= N1 - 2) {
				y--;
				S = UP;
			}
			break;
		default:
			break;
		}
		
		Arr[y][x] = S;
		// ������� ������ � ����� ���������� ����:
		system("cls");
		//�������� ������ - ����:
		for (size_t i = 0; i < N1; i++)
		{
			for (size_t j = 0; j < N2; j++)
			{
				cout << Arr[i][j];
			}
			cout << endl;

		}

		//���������� ������



		//S_out(S, x, y);   // ������� ������ S

	}



	/*unsigned int time1 = 0;
	unsigned int time2 = 0;
	unsigned int time;

	time1 = clock();
	long x = Fib(35);

	time2 = clock();

	time = time2 - time1;

	cout << time << endl;
*/
	/*char Solid = 0xcd;
	char Name[] = "Lab#4";
	while (true)
	{

		cout << (char)0xc9 << Solid << Solid << Solid << Solid << Solid << (char)0xbb << endl;
		cout << (char)0xba << Name << (char)0xba << endl;
		cout << (char)0xc8 << Solid << Solid << Solid << Solid << Solid << (char)0xbc << endl;

		long long x = Fib(34);
		system("cls");

		
		cout <<'\t'<< (char)0xc9 << Solid << Solid << Solid << Solid << Solid << (char)0xbb << endl;
		cout << (char)0xba << Name << (char)0xba << endl;
		cout << (char)0xc8 << Solid << Solid << Solid << Solid << Solid << (char)0xbc << endl;

		x = Fib(34);
		system("cls");


		
		cout << '\t' << (char)0xc9 << Solid << Solid << Solid << Solid << Solid << (char)0xbb << endl;
		cout << '\t' << (char)0xba << Name << (char)0xba << endl;
		cout << (char)0xc8 << Solid << Solid << Solid << Solid << Solid << (char)0xbc << endl;

		x = Fib(34);
		system("cls");

		
		cout << '\t' << (char)0xc9 << Solid << Solid << Solid << Solid << Solid << (char)0xbb << endl;
		cout << '\t' << (char)0xba << Name << (char)0xba << endl;
		cout << '\t' << (char)0xc8 << Solid << Solid << Solid << Solid << Solid << (char)0xbc << endl;

		x = Fib(34);
		system("cls");

		cout << '\t' << (char)0xc9 << Solid << Solid << Solid << Solid << Solid << (char)0xbb << endl;
		cout << '\t' << (char)0xba << Name << (char)0xba << endl;
		cout << (char)0xc8 << Solid << Solid << Solid << Solid << Solid << (char)0xbc << endl;

		x = Fib(34);
		system("cls");

		cout << '\t' << (char)0xc9 << Solid << Solid << Solid << Solid << Solid << (char)0xbb << endl;
		cout << (char)0xba << Name << (char)0xba << endl;
		cout << (char)0xc8 << Solid << Solid << Solid << Solid << Solid << (char)0xbc << endl;

		x = Fib(34);
		system("cls");
	}*/
	system("pause");
return 0;
}


	



void S_out(unsigned char S, int x, int y){
	system("cls");
	for (int j = 0; j < y; j++)
	{
		cout << "\n";
	}
	for (int i = 0; i < x; i++)
	{
		cout << " ";
	}
	cout << S;

}

long long Fact(int x){
	long long Res;
	if (x > 1){
		Res = x * Fact(x - 1);
	}
	else
	{
		Res = 1;
	}
	return Res;
}
long long Fib(int x){
	
	if (x > 2){
		return Fib(x-2) + Fib(x-1);
	}
	else{
		return 1;
	}
}
