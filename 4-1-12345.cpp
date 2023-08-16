/*
1.  (快速幂) 请完善下面的程序，该程序使用分治法求xpmod m
    的值。（第一空 2 分，其余 3 分）
    输入：三个不超过 10000的正整数x，p，m。
    输出：x^p mod m的值。
    提示：若 p为偶数，x^p=(x^2)^[p/2]；若 p为奇数，x^p=x∗(x^2)^[(p−1)/2]。
*/
#include<iostream>
using namespace std;
int x, p, m, i, result;
int main() {
	cin >> x >> p >> m;
	result = /*1->*/1/*<-1*/;
	while (/*2->*/p!=0/*<-2*/){
		if (p % 2 == 1)
			result = /*3->*/result * x % m/*<-3*/;
		p /= 2;
		x = /*4->*/x * x % m/*<-4*/;
	}
	cout << /*5->*/result/*<-5*/ << endl;
	return 0;
}
/*
参考答案：
1
p>0
result * x % m
x * x % m
result
*/