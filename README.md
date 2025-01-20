# EX3inC

This project is a C implementation for handling polynomials. It provides functionalities to create, add, print, and manage polynomial terms (monoms) and polynomials.

## Features

- **Create Monom**: Create a new monom with a specified coefficient and power.
- **Print Monom**: Print a single monom.
- **Add Monom**: Add a new monom to a polynomial, combining like terms if necessary.
- **Sort Polynom**: Sort the terms in a polynomial by descending power.
- **Print Polynom**: Print the entire polynomial.
- **Delete Polynom**: Free the memory allocated for the polynomial's terms.

## Usage

Here is a quick example of how to use the functions provided in this project:

```c
#include "Polynom.h"
#include <stdio.h>

int main() {
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
    printf("Requested Outcome: -x^3+4x^2+7x\nYour Outcome: ");
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
