#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;
typedef  int Matrix[1000][1000];//��� �������
int matr1[1000][1000];
Matrix �;   //������� ������� 
int i, j;
int n, m; 				//������� ����� � ��������� �������
void input(Matrix);				// ��������� �������
void output(Matrix);			// ��������� ������� 
void transp(Matrix); 		//��������� ����� �������
									//=============== ������� �����i� ================ 
int main()
{
			//����� �����, �� �����������
	cout << "Input n, m: ";
	cin >> n >> m; 			//������ ��������� �������
	input(�);				//���������� �������
	output(�);			//������� ����������� �������
	transp(�);		//�������� �������� �����
	cout << endl;
	//output(�);			//������� �������� �������
	system("pause");
}
//============== ��������� ������� =================
void input(Matrix matr)
{
	srand(time(NULL));
	for ( i = 0; i<n; i++)
		for ( j = 0; j<m; j++)
			matr[i][j] = rand() % 9; 	//��������� ��������� �������� �������
}
//=============== ��������� ������� =================
void output(Matrix matr)
{
	for ( i = 0; i<n; i++)
	{
		for ( j = 0; j<m; j++)
			cout << setw(4) << matr[i][j]; 	//��������� �������� �����
		cout << endl; 				//������� �� ����� �����
	}
}
//======== ��������� ��������� ����� ������� ========
void transp(Matrix matr)
{
	int mas;
	for (i = 0; i < n; i++) //�������� �����, �� ������  ���������
	{
		for (j = 0; j < m; j++)
		{

			matr1[i][j] = matr[j][i];
			//cout << matr1[i][j];
			//	mas = matr[j][i];

		}
		for (i = 0; i < m; i++) //�������� �����, �� ������  ���������
		{
			for (j = 0; j < n; j++)
			{

				cout << matr1[i][j] << " ";

			}
			cout << "\n";
		}

	}
}