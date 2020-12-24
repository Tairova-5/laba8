#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <sstream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>

#include "Student_stuct.h"
#include "inputName.h"
#include "test.h"
char* inputName()  //ввод имени
{
    int ln = 1;
    char* tmp = NULL;
    char* str = new char[ln];
    while (true)
    {
        str[ln - 1] = _getch();
        if (str[ln - 1] == 13)
        {
            str[ln - 1] = '\0';
            break;
        }
        if (str[ln - 1] == '\0')
            continue;
        if (str[ln - 1] == '\b' && (ln - 1) != 0)
        {
            cout << str[ln - 1];
            cout << ' ';
            cout << str[ln - 1];
            tmp = new char[ln - 1];
            for (int i = 0; i < ln - 2; i++)
                tmp[i] = str[i];
            delete[] str;
            str = tmp;
            ln--;
        }
        else
        {
            if ((ln - 1) == 0 && str[ln - 1] == '\b')
                continue;
            cout << str[ln - 1];
            tmp = new char[ln + 1];
            for (int i = 0; i < ln; i++)
                tmp[i] = str[i];
            delete[] str;
            str = tmp;
            ln++;
        }
    }
    cout << endl;
    return str;
}
int newinfo(int leng, Student** temp) //вычисл€емое поле
{
    if (temp[leng]->srMark == 5.0)
        return 4;
    if (temp[leng]->srMark < 5.0 && temp[leng]->srMark >= 4.5)
        return 3;
    if (temp[leng]->srMark < 4.5 && temp[leng]->srMark >= 4.0)
        return 2;
    if (temp[leng]->srMark < 4.0)
        return 1;
}
void addSt(Student**& arr, int& leng) //добавление с клавы
{
    Student** temp = new Student * [leng + 1];
    for (int i = 0; i < leng; i++)  //копируем что есть
    {
        temp[i] = arr[i];
    }
    delete arr;
    //а теперь ввод нового
    temp[leng] = new Student;
    cout << "¬ведите ‘»ќ студента:\n";
    temp[leng]->name = inputName();
    cout << "¬ведите номер зачЄтной книжки студента:\n";
    temp[leng]->number = static_cast<int> (test(1));
    cout << "¬ведите год рождени€ студента:\n";
    temp[leng]->year = static_cast<int> (test(1));
    cout << "¬ведите средний балл студента за последнюю сессию:\n";
    temp[leng]->srMark = test(2);
    //вычисл€емое поле
    temp[leng]->scholarship = newinfo(leng, temp);
    arr = temp;
    cout << "Ёлемент добавлен.\n";
    leng++;
}
using namespace std;