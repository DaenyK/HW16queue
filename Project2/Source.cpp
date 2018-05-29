#include "queueArray.h"
#include "queueArray.cpp"

#include"queueList.h"
#include "queueList.cpp"

int main()
{
	setlocale(LC_ALL, "russian");
	short nz, answer;
	do
	{
		cout << "выберете задание:" << endl
			<< "1 - очередь с массивом" << endl
			<< "2 - очередь с листом" << endl
			<< "0 - для выхода\n";
		cin >> nz;
		system("cls");

		switch (nz)
		{

		case 1:
		{

			queueArray <int>mas;
			mas.push(1);
			mas.push(7);
			while (!mas.empty())
			{
				cout << mas.front() << endl;
				mas.pop();
			}


		}break;

		case 2:
		{
			queueList <int> mas;
			mas.push(1);
			mas.push(7);
			mas.push(88);
			while (!mas.empty())
			{
				cout << mas.front() << endl;
				mas.pop();
			}

		}break;

		}

		cout << endl;
		cout << "хотите продолжить?1/0 ";
		cin >> answer;
		system("cls");
	} while (answer != 0);


	system("pause");
	return 0;
}