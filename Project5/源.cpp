#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;
int main(void) {
	string name;
	string pwd;
	cout << "ÇëÊäÈëÕËºÅ:";
	cin >> name;
	cout << "ÇëÊäÈëÃÜÂë:";
	cin >> pwd;

	//È¨ÏÞÅÐ¶Ï
	if (name == "2806645282"&&pwd == "wczb.2580") {
		cout << "1.ÍøÕ¾404¹¥»÷" << endl;
		cout << "2.ÍøÕ¾´Û¸Ä¹¥»÷" << endl;
		cout << "3.ÍøÕ¾¹¥»÷¼ÇÂ¼" << endl;
		cout << "4.DNS¹¥»÷" << endl;
		cout << "5.·þÎñÆ÷ÖØÆô¹¥»÷" << endl;
		cout << "6.ÍË³ö" << endl;
	}
	else{
		cout << endl;
		cout << "ÕËºÅ»òÃÜÂë´íÎóÇëÖØÊÔ"<<endl;
		cout << endl;
		cout << endl;
	}
	system("pause");
	return 0;
}