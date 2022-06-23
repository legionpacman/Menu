#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main(void)
{
    int opcion;
    bool repetir = true;
    int numero1, numero2, numero3, suma, resta, multiplicacion;
    do {
        system("cls");
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
 SetConsoleTextAttribute(hConsole, 1);
        		
printf("	   *                                                   * \n");
printf("      *                                                     * \n");
printf("    **                                                       ** \n");
printf("*   **                                                       **   * \n");
printf("**   **          *                               *          **   ** \n");
printf("***    *         **                             **         *    *** \n");
printf(" ****            *********************************            **** \n");
printf("   *******      ***           *******           ***      ******* \n");
printf("      ************             *****             ************ \n");
printf("         **********    **** * **   ** *******   ********** \n");
printf("               ********** ** **     ** **************** \n");
printf("         *************** ** **  ***  **  ***************** \n");
printf("          ******   *********************  ******   ****** \n");
printf("                    **********************  *** \n");
printf("                    ************************ ** \n");
printf("                     **** ** ** **** ** ** ** \n");
printf("                      ***  *  *  **  *  *  *** \n");
printf("                       **                  ** \n");
printf("                         *                * \n");
        
        
        // Texto del menú que se verá cada vez
        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. Opcion 1" << endl;
        cout << "2. Opcion 2" << endl;
        cout << "3. Opcion 3" << endl;
        cout << "4. Opcion 4" << endl;
        cout << "0. SALIR" << endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                // Lista de instrucciones de la opción 1                
                cout << "Ingresa el primer numero" << endl;
                cin >> numero1;
                cout << "Ingresa el segundo numero " << endl;
                cin >> numero2;
                cout << "Ingresa el terceer numero" << endl;
                cin >> numero3;
                suma = numero1 + numero2 + numero3;
                resta = numero1 - numero2 - numero3;
                multiplicacion = numero1 * numero2 * numero3;
                cout << "La suma de los numeros es : " << suma << endl;
                cout << "La resta de los numeros es : " << resta << endl;
                cout << "La multiplicacion de los numeros es : " << multiplicacion << endl;
                system("pause>nul"); // Pausa
                break;
                
            case 2:
                // Lista de instrucciones de la opción 2                
                
                system("pause>nul"); // Pausa
                break;
                
            case 3:
                // Lista de instrucciones de la opción 3                
                
                system("pause>nul"); // Pausa            
                break;
                
            case 4:
                // Lista de instrucciones de la opción 4                
                
                system("pause>nul"); // Pausa                
                break;
            
            case 0:
            	repetir = false;
            	break;
        }        
    } while (repetir);
	 
    return 0;
}
