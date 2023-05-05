#ifndef CURSO_HPP
#define CURSO_HPP
#include<string>
#include<vector>
#include<array>

class Curso {
    public: 
		
        Curso( const std::string &_CursoNombre , const std::string &_NombreProfesor );
        struct Student
        {
        std::string name;
        std::array<int32_t,3> grades;
        };
        void set_nombre_curso( std::string & );
        void set_nombre_profesor( std::string & );
        bool comparar_strings( std::string &);
        void cambiar_valores( std::string &, std::string & );
        int obtener_max() const;
        int obtener_min() const;
        void procesar_calificaciones()const;
        void show_values( )const;
		void add_student(const struct Student &_s );
        std::string get_nombre_curso( )const;
        std::string get_nombre_profesor( )const;

    private:
        std::string curso_nombre,nombre_profesor;
        std::vector<struct Student> table;
};



#endif
