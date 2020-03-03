#include "student.h"

#define NAME_OF_STUDENTS 20

int doInput(Student* group)
{
	int amount = 0;
	cout << "������� ���������� ���������: ";
	do {
		cin >> amount;
		if (amount <= 0)
			cout << "��� ���� ���((" << endl;
	} while (amount <= 0);

	for (int i = 0; i < amount; i++)
	{
		cout << "������� ��� " << i + 1 << " �������" << endl;
		cout << "��� ��������  ";
		cin >> group[i].name;
		do {
			cout << "������ �� ����������   ";
			cin >> group[i].math;
		} while (group[i].math < 2 || group[i].math>5);
		do {
			cout << "������ �� ������   ";
			cin >> group[i].phys;
		} while (group[i].phys < 2 || group[i].phys>5);
		do {
			cout << "������ �� �����������   ";
			cin >> group[i].comp;
		} while (group[i].comp < 2 || group[i].comp>5);

		
	}
	return amount;
}

int GetRandomName()
{
	return rand() % NAME_OF_STUDENTS;
}

int GetRandomMark()
{
	return rand() % 4 + 2;
	//return rand()% (5 - 2 + 1) + 2;
}

int random(Student* group)
{
	string names[NAME_OF_STUDENTS] = { "�����","������","���������","������","����","�������","�����","����","�����","����","�������","�������","����������","���������","������","������","������","����","������","��������" };
	int amount = 0;
	cout << "������� ���������� ���������: ";
	do {
		cin >> amount;
		if (amount <= 0)
			cout << "������������ ���� ������" << endl;
	} while (amount <= 0);


	for (int i = 0; i < amount; i++)
	{
		group[i].name = names[GetRandomName()];
		group[i].math = GetRandomMark();
		group[i].phys = GetRandomMark();
		group[i].comp = GetRandomMark();
		cout << group[i].name << "   "<< group[i].math << "  " << group[i].phys << "  " << group[i].comp << endl;
	}

	return amount;
}

int filevvod(Student* group)
{

	int amount = 0;
	ifstream file_in("1.txt", ios::binary | ios::in);

	if (!file_in.is_open())
	{
		cout << "������ �������� �����" << endl;
	}
	else

	{
		for (int i = 0; ; i++)
		{
			if (file_in.eof())
			{
				cout << "����� ���������:  " << i << endl; //-1
				amount = i;
				file_in.close();
				break;

			}
			else
			{
				
				file_in >> group[i].name >> group[i].math >> group[i].phys >> group[i].comp;
			}
		}
		

	}
		for (int i = 0; i < amount; i++)
		{
			cout << group[i].name << "   " << group[i].math << "  " << group[i].phys << "  " << group[i].comp << endl;
		}

	return amount;
}

//int vvod_cu(Student* group)
//{
//	FILE* fl;
//	fl = fopen("1.txt", "r");
//	int amount = 0;
//
//	if (fl != NULL)  //���� ���� ���������� 
//	{
//		for (int i = 0; ; i++)
//		{
//			if (feof(fl))  //���� ����� �����
//			{
//				printf("����� ������� %d ���������:\n", i - 1);
//				amount = i; //������� ���� ������� �� ����
//				fclose(fl);
//				break;
//			}
//			else   //���� �� �����
//			{
//				fgets_s(fl, "%s", group[i].name);
//				fscanf_s(fl, "%d", group[i].math);
//				fscanf_s(fl, "%d", group[i].phys);
//				fscanf_s(fl, "%d", group[i].comp);
//			}
//		}
//	}
//	else
	/*{
		cout << "������" << endl;
	}

	return amount;
	
}*/

void doOutput(const Student* group, int amount)
{
	int counter = 0;
	cout << endl; //����� �����

	for (int i = 0; i < amount; i++)
	{
		if (group[i].math == 5 && group[i].phys == 5 && group[i].comp == 5)
		{
			counter++;
			cout <<"������ ��������� �����  "<< group[i].name << endl;
			/*cout << group[i].math << endl;
			cout << group[i].phys << endl;
			cout << group[i].comp << endl;*/
			cout << endl;
		}
	}
	cout << "���������� ����������:  " << counter << endl;
}