#include <iostream>
using namespace std;

// 2.1.1 ќбласть видимости
int x;


// 2.4.1 ÷елые константы
const int DF = 123;
#define QW = 321


// 2.4.2  онстанты с плавающей точкой
const float PI1 = 3.14f;
#define PI 3.1415926535897932384626433832795f


// 2.4.3 —имвольные константы (char)
/*
конец строки                    NL(LF)      \n
горизотальна€ табул€ци€         HT          \t
вертикальна€ табул€ци€          VT          \v
возрат                          BS          \b
возрат каретки                  CR          \r
перевод формата                 FF          \f
сигнал                          BEL         \a
обратна€ ддробна€ черта         \           \\
знак вопроса                    ?           \?
одиночна€ кавычка               '           \'
двойна€ кавычка                 "           \"
нулевой символ                  NUL         \0
восьмеричное число              ooo         \ooo
шестнадцатеричное число         hhh         \xhhh
 */


int main() {
    cin >> x;
    setlocale(LC_ALL, "Rus");
    int y = x + 10;
    cout << y << endl;
    // 2.3.1 ќсновные типы
// (1)÷елочисленные типы
    char a1;
    short int a2;   // short
    int a3;
    long int a4;    // long

    // (2) без знаковые (от 0 до +..)
    unsigned char q1;
    unsigned short int q2;
    unsigned int q3;
    unsigned long int q4;

    // (3) знаковые (от -.. до +..) (используютс€ дл€ €вного задани€ знакового типа)
    signed char w1;
    signed short int w2;
    signed int w3;
    signed long int w4;

    // — плавающей точкой
    float s1;
    double s2;
    long double s3;
}