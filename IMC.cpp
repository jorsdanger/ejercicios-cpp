/*
Realizar un programa que calcule
el indice de masa coorporal o IMC
*/
#include <iostream>
#include <iomanip>

using namespace std;
int main(){
	//
	float peso=0;
	float altura=0;
	float resultado=0;
	
	cout<<"\nCalculadora de Indice de Masa Coorporal";
	cout<<"\nIngrese su peso en kilogramos: ";
	cin >>peso;
	cout<<"Ingrese su altura en metros: ";
	cin >>altura;
	
	resultado = peso /(altura*altura);
	cout<<"Su IMC es: "<<setprecision(4)<<resultado<<"kg/m^2";
	
	return 0;
}