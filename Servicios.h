/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Servicios.h
 * Author: Roberto Carlos
 *
 * Created on 7 de abril de 2023, 2:36 p. m.
 */
#ifndef SERVICIOS_H
#define SERVICIOS_H

#include <iostream>

using namespace std;

class Servicios {
private:
    string nombreServicio;
    int precio;
    int iva;
    
public:
    
 
    Servicios(string nombreServicio, int precio, int iva) :
    nombreServicio(nombreServicio), precio(precio), iva(iva) {
    }

    Servicios(const Servicios& orig);
    virtual ~Servicios();

    int getIva();
    string getNombreServicio();
    int getPrecio();
    
    
    void setIva(int);
    void setNombreServicio(string);
    void setPrecio(int precio);
  
};

#endif /* SERVICIOS_H */

