#include"composite.h"
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{



	Leaf* cehua = new Leaf("�߻�");
	Leaf* xingdong = new Leaf("�ж�");
	Leaf* wenyuan = new Leaf("��Ա");
	Leaf* licai = new Leaf("���");
	Composite* xiangmuzu = new Composite("��Ŀ��");
	Composite* xingzhengbu = new Composite("������");
	Composite* caizhengbu = new Composite("������");
	Composite* kuaijibu = new Composite("��Ʋ�");
	Composite* gongsi = new Composite("��˾");



	gongsi->Add(xiangmuzu);
	gongsi->Add(xingzhengbu);
	gongsi->Add(caizhengbu);
	xiangmuzu->Add(cehua);
	xiangmuzu->Add(xingdong);
	xingzhengbu->Add(wenyuan);
	caizhengbu->Add(kuaijibu);
	kuaijibu->Add(licai);



	gongsi->Operation(1);
	system("pause");
}	
