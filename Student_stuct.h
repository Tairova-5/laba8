#ifndef STUDENT_STRUCTS_H_INCLUDED
#define STUDENT_STRUCTS_H_INCLUDED

struct Student
{
    char* name; //»м€
    int number; // номер зачетки
    float srMark; //—редн€€ оценка за сессию
    int scholarship; // это стипенди€: 0 - нет стипухи, 1 - обычна€, 2 - 50%, 3 - 100%
    int year;
};
#endif// STUDENT_STRUCTS_H_INCLUDED
