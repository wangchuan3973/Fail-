#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;
int main(void) {
	string name;
	string pwd;
	cout << "�������˺�:";
	cin >> name;
	cout << "����������:";
	cin >> pwd;

	//Ȩ���ж�
	if (name == "2806645282"&&pwd == "wczb.2580") {
		cout << "1.��վ404����" << endl;
		cout << "2.��վ�۸Ĺ���" << endl;
		cout << "3.��վ������¼" << endl;
		cout << "4.DNS����" << endl;
		cout << "5.��������������" << endl;
		cout << "6.�˳�" << endl;
	}
	else{
		cout << endl;
		cout << "�˺Ż��������������"<<endl;
		cout << endl;
		cout << endl;
	}
	system("pause");
	return 0;
}