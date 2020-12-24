/*用c++完成加减乘除运算*/
#include<iostream>
#include<cmath>
using namespace std;
 int jiafa(){
	int a[20];
	int m,p,sum=0;
	cout<<"输入个数m= ?"<<endl;
	cin>>m;
	cout<<endl<<"这m个数分别是"<<endl;
	for(p=0;p<m;++p){
		cin>>a[p];
		sum+=a[p];
	}
	cout<<"结果是 "<<sum;
}
int jianfa()
{
	int a[20];
	int m,p,sum=0;
	cout<<"输入个数m= ?"<<endl;
	cin>>m;
	cout<<endl<<"这m个数分别是"<<endl;
	cin>>a[0];
	sum=a[0];
	for(p=1;p<m;++p){
		cin>>a[p];
		sum-=a[p];
	}
	cout<<"结果是 "<<sum;
}
int chengfa(){
	int a[20];
	int m,p,sum=0;
	cout<<"输入个数m= ?"<<endl;
	cin>>m;
	cout<<endl<<"这m个数分别是"<<endl;
	cin>>a[0];
	sum=a[0];
	for(p=1;p<m;++p){
		cin>>a[p];
		sum*=a[p];
	}
	cout<<"结果是 "<<sum;
}

int kaifang(){
	int m,p;
	cout<<"输入1个数m= ?"<<endl;
	cin>>m;
	p=sqrt(m);
	cout<<"结果是 "<<p;
	
}

int main()
{
	int n,q;
	
	while(1){
	cout<<"选择你要进行的运算"<<endl;
	cout<<"1.加法  2.减法  3.乘法  4.开方"<<endl; 
	cin>>n;
	switch(n)
	{
		case 1:jiafa(); break;
		case 2:jianfa();break;
		case 3:chengfa();break;
		case 4:kaifang();break;
	}
	cout<<endl;
	cout<<"1.继续 2.关闭"<<endl;
	cin>>q;
	if(q==2) break;
	}
	return 0;
}
