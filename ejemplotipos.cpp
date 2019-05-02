#include <iostream>
using namespace std;
	int a=-15;
	unsigned b=55;
	double c=30.5,d=10.5;
	bool comparador = (a+b)>(c+d);
	char mayor, menor;
	int main (){
	cout<<"El resultado de la primera suma es: "<<a+b<<"\n";
	cout<<"El resultado de la segunda suma es: "<<c+d<<"\n";
	cout<<comparador<<"\n;";
	if (comparador == 1) {
		cout<<"El resultado de la primer suma es" <<mayor << "que el de la segunda"<<"\n";
	}	else
	{
		cout<<"El resultado de la primer suma es"<<menor << "menor que el de la segunda"<<"\n";
		}
}
