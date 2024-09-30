#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float KolVoRub;
    float Dollar = 92.77;
    float Euro = 104.43;
    float Yen = 0.65;
    float Yuan = 13.23;
    float Tenge = 0.19;
    float Farit = 228;
    int pick;
    bool choice = true;

    while (choice) {
        std::cout << "\t|---------------------------";
        std::cout << "\n\t|Введите количество рублей: ";
        std::cout << "\n\t|---------------------------     ";
        std::cin >> KolVoRub;

        std::cout << "\n\t------------------------------------------|";
        std::cout << "\n\t|Выберите валюту (Цифру): |\n\t|1-(Доллар) \n\t|2-(Евро) \n\t|3-(Йен) \n\t|4-(Юань) \n\t|5-(Тенге) \n\t|6-(Фарит) ";
        std::cout << "\n\t------------------------------------------|            ";

        std::cin >> pick;

        if (pick == 1) {
            std::cout << "\n\t|Количество Долларов (С учетом комиссии 5%): "
                << (KolVoRub / Dollar) - ((KolVoRub / Dollar) / 100 * 5);
        }
        else if (pick == 2) {
            std::cout << "\n\t|Количество Евро (С учетом комиссии 5%): "
                << (KolVoRub / Euro) - ((KolVoRub / Euro) / 100 * 5);
        }
        else if (pick == 3) {
            std::cout << "\n\t|Количество Йен (С учетом комиссии 5%): "
                << (KolVoRub / Yen) - ((KolVoRub / Yen) / 100 * 5);
        }
        else if (pick == 4) {
            std::cout << "\n\t|Количество Юань (С учетом комиссии 5%): "
                << (KolVoRub / Yuan) - ((KolVoRub / Yuan) / 100 * 5);
        }
        else if (pick == 5) {
            std::cout << "\n\t|Количество Тенге (С учетом комиссии 5%): "
                << (KolVoRub / Tenge) - ((KolVoRub / Tenge) / 100 * 5);
        }
        else if (pick == 6) {
            std::cout << "\n\t|Количество Фарит (С учетом комиссии 5%): "
                << (KolVoRub / Farit) - ((KolVoRub / Farit) / 100 * 5);
        }
        else {
            std::cout << "\n\t|Некорректный выбор, попробуйте снова.|";
        }

        std::cout << "\n\t-------------------------------------------------------------------------------------------------------------|";


        char repeat;
        std::cout << "\n\tХотите выполнить еще одну операцию? (y/n): ";
        std::cin >> repeat;
        while (repeat != 'y' && repeat != 'Y') {
            choice = false;


        }
    }

    return 0;
}
