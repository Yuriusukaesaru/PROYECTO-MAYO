#include <iostream> // Separación entre #include y <librería> mi Yuri
#include <string>
#include "curso.hpp"

int main(void)
{
	// nombre_curso no está chido como nombre de objeto.
	// También cambiamos paréntesis por llaves
    Curso curso{ "CURSO DE PENDEJOS .L.","FELIPE TOVARES CANCINO" };
    std::string nombre_profesor, nombre_materia;

    int decision{ 0 };

    /*std::vector<std::vector<int>>calificaciones_alumnos = {
        {1,2,3},
        {1,2,3},
        {1,2,3}
    };*/

   curso.demostracion();

	bool exito{ false };

    do {

		// La identación debe ser correcta dentro de do
		std::cout << "\nBIENVENIDO ESTAS SON LAS OPCIONES: " << '\n'
				  << "1.- BUSCAR EL NOMBRE DEL CURSO" << '\n'
				  << "2.- CAMBIAR VALORES " << '\n'
				  << "3.- SALIR" << '\n'
				  <<"OPCION :";
		std::cin >> decision;
		std::cin.ignore( );


        switch ( decision )
        {
			// Identa el cuerpo de tus cases
            case 1 :
				// Le metimos un return a comparar_strings. puedes quitárselo, símplement es
				// un ejemplo de como puedes manipular ciclos extérnamente.
				//
				// En realidad lo ideal sería manipular la variable exito en este mismo case
				// y no dentro de la función comparar_strings
				exito = curso.comparar_strings( nombre_materia, decision );
				break;
            case 2: 
				curso.cambiar_valores( nombre_profesor, nombre_materia );
				break;
            case 3:
                std::cout << "HASTA LA VISTA :)";
				break;
            default:
                std::cout << "OPCION NO VALIDA"; 
        }
    } while ( decision != 3 and exito == false );

}
