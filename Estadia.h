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
#include <list>
#include "Huesped.h"
#include "Habitacion.h"
#include "Parqueadero.h"
#include "Servicios.h"
//asi esta bien totalmente todo lo relacionado esta con la estadia esto es porque es una relacion de uno a uno;

using namespace std;

class Estadia {
private:
    Huesped * nuevoHuesped;
    Habitacion * nuevaHabitacion;
    Parqueadero * nuevoParqueadero;
    list<Servicios*> * listaServicios;
    int duracionDias;
    string fecha;
    string numeroEstadia;
public:
    //SI asi esta bien porque en si solo se creara un objeto de tipo estadia con una unica lista de servicios;
    Estadia(Huesped* nuevoHuesped, Habitacion* nuevaHabitacion, Parqueadero* nuevoParqueadero, int duracionDias, string fecha, string numeroEstadia) :
    nuevoHuesped(nuevoHuesped), nuevaHabitacion(nuevaHabitacion), nuevoParqueadero(nuevoParqueadero), duracionDias(duracionDias), fecha(fecha), numeroEstadia(numeroEstadia) 
    {
        listaServicios = new list<Servicios *>();
    }

    
    Estadia(const Estadia& orig);
    virtual ~Estadia();
    
    int GetDuracionDias();
    Huesped* GetNuevoHuesped();
    Habitacion * GetNuevaHabitacion();
    Parqueadero * GetNuevoParqueadero();
    string GetFecha();
    string GetNumeroEstadia();
    list<Servicios *> * GetListaServicios();
    
    void adiccionarServicios(Servicios * servicios);
    int costoTotalParqueadero();
    int costoTotalServicios();
    int costoTotalEstadia();
    int costoTotalSinIva();
    int costoTotal();
    

};

#endif /* ESTADIA_H */

