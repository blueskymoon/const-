/*************************************************************************
    > File Name: 1.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年09月18日 星期日 21时10分18秒
 ************************************************************************/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(void)
{
	int x=10;
	int y=20;
	int const *p =&x;//可以对x进行赋值
    x= 30;
	p=&y; //可以对y进行赋值
	cout<<y<<x<<endl;
	return 0;
}
