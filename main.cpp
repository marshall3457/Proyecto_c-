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
HWND hwndButtonServicios1;
HWND hwndButtonServicios2;
HWND hwndButtonServicios3;
HWND hwndButtonServicios4;
HWND hwndButtonServicios5;
HWND hwndButtonServicios6;
HWND hwndButtonServicios7;
HWND hwndButtonServicios8;

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
                (HMENU) 1, // Identificador del botón
                NULL, NULL);

            // Crear los demás botones aquí
            hwndButtonServicios2 = CreateWindow(
                "BUTTON", // Clase del control
                "Agregar servicio", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 30, windowWidth, 30, // Posición y tamaño del botón     
                hwnd, // Ventana padre
                (HMENU) 2, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);
            hwndButtonServicios3 = CreateWindow(
                "BUTTON", // Clase del control
                "Conocer veces pedidas de un servicio en especifico", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 60, windowWidth, 30, // Posición y tamaño del botón                                     //x, y
                hwnd, // Ventana padre
                (HMENU) 3, // Identificador del botón, con esto reconoce los casos           
                NULL, NULL);
            hwndButtonServicios4 = CreateWindow(
                "BUTTON", // Clase del control
                "Conocer veces pedidas de todos los servicios", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 90, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 4, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);
            hwndButtonServicios5 = CreateWindow(
                "BUTTON", // Clase del control
                "Costo total de todas las areas de servicios en una estadía", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 120, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 5, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);
            hwndButtonServicios6 = CreateWindow(
                "BUTTON", // Clase del control
                "Costo total de todos los servicios de una estadia", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 150, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 5, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);
            hwndButtonServicios7 = CreateWindow(
                "BUTTON", // Clase del control
                "Generar factura", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 180, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 5, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);
            hwndButtonServicios8 = CreateWindow(
                "BUTTON", // Clase del control
                "Menu principal", // Texto del botón
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 210, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 5, // Identificador del botón, con esto reconoce los casos
                NULL, NULL);

            
        } else if (LOWORD(wParam) == 2) {
            // Agregar lógica para el resto de los botones aquí

            

        }
        

        return 0;
        
    }else if(msg == WM_SIZE){
        RECT rect;
        GetClientRect(hwnd, &rect);
        int windowWidth = rect.right - rect.left;

        MoveWindow(hwndButtonServicios1, 0 , 0, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonServicios2, 0 , 30, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonServicios3, 0 , 60, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonServicios4, 0 , 90, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonServicios5, 0 , 120, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonServicios6, 0 , 150, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonServicios7, 0 , 180, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonServicios8, 0 , 210, windowWidth, 30, TRUE);

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
            "Mi Aplicación",        // Título de la ventana
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








