#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
#include <algorithm>
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


//long long A[100100];
//long long B[100100];
//int main()
//{
//    long long count = 0;
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//        cin >> A[i];
//    for (int i = 1; i <= n / 2; i++)
//        B[i] = A[n - i + 1] - A[i];
//
//    for (int i = 1; i <= n / 2; i++)
//    {
//        if (B[i] > 0 && B[i + 1] > 0)
//        {
//            if (B[i] < B[i + 1])
//            {
//                count += min(B[i], B[i + 1]);
//                B[i + 1] -= B[i];
//            }
//            else
//            {
//                count += max(B[i], B[i + 1]);
//                i++;
//            }
//        }
//        else if (B[i] < 0 && B[i + 1] < 0)
//        {
//            if (B[i] > B[i + 1])
//            {
//                count += abs(max(B[i], B[i + 1]));
//                B[i + 1] -= B[i];
//            }
//            else
//            {
//                count += abs(min(B[i], B[i + 1]));
//                i++;
//            }
//        }
//        else
//        {
//            count += abs(B[i]);
//        }
//    }
//    cout << count;
//    return 0;
//}
// 思路来源
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

// 官方题解：
//class Solution {
//public:
//    int numSubarraysWithSum(vector<int>& nums, int goal) {
//        int sum = 0;
//        unordered_map<int, int> cnt;
//        int ret = 0;
//        for (auto& num : nums) {
//            cnt[sum]++;
//            sum += num;
//            ret += cnt[sum - goal];
//        }
//        return ret;
//    }
//};
// 自己的题解：
//class Solution
//{
//public:
//    int numSubarraysWithSum(vector<int>& nums, int goal)
//    {
//        int nums_sz = nums.size();
//        const int cnt_sz = nums.size() + 10;
//        vector<int> cnt(cnt_sz, 0);
//        int ans = 0;
//        for (int i = 1; i < nums_sz; ++i)
//        {
//            nums[i] += nums[i - 1];
//        }
//        cnt[0] = 1;
//        for (int i = 0; i <= nums_sz - 1; ++i)
//        {
//            ++cnt[nums[i]];
//        }
//        if (nums[nums_sz - 1] == 0)
//        {
//            for (int i = 1; i <= nums_sz; ++i)
//            {
//                ans += i;
//            }
//        }
//        else
//        {
//            for (int i = goal; i <= nums[nums_sz - 1]; ++i)
//            {
//                ans += cnt[i] * cnt[i - goal];
//            }
//        }
//        return ans;
//    }
//};
//int main()
//{
//    vector<int> nums;
//    nums = { 0,1,1,0,0,0,1,1,0,1,0,1,0 };
//    Solution sl;
//    cout << sl.numSubarraysWithSum(nums, 3) << endl; 
//    return 0;
//}

//class Solution
//{
//public:
//    string getSmallestString(string s)
//    {
//        for (int i = 0; i < s.size() - 1; ++i)
//        {
//            if (s[i] % 2 == s[i + 1] && s[i] > s[i + 1])
//            {
//                swap(s[i], s[i + 1]);
//                break;
//            }
//        }
//        return s;
//    }
//};
//int main()
//{
//    string s = "000004322677566";
//    Solution sl;
//    cout << sl.getSmallestString(s) << endl;
//    return 0;
//}

//int main(int argc, char *argv[])
//{
//  long long MAX = 2024041331404202;
//  long long a=0;
//  long long b=1;
//  long long count = 0;
//  for (long long i = 1; i <= 1000; ++i)
//  {
//      a += i;
//      b *= i;
//      if ((a - b) % 100 == 0)
//      {
//          cout << i << ',';
//          ++count;
//      }
//  }
//  long long A = 0;
//  long long B = 1;
//  for (int i = 1; i < 25; ++i)
//  {
//      A += i;
//      B *= i;
//  }
//  cout << '\n' << "A:" << A << endl;
//  cout << "B;" << B << endl;
//  cout << A - B << endl;
//  cout << '\n' << count;
//  return 0;
//}

