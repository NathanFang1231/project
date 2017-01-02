#include"composite.h"
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{



	Leaf* cehua = new Leaf("策划");
	Leaf* xingdong = new Leaf("行动");
	Leaf* wenyuan = new Leaf("文员");
	Leaf* licai = new Leaf("理财");
	Composite* xiangmuzu = new Composite("项目组");
	Composite* xingzhengbu = new Composite("行政部");
	Composite* caizhengbu = new Composite("财政部");
	Composite* kuaijibu = new Composite("会计部");
	Composite* gongsi = new Composite("公司");



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
