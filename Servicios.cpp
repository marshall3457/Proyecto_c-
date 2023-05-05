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

int Servicios::getSpa()  {
    return Spa;
}

int Servicios::getLavanderia()  {
    return lavanderia;
}

int Servicios::getLlamadaTelefonica()  {
    return llamadaTelefonica;
}

int Servicios::getWifi()  {
    return wifi;
}

int Servicios::getServicioAHabitacion(){
    return ServicioAHabitacion;
}


int Servicios::costoTotalServicios(){
    return this->getLavanderia() + this->getLlamadaTelefonica() + this->getServicioAHabitacion()+ this->getSpa() + this->getWifi();
    
}

