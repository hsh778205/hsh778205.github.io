#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<map>
#include<set>
#include<queue>
#include<vector>
#define IL inline
#define re register
#define LL long long
using namespace std;

void zero(int i)
{
	cout<<0;
	if(i<10) cout<<0;
	if(i<100) cout<<0;
	cout<<i;
}

int main()
{
	freopen("noname.txt","w",stdout);
	for(int i=1;i<43;i++)
	cout<<"<p><img src=\"",zero(i),cout<<".jpg\" alt=\"",zero(i),cout<<"\" /></p>"<<endl;
	return 0;
}

