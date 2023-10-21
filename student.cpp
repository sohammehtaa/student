#include<iostream>
#include"student.h"
using namespace std;

int main()
{
	student(int rno,String name,int marks1,int marks2,marks3)
	{
		this.rno=rno;
		this.name=name;
		this.marks1=marks1;
		this.marks2=marks2;
		this.marks3=marks3;
	}
	
	void setrno(int rno)
	{
		this.rno=rno;
	}
	void setname(string name)
	{
		this.name=name;
	}
	void marks1(int marks1)
	{
		this.marks1=marks1;
	}
	void marks2(int marks2)
	{
		this.marks2=marks2;
	}
	void marks3(int marks3)
	{
		this.marks3=marks3;
	}
	
	int getrno()
	{
		return rno;
	}
	int getname()
	{
		return name;
	}
	int getmarks1()
	{
		return marks1;
	}
	int getmarks2()
	{
		return marks2;
	}
	int getmarks3()
	{
		return marks3;
	}
	double percentage(int m1,m2,m3)
	{
		return (m1+m2+m3)/3;	
	}
	
}

