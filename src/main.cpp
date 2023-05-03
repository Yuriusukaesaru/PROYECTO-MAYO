#include <iostream> // Separación entre #include y <librería> mi Yuri
#include <string>
#include <vector>
#include "curso.hpp"

int main(void)
{
    Curso curso{ "CURSO DE PENDEJOS .L.","FELIPE TOVARES CANCINO" };
	
    std::string nombre_profesor, nombre_materia;

    int decision{ 0 };

	/* No tiene caso crear 3 struct temporales cuando pudiéramos pasarlo diréctamete,
	 * sin embargo vamos a intentarlo primero a tu modo.
	 *
	 * Por lo pronto necesito espacios, harmano, espacios entre operadores */
    Curso::Student s1 = { "Alicia", {90, 60, 90} };
	Curso::Student s2 = { "Ana", {100, 100, 90} };
	Curso::Student s3 = { "Alie", {90, 90, 100} };

	curso.add_student( s1 );
	curso.add_student( s2 );
	curso.add_student( s3 );

	//AHORA SIMPLEMENTE DESPLIEGO PARA COMPROBAR SI SE REALIZO CORRECTAMENTE
	curso.show_values();

	bool exito{ false };

    do {

		// La identación debe ser correcta dentro de do
		std::cout << "\nBIENVENIDO ESTAS SON LAS OPCIONES: " << '\n'
				  << "1.- BUSCAR EL NOMBRE DEL CURSO" << '\n'
				  << "2.- CAMBIAR VALORES " << '\n'
				  << "3.- AGREGAR CALIFICACIONES DEL ALUMNO "
				  << "4.- SALIR" << '\n'
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
				exito = curso.comparar_strings( nombre_materia);
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
    } while ( decision != 4 and exito == false );

}
