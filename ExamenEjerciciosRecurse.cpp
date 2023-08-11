#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cmath>
#include <stdlib.h>
#include <string>

using namespace std;

void calculadora();
void condicionales();
void ciclos();
void edades();
void pares();
void Suma(int num1, int num2);
void Resta(int num1, int num2);
void Multiplicacion(int num1, int num2);
void Division(int num1, int num2);
void Potencia(int num1, int exponencial);
void RaizCuadrada(int num1);

int main()
{
    int opcion1;
    bool repetir = true;
    
    do
    {
        system("cls");

        
        cout << "\n\tBIENVENIDO EJERCICIOS RECURSE" << endl;
        cout << "\n\t--------------------------------" << endl;
        cout << "\n\t1. CALCULADORA" << endl;
        cout << "\n\t2. CONDICIONALES" << endl;
        cout << "\n\t3. CICLOS" << endl;
        cout << "\n\t0. SALIR" << endl;

        cout << "\n\tElige el ejercico que deseas depurar: ";
        cin >> opcion1;

        int numero1, numero2;
        float resultado;
        switch (opcion1)
        {
        case 1:
            calculadora();
            break;
        case 2:
            condicionales();
            break;
        case 3:
            ciclos();
            break;
        case 0:
            repetir = false;
            break;
        }
    } while (repetir);

  
}

void calculadora()
{
    
int opcion2;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\tCALCULADORA" << endl;
        cout << "\n\t-----------" << endl;
        cout << "\n\t1. SUMA" << endl;
        cout << "\n\t2. RESTA" << endl;
        cout << "\n\t3. MULTIPLICACION" << endl;
        cout << "\n\t4. DIVISION" << endl;
        cout << "\n\t5. POTENCIA" << endl;
        cout << "\n\t6. RAIZCUADRADA" << endl;
        cout << "\n\t7. REGRESAR AL INICIO" << endl;

        cout << "\n\tElige la operacion que deseas depurar: ";
        cin >> opcion2;

        int numero1, numero2;
        float resultado;
        switch (opcion2)
        {
        case 1:
            Suma(5, 3);
            break;
        case 2:
            Resta(4, 2);
            break;
        case 3:
            Multiplicacion(4, 6);
            break;
        case 4:
            Division(16, 8);
            break;
        case 5:
            Potencia(2, 3);
            break;
        case 6:
            RaizCuadrada(16);
            break;
        case 7:
            repetir = false;
            break;
        }
    } while (repetir);
    
}

void Suma(int num1, int num2)
{
    int resp = num1 + num2; 
    cout << "La suma es: " << resp << endl;
}

void Resta(int num1, int num2)
{
    int resp = num1 - num2; 
    cout << "La Resta es: " << resp << endl;
}
void Multiplicacion(int num1, int num2)
{
    int resp = num1 * num2; 
    cout << "La Multiplicacion es: " << resp << endl;
}
void Division(int num1, int num2)
{
    int resp = num1 / num2; 
    cout << "La Division es: " << resp << endl;
}
void Potencia(int num1, int exponencial)
{
    int resp = pow(num1, exponencial); 
    cout << "La Potencia es: " << resp << endl;
}
void RaizCuadrada(int num1)
{
    int resp = sqrt(num1);
    cout << "La RaizCuadrada es: " << resp << endl;
}

void condicionales()
{
    
int opcion2;
    bool repetir = true;

    do
    {
        system("cls");
        
        cout << "\n\tCONDICIONALES" << endl;
        cout << "\n\t-----------" << endl;
        cout << "\n\t1. EDADES" << endl;
        cout << "\n\t2. PARES" << endl;
        cout << "\n\t3. REGRESAR AL INICIO" << endl;
        
        cout << "\n\tElige la operacion que deseas depurar: ";
        cin >> opcion2;
        
        float resultado;
        switch (opcion2)
        {
        case 1:
            edades();
            break;
        case 2:
            pares();
            break;
        case 3:
            repetir = false;
            break;
        }
    } while (repetir);
    
}

void edades()
{
    int edad;
    cout<<"Introduzca una edad:";
    cin>>edad;
    
    if (edad<0)
    {
    cout<<"EDAD INVALIDA";
    }
    else if (edad<18)
    {
    cout<<"Es menor de edad";
    }
    else if (edad>60)
    {
    cout<<"Es de la 3ra edad";
    }
    else
    {
    cout<<"Es mayor de edad";
    }
    
}

void pares()
{   
    int num;
    int unidad;
    int decimo;
    cout<<"Ingrese un numero: ";
    cin>>num;
    
    decimo= num/10;
    unidad= num-(decimo*10);
    
    if(decimo % 2==0)
    {
        if(unidad % 2==0)
        {
            
            cout<<"Los dos son par";
        }
                else 
                {
                cout<<"El primero es par";
                }
            
        
        
    }
    else 
    {
        
        if(unidad % 2==0)
        {
        cout<<"El segundo es par";
        }
            else
            {
            cout<<"NINGUNO ES PAR";
            }
        
    }
}

void ciclos()
{
    
    float c1, P=0;
    string N;

    cout << "Ingrese un nombre:" << endl;
    cin >> N;

    for(int x = 0; x < 3;x++)
    {
        cout << "Ingrese una calificacion:" ;
        cin >> c1;
        P = P+c1;
    }
    
    float prom = P/3;
    
    if (P>=6){  
           cout<<endl;  
           cout<<"APROBADO! tu calificacion es : "<<prom;  
      }  
      else  
      {  
           cout<<endl;  
           cout<<"REPROBADO! tu calificacion es : "<<prom;  
      }  
}

