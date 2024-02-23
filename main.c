// main.c
#include "Polynom.h"
#include <stdio.h>


int main() {
    // Quick Tester for your Functions;
    Polynom polynom;
    polynom.numOfElements = 0; // Initialize the number of elements

    addMonom(&polynom, 4, 2);
    printf("\nAdding... Coeff = 4 | Power = 2\n");
    printf("Requested Outcome: 4x^2\nYour Outcome: ");
    printPolynom(polynom); // Outcome: 4x^2
    addMonom(&polynom, 3, 1);
    printf("\nAdding... Coeff = 3 | Power = 1\n");
    printf("Requested Outcome: 4x^2+3x\nYour Outcome: ");
    printPolynom(polynom); // Outcome: 4x^2+3x
    addMonom(&polynom, -1, 3);
    printf("\nAdding... Coeff = -1 | Power = 3\n");
    printf("Requested Outcome: -x^3+4x^2+3x\nYour Outcome: ");
    printPolynom(polynom); // Outcome: -x^3+4x^2+3x
    addMonom(&polynom, 4, 1);
    printf("\nAdding... Coeff = 4 | Power = 1\n");
    printf("\nRequested Outcome: -x^3+4x^2+7x\nYour Outcome: ");
    printPolynom(polynom); // Outcome: -x^3+4x^2+7x
    addMonom(&polynom, 0, 2);
    printf("\nAdding... Coeff = 0 | Power = 2\n");
    printf("Requested Outcome: -x^3+4x^2+7x\nYour Outcome: ");
    printPolynom(polynom); // Outcome: -x^3+4x^2+7x
    addMonom(&polynom, -6, 0);
    printf("\nAdding... Coeff = -6 | Power = 0\n");
    printf("Requested Outcome: -x^3+4x^2+7x-6\nYour Outcome: ");
    printPolynom(polynom); // Outcome: -x^3+4x^2+7x-6
    addMonom(&polynom, -4, 2);
    printf("\nAdding... Coeff = -4 | Power = 2\n");
    printf("Requested Outcome: -x^3+7x-6\nYour Outcome: ");
    printPolynom(polynom); // Outcome: -x^3+7x-6
    deletePolynom(polynom);

    return 0;
}

