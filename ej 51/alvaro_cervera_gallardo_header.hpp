#include <iostream>
#include <string.h>


using namespace std;

		class autor{
    
			char *nombre;
			int nacimiento;
    
		public:
    
			autor();
			autor(char *nombredado, int nacimientodado);
			autor(autor const &autordado);
			~autor();
			void setdombre(char *nombredado);
			void setdacimiento(int nacimientdado);
			void mostrarautor();
    
  
		};
