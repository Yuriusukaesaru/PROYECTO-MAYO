#include <iostream>
#include <string>
#include <array>
#include <iomanip>
#include "curso.hpp"

Curso::Curso(const std::string &_CursoNombre , const std::string &_NombreProfesor ) :
	curso_nombre{ _CursoNombre }, nombre_profesor{ _NombreProfesor }
{}


void Curso::set_nombre_curso( std::string &_NombreCurso )
{
	
	curso_nombre = _NombreCurso;
}

void Curso::set_nombre_profesor(std::string &_NombreProfesor)
{
    nombre_profesor = _NombreProfesor;
}

bool Curso::comparar_strings(std::string &_nombre_curso)
{
    std::cout << "INGRESE EL NOMBRE DEL CURSO: " ;
    std::getline(std::cin, _nombre_curso);

	
    if ( _nombre_curso == curso_nombre ) {
        std::cout << "EL NOMBRE EXISTE EN LA BASE DE DATOS ACCEDIENDO..." << '\n' <<'\n';
        std::cout << "EL NOMBRE DEL CURSO ES:" << get_nombre_curso() << std::endl;
        std::cout << "EL NOMBRE DEL PROFESOR ACARGO ES : "<< get_nombre_profesor();

        return true; //sentinel-control

    } else {
        std::cout << "NO EXISTE ESE NOMBRE EN LA BASE DE DATOS";
		return false;
	}

}

void Curso::cambiar_valores(std::string &_NombreCambio, std::string &_NombreMateria)
{
    std::cout<<"ESTOS SON LOS DATOS: " 
             <<"NOMBRE DEL CURSO: " << get_nombre_curso() << '\n'
             <<"NOMBRE DEL PROFESOR: "<< get_nombre_profesor() << '\n'
             <<"*INGRESE LOS DATOS A CAMBIAR*" << '\n'
             <<"NOMBRE NUEVO DEL PROFESOR: ";
             std::getline(std::cin,_NombreCambio);
             set_nombre_profesor(_NombreCambio);
    std::cout<<"NOMBRE NUEVO DEL CURSO: ";
             std::getline(std::cin,_NombreMateria);
             set_nombre_curso(_NombreMateria);

}

void Curso::procesar_calificaciones()const
{
    std::cout << "\n\tESTAS SON LAS CALIFICACIONES" << '\n'
              << "ESTUDIANTE" << "\tCALIF 1" <<"\tCALIF 2"
              "\tCALIF 3" << "\t PROMEDIO" << '\n';
        show_values( );

    std::cout << std::setw(9) << "\nESTOS ES EL MAXIMO: " << obtener_max() 
              << "\nESTOS SON LOS MINIMOS " << obtener_min();
}


void Curso::add_student(const struct Student &_s )
{
			table.push_back( _s );
}

void Curso::show_values()const
{

   double sum{ 0 };
   int i = 0;

   for (const auto &student : table){

   std::cout << std::setw(9)<< student.name  << ":";
   for (int grade : student.grades)
   {
    sum += grade;
    std::cout << std::setw(9) << grade << " " << std::setw(9); 
    ++i;
   }
    std::cout << sum / i;
    i = 0;
    sum = 0;
    std::cout << std::endl;
   }
}

int Curso::obtener_min( )const
{
     int calif_min{ 100 }; //establecemos esa nota minima 
        for( auto &estudiante : table )
        {
            for ( int calificacion : estudiante.grades)
            {
                if ( calificacion < calif_min)
                    calif_min = calificacion;
            }
        }
    return calif_min;
}

int Curso::obtener_max( )const
{
     int calif_max{ 0 }; //establecemos esa nota max
        for( auto &estudiante : table )
        {
            for ( int calificacion : estudiante.grades)
            {
                if ( calificacion > calif_max)
                    calif_max = calificacion;
            }
        }
    return calif_max;
}

std::string Curso::get_nombre_curso()const
{
            return curso_nombre;
}

std::string Curso::get_nombre_profesor()const
{
            return nombre_profesor;
}
