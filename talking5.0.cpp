#include<iostream>
#include<cstdio>
#include<cstring>
#include<windows.h>
#include<cstdlib>
#include<fstream>
using namespace std;


string ml[100];
string mainin;
int noml;


void ml_set();
void do_first();
void user_set();
void login();
int find_time(int mlnum);
int shibie();
void do_ml(int mlnum);


int main()
{
	ml_set();
	do_first();
	login();
	system( "title talking" );
	system( "color 1f" );
	system( "mode con cols=100 lines=20" );
	cout<<"Welcome!\n";
	while(1)
	{
		Sleep(500);
		cout<<"我能为你做什么?\n";
		Sleep(200);
		cout<<"（抱歉你只能打英文了）\n";
		int mlma;
		getline(cin,mainin);
		system("cls");
		mlma=shibie();
		if(mlma==100) continue;
		if(mlma==1) break;
		cout<<ml[mlma];
		do_ml(mlma);
		system("pause");
		system("cls");
	}
	system("cls");
	system("pause");
	return 0;
}


void ml_set()
{
	cout<<"命令初始化中...\n";
	
	noml=7;
	ml[0]="surprise";
	ml[1]="close";
	ml[2]="shutdown";
	ml[3]="reboot";
	ml[4]="call";
	ml[5]="clock";
	ml[6]="remind";
		
	system("cls");
}
void user_set(){
	cout<<"欢迎使用 talking !\n";
	Sleep(500);
	cout<<"这是我们第一次遇见呢~\n";
	Sleep(500);
	cout<<"请设置:\n";
	Sleep(300);
	cout<<"（以下你输入的东西不能有空格哦）\n";
	Sleep(100);
	cout<<"账号:";
	string word;
	cin>>word;
	ofstream todata;
	todata.open("C:\\talking.txt",ios::out);
	todata<<43<<" "<<word<<" ";
	cout<<"密码:";
	cin>>word;
	todata<<word<<" ";
	todata.close();
	system("cls");
	return ;
}
void do_first(){
	ofstream odata;
	odata.open("C:\\talking.txt",ios::app);
	odata.close();
	ifstream idata;
	idata.open("C:\\talking.txt",ios::in);
	int u=0;
	idata>>u;
	idata.close();
	if(u!=43) user_set();
	return ;
}
void login(){
	cout<<"+----+\n|登录|\n+----+\n";
	Sleep(500);
	ifstream idata;
	idata.open("C:\\talking.txt",ios::in);
	int yyyy;
	idata>>yyyy;
	string in;
	string word;
	idata>>in;
	while(1)
	{
		cout<<"请输入:\n账号:";
		cin>>word;
		if(word==in) break;
		system("cls");
		cout<<"未找到账户，请重新输入!\n";
	}
	idata>>in;
	while(1)
	{
		cout<<"密码:";
		cin>>word;
		if(word==in) break;
		system("cls");
		cout<<"密码错误，请重新输入!\n";
	}
	system("cls");
	cin.ignore();
	return ;
}
int find_time(int mlnum){
	int mlle=ml[mlnum].length();
	int mainle=mainin.length();
	int ft=0,j=0;
	for(int i=0;i<mainle;i++)
	{
		if(mainin[i]==' ') continue;
		while(j<mlle)
		{
			if(ml[mlnum][j]!=mainin[i+j]) break;
			j++;
		}
		if(j==mlle/*&&mainin[i-1]==' '&&mainin[i+j]==' '*/) ft++;
		j=0;
	}
	return ft;
}
int shibie(){
	int max=0,num=100,oo;
	for(int i=0;i<noml;i++)
	{
		oo=find_time(i);
		if(oo>max)
		{
			max=oo;
			num=i;
		}
	}
	return num;
}
void do_ml(int mlnum)
{
	switch(mlnum)
	{
	case 0:
		for(int i=0;i<5;i++)
		{
			system( "mode con cols=20 lines=100" );
			system( "color 2f" );
			system( "color 3f" );
			system( "color 4f" );
			system( "color 5f" );
			system( "color 6f" );
			system( "color 8f" );
			system( "color 9f" );
			system( "mode con cols=100 lines=20" );
			system( "color 0f" );
			system( "color af" );
			system( "color bf" );
			system( "color cf" );
			system( "color df" );
			system( "color ef" );
			system( "color 1f" );
		}
		break;
	case 2:
		system("shutdown -s");
		break;
	case 3:
		system("shutdown -r");
		break;
	case 4:
	case 5:
	case 6:
		cout<<"我要在多久之后提醒你?\nAfter * minutes.\n";
		cout<<"      ┻━━>";
		int minu;
		cin>>minu;
		cin.ignore();
		for(int i=0;i<minu;i++)
			for(int j=0;j<60;j++)
				Sleep(1000);
		do_ml(0);
		cout<<"时间到！！！\n";
		
	}
	return ;
}