//bool loop(int year)
//{
//    return ((year % 4 == 0 && year / 100 != 0) || (year % 400 == 0));
//}
//bool is_year(int year, int month, int day)
//{
//    int days[13] = { 0,31,28 + loop(year),31,30,31,30,31,31,30,31,30,31 };
//    if (month > 0 && month < 13)
//    {
//        if (day > 0 && day <= days[month])
//        {
//            return true;
//        }
//        return false;
//    }
//    return false;
//}
//int main()
//{
//    int hash[10] = {13, 1, 2, 3, 5, 4, 4, 2, 2, 2};
//    int sum = 0;
//    int spe = 0;
//    for (int i = 20000101; i <= 20240413; ++i)
//    {
//        int year = i / 10000;
//        int month = i % 10000 / 100;
//        int day = i % 100;
//
//        if (!(is_year(year, month, day)))
//            continue;
//
//        int tmp_i = i;
//        for (int j = 0; j < 8; ++j)
//        {
//            spe += hash[tmp_i % 10];
//            tmp_i /= 10;
//        }
//        if (spe > 50)
//            ++sum;
//        spe = 0;
//    }
//    cout << sum << endl;
//    return 0;
//}

// 第15届，省赛，A组，C题

// 垃圾小代码，我自己写的，呜呜┭┮﹏┭┮，下面有好思路
// 时间复杂度O(n^2)
//int main()
//{
//    long long sum = 0;// 所需金币数
//    long long n = 0;
//    long long S = 0;
//    cin >> n >> S;
//    vector<long long> p(n, 0);// 单次训练所需金币
//    vector<long long> c(n, 0);// 每个士兵所需训练的次数
//    long long sig_sum = 0;// 单次需要训练总和
//
//    for (int i = 0; i < n; ++i)
//    {
//        cin >> p[i] >> c[i];
//        sig_sum += p[i];
//    }
//
//    // 判断训练是否完成
//    bool flag = 1;
//
//    while (flag)
//    {
//        // 选择一起训练还是单独训练
//        // 需要训练的士兵单次训练所需金币总和与S进行比较
//        if (sig_sum > S)
//        {// 改c、jug、sig_sum
//            sum += S;
//            for (int i = 0; i < n; ++i)
//            {
//                if (c[i])
//                {
//                    --c[i];
//                    if (c[i] == 0)
//                        sig_sum -= p[i];
//                }
//            }
//        }
//        else
//        {
//            for (int i = 0; i < n; ++i)
//                sum += (p[i] * c[i]);
//            flag = 0;
//        }
//    }
//
//    // 输出结果
//    cout << sum;
//    return 0;
//}
// 借鉴大佬思路，刷子法，多了个排序
// 时间复杂度O(n)
//struct Node
//{
//    long long p;// 金币
//    long long c;// 次数
//}a[100010];
//bool cmp(Node& p1, Node& p2)
//{
//    return p1.c < p2.c;
//}
//int main()
//{
//    long long sum = 0;// 所需金币数
//    long long n = 0;
//    long long S = 0;
//    cin >> n >> S;
//
//    long long sig_sum = 0;// 单次需要训练总和
//
//    for (int i = 0; i < n; ++i)
//    {
//        cin >> a[i].p >> a[i].c;
//        sig_sum += a[i].p;
//    }
//    sort(a, a + n, cmp);
//
//    // 刷子
//    long long tm = 0;
//
//    for(int i = 0; i < n; ++i)
//    {
//        // 选择一起训练还是单独训练
//        // 需要训练的士兵单次训练所需金币总和与S进行比较
//        if (sig_sum >= S)
//        {
//            sum += S * (a[i].c - tm);
//            tm += (a[i].c - tm);
//            sig_sum -= a[i].p;
//        }
//        else
//        {
//            sum += a[i].p * (a[i].c - tm);
//        }
//    }
//
//    // 输出结果
//    cout << sum << endl;
//    return 0;
//}