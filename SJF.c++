#include<iostream>


using namespace std;

int main() {
	system("cls");
	cout<<"SJF: SHORTEST JOB FIRST";

	int numeroProceso=11, procesos[10][2];
	double tf = 0, tp;// tiempo promedio.
	while (numeroProceso > 10 || numeroProceso <= 0) {
		cout<<"\nNumero de procesos: ";
		cin>>numeroProceso;
	}
	
	for(int i=0; i<numeroProceso; i++) {
		cout<<"\nInserte el proceso #"<< i+1<<": ";
		cin>>procesos[i][0];
		procesos[i][1] = i+1;
	}
	// Algoritmo SJF
	// ordenamos de menor a mayor
	for (int i=0; i<numeroProceso-1; i++) {
		for(int j=i+1; j<numeroProceso; j++) {
			if (procesos[j][0]<procesos[i][0]) {
				int aux[2] = {procesos[j][0], procesos[j][1]};
				procesos[j][0] = procesos[i][0];
				procesos[j][1] = procesos[i][1];
				procesos[i][0] = aux[0];
				procesos[i][1] = aux[1];
			}
		}
	}
	for (int i=0; i<numeroProceso; i++) {
		tf += procesos[i][0];
		tp = tp + tf;
		cout<<"\n Procesp #"<< i+1<<" finaliza en "<< procesos[i][1]<< tf;
	}
	cout<<"\n";
	cout<<"\nLa suma de los procesos es: "<< tp;
	tp = tp / numeroProceso;
	cout<<" \n \n";
	cout<<" Tiempo promedio en SJF fue de: "<< tp;
	cout<<"\n";
}