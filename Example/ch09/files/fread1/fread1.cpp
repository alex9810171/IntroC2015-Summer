#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    fstream file;  	// �إ��ɮ׿�X����	
    char buffer[200];
    file.open("sample.txt", ios::in); //�}���ɮ�
    if(!file) //�ˬd�ɮ׬O�_���\�}��
       cout << "�ɮ׵L�k�}��!\n";
    else
    {
        file.read(buffer,sizeof(buffer));
        cout << buffer << endl;   
        file.close();   //�����ɮ�
    }
    system("pause");
    return 0;
} 