/*************************************************************************
    > File Name: 1.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年09月18日 星期日 21时10分18秒
 ************************************************************************/

#include<iostream>
#include<stdlib.h>
using namespace std;
void fun(const int &a,const int &b);

int main(void)
{
	int x=3;
	int y=5;
//    int const &z =x;
	fun(x,y);
	cout<<x<<" "<<y<<endl;
/*	z=10;
	x=20;
	cout<<z<<x<<endl;*/
//	int *const p=&x; //固定 p,但是可以给x 赋值
//    int const *p =&x;
//	int const *p = &x;// const int *p = &x;
/*	cout<<*p<<endl;
	p=&y;
    cout<<*p<<endl;*/
	return 0;
}

void fun(const int &a,const int &b)
{
	a=10;
	b=20;
}//如果没有const 函数中的操作会形参会影响实参
