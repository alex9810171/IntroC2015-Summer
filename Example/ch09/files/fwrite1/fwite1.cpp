#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream file;	// 建立檔案輸出物件	
	//建立sample01.txt檔案，執行寫入動作
	file.open("sample01.txt", ios::out);
	//判斷檔案是否能開啟′開啟成功才寫入資料
	if(file.fail()){
       cout << "檔案無法開啟!\n";
 	}
	else
	{
    	file << "編號\t品名\n";
        file << "A01\t香吉士\n";  
        file << "B01\t百香果\n";
        cout << "檔案建立完成!\n";
    	file.close(); 	//關閉檔案
    }
	system("pause");
	return 0;
}
