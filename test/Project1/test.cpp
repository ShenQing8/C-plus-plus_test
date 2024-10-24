#include <iostream>
#include <string>
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
//int a[5][50] = { 0 };//定义数组a[i][j] 表示i位数和为j，j最大为9*i； 
//void num(int x) 
//{
//    int t = 0, sum = 0;//判断位数 
//    while (x) 
//    {
//        sum += x % 10;
//        x /= 10; t++;
//    }
//    a[t][sum]++;
//}
//int main() 
//{
//    int count = 0;
//    for (int i = 1; i <= 9999; i++) 
//    {
//        num(i);
//    }
//    for (int i = 1; i <= 4; i++) //左一半,1-4 
//    {
//        for (int j = 1; j <= i * 9; j++) 
//        {
//            for (int k = 1; k <= i; k++) //右一半只要比i小前面补0
//            {
//                count += a[i][j] * a[k][j];
//            }
//        }
//    }
//    cout << count << endl;
//    return 0;
//}

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


//int main()
//{
//	int arr[5] = { 0 };
//	for (int i = 0; i < 5; ++i)
//	{
//		arr[i] = i;
//	}
//	int* k = nullptr;
//
//	return 0;
//}


struct ListNode 
{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
    
};
//class Solution 
//{
//public:
//    ListNode* deleteDuplicates(ListNode* head)
//    {
//        if (!head)
//        {
//            return head;
//        }
//        ListNode* cur = head;
//        while (cur->next)
//        {
//            if (cur->val == cur->next->val)
//            {
//                ListNode* tmp = cur->next;
//                cur->next = tmp->next;
//                delete tmp;
//            }
//            else
//                cur = cur->next;
//        }
//        return head;
//    }
//};
//int main()
//{
//    ListNode l1(1);
//    ListNode l2(1);
//    ListNode l3(2);
//    ListNode l4(2);
//    ListNode l5(3);
//
//    l1.next = &l2;
//    l2.next = &l3;
//    l3.next = &l4;
//    l4.next = &l5;
//
//    Solution sl;
//    ListNode* head = sl.deleteDuplicates(&l1);
//
//    return 0;
//}


//class Solution
//{
//public:
//    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
//    {
//        //ListNode* head = new ListNode();
//        //ListNode* tail = head;
//        //while (l1 || l2)
//        //{
//        //    int n1 = l1 ? l1->val : 0;
//        //    int n2 = l2 ? l2->val : 0;
//        //    int sum = n1 + n2;
//        //    int add = sum + tail->val;
//        //    tail->val = add % 10;
//        //    tail->next = new ListNode(add / 10);
//        //    tail = tail->next;
//        //    if (l1) l1 = l1->next;
//        //    if (l2) l2 = l2->next;
//        //}
//        //if (tail->val == 0)
//        //{
//        //    delete tail;
//        //    tail = NULL;
//        //}
//        //return head;
//        ListNode* head = new ListNode();
//        ListNode* tail = head;
//        int carry = 0;
//        while (l1 || l2 || carry) {
//            int a = l1 ? l1->val : 0;
//            int b = l2 ? l2->val : 0;
//            int sum = a + b + carry;
//            carry = sum >= 10 ? 1 : 0;
//            tail->next = new ListNode(sum % 10);
//            tail = tail->next;
//            if (l1) l1 = l1->next;
//            if (l2) l2 = l2->next;
//        }
//        return head->next;
//    }
//};
//int main()
//{
//    Solution sol;
//    ListNode l11(9);
//    ListNode l12(2);
//    ListNode l21(2);
//    ListNode l22(3);
//
//    l11.next = &l12;
//    l21.next = &l22;
//    ListNode* get = sol.addTwoNumbers(&l11, &l21);
//    return 0;
//}

void rev_list(ListNode** head, int k)
{
    ListNode** rev = head;
    for (int i = 0; i < k - 1; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            ListNode* tmp1 = *rev;
            ListNode* tmp2 = (*rev)->next;
            tmp1->next = tmp2->next;
            tmp2->next = tmp1;
            tmp2 = tmp1->next;
        }
        rev = head;
    }
}
class Solution
{
public:
    ListNode* reverseKGroup(ListNode* head, int k)
    {
        // 判断节点是否为空
        if (!head)
        {
            return head;
        }
        // 统计节点数量
        ListNode* cur = head;
        int count = 1;
        while (cur->next)
        {
            ++count;
            cur = cur->next;
        }
        // 得到翻转次数
        int re_time = count / k;
        // 翻转
        ListNode* pre = head;
        while (re_time)
        {
            rev_list(&pre, k);
            for (int i = 0; i < k; ++i)
            {
                pre = pre->next;
            }
            --re_time;
        }
        // 返回头节点
        return head;
    }
};
int main()
{
    ListNode l1(1);
    ListNode l2(2);
    ListNode l3(3);
    ListNode l4(4);
    ListNode l5(5);

    l1.next = &l2;
    l2.next = &l3;
    l3.next = &l4;
    l4.next = &l5;

    Solution sl;
    ListNode* head = sl.reverseKGroup(&l1, 2);


    return 0;
}
