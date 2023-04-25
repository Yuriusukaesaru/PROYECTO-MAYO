#ifndef CLASS_HPP
#define CLASS_HPP
#include<string>
#include<vector>

class Curso{
    public: 
        Curso(const std::string &_CursoNombre , const std::string &_NombreProfesor)
        : curso_nombre( _CursoNombre ) , nombre_profesor( _NombreProfesor )
        {}
        void set_nombre_curso( std::string & );
        void set_nombre_profesor( std::string & );
        void comparar_strings( std::string &, int & );
        void cambiar_valores( std::string &, std::string & );
        std::string get_nombre_curso( )const;
        std::string get_nombre_profesor( )const;

    private:
        std::string curso_nombre,nombre_profesor;
        std::vector<std::vector<int>>calificaciones_alumnos =
        { //ESTO ES PARA EL FUTURO JEJEJE
            {90, 80, 70 },
            {60, 70, 88 },
            {99, 100, 100 },
            {92, 70, 100 },
            {100, 100, 100 },
            {100, 100, 100 }

        };
};

#endif