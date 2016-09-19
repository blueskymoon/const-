/*************************************************************************
    > File Name: 5.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年09月19日 星期一 15时56分14秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main(void)
{
	char *str=new char [100];
	strcpy(str,"hello molloc");
	cout<<str<<endl;
	delete []str;
	str = NULL;
	return 0;
}
