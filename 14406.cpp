#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	if (str == "��.��.��")
		cout << "�� ����Ұ�, �� ������, �� ����.";
	else if (str == "��.��.��")
		cout << "����� ������ ������";
	else if (str == "��.ȭ.��")
		cout << "���ݺ��� ȭ������";
	else if (str == "��.��.��")
		cout << "����ְ� �ǰ��ϰ�, �ູ�ϸ� ����";
	else if (str == "��.¡.��")
		cout << "�������� ¡�׷��� ��︮��";
	else if (str == "��.��.ȭ")
		cout << "�ذ� ������ ����ϰ� ȭ���ϰ�";
	else if (str == "��.��.��")
		cout << "����ϰ� �Ƹ��ٿ� �̷��� ���Ͽ�";
	else if (str == "��.��.��")
		cout << "����ְ� �����ְ� ���������� ����";
	else if (str == "��.��.��")
		cout << "������� �� ���� �� ����";
	else if (str == "��.��.��")
		cout << "�����ǽ��� ���� �������� ���߰� �ڽ��ְ� ����";
	else if (str == "��.��.��")
		cout << "����, ����, �ڽ��� ������ ���Ͽ�";
	else if (str == "��.��.��")
		cout << "�̷� ��ȸ�� ���� ������";
	else if (str == "û.��.��")
		cout << "û���� �ٷ� ���ݺ���";
}