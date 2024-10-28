#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
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


// 翻转k个一组的链表

//class Solution
//{
//public:
//    ListNode* reverseKGroup(ListNode* head, int k)
//    {
//        // 判断节点是否为空和翻转次数是否小于2
//        if (!head || k < 2)
//        {
//            return head;
//        }
//        // 统计节点数量
//        ListNode* cur = head;
//        int count = 1;
//        while (cur->next)
//        {
//            ++count;
//            cur = cur->next;
//        }
//        if (count == 1)// 如果只有一个节点，直接返回
//        {
//            return head;
//        }
//        // 得到翻转次数
//        int re_time = count / k;
//        // 翻转
//        ListNode* pre = head;
//        ListNode puu(0);
//        puu.next = head;
//        ListNode* pr_pre = &puu;
//
//        while (re_time)
//        {
//            pre = rev_list(pre, k);
//            pr_pre->next = pre;
//
//            for (int i = 0; i < k; ++i)
//            {
//                pre = pre->next;
//            }
//            for (int i = 0; i < k; ++i)
//            {
//                pr_pre = pr_pre->next;
//            }
//            --re_time;
//        }
//        // 返回头节点
//        return puu.next;
//    }
//private:
//    ListNode* rev_list(ListNode*& head, int k)
//    {
//        ListNode ahh(0);
//        ahh.next = head;
//        ListNode* pre = &ahh;// 头
//        ListNode* tmp1 = pre->next;// 中
//        ListNode* tmp2 = tmp1->next;// 尾
//
//        for (int i = 0; i < k - 1; ++i)
//        {
//            for (int j = 0; j < k - i - 1; ++j)
//            {
//                tmp2 = tmp1->next;
//                pre->next = tmp1->next;
//                tmp1->next = tmp2->next;
//                tmp2->next = tmp1;
//                pre = pre->next;
//            }
//            pre = &ahh;
//            tmp1 = pre->next;
//        }
//        return ahh.next;
//    }
//};
//int main()
//{
//    ListNode l1(1);
//    ListNode l2(2);
//    ListNode l3(3);
//    ListNode l4(4);
//    ListNode l5(5);
//
//    l1.next = &l2;
//    l2.next = &l3;
//    l3.next = &l4;
//    l4.next = &l5;
//
//    Solution sl;
//    ListNode* head = sl.reverseKGroup(&l1, 2);
//
//
//    return 0;
//}


//class Solution
//{
//public:
//    int calPoints(vector<string>& operations)
//    {
//        int size = operations.size();
//        int sum = 0;
//        stack<int> chc;
//        for (int i = 0; i < size; ++i)
//        {
//            if (operations[i] == "+")
//            {
//                int s1 = chc.top();
//                chc.pop();
//                int s2 = chc.top();
//                chc.push(s1);
//                chc.push(s1 + s2);
//            }
//            else if (operations[i] == "D")
//            {
//                int top = chc.top();
//                chc.push(2 * top);
//            }
//            else if (operations[i] == "C")
//            {
//                chc.pop();
//            }
//            else
//            {
//                chc.push(stoi(operations[i]));
//            }
//        }
//        int size_sum = chc.size();
//        for (int j = 0; j < size_sum; ++j)
//        {
//            sum += chc.top();
//            chc.pop();
//        }
//        return sum;
//    }
//};
//int main()
//{
//    vector<string> operations;
//    operations = { "5","2","C","D","+" };
//    Solution sl;
//    int sum = sl.calPoints(operations);
//    cout << sum << endl;
//    
//    return 0;
//}

