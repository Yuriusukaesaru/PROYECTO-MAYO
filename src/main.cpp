#include <iostream> // Separación entre #include y <librería> mi Yuri
#include <string>
#include <vector>
#include <array>
#include "curso.hpp"

int main(void)
{
    Curso curso{ "CURSO DE PENDEJOS .L.","FELIPE TOVARES CANCINO" };
    std::string nombre_profesor, nombre_materia;
	Curso::Student alumno_temporal;

    int decision{ 0 };
	//AQUI SIMPLEMENTE AGREGO PERSONAS Y CALIFICACIONES
	//PARA TENER ALGO QUE DESPLEGAR
    Curso::Student s1 = { "Alicia", {90, 60, 90} };
	Curso::Student s2 = { "Ana", {100, 100, 90} };
	Curso::Student s3 = { "Alie", {90, 90, 100} };
	
	curso.add_student( s1 );
	curso.add_student( s2 );
	curso.add_student( s3 );

	bool exito{ false };

    do {

		// La identación debe ser correcta dentro de do
		std::cout << "\nBIENVENIDO ESTAS SON LAS OPCIONES: " << '\n'
				  << "1.- BUSCAR EL NOMBRE DEL CURSO" << '\n'
				  << "2.- CAMBIAR VALORES " << '\n'
				  << "3.- AGREGAR CALIFICACIONES DEL ALUMNO " <<'\n'
				  << "4.- SALIR" << '\n'
				  <<"OPCION :";
		std::cin >> decision;
		std::cin.ignore( );


        switch ( decision )
        {
			// Identa el cuerpo de tus cases
            case 1 :
				exito = curso.comparar_strings( nombre_materia);
				break;
            case 2: 
				curso.cambiar_valores( nombre_profesor, nombre_materia );
				break;
			case 3:
				std::cout << "\nINGRESE EL ESTUDIANTE: ";
				std::getline(std::cin,alumno_temporal.name);
				std::cout << "\nINGRESE LAS NOTAS: " ;
				for (int& grade : alumno_temporal.grades) {
					std::cout<<"\nCALIFICACION: "<<std::endl;
        			std::cin >> grade;
    				}
				curso.add_student( alumno_temporal );
				curso.procesar_calificaciones();
            case 4:
                std::cout << "HASTA LA VISTA :)";
				break;
            default:
                std::cout << "OPCION NO VALIDA"; 
        }
    } while ( decision != 4  && exito == false );

}
