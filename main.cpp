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
using namespace std;

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
//-------------------------




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

        hwndButton2 = CreateWindow(
            "BUTTON", 
            "Empleados", 
            WS_VISIBLE | WS_CHILD,
            300, 10, 200, 30, 
            hwnd, 
            (HMENU) 2, 
            NULL, NULL);
        hwndButton3 = CreateWindow(
            "BUTTON",
            "Estadias",
            WS_VISIBLE | WS_CHILD,
            520, 10, 200, 30,                               
            hwnd, 
            (HMENU) 3,          
            NULL, NULL);
        hwndButton4 = CreateWindow(
            "BUTTON", 
            "Parqueadero", 
            WS_VISIBLE | WS_CHILD,
            740, 10, 200, 30, 
            hwnd, 
            (HMENU) 4, 
            NULL, NULL);
        hwndButton5 = CreateWindow(
            "BUTTON",
            "Huesped",
            WS_VISIBLE | WS_CHILD,
            1000, 10, 200, 30, 
            hwnd,
            (HMENU) 5,
            NULL, NULL);
        HWND hwndLabel = CreateWindow(
            "STATIC", 
            "Texto de ejemplo", 
            WS_VISIBLE | WS_CHILD, 
            0, 240, 200, 30, 
            hwnd,
            NULL, NULL, NULL);


        return 0;
        
    } else if (msg == WM_COMMAND) {
        RECT windowRect;
        GetClientRect(hwnd, &windowRect);
        int windowWidth = windowRect.right - windowRect.left;
        //int windowHeight = windowRect.bottom - windowRect.top;



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

            hwndButtonServicios2 = CreateWindow(
                "BUTTON", 
                "Agregar servicio", 
                WS_VISIBLE | WS_CHILD, 
                0, 30, windowWidth, 30,   
                hwnd,
                (HMENU) 12,
                NULL, NULL);
            hwndButtonServicios3 = CreateWindow(
                "BUTTON",
                "Conocer veces pedidas de un servicio en especifico",
                WS_VISIBLE | WS_CHILD,
                0, 60, windowWidth, 30,                                 
                hwnd, 
                (HMENU) 13,          
                NULL, NULL);
            hwndButtonServicios4 = CreateWindow(
                "BUTTON", 
                "Conocer veces pedidas de todos los servicios",
                WS_VISIBLE | WS_CHILD,
                0, 90, windowWidth, 30, 
                hwnd, 
                (HMENU) 14, 
                NULL, NULL);
            hwndButtonServicios5 = CreateWindow(
                "BUTTON",
                "Costo total de todas las areas de servicios en una estadia",
                WS_VISIBLE | WS_CHILD, 
                0, 120, windowWidth, 30, 
                hwnd, 
                (HMENU) 15,
                NULL, NULL);
            hwndButtonServicios6 = CreateWindow(
                "BUTTON", 
                "Costo total de todos los servicios de una estadia", 
                WS_VISIBLE | WS_CHILD,
                0, 150, windowWidth, 30,
                hwnd, 
                (HMENU) 16,
                NULL, NULL);
            hwndButtonServicios7 = CreateWindow(
                "BUTTON",
                "Generar factura",
                WS_VISIBLE | WS_CHILD,
                0, 180, windowWidth, 30, 
                hwnd, 
                (HMENU) 17, 
                NULL, NULL);
            hwndButtonServicios8 = CreateWindow(
                "BUTTON", 
                "Menu principal", 
                WS_VISIBLE | WS_CHILD, 
                0, 210, windowWidth, 30, 
                hwnd,
                (HMENU) 18, 
                NULL, NULL);
            
        }else if(msg == WM_COMMAND){
            if(LOWORD(wParam) == 11){

            }
        }

        if (LOWORD(wParam) == 2) {
            hwndButtonEmpleado1 = CreateWindow(
                "BUTTON",
                "Buscar Empleado",         
                WS_VISIBLE | WS_CHILD, 
                0, 0, windowWidth, 30, 
                hwnd, 
                (HMENU) 21, 
                NULL, NULL);

            hwndButtonEmpleado2 = CreateWindow(
                "BUTTON",
                "Agregar Empleado", 
                WS_VISIBLE | WS_CHILD,
                0, 30, windowWidth, 30,   
                hwnd, 
                (HMENU) 22, 
                NULL, NULL);
            hwndButtonEmpleado3 = CreateWindow(
                "BUTTON", 
                "Eliminar empleado",
                WS_VISIBLE | WS_CHILD, 
                0, 60, windowWidth, 30,                                
                hwnd, 
                (HMENU) 23, 
                NULL, NULL);
            hwndButtonEmpleado4 = CreateWindow(
                "BUTTON", 
                "Ver empleados de un area",
                WS_VISIBLE | WS_CHILD, 
                0, 90, windowWidth, 30, 
                hwnd, 
                (HMENU) 24, 
                NULL, NULL);
            hwndButtonEmpleado5 = CreateWindow(
                "BUTTON",
                "Ver todos los empleados",
                WS_VISIBLE | WS_CHILD, 
                0, 120, windowWidth, 30,
                hwnd,
                (HMENU) 25, 
                NULL, NULL);
            hwndButtonEmpleado6 = CreateWindow(
                "BUTTON", 
                "Ver sueldo de todos los empleados", 
                WS_VISIBLE | WS_CHILD, 
                0, 150, windowWidth, 30,
                hwnd, 
                (HMENU) 26, 
                NULL, NULL);
            hwndButtonEmpleado7 = CreateWindow(
                "BUTTON", 
                "ver sueldo del empleado", 
                WS_VISIBLE | WS_CHILD, 
                0, 180, windowWidth, 30,
                hwnd, 
                (HMENU) 27,
                NULL, NULL);
            hwndButtonEmpleado8 = CreateWindow(
                "BUTTON", 
                "Actualizar informacion del empleado", 
                WS_VISIBLE | WS_CHILD, 
                0, 210, windowWidth, 30,
                hwnd, 
                (HMENU) 28,
                NULL, NULL);            
            hwndButtonEmpleado9 = CreateWindow(
                "BUTTON", 
                "Aplicar aumento", 
                WS_VISIBLE | WS_CHILD, 
                0, 240, windowWidth, 30, 
                hwnd, 
                (HMENU) 29, 
                NULL, NULL);            
            hwndButtonEmpleado10 = CreateWindow(
                "BUTTON", 
                "ver informacion del empleado",
                WS_VISIBLE | WS_CHILD, 
                0, 270, windowWidth, 30, 
                hwnd,
                (HMENU) 291, 
                NULL, NULL);            
            hwndButtonEmpleado11 = CreateWindow(
                "BUTTON", 
                "Menu principal", 
                WS_VISIBLE | WS_CHILD, 
                0, 300, windowWidth, 30, 
                hwnd,
                (HMENU) 292, 
                NULL, NULL);            

        }
        
        
        if (LOWORD(wParam) == 3) {
            hwndButtonEstadia1 = CreateWindow(
                "BUTTON",
                "Buscar huesped",         
                WS_VISIBLE | WS_CHILD, 
                0, 0, windowWidth, 30, 
                hwnd,
                (HMENU) 31, 
                NULL, NULL);

            hwndButtonEstadia2 = CreateWindow(
                "BUTTON", // Clase del control
                "Buscar Estadia por parte del DNI del huesped", 
                WS_VISIBLE | WS_CHILD,
                0, 30, windowWidth, 30,    
                hwnd, 
                (HMENU) 32, 
                NULL, NULL);
            hwndButtonEstadia3 = CreateWindow(
                "BUTTON", 
                "Ver todas las estadias", 
                WS_VISIBLE | WS_CHILD,
                0, 60, windowWidth, 30,
                hwnd, 
                (HMENU) 33,            
                NULL, NULL);
            hwndButtonEstadia4 = CreateWindow(
                "BUTTON", // Clase del control
                "Valor de costo de todas las estadias", 
                WS_VISIBLE | WS_CHILD, 
                0, 90, windowWidth, 30, 
                hwnd, 
                (HMENU) 34,
                NULL, NULL);
            hwndButtonEstadia5 = CreateWindow(
                "BUTTON", 
                "Agregar Estadia", 
                WS_VISIBLE | WS_CHILD, 
                0, 120, windowWidth, 30,
                hwnd, 
                (HMENU) 35,
                NULL, NULL);
            hwndButtonEstadia6 = CreateWindow(
                "BUTTON",
                "Cancelar Estadia", 
                WS_VISIBLE | WS_CHILD, 
                0, 150, windowWidth, 30, 
                hwnd, 
                (HMENU) 36, 
                NULL, NULL);
            hwndButtonEstadia7 = CreateWindow(
                "BUTTON",
                "Generar Factura de todo", 
                WS_VISIBLE | WS_CHILD, 
                0, 180, windowWidth, 30, 
                hwnd, 
                (HMENU) 37,
                NULL, NULL);
            hwndButtonEstadia8 = CreateWindow(
                "BUTTON",
                "Obtener tiempo de la estadia",
                WS_VISIBLE | WS_CHILD,
                0, 210, windowWidth, 30,
                hwnd, 
                (HMENU) 38,
                NULL, NULL);            
            hwndButtonEstadia9 = CreateWindow(
                "BUTTON",
                "Ver toda la informacion de una estadia", 
                WS_VISIBLE | WS_CHILD, 
                0, 240, windowWidth, 30, 
                hwnd, 
                (HMENU) 39, 
                NULL, NULL);            
            hwndButtonEstadia10 = CreateWindow(
                "BUTTON",
                "ver si la estadia esta ocupada",
                WS_VISIBLE | WS_CHILD,
                0, 270, windowWidth, 30, 
                hwnd, 
                (HMENU) 391,
                NULL, NULL);            
            hwndButtonEstadia11 = CreateWindow(
                "BUTTON", 
                "Buscar Huesped por parte del numero de la habitacion", 
                WS_VISIBLE | WS_CHILD, 
                0, 300, windowWidth, 30,
                hwnd, 
                (HMENU) 392,
                NULL, NULL);   
            hwndButtonEstadia12 = CreateWindow(
                "BUTTON", 
                "Menu principal", 
                WS_VISIBLE | WS_CHILD, 
                0, 330, windowWidth, 30, 
                hwnd, 
                (HMENU) 393, 
                NULL, NULL);   
        
        
        
        }
        
        
        if (LOWORD(wParam) == 4) {
            hwndButtonParqueadero1 = CreateWindow(
                "BUTTON", 
                "verificar disponibilidad",       
                WS_VISIBLE | WS_CHILD, 
                0, 0, windowWidth, 30, 
                hwnd,
                (HMENU) 41, 
                NULL, NULL);

            hwndButtonParqueadero2 = CreateWindow(
                "BUTTON",
                "Calcular costo",
                WS_VISIBLE | WS_CHILD,
                0, 30, windowWidth, 30,    
                hwnd,
                (HMENU) 42,
                NULL, NULL);
            hwndButtonParqueadero3 = CreateWindow(
                "BUTTON", 
                "generar reporte", 
                WS_VISIBLE | WS_CHILD, 
                0, 60, windowWidth, 30,                                  
                hwnd, 
                (HMENU) 43,          
                NULL, NULL);
            hwndButtonParqueadero4 = CreateWindow(
                "BUTTON",
                "Valor de costo de todas las estadias",
                WS_VISIBLE | WS_CHILD,
                0, 90, windowWidth, 30, 
                hwnd, 
                (HMENU) 44,
                NULL, NULL);
            hwndButtonParqueadero5 = CreateWindow(
                "BUTTON",
                "Menu Principal",
                WS_VISIBLE | WS_CHILD,
                0, 120, windowWidth, 30, 
                hwnd,
                (HMENU) 45, 
                NULL, NULL);
          
        }
        
        if (LOWORD(wParam) == 5) {
            hwndButtonHuesped1 = CreateWindow(
                "BUTTON",
                "Ver todos los datos del huesped",     
                WS_VISIBLE | WS_CHILD,
                0, 0, windowWidth, 30,
                hwnd,
                (HMENU) 51, 
                NULL, NULL);

            // Crear los demás botones aquí
            hwndButtonHuesped2 = CreateWindow(
                "BUTTON", // Clase del control
                "Buscar un huesped por su DNI", 
                WS_VISIBLE | WS_CHILD, 
                0, 30, windowWidth, 30, 
                hwnd,
                (HMENU) 52, 
                NULL, NULL);
            hwndButtonHuesped3 = CreateWindow(
                "BUTTON", 
                "Ver a todos los huespedes que se encuentran actualmente en el hotel", 
                WS_VISIBLE | WS_CHILD, 
                0, 60, windowWidth, 30,                               
                hwnd, // Ventana padre
                (HMENU) 53,         
                NULL, NULL);
            hwndButtonHuesped4 = CreateWindow(
                "BUTTON",
                "Cambiar datos",
                WS_VISIBLE | WS_CHILD,
                0, 90, windowWidth, 30, 
                hwnd, // Ventana padre
                (HMENU) 54, 
                NULL, NULL);
            hwndButtonHuesped5 = CreateWindow(
                "BUTTON",
                "Menu principal", 
                WS_VISIBLE | WS_CHILD, 
                0, 120, windowWidth, 30, 
                hwnd, 
                (HMENU) 55, 
                NULL, NULL);
           
        
        
        }
        
        return 0;

    }else if(msg == WM_SIZE){

        
        RECT rect;
        GetClientRect(hwnd, &rect);
        int windowWidth = rect.right - rect.left;
        int x = windowWidth * ((100.0 / 7) / 100); 
        int xBoton = windowWidth * 0.13;
   
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








