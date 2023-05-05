/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Persona.h
 * Author: Roberto Carlos
 *
 * Created on 1 de abril de 2023, 9:16 a. m.
 */

#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

using namespace std;
class Persona {

private:
    string nombre;
    int edad;
    string genero;
    string DNI;
public:
    Persona(string nombre, int edad, string genero, string DNI) :
    nombre(nombre), edad(edad), genero(genero), DNI(DNI) {
    }

    Persona(const Persona& orig);
    virtual ~Persona();
    
    
    string GetDNI();
    int GetEdad();
    string GetGenero();
    string GetNombre();

};

#endif /* PERSONA_H */