//class Solution
//{
//public:
//    bool backspaceCompare(string s, string t)
//    {
//        stack<char> d1;
//        stack<char> d2;
//        int l1 = s.size();
//        int l2 = t.size();
//        for (int i = 0; i < l1; ++i)
//        {
//            if (s[i] == '#')
//            {
//                if (d1.size())
//                    d1.pop();
//            }
//            else
//            {
//                d1.push(s[i]);
//            }
//        }
//        for (int i = 0; i < l2; ++i)
//        {
//            if (t[i] == '#')
//            {
//                if (d2.size())
//                    d2.pop();
//            }
//            else
//            {
//                d2.push(t[i]);
//            }
//        }
//        int s1 = d1.size();
//        int s2 = d2.size();
//        if (s1 != s2)
//        {
//            return false;
//        }
//        else
//        {
//            for (int i = 0; i < s1; ++i)
//            {
//                if (d1.top() != d2.top())
//                {
//                    return false;
//                }
//                d1.pop();
//                d2.pop();
//            }
//        }
//        return true;
//    }
//};
// 大佬解法，空间复杂度O(1)
//class Solution 
//{
//public:
//    bool backspaceCompare(string s, string t) 
//    {
//        int s_n = 0, t_n = 0;
//        for (int i = 0; i < s.size(); i++) 
//        {
//            if (s[i] != '#')s[s_n++] = s[i];
//            else 
//            {
//                if (s_n > 0)s_n--;
//            }
//        }
//        for (int i = 0; i < t.size(); i++) 
//        {
//            if (t[i] != '#')t[t_n++] = t[i];
//            else 
//            {
//                if (t_n > 0)t_n--;
//            }
//        }
//        if (s_n != t_n)return false;
//        for (int i = 0; i < s_n; i++) 
//        {
//            if (s[i] != t[i])return false;
//        }
//        return true;
//    }
//};
//int main()
//{
//    string s = "aaa###a";
//    string t = "aaaa###a";
//    Solution sl;
//    bool k = sl.backspaceCompare(s, t);
//    cout << k << endl;
//    return 0;
//}

//class Solution {
//public:
//    bool isPalindrome(ListNode* head)
//    {
//        int count = 0;
//        vector<char> chc;
//        ListNode* cur = head;
//        while (cur)
//        {
//            chc.push_back(cur->val);
//            ++count;
//            cur = cur->next;
//        }
//        int i = 0;
//        int j = count - 1;
//        while (i <= j)
//        {
//            if (chc[i] != chc[j])
//            {
//                return false;
//            }
//            ++i;
//            --j;
//        }
//        return true;
//    }
//};
//int main()
//{
//    ListNode l1(1);
//    ListNode l2(2);
//    ListNode l3(2);
//    ListNode l4(1);
//
//    l1.next = &l2;
//    l2.next = &l3;
//    l3.next = &l4;
//
//    Solution sl;
//    sl.isPalindrome(&l1);
//
//    return 0;
//}


long long A[100100];
long long B[100100];
int main()
{
    long long count = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> A[i];
    for (int i = 1; i <= n / 2; i++)
        B[i] = A[n - i + 1] - A[i];

    for (int i = 1; i <= n / 2; i++)
    {
        if (B[i] > 0 && B[i + 1] > 0)
        {
            if (B[i] < B[i + 1])
            {
                count += min(B[i], B[i + 1]);
                B[i + 1] -= B[i];
            }
            else
            {
                count += max(B[i], B[i + 1]);
                i++;
            }
        }
        else if (B[i] < 0 && B[i + 1] < 0)
        {
            if (B[i] > B[i + 1])
            {
                count += abs(max(B[i], B[i + 1]));
                B[i + 1] -= B[i];
            }
            else
            {
                count += abs(min(B[i], B[i + 1]));
                i++;
            }
        }
        else
        {
            count += abs(B[i]);
        }
    }
    cout << count;
    return 0;
}
//const int N = 100100;
//long long a[N], b[N], sum = 0;
//int main() {
//    int n; cin >> n;
//    for (int i = 1; i <= n; i++) cin >> a[i];
//    for (int i = 1; i <= n / 2; i++) b[i] = a[n - i + 1] - a[i];
//
//    for (int i = 1; i <= n / 2; i++) {
//        if (b[i] > 0 && b[i + 1] > 0) {//如果相邻同正
//            if (b[i + 1] > b[i]) sum += min(b[i], b[i + 1]), b[i + 1] -= b[i];//如果后一个数比前一个数大 就取最小
//            else sum += max(b[i], b[i + 1]), i++;//如果后一个数比前一个数小 就取最大 并且后移一位继续比较
//        }
//        else if (b[i] < 0 && b[i + 1] < 0) {//如果相邻同负
//            if (b[i + 1] < b[i]) sum += abs(max(b[i], b[i + 1])), b[i + 1] -= b[i];//同理
//            else sum += abs(min(b[i], b[i + 1])), i++;
//        }
//        else sum += abs(b[i]);//如果相邻异号
//    }
//    cout << sum;
//    return 0;
//}