/*************************************************************************
    > File Name: 1.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年09月18日 星期日 21时10分18秒
 ************************************************************************/

#include<iostream>
#include<stdlib.h>
using namespace std;
void fun(int  &a,int  &b);
int main(void)
{
	int x=10;
	int y=20;
    fun(x,y);
	cout<<y<<" "<<x<<endl;
	return 0;
}

void fun(int  &a ,int  &b)
{
	a=22;
	b=33;
}
