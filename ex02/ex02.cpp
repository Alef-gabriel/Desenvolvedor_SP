#include <iostream>
#include <codecvt>
#include <locale>

int main()
{
    int n, temp, first=1, ult=0;

    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>, wchar_t> convert;
    std::cout << "Informe um número: ";
    std::cin >> n;
    for(;first+ult < n;){
        temp = ult;
        ult = first;
        first = temp + first;
    }
    if (first+ult == n) {
        std::cout << "O número informado pertence a sequência." << '\n';
        return 0;
    }
    std::cout << "O número informado NÃO pertence a sequência." << '\n';
    return 0;
}
