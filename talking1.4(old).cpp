/**********************************************************头文件*/
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<windows.h>
#include<cstdlib>
using namespace std;
/**********************************************************全局变量定义*/
string setname="",setword="";
string a="",b="";
bool setgo=0;
/**********************************************************函数原型*/
void set();
void talk();
void sur();
void math();
/**********************************************************主函数（登录部分）*/
int main()
{
	long long c;
	short yonghu;
	while(1)
	{
		printf("Please key in the user name and the pass word!\n");
		getline(cin,a);
		getline(cin,b);
		if(a=="Sunny's friend"&&b=="e~woshishenjingbing")
		{
			yonghu=1;
			break;
		}
		if(a=="Sunny_John"&&b=="zhongche2006")
		{
			yonghu=0;
			break;
		}
		if(a=="Zhu Siyu"&&b=="1234567890")
		{
			yonghu=3;
			break;
		}
		if(a=="set"&&b=="123456")
			set();
		if(setgo==1&&a==setname&&b==setword)
		{
			yonghu=2;
			break;
		}
	}/**********************************************************主函数（工作部分）*/
	system("cls");
	system( "title talking_1.4" );
	system( "color 8f" );
	system( "mode con cols=100 lines=20" );
	printf("Welcome.\n");
	while(1)
	{
		printf("Can I help you please?\n");
		getline(cin,a);
		if(a=="no") 
		{
			system("cls");
			printf("Oh,ok.\nSee you!\n");
			break;
		}
		if(a=="close") system ("shutdown -s -t 1");
		if(a=="reboot") system( "shutdown -r -t 0" );
		if(a=="time") system("time");
		if(a=="talk") talk();
		if(a=="Who am I?") 
		{
			if(yonghu==3) printf("Zhu Siyu.\n");
			if(yonghu==0) printf("My owner\n");
			if(yonghu==1) printf("Sunny's friend\n");
			if(yonghu==2) printf("New user\n");
		}
		if(a=="surprise") sur();
		if(a=="math") math(); 
	}
	system("pause");
	return 0;
}
/**********************************************************定义新用户函数*/
void set()
{
	system("cls");
	if(setgo==1)
	    printf("You can only define one user!\n");
	else
	{
	printf("Please key in the new user name and the new pass word!\n");
	getline(cin,setname);
	getline(cin,setword);
    }
	setgo=1;
}
/**********************************************************聊天函数*/
void talk()
{
	system("cls");
	printf("Ok,let's talk!(〃'▽'〃)\n");
	system("pause");
	printf("What do you want to talk to me?\n");
	printf("此模块正在开发中，请耐心等待！\n");
}
/**********************************************************惊喜函数*/
void sur()
{
	system("cls");
	for(int i=0;i<5;i++)
	{
		system( "color 1f" );
		system( "color 2f" );
		system( "color 3f" );
		system( "color 4f" );
		system( "color 5f" );
		system( "color 6f" );
		system( "color 8f" );
		system( "color 9f" );
		system( "color 0f" );
		system( "color af" );
		system( "color bf" );
		system( "color cf" );
		system( "color df" );
		system( "color ef" );
	}
	system( "color 8f" );
}
/**********************************************************数学函数及其子函数*/
void math()
{
	system("cls");
	printf("Ok,let's do math!(〃'▽'〃)\nWhat do you want to do?\n");
	getline(cin,b);
	if(b=="zdgys") ;
}
