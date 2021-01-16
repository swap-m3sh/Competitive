#include<bits/stdc++.h>
#define ll long long 
#define SPEED ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

void subs(string s,string a)
{
	if(s.size()==0)
	{
		cout <<a<<endl;
		return;
	}
	char ch=s[0];
	string ros=s.substr(1);
	
	subs(ros,a);// not include any character 
	subs(ros,a+ch);// including character  
}
int main()
{
	string s;
	cin >> s;
	subs(s,"");//taking a string and blank space as its also a subset;
}


