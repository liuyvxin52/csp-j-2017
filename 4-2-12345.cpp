/*
2. （切割绳子） 有 n
    条绳子，每条绳子的长度已知且均为正整数。
    绳子可以以任意正整数长度切割，但不可以连接。
    现在要从这些绳子中切割出 m 条长度相同的绳段，求绳段的最大长度是多少。（第一、二空 2.5 分，其余 3 分）
    输入：第一行是一个不超过 100的正整数 n，
    第二行是 n个不超过106的正整数，
    表示每条绳子的长度，
    第三行是一个不超过108的正整数 m。
    输出：绳段的最大长度，若无法切割，输出 Failed。
*/
#include<iostream>
using namespace std;
int n, m, i, lbound, ubound, mid, count;
int len[100]; // 绳子长度
int main()
{
    cin >> n;
    count = 0;
    for (i = 0; i < n; i++)
    {
        cin >> len[i];
        /*1->*/count=count+len[i]/*<-1*/;
    }
    cin >> m;
    if (/*2->*/count<m/*<-2*/)
    {
        cout << "Failed" << endl;
        return 0;
    }
    lbound = 1;
    ubound = 1000000;
    while (/*3->*/lbound<ubound/*<-3*/)
    {
        mid = /*4->*/(lbound+ubound+1)/2/*<-4*/;
        count = 0;
        for (i = 0; i < n; i++)
            /*5->*/count=count+len[i]/mid/*<-5*/;
        if (count < m)
            ubound = mid - 1;
        else
            lbound = mid;
    }
    cout << lbound << endl;
    return 0;
}
/*
参考答案：
count=count+len[i]
count<m
lbound<ubound
(lbound+ubound+1)/2
count=count+len[i]/mid
*/