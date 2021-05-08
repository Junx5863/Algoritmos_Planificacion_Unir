#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	system("cls");
	int numeroProcesos=11, procesos[10], quantum = 0, nq = 0;
	double tiempoPromedio = 0;
	int finalizado = 0;

    cout<<"Round Robin";

	while (numeroProcesos > 10 || numeroProcesos <= 0) {
		cout<<"\nNumero de procesos "<<"("<<numeroProcesos<<"): ";
		cin>>numeroProcesos;
	}
	for(int i=0; i<numeroProcesos; i++) {
		cout<<"\nInserte el proceso #"<< i+1<<": ";
		cin>>procesos[i];
	}
	while (quantum <= 0) {
		cout<<"\nVolumen de quantum: ";
		cin>>quantum;
	}

	// Algoritmo RR
	while(finalizado == 0) {
		finalizado = 1;
		for(int i=0; i<numeroProcesos; i++) {
			if(procesos[i] > 0) {
				procesos[i] -= quantum;
				nq++;
				cout<<"\nQuantum"<<"["<<i+1<<"]" << "proceso "<<nq<< i+1;
				if (procesos[i]>0) {
					finalizado = 0; 
				} else {
					tiempoPromedio += nq*quantum;
				}
			}
		}
	}
	tiempoPromedio = tiempoPromedio / numeroProcesos;
	cout<<"\nTiempo promedio RR: "<< tiempoPromedio;
	
}

