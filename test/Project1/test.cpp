#include <iostream>
#include <cmath>
using namespace std;

// 14届A组 A 幸运数

//int main()
//{
//    // 10 ~ 99              1
//    // 1000 ~ 9999          2
//    // 100000 ~ 999999      3   
//    // 10000000 ~ 99999999  4
//    int start = 10;
//    int end = 100;
//    int tm = 100;
//    int ans = 0;
//    for (int i = 0; i < 4; ++i)
//    {
//        for (int j = start * pow(tm, i); j < end * pow(tm, i); ++j)
//        {
//            int tmp = j;
//            int right = 0;
//            int left = 0;
//            for (int m = -i - 1; m < 0; ++m)
//            {
//                right += tmp % 10;
//                tmp /= 10;
//            }
//            for (int m = -i - 1; m < 0; ++m)
//            {
//                left += tmp % 10;
//                tmp /= 10;
//            }
//            if (left == right)
//            {
//                ++ans;
//            }
//        }
//    }
//
//    cout << ans << endl;
//
//	return 0;
//}
// 大佬解法
int a[5][50] = { 0 };//定义数组a[i][j] 表示i位数和为j，j最大为9*i； 
void num(int x) 
{
    int t = 0, sum = 0;//判断位数 
    while (x) 
    {
        sum += x % 10;
        x /= 10; t++;
    }
    a[t][sum]++;
}
int main() 
{
    int count = 0;
    for (int i = 1; i <= 9999; i++) 
    {
        num(i);
    }
    for (int i = 1; i <= 4; i++) //左一半,1-4 
    {
        for (int j = 1; j <= i * 9; j++) 
        {
            for (int k = 1; k <= i; k++) //右一半只要比i小前面补0
            {
                count += a[i][j] * a[k][j];
            }
        }
    }
    cout << count << endl;
    return 0;
}

// 14届B组 A 统计日期

//int main()
//{
//    int arr[100] = {
//          5, 6, 8, 6, 9, 1, 6, 1, 2, 4, 9, 1, 9, 8, 2, 3, 6, 4, 7, 7,
//          5, 9, 5, 0, 3, 8, 7, 5, 8, 1, 5, 8, 6, 1, 8, 3, 0, 3, 7, 9,
//          2, 7, 0, 5, 8, 8, 5, 7, 0, 9, 9, 1, 9, 4, 4, 6, 8, 6, 3, 3,
//          8, 5, 1, 6, 3, 4, 6, 7, 0, 7, 8, 2, 7, 6, 8, 9, 5, 6, 5, 6,
//          1, 4, 0, 1, 0, 0, 9, 4, 8, 0, 9, 1, 2, 8, 5, 0, 2, 5, 3, 3
//    };
//    int days_round[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//    int count = 0;
//
//    for (int m = 1; m < 13; ++m)
//    {
//        for (int day = 1; day <= days_round[m]; ++day)
//        {
//            int search_day[8] = { 2, 0, 2, 3, m / 10, m % 10, day / 10, day % 10 };
//            int j = 0;
//            for (int i = 0; i < 100; ++i)
//            {
//                if (search_day[j] == arr[i])
//                {
//                    ++j;
//                    if (j == 8)
//                    {
//                        ++count;
//                        break;
//                    }
//                }
//            }
//        }
//    }
//
//    cout << count << endl;
//
//
//    return 0;
//}

