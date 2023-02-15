#include <iostream>
#include <windows.h>

using namespace std;

//ЗАДАНИЕ 2
//Написать игру «Кубики».Пользователь и компьютер по очереди бросают 2 кубика.
//Победитель — тот, у кого по результатам трех бросков сумма больше.Предусмотреть красивый
//интерфейс игры.

int main()
{
    setlocale(LC_ALL, "rus");

	int command, commandGame;
	int sumCompPoint = 0, sumPlayerPoint = 0;
	int compPoint1, playerPoint1, compPoint2, playerPoint2;
	bool menu1;

	srand((unsigned) time(NULL));

    cout << "----------Кубики----------\n\n";

	while (true)
	{
		cout << "Меню.\n";
		cout << "1 -> Начать игру\n";
		cout << "0 -> Выйти из игры\n";
		cout << "Выберите действие: "; cin >> command;
		cout << "\n";

		switch (command)
		{
		case 0:
			cout << "\n\n----------До скорого!----------\n\n";
			return 0;
			break;
		case 1:
			menu1 = true;

			while (menu1)
			{
				cout << "Введи 1 чтобы кинуть кубики\n";
				cout << "Введит 0 чтобы выйти в меню\n";
				cout << "Команда: "; cin >> commandGame;
				cout << "\n";

				switch (commandGame)
				{
				case 0:
					cout << "Ок\n\n";
					break;

				case 1:
					cout << "Вы кинули кубики";

					for (int i = 0; i <= 3; i++)
					{
						Sleep(800);
						cout << ".";
					}
					cout << endl << endl;


					playerPoint1 = 1 + (rand() % 7);
					playerPoint2 = 1 + (rand() % 7);

					cout << "На первом кубике выпало число: " << playerPoint1 << endl;
					cout << "На втором кубике выпало число: " << playerPoint2 << endl;
					sumPlayerPoint = playerPoint1 + playerPoint2;
					cout << "Сумма равна: " << sumPlayerPoint << endl << endl;

					cout << "Очередь опонента!\n\n";

					cout << "Опонент кидает кубики";

					for (int i = 0; i <= 3; i++)
					{
						Sleep(800);
						cout << ".";
					}
					cout << endl << endl;


					compPoint1 = 1 + (rand() % 7);
					compPoint2 = 1 + (rand() % 7);

					cout << "На первом кубике выпало число: " << compPoint1 << endl;
					cout << "На втором кубике выпало число: " << compPoint2 << endl;
					sumCompPoint = compPoint1 + compPoint2;
					cout << "Сумма равна: " << sumCompPoint << endl << endl;

					if (sumCompPoint != sumPlayerPoint)
					{
						if (sumCompPoint > sumPlayerPoint)
							cout << "Вы проиграли!\n\n";
						else
							cout << "Вы выиграли!\n\n";
					}
					else
						cout << "Ничья!\n\n";

					menu1 = false;

					break;

				default:
					cout << "Неверная команда!\n\n";
					break;
				}
			}		
			break;
		default:
			cout << "Ошибка! попробуйте снова!";
			break;
		}
	}
}
