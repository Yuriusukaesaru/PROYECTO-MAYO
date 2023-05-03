#ifndef CURSO_HPP
#define CURSO_HPP
#include<string>
#include<vector>
#include<array>

class Curso {
    public: 
		// Tuvimos que meter el struct acá arriba para que pudiera ser considerado antes
		// de utilizarlo. Yo siempre declaro estas cosas afuera pero está bueno experimentarlo.
		// Para usar este struct afuera, habrá que especificar el ámbito Curso::
        struct Student{
            std::string name;
            std::array<int32_t,3> grades;
        };

        Curso( const std::string &_CursoNombre , const std::string &_NombreProfesor );
        void set_nombre_curso( std::string & );
        void set_nombre_profesor( std::string & );
        bool comparar_strings( std::string &);
        void cambiar_valores( std::string &, std::string & );
        //void obtener_maximo() const;
        //void obtener_minimo() const;
        //void demostracion();
        void show_values( );
		/* No existe el tipo struct _AddInformation!!!!!! Te referirás a struct Student!!!! */
		void add_student(const struct Student &_s )/*{{{*/
		{
			table.push_back( _s );
		}/*}}}*/

        std::string get_nombre_curso( )const;
        std::string get_nombre_profesor( )const;

    private:
        std::string curso_nombre,nombre_profesor;
        //static int alumnos_curso;
        //static int numero_examenes;
		//std::vector<Student>table;
		// No tienes que crear "vector de vectores de un struct". Solo vector de struct.
		// Esto estaba creando un problema enorme
        std::vector<struct Student> table;
};



#endif
