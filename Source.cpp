#include <iostream>
using namespace std;
int main() 
    //�������� ��������� �43021
{
    /*Boolean8.���� ��� ����� ����� : A, B.
    ��������� ���������� ������������:������� �� ����� A � B ��������.*/
    int A, B;
    bool res;
    cin >> A >> B;
    res = (A % 2) == 1 && (B % 2) == 1;
    cout << boolalpha;
    cout << res << endl;

    return 0;
}

{
    /*Boolean9. ���� ��� ����� �����: A, B.
    ��������� ���������� ������������:����� �� ���� �� ����� A � B ��������.*/
    int A, B;
    bool res;
    cin >> A >> B;
    res = (A % 2) == 1 || (B % 2) == 1;
    cout << boolalpha;
    cout << res << endl;

    return 0;
}

{
    /*Boolean11. ���� ��� ����� �����: A, B. 
    ��������� ���������� ������������: ������ A � B ����� ���������� ���������.*/
    int A, B;
    bool res;
    cin >> A >> B;
    res = ((A % 2) == 1 && (B % 2) == 1) || ((A % 2) == 0 && (B % 2) == 0);
    cout << boolalpha;
    cout << res << endl;

    return 0;
}

{
    /*Boolean12. ���� ��� ����� �����: A, B, C.
    ��������� ���������� ������������:������� �� ����� A, B, C �������������.*/
    int A, B, C;
    bool res;
    cin >> A >> B >> C;
    res = A > 0 && B > 0 && C > 0;
    cout << boolalpha;
    cout << res << endl;

    return 0;
}

{
    /*Boolean14. ���� ��� ����� �����: A, B, C.
    ��������� ���������� ������������:������ ���� �� ����� A, B, C �������������.*/
    int A, B, C;
    bool res;
    cin >> A >> B >> C;
    res = (A > 0 && B < 0 && C < 0) || (A < 0 && B > 0 && C < 0) || (A < 0 && B < 0 && C > 0);
    cout << boolalpha;
    cout << res << endl;

    return 0;
}