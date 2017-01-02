#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Secretary;

class Observer
{
private:
	string name;
	Secretary* sub;
public:
	Observer(string strname, Secretary* strsub)
	{
		name = strname;
		sub = strsub;
	}

	void Update();
};


class Secretary
{
private:
	vector<Observer> observers;
public:
	string action;
	void Add(Observer ob)
	{
		observers.push_back(ob);
	}

	void Notify()
	{
		vector<Observer>::iterator p = observers.begin();

		while (p != observers.end())
		{
			(*p).Update();
			p++;
		}
	}
};

void Observer::Update()
{
	cout << name << ":" << sub->action << "���Ͽ���" << endl;
}


int main()
{
	Secretary* p = new Secretary();

	Observer* s1 = new Observer("С��", p);
	Observer* s2 = new Observer("С��", p);


	p->Add(*s1);
	p->Add(*s2);


	p->action = "������";

	p->Notify();

	getchar();

	return 0;
}