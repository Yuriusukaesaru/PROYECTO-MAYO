#include<iostream>
#include<string>
#include"clases.hpp"

int main(void)
{
    Curso nombre_curso("CURSO DE PENDEJOS .L.","FELIPE TOVARES CANCINO");
    std::string nombre_profesor,nombre_materia;
    int decision{ 0 };
    
    do{

    std::cout << "\nBIENVENIDO ESTAS SON LAS OPCIONES: " << '\n'
              << "1.- BUSCAR EL NOMBRE DEL CURSO" << '\n'
              << "2.- CAMBIAR VALORES " << '\n'
              << "3.- SALIR" << '\n'
              <<"OPCION :";
    std::cin >> decision;
    std::cin.ignore( );

        switch ( decision )
        {
            case 1 :
            nombre_curso.comparar_strings( nombre_materia, decision );
            break;
            case 2: 
            nombre_curso.cambiar_valores( nombre_profesor, nombre_materia );
            break;
            case 3:
                std::cout << "HASTA LA VISTA :)";
            default:
                std::cout << "OPCION NO VALIDA"; 

        }
    }while (decision != 3);

}