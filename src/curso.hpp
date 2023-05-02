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
        /******* AQUI HERMANO ES LA FUNCION SET PARA AGREGAR AL ESTUDIANTE...
         AQUI LA VARIABLE ES TIPO REFENCIA Y LO QUE ESTA ALMACENADO EN ESE VALOR 
         DE MEMORIA LO AGREGO AL NESTED VECTOR CON LA FUNCION .pushback()
        */
        void add_student(const struct _AddInformation &_s ){
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
<<<<<<< HEAD
        //static int alumnos_curso;
        //static int numero_examenes;
		//std::vector<Student>table;
        std::vector<std::vector<Curso::Student>> table;
=======
		std::vector<std::vector<std::int32_t>> calificaciones_alumnos
			{ { 1, 2, 3 }, { 1, 2, 3 }, { 1, 2, 3 }, { 1, 2, 3 },
			  { 1, 2, 3 }, { 1, 2, 3 }, { 1, 2, 3 } ,
			  { 1, 2, 3 }, { 1, 2, 3 }, { 1, 2, 3 } };
>>>>>>> 2ae3a1eca20652fc15e2f9fb8aa81e4c1248a3b4

};



#endif
