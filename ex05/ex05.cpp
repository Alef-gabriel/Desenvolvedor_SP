#include <iostream>
#include <codecvt>
#include <locale>

int main()
{
    std::string input;

    std::cout << "Digite uma palavra que deseja inverter: ";
    std::cin >> input;

    for (unsigned long i = 0, j = input.size() - 1; i < input.size() / 2 && j >= input.size() / 2; i++, j--) {
        char aux = input[i];
        input[i] = input[j];
        input[j] = aux;
    }
    std:: cout << input << '\n';
}

