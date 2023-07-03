#include <iostream>
#include <string>
#include <random>
#include <windows.h>
#include "Hotel.h"
#include "Empleado.h"
#include "Estadia.h"
#include "Huesped.h"
#include "Persona.h"
#include "Exception.h"
#include "Servicios.h"
#include "Parqueadero.h"
#include "Habitacion.h"



//buscar con find despues
//PAUSA
//SIN SENTIDO
//DO
//DESPUES
//IDEA
//GIT
//PROBLEMA SOLUCIONADO


// Declaración de variables globales
HWND hwndButton1;
HWND hwndButton2;
HWND hwndButton3;
HWND hwndButton4;    //declaracion de botones, ambito global
HWND hwndButton5;
//---------------------------
HWND hwndButtonServicios1;
HWND hwndButtonServicios2;
HWND hwndButtonServicios3;
HWND hwndButtonServicios4;
HWND hwndButtonServicios5;
HWND hwndButtonServicios6;
HWND hwndButtonServicios7;
HWND hwndButtonServicios8;
//---------------------------
HWND hwndButtonEmpleado1;
HWND hwndButtonEmpleado2;
HWND hwndButtonEmpleado3;
HWND hwndButtonEmpleado4;
HWND hwndButtonEmpleado5;
HWND hwndButtonEmpleado6;
HWND hwndButtonEmpleado7;
HWND hwndButtonEmpleado8;
HWND hwndButtonEmpleado9;
HWND hwndButtonEmpleado10;
HWND hwndButtonEmpleado11;
//---------------------------
HWND hwndButtonEstadia1;
HWND hwndButtonEstadia2;
HWND hwndButtonEstadia3;
HWND hwndButtonEstadia4;
HWND hwndButtonEstadia5;
HWND hwndButtonEstadia6;
HWND hwndButtonEstadia7;
HWND hwndButtonEstadia8;
HWND hwndButtonEstadia9;
HWND hwndButtonEstadia10;
HWND hwndButtonEstadia11;
HWND hwndButtonEstadia12;
//---------------------------
HWND hwndButtonParqueadero1;
HWND hwndButtonParqueadero2;
HWND hwndButtonParqueadero3;
HWND hwndButtonParqueadero4;
HWND hwndButtonParqueadero5;
//---------------------------
HWND hwndButtonHuesped1;
HWND hwndButtonHuesped2;
HWND hwndButtonHuesped3;
HWND hwndButtonHuesped4;
HWND hwndButtonHuesped5;


// ... Declarar el resto de los botones aquí

