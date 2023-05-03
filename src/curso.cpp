#include <iostream>
#include <string>
#include "curso.hpp"

Curso::Curso(const std::string &_CursoNombre , const std::string &_NombreProfesor ) :
	curso_nombre{ _CursoNombre }, nombre_profesor{ _NombreProfesor }
{}

void Curso::set_nombre_curso( std::string &_NombreCurso )/*{{{*/
{
	// Traías identaciones bárbaras
	curso_nombre = _NombreCurso;
}/*}}}*/

void Curso::set_nombre_profesor(std::string &_NombreProfesor)/*{{{*/
{
    nombre_profesor = _NombreProfesor;
}/*}}}*/

bool Curso::comparar_strings(std::string &_nombre_curso)/*{{{*/
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

}/*}}}*/

void Curso::cambiar_valores(std::string &_NombreCambio, std::string &_NombreMateria)/*{{{*/
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

}/*}}}*/

/*void Curso::demostracion( ){{{
{
	
    for( std::int32_t i = 0; i < alumnos_curso; ++i) {
        for( std::int32_t j = 0 ; j < numero_examenes; ++j )
            std::cout << calificaciones_alumnos[i][j];
        std::cout <<'\n';
    }
}*//*}}}*/

//*************OJOOOOOO
//AQUI SEGUN CHAT GPT ESTO ES CORRECTO PARA DESPLEGAR LOS DATOS
//ALMACENADOS EN EL VECTOR
void Curso::show_values()/*{{{*/
{
   for (const auto &student : table){
   std::cout <<student.name  << ":";
   for (int grade : student.grades)
   {
    std::cout <<grade << " ";
   }
    std::cout << std::endl;
   }
}/*}}}*/

/*void Curso::obtener_minimo( )const{{{
{

}*//*}}}*/

std::string Curso::get_nombre_curso()const/*{{{*/
{
            return curso_nombre;
}/*}}}*/

std::string Curso::get_nombre_profesor()const/*{{{*/
{
            return nombre_profesor;
}/*}}}*/
