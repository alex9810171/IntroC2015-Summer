#include <iostream>
using namespace std;
int n; // 宣告全域變數 n
void ShowNum() 
{
	int value = n;             // 宣告 value 為區域變數 
	cout << "-----------------------------" << endl;
	for (int n=value;n>=1;n--) // 故意再宣告 n 為區塊變數
			cout <<  "區塊變數 n=" << n << endl;

	cout << "-----------------------------" << endl;
	cout << "結束 for 巡圈後 全域變數 n=" << n << endl;
}
int main()
{
	cout << "請輸入全域變數 n="; // n 已宣告為全域變數
	cin >> n;
	ShowNum(); // 由大至小顯示數字
	system("pause");
	return 0;
}
