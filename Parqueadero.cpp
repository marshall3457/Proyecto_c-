/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Parqueadero.cpp
 * Author: Roberto Carlos
 * 
 * Created on 1 de abril de 2023, 9:11 a. m.
 */

#include "Parqueadero.h"


Parqueadero::Parqueadero(const Parqueadero& orig) {
}

Parqueadero::~Parqueadero() {
}

int Parqueadero::GetCostoDia()  {
    return costoDia;
}

string Parqueadero::GetLugarEstacionamiento()  {
    return lugarEstacionamiento;
}

int Parqueadero::GetTiempoEstacionado()  {
    return tiempoEstacionado;
}
