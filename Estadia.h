/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Estadia.h
 * Author: Roberto Carlos
 *
 * Created on 1 de abril de 2023, 9:13 a. m.
 */

#ifndef ESTADIA_H
#define ESTADIA_H
#include <iostream>
#include "Huesped.h"
#include "Habitacion.h"
#include "Parqueadero.h"
#include "Servicios.h"

using namespace std;

class Estadia {
private:
    Huesped * nuevoHuesped;
    Habitacion * nuevaHabitacion;
    Parqueadero * nuevoParqueadero;
    Servicios * serviciosUtilizados;
    int duracionDias;
    string fecha;
    string numeroEstadia;
public:
    Estadia(Huesped* nuevoHuesped, Habitacion* nuevaHabitacion, Parqueadero* nuevoParqueadero, Servicios* serviciosUtilizados, int duracionDias, string fecha, string numeroEstadia) :
    nuevoHuesped(nuevoHuesped), nuevaHabitacion(nuevaHabitacion), nuevoParqueadero(nuevoParqueadero), serviciosUtilizados(serviciosUtilizados), duracionDias(duracionDias), fecha(fecha), numeroEstadia(numeroEstadia) {
    }

    
    Estadia(const Estadia& orig);
    virtual ~Estadia();
    
    int GetDuracionDias();
    Huesped* GetNuevoHuesped();
    Habitacion * GetNuevaHabitacion();
    Parqueadero * GetNuevoParqueadero();
    Servicios * GetServiciosUtilizados();
    string GetFecha();
    string GetNumeroEstadia();
    int costoTotalEstadia();
    int costoTotalSinIva();
    int costoTotal();
    

};

#endif /* ESTADIA_H */

