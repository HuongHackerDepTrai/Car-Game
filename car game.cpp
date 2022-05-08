	#include <iostream>
	#include <conio.h>
	#include <time.h>
	#include <math.h>
	#include <dos.h> 
	#include <windows.h>
	using namespace std;
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD CursorPosition;
	int enemyY[3];
	int enemyX[3];
	int enemyFlag[3];
	void gotoxy(int x, int y){
		CursorPosition.X = x;
		CursorPosition.Y = y;
		SetConsoleCursorPosition(console, CursorPosition);
	}
	void NormalMath(){
		system("cls");
		double so[255],kq=0;
		gotoxy(0,5);cout<<"±--±--±--±--±--±--±--±--±--±--±--±";
		char dau,daut='+';int n=0;
		gotoxy(40,1);cout<<"    _";
		gotoxy(40,2);cout<<"V: Vx";
		gotoxy(40,3);cout<<"^: x^?";
		gotoxy(40,4);cout<<"C: cos(x)";
		gotoxy(40,5);cout<<"S: sin(x)";
		gotoxy(40,6);cout<<"T: tan(x)";
		gotoxy(40,7);cout<<"L: log(x)";
		gotoxy(3,1);cout<<"X [1] = ";cin>>so[0];kq=so[0];
		for(int i=1;i<255;i++)
		{
			gotoxy(3,2);cout<<"     ";
			gotoxy(3,2);cin>>dau;
			if(dau=='+')
			{
				gotoxy(3,1);cout<<"               ";
				gotoxy(3,1);cout<<"X ["<<i+1<<"] = ";cin>>so[i];
				kq=kq+so[i];
			}
			else if(dau=='-')
			{
				gotoxy(3,1);cout<<"               ";
				gotoxy(3,1);cout<<"X ["<<i+1<<"] = ";cin>>so[i];
				kq=kq-so[i];
			}
			else if(dau=='*')
			{
				gotoxy(3,1);cout<<"               ";
				gotoxy(3,1);cout<<"X ["<<i+1<<"] = ";cin>>so[i];
				kq=kq*so[i];
			}
			else if(dau=='/')
			{
				gotoxy(3,1);cout<<"               ";
				gotoxy(3,1);cout<<"X ["<<i+1<<"] = ";cin>>so[i];
				kq=kq/so[i];
			}
			else if(dau=='^')
			{
				int somu;
				gotoxy(3,3);cin>>somu;i--;
				gotoxy(3,3);cout<<" ";
				if(daut=='+')kq=kq-so[i];
				else if(daut=='-')kq=kq+so[i];
				else if(daut=='*')kq=kq/so[i];
				else if(daut=='/')kq=kq*so[i];
				so[i]=pow(so[i],somu);
				if(daut=='+')kq=kq+so[i];
				else if(daut=='-')kq=kq-so[i];
				else if(daut=='*')kq=kq*so[i];
				else if(daut=='/')kq=kq/so[i];
			}
			else if(dau=='V')
			{
				i--;
				if(daut=='+')kq=kq-so[i];
				else if(daut=='-')kq=kq+so[i];
				else if(daut=='*')kq=kq/so[i];
				else if(daut=='/')kq=kq*so[i];
				so[i]=sqrt(so[i]);
				if(daut=='+')kq=kq+so[i];
				else if(daut=='-')kq=kq-so[i];
				else if(daut=='*')kq=kq*so[i];
				else if(daut=='/')kq=kq/so[i];
			}
			else if(dau=='L'||dau=='L')
			{
				i--;
				if(daut=='+')kq=kq-so[i];
				else if(daut=='-')kq=kq+so[i];
				else if(daut=='*')kq=kq/so[i];
				else if(daut=='/')kq=kq*so[i];
				so[i]=log(so[i]);
				if(daut=='+')kq=kq+so[i];
				else if(daut=='-')kq=kq-so[i];
				else if(daut=='*')kq=kq*so[i];
				else if(daut=='/')kq=kq/so[i];
			}
			else if(dau=='C'||dau=='c')
			{
				i--;
				if(daut=='+')kq=kq-so[i];
				else if(daut=='-')kq=kq+so[i];
				else if(daut=='*')kq=kq/so[i];
				else if(daut=='/')kq=kq*so[i];
				so[i]=cos(so[i]);
				if(daut=='+')kq=kq+so[i];
				else if(daut=='-')kq=kq-so[i];
				else if(daut=='*')kq=kq*so[i];
				else if(daut=='/')kq=kq/so[i];
			}
			else if(dau=='S'||dau=='s')
			{
				i--;
				if(daut=='+')kq=kq-so[i];
				else if(daut=='-')kq=kq+so[i];
				else if(daut=='*')kq=kq/so[i];
				else if(daut=='/')kq=kq*so[i];
				so[i]=sin(so[i]);
				if(daut=='+')kq=kq+so[i];
				else if(daut=='-')kq=kq-so[i];
				else if(daut=='*')kq=kq*so[i];
				else if(daut=='/')kq=kq/so[i];
			}
			else if(dau=='T'||dau=='t')
			{
				i--;
				if(daut=='+')kq=kq-so[i];
				else if(daut=='-')kq=kq+so[i];
				else if(daut=='*')kq=kq/so[i];
				else if(daut=='/')kq=kq*so[i];
				so[i]=cos(so[i]);
				if(daut=='+')kq=kq+so[i];
				else if(daut=='-')kq=kq-so[i];
				else if(daut=='*')kq=kq*so[i];
				else if(daut=='/')kq=kq/so[i];
			}
			else if(dau=='='){
				gotoxy(5,2);cout<<kq;
				getche();
				break;
			}
			daut=dau;
		}
	}
	void TTPhanSo(){	
		system("cls");
		double tu[255],mau[255],kq=0;
		int n=2;char dau;
		gotoxy(n,3);cout<<"-----";
		gotoxy(n,2);cin>>tu[0];
		gotoxy(n,4);cin>>mau[0];
		double TT=tu[0],TM=mau[0];
		for(int i=1;i<255;i++)
		{
			gotoxy(n+(i)*8-2,3);dau=getche();
			if(dau=='+'){
				gotoxy(n+i*8,3);cout<<"-----";
				gotoxy(n+i*8,2);cin>>tu[i];
				gotoxy(n+i*8,4);cin>>mau[i];
				TT=TT*mau[i]+tu[i]*TM;
				TM=TM*mau[i];
			}
			else if(dau=='-'){
				gotoxy(n+i*8,3);cout<<"-----";
				gotoxy(n+i*8,2);cin>>tu[i];
				gotoxy(n+i*8,4);cin>>mau[i];
				TT=TT*mau[i]-tu[i]*TM;
				TM=TM*mau[i];
			}
			else if(dau=='*'){
				gotoxy(n+i*8,3);cout<<"-----";
				gotoxy(n+i*8,2);cin>>tu[i];
				gotoxy(n+i*8,4);cin>>mau[i];
				TT=TT*tu[i];
				TM=TM*mau[i];
			}
			else if(dau=='/'){
				gotoxy(n+i*8,3);cout<<"-----";
				gotoxy(n+i*8,2);cin>>tu[i];
				gotoxy(n+i*8,4);cin>>mau[i];
				TT=TT*mau[i];
				TM=TM*tu[i];
			}
			else if(dau=='=')
			{
				gotoxy(n+i*8,3);cout<<"-----";
				gotoxy(n+i*8,2);cout<<TT;
				gotoxy(n+i*8,4);cout<<TM;
				getche();
				break;
			}
		}
	}
	void RutGon(){
		system("cls");
		int tu,mau;
		gotoxy(2,3);cout<<"-----";
		gotoxy(2,2);cin>>tu;
		gotoxy(2,4);cin>>mau;
		gotoxy(8,3);cout<<"= -----";
		for(int i=(tu+mau)/2;i>=0;i--)
		{
			if(tu%i==0&&mau%i==0){tu=tu/i;mau=mau/i;break;}
		}
		gotoxy(10,2);cout<<tu;
		gotoxy(10,4);cout<<mau;
		getche();
	}
	void MHPS(){
		while(1)
		{
			system("cls");
			gotoxy(3,3);cout<<"--------------";
			gotoxy(3,4);cout<<"| CALCULATOR |";
			gotoxy(3,5);cout<<"--------------";
			gotoxy(2,7);cout<<"1. Calculate";
			gotoxy(2,8);cout<<"2. Compact";
			char a=getche();
			if(a=='1')TTPhanSo();
			else if(a=='2')RutGon();
			else if(a==27)break;
		}
	}
	void Math(){
		do
		{
			system("cls");
			gotoxy(3,3);cout<<"--------------";
			gotoxy(3,4);cout<<"| CALCULATOR |";
			gotoxy(3,5);cout<<"--------------";
			gotoxy(2,7);cout<<"1. Real number";
			gotoxy(2,8);cout<<"2. Fraction";
			char a=getche();
			if(a=='1') NormalMath();
			else if(a=='2') MHPS();
			else if(a==27)break;
		}while(1);
	}
	void PhuongTrinhBac2(){
		system("cls");
	    double a,b,c,delta,kq;
	    cout<<"Import a: ";cin>>a;
	    cout<<"Import b: ";cin>>b;
	    cout<<"Import c: ";cin>>c;
	    delta=pow(b,2)-(2*a*c);
	    cout<<"Delta = b  - 4ac = "<<delta<<endl;
	    if(a==0)cout<<"The equation has a solution: x = "<<-c/b;
	    else
	    {
	        cout<<"         2\n";
	        cout<<"  2                2\n";
	        cout<<"ax  + bx + c = "<<a<<"x   ";
	        if(b<0)cout<<"- "<<abs(b)<<"x ";
	        else cout<<"+ "<<b<<"x ";
	        if(c<0)cout<<"- "<<c<<endl;
	        else cout<<"+ "<<c<<endl;
	        if(delta<0)      cout<<"The equation has no solution\n";
	        else if(delta==0)cout<<"Equation with double roots: x1 = x2 = "<<-b/(2*a)<<endl;
	        else
	        {
	            cout<<"The equation has 2 distinct solutions:\n";
	            cout<<"x1 = "<<((-b)+sqrt(delta))/(2*a)<<endl;
	            cout<<"x2 = "<<((-b)-sqrt(delta))/(2*a)<<endl;
	        }
	    }
	    getche();
	}
	int main(){
		do
		{
			system("cls");
			gotoxy(3,3);cout<<"--------------";
			gotoxy(3,4);cout<<"| CALCULATOR |";
			gotoxy(3,5);cout<<"--------------";
			gotoxy(2,7);cout<<"1. Normal calculate";
			gotoxy(2,8);cout<<"2. Equation";
			gotoxy(2,9);cout<<"3. Code";
			gotoxy(2,10);cout<<"4. Exit";
			char a=getche();
			if(a=='1') Math();
			else if(a=='2') PhuongTrinhBac2();
			else if(a=='3'){
				system("cls");
				gotoxy(4,3);cout<<"Copy link";
				gotoxy(8,4);cout<<"|";
				gotoxy(8,5);cout<<"|";
				gotoxy(8,6);cout<<"|";
				gotoxy(8,7);cout<<"V";
				gotoxy(1,8);cout<<"https://github.com/HuongHackerDepTrai/HuongHackerDepTrai/blob/main/main.cpp";
				gotoxy(4,9);cout<<"App: DEV C/C++";
				gotoxy(4,10);cout<<"Language: C++";
				getche();
			}
			else if(a=='4'||a==27)exit(1);
		}while(1);
	    return 0;
	}
