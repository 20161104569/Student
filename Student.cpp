// Student.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"iostream"
using namespace std;
struct student
{
	char name[60];
	char num[20];
	int age;
	char sex;
	struct student * next;
};

int main()
{
	struct student *p,*q,*head;
	int s=1;
	head=NULL;
	while(cout<<"����(1) or ����(0) ?"<<endl,cin>>s,s==1)
	{
		p=new student;
		cout<<"���������� :   "<<endl;
		cin>>p->name;
		cout<<"������ѧ�� :   "<<endl;
		cin>>p->num;
		cout<<"���������� :   "<<endl;
		cin>>p->age;
		cout<<"�������Ա� :   "<<endl;
		cin>>p->sex;
		if(head==NULL)
		{
			head=p;
		}
		else
		{
			q->next=p;
		}
		q=p;
		p->next=NULL;	 
	}
	p=head;
	while(p!=NULL)
	{
		cout<<"����: "<<p->name<<endl;
		cout<<"ѧ��:"<<p->num <<endl;
		cout<<"����: "<<p->age <<endl;
		cout<<"�Ա�: "<<p->sex<<endl;
		p=p->next;
	}
	p=head;
	do
	{
		q=p->next;
		delete p;
		p=q;
	}while(q);
	return 0;
}