// Función de manejo de mensajes

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    if (msg == WM_CREATE) {
        // Crear los botones
        hwndButton1 = CreateWindow(
            "BUTTON", // Clase del control
            "Servicios", // Texto del botón          
            WS_VISIBLE | WS_CHILD, // Estilo del botón
            50, 10, 200, 30, // Posición y tamaño del botón
            hwnd, // Ventana padre
            (HMENU) 1, // Identificador del botón
            NULL, NULL);

        // Crear los demás botones aquí
        hwndButton2 = CreateWindow(
            "BUTTON", // Clase del control
            "Empleados", // Texto del botón
            WS_VISIBLE | WS_CHILD, // Estilo del botón
            300, 10, 200, 30, // Posición y tamaño del botón     
            hwnd, // Ventana padre
            (HMENU) 2, // Identificador del botón, con esto reconoce los casos
            NULL, NULL);
        hwndButton3 = CreateWindow(
            "BUTTON", // Clase del control
            "Estadias", // Texto del botón
            WS_VISIBLE | WS_CHILD, // Estilo del botón
            520, 10, 200, 30, // Posición y tamaño del botón                                     //x, y
            hwnd, // Ventana padre
            (HMENU) 3, // Identificador del botón, con esto reconoce los casos           
            NULL, NULL);
        hwndButton4 = CreateWindow(
            "BUTTON", // Clase del control
            "Parqueadero", // Texto del botón
            WS_VISIBLE | WS_CHILD, // Estilo del botón
            740, 10, 200, 30, // Posición y tamaño del botón
            hwnd, // Ventana padre
            (HMENU) 4, // Identificador del botón, con esto reconoce los casos
            NULL, NULL);
        hwndButton5 = CreateWindow(
            "BUTTON", // Clase del control
            "Huesped", // Texto del botón
            WS_VISIBLE | WS_CHILD, // Estilo del botón
            1000, 10, 200, 30, // Posición y tamaño del botón
            hwnd, // Ventana padre
            (HMENU) 5, // Identificador del botón, con esto reconoce los casos
            NULL, NULL);

        return 0;
        
    } else if (msg == WM_COMMAND) {
        RECT windowRect;
        GetClientRect(hwnd, &windowRect);
        int windowWidth = windowRect.right - windowRect.left;
        int windowHeight = windowRect.bottom - windowRect.top;
      //int buttonWidth = windowWidth * 0.2;  // Porcentaje del ancho de la ventana   //Lo mejor sera trabajar con porcentajes, si se puede xd
        //int screenWidth = GetSystemMetrics(SM_CXSCREEN);
        //int windowWidth = static_cast<int>(screenWidth);

        DestroyWindow(hwndButton1);
        DestroyWindow(hwndButton2);
        DestroyWindow(hwndButton3);
        DestroyWindow(hwndButton4);
        DestroyWindow(hwndButton5);
        
        if (LOWORD(wParam) == 1) {
            // Lógica para la acción 1
            hwndButtonServicios1 = CreateWindow(
                "BUTTON", // Clase del control
                "Conocer servicios disponibles", // Texto del botón          
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 0, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 11, // Identificador del botón
                NULL, NULL);

            // Crear los demás botones aquí
            hwndButtonServicios2 = CreateWindow(
                "BUTTON", // Clase del control
                "Agregar servicio", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 30, windowWidth, 30, // Posición y tamaño del botón     
                hwnd, // Ventana padre
                (HMENU) 12, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);
            hwndButtonServicios3 = CreateWindow(
                "BUTTON", // Clase del control
                "Conocer veces pedidas de un servicio en especifico", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 60, windowWidth, 30, // Posición y tamaño del botón                                     //x, y
                hwnd, // Ventana padre
                (HMENU) 13, // Identificador del botón, con esto reconoce los casos           
                NULL, NULL);
            hwndButtonServicios4 = CreateWindow(
                "BUTTON", // Clase del control
                "Conocer veces pedidas de todos los servicios", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 90, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 14, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);
            hwndButtonServicios5 = CreateWindow(
                "BUTTON", // Clase del control
                "Costo total de todas las areas de servicios en una estadia", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 120, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 15, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);
            hwndButtonServicios6 = CreateWindow(
                "BUTTON", // Clase del control
                "Costo total de todos los servicios de una estadia", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 150, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 16, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);
            hwndButtonServicios7 = CreateWindow(
                "BUTTON", // Clase del control
                "Generar factura", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 180, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 17, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);
            hwndButtonServicios8 = CreateWindow(
                "BUTTON", // Clase del control
                "Menu principal", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 210, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 18, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);
            
        }else if (msg == WM_COMMAND) {
            if(LOWORD(wParam) == 11) {
                cout<<"hola";
            }else if(LOWORD(wParam) == 12){
                cout<<"nel";

            }else if(LOWORD(wParam) == 13){
                cout<<"xd";

            }else if(LOWORD(wParam) == 14){


            }else if(LOWORD(wParam) == 15){


            }else if(LOWORD(wParam) == 16){


            }else if(LOWORD(wParam) == 17){


            }else if(LOWORD(wParam) == 18){


            }

        }
        
        if (LOWORD(wParam) == 2) {
            hwndButtonEmpleado1 = CreateWindow(
                "BUTTON", // Clase del control
                "Buscar Empleado", // Texto del botón          
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 0, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 21, // Identificador del botón
                NULL, NULL);

            // Crear los demás botones aquí
            hwndButtonEmpleado2 = CreateWindow(
                "BUTTON", // Clase del control
                "Agregar Empleado", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 30, windowWidth, 30, // Posición y tamaño del botón     
                hwnd, // Ventana padre
                (HMENU) 22, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);
            hwndButtonEmpleado3 = CreateWindow(
                "BUTTON", // Clase del control
                "Eliminar empleado", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 60, windowWidth, 30, // Posición y tamaño del botón                                     //x, y
                hwnd, // Ventana padre
                (HMENU) 23, // Identificador del botón, con esto reconoce los casos           
                NULL, NULL);
            hwndButtonEmpleado4 = CreateWindow(
                "BUTTON", // Clase del control
                "Ver empleados de un area", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 90, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 24, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);
            hwndButtonEmpleado5 = CreateWindow(
                "BUTTON", // Clase del control
                "Ver todos los empleados", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 120, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 25, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);
            hwndButtonEmpleado6 = CreateWindow(
                "BUTTON", // Clase del control
                "Ver sueldo de todos los empleados", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 150, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 26, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);
            hwndButtonEmpleado7 = CreateWindow(
                "BUTTON", // Clase del control
                "ver sueldo del empleado", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 180, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 27, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);
            hwndButtonEmpleado8 = CreateWindow(
                "BUTTON", // Clase del control
                "Actualizar informacion del empleado", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 210, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 28, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);            
            hwndButtonEmpleado9 = CreateWindow(
                "BUTTON", // Clase del control
                "Aplicar aumento", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 240, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 29, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);            
            hwndButtonEmpleado10 = CreateWindow(
                "BUTTON", // Clase del control
                "ver informacion del empleado", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 270, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 291, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);            
            hwndButtonEmpleado11 = CreateWindow(
                "BUTTON", // Clase del control
                "Menu principal", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 300, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 292, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);            

        }else if (msg == WM_COMMAND) {
            if(LOWORD(wParam) == 21) {
                cout<<"hola";
            }else if(LOWORD(wParam) == 22){
                cout<<"nel";

            }else if(LOWORD(wParam) == 23){
                cout<<"xd";

            }else if(LOWORD(wParam) == 24){


            }else if(LOWORD(wParam) == 25){


            }else if(LOWORD(wParam) == 26){


            }else if(LOWORD(wParam) == 27){


            }else if(LOWORD(wParam) == 28){


            }else if(LOWORD(wParam) == 29){


            }else if(LOWORD(wParam) == 291){


            }else if(LOWORD(wParam) == 292){


            }

        }
        
        
        if (LOWORD(wParam) == 3) {
            hwndButtonEstadia1 = CreateWindow(
                "BUTTON", // Clase del control
                "Buscar huesped", // Texto del botón          
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 0, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 31, // Identificador del botón
                NULL, NULL);

            // Crear los demás botones aquí
            hwndButtonEstadia2 = CreateWindow(
                "BUTTON", // Clase del control
                "Buscar Estadia por parte del DNI del huesped", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 30, windowWidth, 30, // Posición y tamaño del botón     
                hwnd, // Ventana padre
                (HMENU) 32, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);
            hwndButtonEstadia3 = CreateWindow(
                "BUTTON", // Clase del control
                "Ver todas las estadias", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 60, windowWidth, 30, // Posición y tamaño del botón                                     //x, y
                hwnd, // Ventana padre
                (HMENU) 33, // Identificador del botón, con esto reconoce los casos           
                NULL, NULL);
            hwndButtonEstadia4 = CreateWindow(
                "BUTTON", // Clase del control
                "Valor de costo de todas las estadias", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 90, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 34, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);
            hwndButtonEstadia5 = CreateWindow(
                "BUTTON", // Clase del control
                "Agregar Estadia", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 120, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 35, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);
            hwndButtonEstadia6 = CreateWindow(
                "BUTTON", // Clase del control
                "Cancelar Estadia", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 150, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 36, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);
            hwndButtonEstadia7 = CreateWindow(
                "BUTTON", // Clase del control
                "Generar Factura de todo", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 180, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 37, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);
            hwndButtonEstadia8 = CreateWindow(
                "BUTTON", // Clase del control
                "Obtener tiempo de la estadia", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 210, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 38, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);            
            hwndButtonEstadia9 = CreateWindow(
                "BUTTON", // Clase del control
                "Ver toda la informacion de una estadia", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 240, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 39, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);            
            hwndButtonEstadia10 = CreateWindow(
                "BUTTON", // Clase del control
                "ver si la estadia esta ocupada", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 270, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 391, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);            
            hwndButtonEstadia11 = CreateWindow(
                "BUTTON", // Clase del control
                "Buscar Huesped por parte del numero de la habitacion", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 300, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 392, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);   
            hwndButtonEstadia12 = CreateWindow(
                "BUTTON", // Clase del control
                "Menu principal", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 330, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 393, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);   
        
        
        
        }else if (msg == WM_COMMAND) {
            if(LOWORD(wParam) == 31) {
                cout<<"hola";
            }else if(LOWORD(wParam) == 32){
                cout<<"nel";

            }else if(LOWORD(wParam) == 33){
                cout<<"xd";

            }else if(LOWORD(wParam) == 34){


            }else if(LOWORD(wParam) == 35){


            }else if(LOWORD(wParam) == 36){


            }else if(LOWORD(wParam) == 37){


            }else if(LOWORD(wParam) == 38){


            }else if(LOWORD(wParam) == 39){


            }else if(LOWORD(wParam) == 391){


            }else if(LOWORD(wParam) == 392){


            }else if(LOWORD(wParam) == 393){


            }

        }
        
        
        if (LOWORD(wParam) == 4) {
            hwndButtonParqueadero1 = CreateWindow(
                "BUTTON", // Clase del control
                "verificar disponibilidad", // Texto del botón          
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 0, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 41, // Identificador del botón
                NULL, NULL);

            // Crear los demás botones aquí
            hwndButtonParqueadero2 = CreateWindow(
                "BUTTON", // Clase del control
                "Calcular costo", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 30, windowWidth, 30, // Posición y tamaño del botón     
                hwnd, // Ventana padre
                (HMENU) 42, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);
            hwndButtonParqueadero3 = CreateWindow(
                "BUTTON", // Clase del control
                "generar reporte", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 60, windowWidth, 30, // Posición y tamaño del botón                                     //x, y
                hwnd, // Ventana padre
                (HMENU) 43, // Identificador del botón, con esto reconoce los casos           
                NULL, NULL);
            hwndButtonParqueadero4 = CreateWindow(
                "BUTTON", // Clase del control
                "Valor de costo de todas las estadias", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 90, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 44, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);
            hwndButtonParqueadero5 = CreateWindow(
                "BUTTON", // Clase del control
                "Menu Principal", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 120, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 45, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);
          
        }else if (msg == WM_COMMAND) {
            if(LOWORD(wParam) == 41) {
                cout<<"hola";
            }else if(LOWORD(wParam) == 42){
                cout<<"nel";

            }else if(LOWORD(wParam) == 43){
                cout<<"xd";

            }else if(LOWORD(wParam) == 44){


            }else if(LOWORD(wParam) == 45){


            }

        }
        
        
        if (LOWORD(wParam) == 5) {
            hwndButtonHuesped1 = CreateWindow(
                "BUTTON", // Clase del control
                "Ver todos los datos del huesped", // Texto del botón          
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 0, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 51, // Identificador del botón
                NULL, NULL);

            // Crear los demás botones aquí
            hwndButtonHuesped2 = CreateWindow(
                "BUTTON", // Clase del control
                "Buscar un huesped por su DNI", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 30, windowWidth, 30, // Posición y tamaño del botón     
                hwnd, // Ventana padre
                (HMENU) 52, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);
            hwndButtonHuesped3 = CreateWindow(
                "BUTTON", // Clase del control
                "Ver a todos los huespedes que se encuentran actualmente en el hotel", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 60, windowWidth, 30, // Posición y tamaño del botón                                     //x, y
                hwnd, // Ventana padre
                (HMENU) 53, // Identificador del botón, con esto reconoce los casos           
                NULL, NULL);
            hwndButtonHuesped4 = CreateWindow(
                "BUTTON", // Clase del control
                "Cambiar datos", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 90, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 54, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);
            hwndButtonHuesped5 = CreateWindow(
                "BUTTON", // Clase del control
                "Menu principal", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 120, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 55, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);
           
        
        
        }else if (msg == WM_COMMAND) {
            if(LOWORD(wParam) == 51) {
                cout<<"hola";
            }else if(LOWORD(wParam) == 52){
                cout<<"nel";

            }else if(LOWORD(wParam) == 53){
                cout<<"xd";

            }else if(LOWORD(wParam) == 54){


            }else if(LOWORD(wParam) == 55){


            }

        }
        
        
        
        
        
        return 0;

    }else if(msg == WM_SIZE){

        
        RECT rect;
        GetClientRect(hwnd, &rect);
        int windowWidth = rect.right - rect.left;
        int x = windowWidth * ((100.0 / 7) / 100); 
        int xBoton = windowWidth * 0.13;
        cout<<x<<endl;
        cout<<xBoton<<endl;
        
                              //x    y     ancho     alto
        
        //Error del tamano del boton arreglado ya que se superposicionaba uno encima de otro de manera rara: problema(ancho
        MoveWindow(hwndButton1, x , 10, xBoton, 30, TRUE);
        MoveWindow(hwndButton2, x * 2 , 10, xBoton, 30, TRUE);
        MoveWindow(hwndButton3, x * 3 , 10, xBoton, 30, TRUE);
        MoveWindow(hwndButton4, x * 4, 10, xBoton, 30, TRUE);
        MoveWindow(hwndButton5, x * 5, 10, xBoton, 30, TRUE);
        //------------------------------------
        MoveWindow(hwndButtonServicios1, 0 , 0, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonServicios2, 0 , 30, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonServicios3, 0 , 60, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonServicios4, 0 , 90, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonServicios5, 0 , 120, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonServicios6, 0 , 150, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonServicios7, 0 , 180, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonServicios8, 0 , 210, windowWidth, 30, TRUE);
        //------------------------------------
        MoveWindow(hwndButtonEmpleado1, 0 , 0, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEmpleado2, 0 , 30, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEmpleado3, 0 , 60, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEmpleado4, 0 , 90, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEmpleado5, 0 , 120, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEmpleado6, 0 , 150, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEmpleado7, 0 , 180, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEmpleado8, 0 , 210, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEmpleado9, 0 , 240, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEmpleado10, 0 , 270, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEmpleado11, 0 , 300, windowWidth, 30, TRUE);
        //------------------------------------
        MoveWindow(hwndButtonEstadia1, 0 , 0, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEstadia2, 0 , 30, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEstadia3, 0 , 60, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEstadia4, 0 , 90, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEstadia5, 0 , 120, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEstadia6, 0 , 150, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEstadia7, 0 , 180, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEstadia8, 0 , 210, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEstadia9, 0 , 240, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEstadia10, 0 , 270, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEstadia11, 0 , 300, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEstadia12, 0 , 330, windowWidth, 30, TRUE);
        //------------------------------------
        MoveWindow(hwndButtonParqueadero1, 0 , 0, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonParqueadero2, 0 , 30, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonParqueadero3, 0 , 60, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonParqueadero4, 0 , 90, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonParqueadero5, 0 , 120, windowWidth, 30, TRUE);
        //------------------------------------
        MoveWindow(hwndButtonHuesped1, 0 , 0, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonHuesped2, 0 , 30, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonHuesped3, 0 , 60, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonHuesped4, 0 , 90, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonHuesped5, 0 , 120, windowWidth, 30, TRUE);

        return 0;
    }
    
    else if (msg == WM_DESTROY) {
        PostQuitMessage(0);
        return 0;
    }

    return DefWindowProc(hwnd, msg, wParam, lParam);
}

