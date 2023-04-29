#ifndef CURSO_HPP
#define CURSO_HPP
#include<string>
#include<vector>
#include<array>

class Curso{
    public: 
		// Versión sin enviar vector
        Curso( const std::string &_CursoNombre , const std::string &_NombreProfesor );
        void set_nombre_curso( std::string & );
        void set_nombre_profesor( std::string & );
        bool comparar_strings( std::string &);
        void cambiar_valores( std::string &, std::string & );
        //void obtener_maximo() const;
        //void obtener_minimo() const;
        //void demostracion();
        void show_values( );

        void add_student(const struct _AddInformation &s ){
            table.push_back(s);
        }
        std::string get_nombre_curso( )const;
        std::string get_nombre_profesor( )const;
       

        struct Student{
            std::string name;
            std::array<int32_t,3> grades;
        };


    private:
        std::string curso_nombre,nombre_profesor;
        //static int alumnos_curso;
        //static int numero_examenes;
		//std::vector<Student>table;
        std::vector<std::vector<Curso::Student>> table;

};



#endif
