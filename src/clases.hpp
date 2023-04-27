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
        //void obtener_maximo() const;
        //void obtener_minimo() const;
        void demostracion();
        std::string get_nombre_curso( )const;
        std::string get_nombre_profesor( )const;
        static const int alumnos_curso {10} ;
        static const int numero_examenes {5} ;


    private:
        std::string curso_nombre,nombre_profesor;
        std::vector<std::vector<int>>calificaciones_alumnos{alumnos_curso, std:: vector <int> (numero_examenes)};
        
    
};

#endif