// Función principal
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){       

        WNDCLASS wc = {0};
        wc.lpfnWndProc = WndProc;
        wc.hInstance = hInstance;
        wc.hbrBackground = (HBRUSH)(COLOR_BACKGROUND);
        wc.lpszClassName = "MyWindowClass";

        if (!RegisterClass(&wc))
            return 1;
         // Crear la ventana
        HWND hwnd = CreateWindow(
            "MyWindowClass",        // Clase de la ventana
            "Hotel",        // Título de la ventana
            WS_OVERLAPPEDWINDOW,    // Estilo de la ventana
            CW_USEDEFAULT,          // Posición x de la ventana
            CW_USEDEFAULT,          // Posición y de la ventana
            1280, 720,               // Ancho y alto de la ventana
            NULL, NULL,             // Ventana padre y menú
            hInstance,              // Instancia de la aplicación
            NULL);

        /*        
                // Obtener el ancho y alto de la pantalla
        int screenWidth = GetSystemMetrics(SM_CXSCREEN);
        int screenHeight = GetSystemMetrics(SM_CYSCREEN);

        // Calcular el ancho y alto de la ventana deseada (por ejemplo, el 80% de la pantalla)
        int windowWidth = static_cast<int>(screenWidth * 0.8);
        int windowHeight = static_cast<int>(screenHeight * 0.8);

        // Calcular la posición x e y de la ventana centrada en la pantalla
        int windowX = (screenWidth - windowWidth) / 2;
        int windowY = (screenHeight - windowHeight) / 2;

        // Crear la ventana con las dimensiones y posición calculadas
        HWND hwnd = CreateWindow(
            "MyWindowClass",
            "Mi Aplicación",
            WS_OVERLAPPEDWINDOW,
            windowX,
            windowY,
            windowWidth,
            windowHeight,
            NULL, NULL,
            hInstance,
            NULL);
        */

        if (!hwnd)
            return 2;

        // Mostrar y actualizar la ventana
        ShowWindow(hwnd, nCmdShow);
        UpdateWindow(hwnd);

        // Bucle de mensajes
        MSG msg;
        while (GetMessage(&msg, NULL, 0, 0))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }

        return msg.wParam;
}








