#include <iostream>
using namespace std;
int n; // �ŧi�����ܼ� n
void ShowNum() 
{
	int value = n;             // �ŧi value ���ϰ��ܼ� 
	cout << "-----------------------------" << endl;
	for (int n=value;n>=1;n--) // �G�N�A�ŧi n ���϶��ܼ�
			cout <<  "�϶��ܼ� n=" << n << endl;

	cout << "-----------------------------" << endl;
	cout << "���� for ����� �����ܼ� n=" << n << endl;
}
int main()
{
	cout << "�п�J�����ܼ� n="; // n �w�ŧi�������ܼ�
	cin >> n;
	ShowNum(); // �Ѥj�ܤp��ܼƦr
	system("pause");
	return 0;
}