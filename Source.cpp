#include <iostream>
using namespace std;
int main() 
    //Белоушко Елизавета П43021
{
    /*Boolean8.Даны два целых числа : A, B.
    Проверить истинность высказывания:«Каждое из чисел A и B нечетное».*/
    int A, B;
    bool res;
    cin >> A >> B;
    res = (A % 2) == 1 && (B % 2) == 1;
    cout << boolalpha;
    cout << res << endl;

    return 0;
}

{
    /*Boolean9. Даны два целых числа: A, B.
    Проверить истинность высказывания:«Хотя бы одно из чисел A и B нечетное».*/
    int A, B;
    bool res;
    cin >> A >> B;
    res = (A % 2) == 1 || (B % 2) == 1;
    cout << boolalpha;
    cout << res << endl;

    return 0;
}

{
    /*Boolean11. Даны два целых числа: A, B. 
    Проверить истинность высказывания: «Числа A и B имеют одинаковую четность».*/
    int A, B;
    bool res;
    cin >> A >> B;
    res = ((A % 2) == 1 && (B % 2) == 1) || ((A % 2) == 0 && (B % 2) == 0);
    cout << boolalpha;
    cout << res << endl;

    return 0;
}

{
    /*Boolean12. Даны три целых числа: A, B, C.
    Проверить истинность высказывания:«Каждое из чисел A, B, C положительное».*/
    int A, B, C;
    bool res;
    cin >> A >> B >> C;
    res = A > 0 && B > 0 && C > 0;
    cout << boolalpha;
    cout << res << endl;

    return 0;
}

{
    /*Boolean14. Даны три целых числа: A, B, C.
    Проверить истинность высказывания:«Ровно одно из чисел A, B, C положительное».*/
    int A, B, C;
    bool res;
    cin >> A >> B >> C;
    res = (A > 0 && B < 0 && C < 0) || (A < 0 && B > 0 && C < 0) || (A < 0 && B < 0 && C > 0);
    cout << boolalpha;
    cout << res << endl;

    return 0;
}