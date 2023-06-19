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

class Servicios {
private:
    //pensar mejor forma de organizar esto, ya que llamada telefonica esta algo sola y esta se desacadena por la duracion y costo por minuto
    int Spa;
    int ServicioAHabitacion;
    int wifi; //si quiero en un futuro lo vuelvo a un mas complejo y le doy a elegir mas opcion de wifi a elegir al huesped;
    int lavanderia;
    int llamadaTelefonica;
    
public:
    
    Servicios(int Spa, int ServicioAHabitacion, int wifi, int lavanderia, int llamadaTelefonica) :
    Spa(Spa), ServicioAHabitacion(ServicioAHabitacion), wifi(wifi), lavanderia(lavanderia), llamadaTelefonica(llamadaTelefonica) {
    }
    
    Servicios(const Servicios& orig);
    virtual ~Servicios();
    int getServicioAHabitacion();

    int getSpa();

    int getLavanderia();
    
    int getLlamadaTelefonica();

    int getWifi();

    
    int costoTotalServicios();
};

#endif /* SERVICIOS_H */

