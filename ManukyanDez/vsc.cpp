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
        std::cout << "\n\t|������� ���������� ������: ";
        std::cout << "\n\t|---------------------------     ";
        std::cin >> KolVoRub;

        std::cout << "\n\t------------------------------------------|";
        std::cout << "\n\t|�������� ������ (�����): |\n\t|1-(������) \n\t|2-(����) \n\t|3-(���) \n\t|4-(����) \n\t|5-(�����) \n\t|6-(�����) ";
        std::cout << "\n\t------------------------------------------|            ";

        std::cin >> pick;

        if (pick == 1) {
            std::cout << "\n\t|���������� �������� (� ������ �������� 5%): "
                << (KolVoRub / Dollar) - ((KolVoRub / Dollar) / 100 * 5);
        }
        else if (pick == 2) {
            std::cout << "\n\t|���������� ���� (� ������ �������� 5%): "
                << (KolVoRub / Euro) - ((KolVoRub / Euro) / 100 * 5);
        }
        else if (pick == 3) {
            std::cout << "\n\t|���������� ��� (� ������ �������� 5%): "
                << (KolVoRub / Yen) - ((KolVoRub / Yen) / 100 * 5);
        }
        else if (pick == 4) {
            std::cout << "\n\t|���������� ���� (� ������ �������� 5%): "
                << (KolVoRub / Yuan) - ((KolVoRub / Yuan) / 100 * 5);
        }
        else if (pick == 5) {
            std::cout << "\n\t|���������� ����� (� ������ �������� 5%): "
                << (KolVoRub / Tenge) - ((KolVoRub / Tenge) / 100 * 5);
        }
        else if (pick == 6) {
            std::cout << "\n\t|���������� ����� (� ������ �������� 5%): "
                << (KolVoRub / Farit) - ((KolVoRub / Farit) / 100 * 5);
        }
        else {
            std::cout << "\n\t|������������ �����, ���������� �����.|";
        }

        std::cout << "\n\t-------------------------------------------------------------------------------------------------------------|";


        char repeat;
        std::cout << "\n\t������ ��������� ��� ���� ��������? (y/n): ";
        std::cin >> repeat;
        while (repeat != 'y' && repeat != 'Y') {
            choice = false;


        }
    }

    return 0;
}
