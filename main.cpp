#include<iostream>
#include"undoredo.h"
using namespace std;
void main()
{  
	Operation *p = new Operation();
	string str;
	while (cin >> str) {
	if (str == "redo")
	{
	p->Redo();
	}
	else if (str=="undo")
	{
	p->Undo();
	}
	else
	{
	p->AddText(new NewText(str));
	}

	}

	while (1);
}