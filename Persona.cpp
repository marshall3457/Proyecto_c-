/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Persona.cpp
 * Author: Roberto Carlos
 * 
 * Created on 1 de abril de 2023, 9:16 a. m.
 */

#include "Persona.h"


Persona::Persona(const Persona& orig) {
}

Persona::~Persona() {
}


string Persona::GetDNI() {
    return DNI;
}

int Persona::GetEdad()  {
    return edad;
}

string Persona::GetGenero()  {
    return genero;
}

string Persona::GetNombre()  {
    return nombre;
}
