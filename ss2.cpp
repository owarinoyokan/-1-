#include <iostream>
using namespace std;

// 2.1.1 Область видимости
int x;


// 2.4.1 Целые константы
const int DF = 123;
#define QW = 321


// 2.4.2 Константы с плавающей точкой
const float PI1 = 3.14f;
#define PI 3.1415926535897932384626433832795f


// 2.4.3 Символьные константы (char)
/*
конец строки                    NL(LF)      \n
горизотальная табуляция         HT          \t
вертикальная табуляция          VT          \v
возрат                          BS          \b
возрат каретки                  CR          \r
перевод формата                 FF          \f
сигнал                          BEL         \a
обратная ддробная черта         \           \\
знак вопроса                    ?           \?
одиночная кавычка               '           \'
двойная кавычка                 "           \"
нулевой символ                  NUL         \0
восьмеричное число              ooo         \ooo
шестнадцатеричное число         hhh         \xhhh
 */


int main() {
    cin >> x;
    setlocale(LC_ALL, "Rus");
    int y = x + 10;
    cout << y << endl;
    // 2.3.1 Основные типы
// (1)Целочисленные типы
    char a1;
    short int a2;   // short
    int a3;
    long int a4;    // long

    // (2) без знаковые (от 0 до +..)
    unsigned char q1;
    unsigned short int q2;
    unsigned int q3;
    unsigned long int q4;

    // (3) знаковые (от -.. до +..) (используются для явного задания знакового типа)
    signed char w1;
    signed short int w2;
    signed int w3;
    signed long int w4;

    // С плавающей точкой
    float s1;
    double s2;
    long double s3;
}
