#include<iostream>
#include<string>
#include"clases.hpp"

void Curso::set_nombre_curso( std::string &_NombreCurso )
{
            curso_nombre = _NombreCurso;
}

void Curso::set_nombre_profesor(std::string &_NombreProfesor)
{
            nombre_profesor = _NombreProfesor;
}

void Curso::comparar_strings(std::string &_nombre_curso, int &_decision)
{
    std::cout << "INGRESE EL NOMBRE DEL CURSO: " ;
    std::getline(std::cin, _nombre_curso);

    if (_nombre_curso.compare(curso_nombre) == 0)
    {
        std::cout << "EL NOMBRE EXISTE EN LA BASE DE DATOS ACCEDIENDO..." << '\n' <<'\n';
        std::cout << "EL NOMBRE DEL CURSO ES:" << get_nombre_curso() << std::endl;
        std::cout << "EL NOMBRE DEL PROFESOR ACARGO ES : "<< get_nombre_profesor();
        _decision = 3; //sentinel-control

    }else 
        std::cout << "NO EXISTE ESE NOMBRE EN LA BASE DE DATOS";
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

void Curso::demostracion( )
{

    
    for( auto i = 0 ; i < alumnos_curso ; ++i)
    {

        for(auto j = 0 ; j < numero_examenes; ++j)
        {
            std::cout << calificaciones_alumnos[j][i];
        }
        std::cout <<'\n';
    }
}

/*void Curso::obtener_minimo( )const
{

}*/

std::string Curso::get_nombre_curso()const
{
            return curso_nombre;
}

std::string Curso::get_nombre_profesor()const
{
            return nombre_profesor;
}