#include <iostream>
using namespace std;
int main()
{
    int score;
    cout << "請輸入成績："; 
    cin >> score;
    if (score>=60)
         cout << "及格!\n";
    else 
         cout << "不及格!\n";
    system("pause");
    return 0;
}
