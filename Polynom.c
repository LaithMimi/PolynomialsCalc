//Polynom.c
#include "Polynom.h"
#include <stdio.h>
#include <stdlib.h>


Monom* createMonom(int coefficient, int power){
    if (coefficient == 0) 
        return NULL;

    Monom* newMonom =(Monom*) malloc (sizeof(Monom));

    if(newMonom!=NULL){
        newMonom->coefficient=coefficient;
        newMonom->power=power;
    }
    return newMonom;
}

void printMonom(Monom* monom){
    if (monom != NULL) {
        if (monom->coefficient == 0) {
            printf("0");
        } else {
            if (monom->coefficient == -1) 
                printf(monom->power != 0 ? "-" : "-1");
                /*if (monom->coefficient == -1) {
                 if (monom->power != 0) {
                 printf("-");
                } else {
                printf("-1");
                 }
                }*/
            else if (monom->coefficient != 1 || monom->power == 0) 
                printf("%d", monom->coefficient);
            
            if (monom->power == 1) 
                printf("x");
            else if (monom->power > 1) 
                printf("x^%d", monom->power);   
        }
    }
}
void addMonom(Polynom* polynom, int coefficient, int power){
    if (polynom==NULL || coefficient==0 || polynom->numOfElements==SIZE)
        return;
   
    //^Check for an existing monom with the same power
    for (int i = 0; i < polynom->numOfElements; i++) {
        if (polynom->monoms[i]->power == power) {
            polynom->monoms[i]->coefficient += coefficient;
            return;
        }
    }
        Monom* newMonom =createMonom(coefficient,power);
        if (newMonom!=NULL){
            polynom->monoms[polynom->numOfElements] = newMonom;
            polynom->numOfElements++;
        }
}

void sortPolynom(Polynom* p){
    int i,j;
    for(i=0;i<p->numOfElements - 1; i++) {
        for(j=0;j<p->numOfElements -i-1;j++){
          if (p->monoms[j]->power < p->monoms[j+1]->power){
                Monom* temp = p->monoms[j];
                p->monoms[j] = p->monoms[j+1];
                p->monoms[j+1] = temp;
            }
        }
    }
}

void printPolynom(Polynom polynom){
    sortPolynom(&polynom);
    int i ;
     for(i=0; i<polynom.numOfElements; i++) {
        if(i!=0) 
            if(polynom.monoms[i]->coefficient > 0) 
                printf("+");  
        printMonom(polynom.monoms[i]);
    }
}

void deletePolynom(Polynom polynom){
    for(int i = 0; i < polynom.numOfElements; i++ )
        if (polynom.monoms[i] != NULL) 
            free(polynom.monoms[i]);
}
