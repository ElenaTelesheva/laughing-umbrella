#include "student.h"

#define AMOUNT_OF_STUDENTS 100


int main(void) {
	setlocale(LC_ALL, "Russian");

	Student group[AMOUNT_OF_STUDENTS];
	
	int amount = 0, work;

	cout << "�������� ����:\n 1- � ����������\n 2- ������\n 3- �� �����\n";
	cin >> work;
	switch(work)
	{
	case 1:amount = doInput(group); break;
	case 2:amount = random(group); break;
	case 3:amount = filevvod(group); break;
	default:
	{
		cout << "������ ����� " << endl;
		system("pause");
		return 0;
	}
	}
	
	
	doOutput(group, amount);

	system("pause");
	return 0;
}