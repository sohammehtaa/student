#include<iostream>
#include"student.h"
#include"student.cpp"
using namespace std;

int main()
{
	student s;
	cout<<"details:"<<endl;
	cout<<"roll no"<<s.getrno()<<"name"<<s.getname()<<"marks"<<s.getmarks1<<s.getmarks2<<s.getmarks3<<s.percenatge();
	cout<<"-----end of main-----";
}
