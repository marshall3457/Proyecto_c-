/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Empleados.h
 * Author: Roberto Carlos
 *
 * Created on 1 de abril de 2023, 9:11 a. m.
 */

#ifndef EMPLEADOS_H
#define EMPLEADOS_H
#include <iostream>
#include "Persona.h"
using namespace std;
class Empleado {
private:
    Persona * nuevaPersona;
    string cargo;
    int sueldo;
    
public:
    Empleado(Persona* nuevaPersona, string cargo, int sueldo) :
    nuevaPersona(nuevaPersona), cargo(cargo), sueldo(sueldo) {
    }

    
    Empleado(const Empleado& orig);
    virtual ~Empleado();
    
    string GetCargo();
    Persona* GetNuevaPersona();
    int GetSueldo();

    
    
};

#endif /* EMPLEADOS_H */

