//Как вывести имя переменной
#include <string>
#include <iostream>
using namespace std;
// Глобальная переменная в которой будет храниться последнее имя переменной
string VARIBLE_NAME = "NULL";

// Записываем новое имя в переменную
#define SAVE_VARIBLE_NAME(varible) VARIBLE_NAME = string(#varible);

// Пример
int main()
{
    int Hello_cyber_forum = 0;
    SAVE_VARIBLE_NAME(Hello_cyber_forum);
    cout << VARIBLE_NAME << endl;

    return 0;
}