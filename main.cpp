
/*
* ANALISIS DE TEMPERATURA DEL AGUA
* Evaluacion Practica Segundo Bimestre C++
* Autor: Est Torres LLivipuma Romulo Jesus <rtorresll@est.ups.edu.ec>
* Universidad Politecnica Salesiana
* Ejercicio 1
*/
#include <iostream>
using namespace std;
float calcularPromedio(int lista[],int valor);
float Fahrenheit(float promedio);
int main()
{
    cout << "-- ANALISIS DE TEMPERATURA DEL AGUA --" << endl;
    cout<<endl;
    int valor;
    int contadorG=0;
    int contadorL=0;
    int contadorS=0;
    float promedio;
    float fahrenheit;
    do{

        cout<<"Ingrese cantidad de temperaturas [1,10]:";
        cin>>valor;
        int lista[valor];
        if(valor>0 && valor<=10){
            for(int i=0;i<valor;i++){
                cout<<endl;
                cout<<"Temperatura "<<i+1<<" en C:";cin>>lista[i];
                if(lista[i]>=100){
                    contadorG++;
                }
                else if(lista[i]>0 and lista[i]<100){

                    contadorL++;
                }
                else if (lista[i]<=0) {
                    contadorS++;

                }

                promedio=calcularPromedio(lista,valor);
                fahrenheit=Fahrenheit(promedio);
            }
            cout<<endl;
            cout<<endl;
            cout<<"Cantidad de muestras solidas: "<<contadorS<<endl;
            cout<<"Cantidad de muestras liquidas: "<<contadorL<<endl;
            cout<<"Cantidad de muestras gaseosas: "<<contadorG<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"Temperatura Promedio C:"<<promedio<<endl;
            cout<<"Temperatura Promedio F:"<<fahrenheit<<endl;
            cout<<endl;
            cout<<endl;
            break;
        }
        cout<<"El valor debe ser entre 1 y 10"<<endl;
    }

    while (valor<=0 || valor>=10);

    return 0;
}

float calcularPromedio(int lista[], int valor){
    float suma =0;
    for(int i=0;i<valor;i++){
        suma+=lista[i];
    }
    return float(suma)/valor;
}
float Fahrenheit(float promedio){
    float  fahrenheit =0;
    fahrenheit= (promedio* 9/5) +32;
    return fahrenheit;

}
