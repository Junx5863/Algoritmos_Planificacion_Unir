#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
    system("cls");
	
	int numprocess=11, procesos[10];
	double tf = 0, tiempoPromedio;

    cout<<"FCFS: FIRST COME FIRST SERVERED";
	
    while (numprocess > 10 || numprocess <= 0) {
		cout<<"\nNumero de procesos: ";
		cin>>numprocess;
	}
	
	for(int i=0; i<numprocess; i++) {
		cout<<"\nInserte el proceso #"<<i+1<<": ";
		cin>>procesos[i];
	}
	// Algoritmo FCFS
	for(int i=0; i<numprocess; i++) {
		tf += procesos[i];
		tiempoPromedio = tiempoPromedio + tf;
		cout<<"\n Proceso #"<<i+1<<" finaliza en: "<<tf;
	}
	cout<<" \n";
	cout<<"\nLa suma de los procesos es: "<< tiempoPromedio;
	tiempoPromedio = tiempoPromedio / numprocess;
    cout<<" \n \n";
	cout<<"Tiempo promedio en FCFS fue de: "<< tiempoPromedio;
	
}