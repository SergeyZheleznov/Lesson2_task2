#include <iostream>

struct Account {
    int numberAccount;
    std::string holderAccount;
    int balanceAccount;
};

int changeBalance(Account* p, int x) {

    p->balanceAccount = x; // мен€ем баланс счЄта. ’ - это нова€ цифра баланса, p -> это способ с помощью указател€ показать, куда положить цифру баланса
    return  p->balanceAccount;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    Account account123; // теперь в переменной account123 ’ранитс€ экземел€р структуры Account 

    std::cout << " ¬ведите номер счЄта: ";
    std::cin >> account123.numberAccount;
    std::cout << std::endl;

    std::cout << " ¬ведите им€ владельца: ";
    std::cin >> account123.holderAccount;
    std::cout << std::endl;

    std::cout << " ¬ведите баланс: ";
    std::cin >> account123.balanceAccount;
    std::cout << std::endl;

 
    int sum;
    std::cout << "¬ведите новый баланс: ";
    std::cin >> sum;
    Account* p_account123 = &account123; // здесь в переменную p_account123 поместили адрес(указатель) на переменную account123

    p_account123->balanceAccount = sum; // присваивает значение, введЄнное с клавиатуры, переменной balanceAccount с помощью адреса p_account123

    changeBalance(&account123, sum); // передаЄт адрес экземел€ра структуры Account (Ёто account123) в тело отдельной функции и туда же передаЄт значение, введЄнное с клавиатуры

    std::cout << "¬аш счЄт: " << account123.holderAccount << ", " << account123.numberAccount << ", " << account123.balanceAccount << std::endl;

    return 0;
}

