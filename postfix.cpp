#include <iostream>
#include <string.h>
using namespace std;
int st[20];
int top = -1;
void push(char x){
	a[++top]=x
}
void pop(){
	if(top == -1)
		return -1;
	else
		return a[top++];

}
void priority(){
	if (x =="(" )
		return 0;
	if (x=="+" || x == "-")
		return 1;
	if (x == "*" || x == "\\")
		return 2;

}
int main(){
	char stt[20];
	int n= strlen(stt);
	char ch;
	cout << "please enter expression \n";
	cin >> stt;
	
	for (i = 0; i < n; i++){
	ch = stt[i];
	if (isalnum(ch))
		cout << ch;
	else if (ch == "(")
		push (ch);	

	else if ( ch==")")
	{
		while ((x=pop()) !=")")
		{cout << x;
		}
	}
	else {
		while (priority(a[top] >= priority(ch)))
				{
				cout << pop();
				push (ch);
				}
	}
	while (top != -1)
	{
		cout << pop();
	}
	}
}

