1.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<iostream>
using namespace std;
#define maxlen 1000
typedef  struct Stack {
	int top;
	int elem[maxlen];
}SqStack;
int StackInit(SqStack* s)
{
	s->top = -1;
	return 1;
}
int StackEmpty(SqStack* s)
{
	if (s->top == -1)
		return 1;
	else
		return 0;
}
int GetTop(SqStack* s, int* e) {
	if (StackEmpty(s))
		return 0;
	*e = s->elem[s->top];
	return 1;
}
int Push(SqStack* s, int  e) {
	if (s->top == maxlen - 1)
		return 0;
	else
	{
		s->top++;
		s->elem[s->top] = e;
		return 1;
	}
}int Pop(SqStack* s, int* e)
{
	if (StackEmpty(s))
		return 0;
	else
	{
		*e = s->elem[s->top];
		s->top--;
		return 1;
	}
}
int Size(SqStack* s) {
	return (s->top) + 1;
}
int main() {
	int m;
	SqStack s;
	StackInit(&s);
	while (cin >> m) {
		if (m != 0) {
			Push(&s, m);
		}
		else
			break;
	}
	while (!StackEmpty(&s)) {
		int n;
		Pop(&s, &n);
		cout << n<<' ';
	}
	return 0;
}



2.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<iostream>
using namespace std;
#define maxlen 1000
typedef  struct Stack {
	int top;
	char elem[maxlen];
}SqStack;
int StackInit(SqStack* s)
{
	s->top = -1;
	return 1;
}
int StackEmpty(SqStack* s)
{
	if (s->top == -1)
		return 1;
	else
		return 0;
}
int GetTop(SqStack* s, char* e) {
	if (StackEmpty(s))
		return 0;
	*e = s->elem[s->top];
	return 1;
}
int Push(SqStack* s, char  e) {
	if (s->top == maxlen - 1)
		return 0;
	else
	{
		s->top++;
		s->elem[s->top] = e;
		return 1;
	}
}int Pop(SqStack* s,char* e)
{
	if (StackEmpty(s))
		return 0;
	else
	{
		*e = s->elem[s->top];
		s->top--;
		return 1;
	}
}
int Size(SqStack* s) {
	return (s->top) + 1;
}
int main() {
	bool flag = true;
	char m;
	int n=0;
	int max = 0;
	SqStack s;
	StackInit(&s);
	while (cin >> m) {
		if (m == '(') {
			Push(&s, m);
			n++;
		}
			
		if (m == ')') {
			if (StackEmpty(&s)) {
				flag = false;
			}
			else {
				char x;
				Pop(&s, &x);
				n--;

			}
			
		}
		if (n > max)
			max = n;
	}
	if (StackEmpty(&s)&&flag)
		cout << max;
	else
		cout << "-1";
	return 0;
	
}


3.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<iostream>
using namespace std;
#define maxlen 1000
typedef  struct Stack {
	int top;
	char elem[maxlen];
}SqStack;
int StackInit(SqStack* s)
{
	s->top = -1;
	return 1;
}
int StackEmpty(SqStack* s)
{
	if (s->top == -1)
		return 1;
	else
		return 0;
}
int GetTop(SqStack* s, char* e) {
	if (StackEmpty(s))
		return 0;
	*e = s->elem[s->top];
	return 1;
}
int Push(SqStack* s, char  e) {
	if (s->top == maxlen - 1)
		return 0;
	else
	{
		s->top++;
		s->elem[s->top] = e;
		return 1;
	}
}int Pop(SqStack* s, char* e)
{
	if (StackEmpty(s))
		return 0;
	else
	{
		*e = s->elem[s->top];
		s->top--;
		return 1;
	}
}
int Size(SqStack* s) {
	return (s->top) + 1;
}
int main() {
	char m;
	bool flag = true;
	SqStack s1;
	StackInit(&s1);
	while (cin >> m) {

			if (m == '(' || m == '[' || m == '{') {
				Push(&s1, m);
			}

			if (m == ')') {
				if (StackEmpty(&s1))
					flag = false;
				else {
					char x;
					char x2;
					GetTop(&s1, &x2);
					if (x2 == '(')
						Pop(&s1, &x);

				}

			}

			if (m == ']') {
				if (StackEmpty(&s1))
					flag = false;
				else {
					char x;
					char x2;
					GetTop(&s1, &x2);
					if (x2 == '[')
						Pop(&s1, &x);
				}
			}

			if (m == '}') {
				if(StackEmpty(&s1))
					flag = false;
				else {
					char x;
					char x2;
					GetTop(&s1, &x2);
					if (x2 == '{')
						Pop(&s1, &x);
				}
			}
	}
	if (StackEmpty(&s1)&&flag)
		cout << "true";
	else
		cout << "false";
	
	return 0;

}

4.
#include<iostream>
using namespace std;
enum tower { A = 'X', B = 'Y', C = 'Z' };
void Move(int n, tower x, tower y)
{
	cout << "move No." << n << " plant from " << char(x) << " to " << char(y) << endl;
}
void Hanoi(int n, tower x, tower y, tower z)
{
	if (n) {
		Hanoi(n - 1, x, z, y);
		Move(n, x, z);
		Hanoi(n - 1, y, x, z);
	}
}
int  main()
{
	int n;
	cin >> n;
	Hanoi(n, A, B, C);
	return 0;
}
