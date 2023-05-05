/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Habitaciones.h
 * Author: Roberto Carlos
 *
 * Created on 1 de abril de 2023, 9:11 a. m.
 */

#ifndef HABITACIONES_H
#define HABITACIONES_H
#include "Huesped.h"

class Habitacion {

private:
    int costoNoche;
    int numeroHabitacion;
    int numeroCamas;
    
public:

    Habitacion(int costoNoche, int numeroHabitacion, int numeroCamas) :
    costoNoche(costoNoche), numeroHabitacion(numeroHabitacion), numeroCamas(numeroCamas) {
    }
    
    Habitacion(const Habitacion& orig);
    virtual ~Habitacion();
    
    int GetCostoNoche();

    int GetNumeroCamas();

    int GetNumeroHabitacion();

};

#endif /* HABITACIONES_H */

