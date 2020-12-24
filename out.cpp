#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <sstream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>

#include "Student_stuct.h"
#include "out.h"
void out(Student** arr, int leng)  //вывод на экран
{
    for (int i = 0; i < leng; i++)
    {
        cout << "Студент " << i + 1 << ":\n";
        cout << "ФИО: " << arr[i]->name << "\n";
        cout << "Номер зачётки: " << arr[i]->number << "\n";
        cout << "Год рождения: " << arr[i]->year << "\n";
        cout << "Средний балл за последнюю сессию: " << arr[i]->srMark << "\n";
        cout << "Размер стипендии: ";
        if (arr[i]->scholarship == 1)
            cout << "не платится\n\n";
        if (arr[i]->scholarship == 2)
            cout << "обычная\n\n";
        if (arr[i]->scholarship == 3)
            cout << "+50%\n\n";
        if (arr[i]->scholarship == 4)
            cout << "+100%\n\n";
    }
}