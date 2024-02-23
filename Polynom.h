#ifndef POLYNOM_H
#define POLYNOM_H

#define SIZE 20

typedef struct {
    int coefficient;
    int power;
} Monom;

typedef struct {
    Monom* monoms[SIZE];
    int numOfElements;
} Polynom;

Monom* createMonom(int coefficient, int power);
void printMonom(Monom* monom);
void addMonom(Polynom* polynom, int coefficient, int power);
void sortPolynom(Polynom* p);
void printPolynom(Polynom polynom);
void deletePolynom(Polynom polynom);

#endif