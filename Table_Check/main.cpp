#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	srand(time(NULL));

	int difficulti, num_min, num_max, qestions, num1, num2, user_answer, mark = 0, exit_choice;

	cout << endl;
	while (true)
	{
		cout << "Проверка знаний таблицы умножения" << endl;

		cout << "1.Легко" << endl;
		cout << "2.Нормально" << endl;
		cout << "3.Сложно" << endl;

		cout << "Выберите уровень сложности: ";
		cin >> difficulti;

		switch (difficulti)
		{
		case 1:
			num_min = 0;
			num_max = 5;
			qestions = 5;
			break;
		case 2:
			num_min = 3;
			num_max = 7;
			qestions = 10;
			break;
		case 3:
			num_min = 6;
			num_max = 10;
			qestions = 15;
			break;
		default:
			cout << "Выбрана неверная сложность. Выберите ещё раз." << endl;
			cout << endl;
			continue;
			break;
		}
		for (int qestion = 1; qestion <= qestions; qestion++)
		{
			cout << "Вопрос " << qestion << " / " << qestions << endl;

			num1 = num_min + rand() % num_max;
			num2 = num_min + rand() % num_max;

			cout << num1 << " * " << num2 << " = ";
			cin >> user_answer;

			if (user_answer == num1 * num2) { mark++; }
		}
		cout << "Ваша оценка: " << mark << " / " << qestions << endl;

		cout << "Нажмите 0 чтобы повторить" << endl;
		cout << "Нажмите любую клавишу чтобы выйти" << endl;
		cin >> exit_choice;

		if (exit_choice != 0) { break; }
	}
	
	system("pause");
	return 0;
}