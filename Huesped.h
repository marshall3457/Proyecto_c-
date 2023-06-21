/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Huesped.h
 * Author: Roberto Carlos
 *
 * Created on 1 de abril de 2023, 9:13 a. m.
 */

#ifndef HUESPED_H
#define HUESPED_H
#include <iostream>
#include <list>
#include "Persona.h"
#include "Servicios.h"
using namespace std;

class Huesped {

private:
    Persona * nuevaPersona;    
    
public:

    Huesped(Persona* nuevaPersona) :
    nuevaPersona(nuevaPersona) {  }
    
    Huesped(const Huesped& orig);
    virtual ~Huesped();
    
    void adiccionarServicios(Servicios * servicios);

    Persona* GetNuevaPersona();
    list<Servicios *> * getListaServicios();


};

#endif /* HUESPED_H */

