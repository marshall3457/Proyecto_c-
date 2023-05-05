/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Habitaciones.cpp
 * Author: Roberto Carlos
 * 
 * Created on 1 de abril de 2023, 9:11 a. m.
 */

#include "Habitacion.h"


Habitacion::Habitacion(const Habitacion& orig) {
}

Habitacion::~Habitacion() {
}

int Habitacion::GetCostoNoche() {
    return costoNoche;
}

int Habitacion::GetNumeroCamas() {
    return numeroCamas;
}

int Habitacion::GetNumeroHabitacion() {
    return numeroHabitacion;
}