#include <iostream>

struct Account {
    int numberAccount;
    std::string holderAccount;
    int balanceAccount;
};

int changeBalance(Account* p, int x) {

    p->balanceAccount = x; // ������ ������ �����. � - ��� ����� ����� �������, p -> ��� ������ � ������� ��������� ��������, ���� �������� ����� �������
    return  p->balanceAccount;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    Account account123; // ������ � ���������� account123 �������� ��������� ��������� Account 

    std::cout << " ������� ����� �����: ";
    std::cin >> account123.numberAccount;
    std::cout << std::endl;

    std::cout << " ������� ��� ���������: ";
    std::cin >> account123.holderAccount;
    std::cout << std::endl;

    std::cout << " ������� ������: ";
    std::cin >> account123.balanceAccount;
    std::cout << std::endl;

 
    int sum;
    std::cout << "������� ����� ������: ";
    std::cin >> sum;
    Account* p_account123 = &account123; // ����� � ���������� p_account123 ��������� �����(���������) �� ���������� account123

    p_account123->balanceAccount = sum; // ����������� ��������, �������� � ����������, ���������� balanceAccount � ������� ������ p_account123

    changeBalance(&account123, sum); // ������� ����� ���������� ��������� Account (��� account123) � ���� ��������� ������� � ���� �� ������� ��������, �������� � ����������

    std::cout << "��� ����: " << account123.holderAccount << ", " << account123.numberAccount << ", " << account123.balanceAccount << std::endl;

    return 0;
}

