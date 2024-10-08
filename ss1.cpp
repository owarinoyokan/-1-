﻿#include <iostream>      // Для вывода текста
using namespace std;    // Сообщает компилятору, что мы хотим использовать все из пространства имен std  (Упрощение кода)

int main() {    // Создание класса мейн
    // 1.3.1 Программа и стандартный вывод
    setlocale(LC_ALL, "Rus");
    cout << "Привет!!!" << endl;                // Вывод текста
    cout << "Hello!!!" << endl;


    // 1.3.2 Переменные и арифметические действия
// Символьный переменные (хванит символы, занимает 1 байт)
    char a0 = '@';
    char a01{ 122 };     // от -128 до 127

    // Целочисленные переменные
    int a1 = 5;
    short a2;
    long a3;

    // Вещественные переменные
    float a4;
    double a5;          // до 16-ти десятичных знаков
    long double a6;     // до 18-19 десятичных знаков

    /*     Арифметические операции
     +  (сложение)
     -  (вычитание)
     *  (умножение)
     /  (деление)
     %  (остаток от деления)

            Операции сравнения
     ==  (равен)
     !=  (не равен)
     >   (больше)
     <   (меньше)
     >=  (больше либо равно)
     <=  (меньше либо равно)
     */

    int b, c, d;        // Объявление нескольких переменных
    b = c = 10;
    d = b + c;

    cout << a0 << endl;
    cout << a01 << "\n" << endl;


    // 1.3.3 Указатели и массвы
    int arr[10];                // Создание массива на 10 символов
    int* p{ arr };                // Указатель хранит адресс 1 элемента массива
    int* p1;

    /*
        * -- значит, что это переменная является переменной указателем.
        & -- Амперсант -- оператор взятия адреса.
    */

    int* parr{ (&arr[2]) };       // Указатель хранит адресс 3 элемента массива
    p1 = &arr[3];                // Указывает на 4 элемент массива arr (адресс)
    cout << p1 << endl;

    arr[0] = 12;                 // Присваиваем 1 элементу массива 12

    cout << "Значение: " << arr[0] << endl;
    cout << "Адресс: " << arr << "\n" << endl;
    cout << "Адресс 1 элемента: " << p << endl;
    cout << "Адресс 3 элеманта: " << parr << "\n" << endl;

    char hello[] = { "hello" };
    char* phello{ hello };
    cout << "Массив хранит: " << phello << endl;
    cout << "Первая буква в нем: " << *phello << endl;
    cout << "Адресс указателя: " << (void*)phello << "\n" << endl;


    // 1.3.4 Условныe оператор и циклы
    if (d > 0) {                    // if (условие){блок команд} ||| else if (условие){блок команд} ||| else {блок команд}
        int ere = 0;
        cout << ere << endl;
    }
    else if (d == 0) {
        int ere = 1;
        cout << ere << endl;
    }
    else {
        int ere = 2;
        cout << ere << endl;
    }

    const float fac = 2.54;
    float x, in, cm;
    char ch = 0;
    cout << "Введите длину: " << endl;

    cin >> x;       // Ввод числа с клавиатуры
    cin >> ch;      // ввод символа с клавиатуры

    switch (ch) {                       // Переключатель
    case 'i':                   // Кейс 1 (при условии, что ch = 'i')
        in = x;
        cm = x * fac;
        break;                  // Выход из кейса 1
    case 'c':                   // Кейс 2 (при условии, что ch = 'c')
        in = x / fac;
        cm = x;
        break;                  // Выход из кейса 2
    default:                    // Обычный кейс (при условии, что не подошли другие)
        in = cm = 0;
        break;                  // Выход из обычного кейса
    }
    cout << in << " дюймов = " << cm << " сантиметров" << "\n" << endl;

    int count;
    for (int i = 1; i <= 10; i++) {     // цикл for (переменная; условие; действие){блок команд}
        count = i;
        cout << count << endl;
    }
    cout << endl;
}
