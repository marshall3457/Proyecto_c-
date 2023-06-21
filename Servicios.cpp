/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Servicios.cpp
 * Author: Roberto Carlos
 * 
 * Created on 7 de abril de 2023, 2:36 p. m.
 */

#include "Servicios.h"


Servicios::Servicios(const Servicios& orig) {
}

Servicios::~Servicios() {
}

int Servicios::getIva()  {
    return iva;
}

string Servicios::getNombreServicio()  {
    return nombreServicio;
}

int Servicios::getPrecio()  {
    return precio;
}

void Servicios::setIva(int iva) {
    this->iva = iva;
}

void Servicios::setNombreServicio(string nombreServicio) {
    this->nombreServicio = nombreServicio;
}

void Servicios::setPrecio(int precio) {
    this->precio = precio;
}


