//��� ������� ��� ����������
#include <string>
#include <iostream>
using namespace std;
// ���������� ���������� � ������� ����� ��������� ��������� ��� ����������
string VARIBLE_NAME = "NULL";

// ���������� ����� ��� � ����������
#define SAVE_VARIBLE_NAME(varible) VARIBLE_NAME = string(#varible);

// ������
int main()
{
    int Hello_cyber_forum = 0;
    SAVE_VARIBLE_NAME(Hello_cyber_forum);
    cout << VARIBLE_NAME << endl;

    return 0;
}