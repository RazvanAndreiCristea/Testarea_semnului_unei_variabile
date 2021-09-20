#pragma once
#include <iostream>
#include <string>
#include <Windows.h>


/*Functie care verifica daca stringul primit ca parametru este
format doar din cifre.
-pentru prima pozitie a string-ului se verifica daca exista semnul minus
sau nu, iar daca se gaseste cifra atunci se parcurge restul string-ului
cu o bucla for in care se verifica daca exista doar cifre sau nu.*/
bool validare_numar(std::string& numar);

/*Functie ce converteste un string intr-un double daca
rezultatul intors de functia validare_numar() este true.
-in cazul in care input-ul e gresit introdus utilizatorul
va fi atentionat si rugat sa introduca un input corespunzator
la urmatoarea incercare.*/
double citeste_numarul();

/*Functie ce primeste ca parametru o referinta la double si are
rolul de a verifica daca un numar citit de la tastatura este pozitiv
sau negativ si afiseaza pe ecran mesajul corespunzator.*/
void testare_semn(double& x);

/*Functie care da posibilitatea utilizatorului sa introduca si
alte numere carora doreste sa le vada semnul.
-daca nu selecteaza una din optiunile valide programul il va
atentiona pe utilizator sa introduca o optiune valida.
-functia va fi chemata la finalul iterarii fiecarui do while
din functia main.*/
bool programul_ruleaza();