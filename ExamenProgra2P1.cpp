#include <iostream>
#include <cstdlib>

using namespace std;

int main()

{
    int num, tries, numero1, numero2, guess, y, n = 0;
    srand(time(0)); 
	num = rand() % 100 + 1; 
    int opcion;
    bool repetir = true;
    
    do {
        system("cls");
        
        
        cout << "\n\nBIENVENIDOS AL MENU" << endl;
        cout << "1. JUGAR" << endl;
        cout << "2. SALIR" << endl;
        
        cout << "\nIngrese una opcion: (1/2)";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                 
                printf("\n\tIngrese un numero minimo: ");
                scanf("%d", &numero1);
                
                printf("\n\tIngrese un numero maximo: ");
                scanf("%d", &numero2);
                cout << "Ingrese un numero entre el 1 y el 100 : ";
                cin >> guess;
                tries++;
                
                system("pause>nul"); 
                break;
            case 2:
                printf("\n\t¿Realmente quieres irte?: (y/n)");
                scanf("%d", &y);
                scanf("%d", &n);
                
                printf("\n\tVuelve Pronto!! ");
                
            	repetir = false;
            	break;
        }        
    } while (repetir);
	  
    return 0;
}