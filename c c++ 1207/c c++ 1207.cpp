#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> INTVECTOR;
int ARRAY_SIZE = 4;

void main(){
	//vectorul alocat in mod dinamic nu contine la inceput elemente
	INTVECTOR Vectorul;
	int i;
	//initializare [100,200,300,400]
	for (i = 0; i < ARRAY_SIZE ; i++)
		Vectorul.push_back((i +1)*100);
	cout << "Primul element: " << Vectorul.front() << endl;
	cout << "Ultimul element: " << Vectorul.back() << endl;
	cout << "Elementele din vector: " << Vectorul.size() << endl;

	//sterge ultimul elem al vectorului, vectorul este cu baza 0, Vectorul.end() indica de fapt un element dincolo de capat.
	cout << "Stergem ultimul element." << endl;
	Vectorul.erase(Vectorul.end() - 1);

	cout << "Noul ultim elem este:" << Vectorul.back() << endl;

	cout << "Stergem primul elem: " << endl;
	Vectorul.erase(Vectorul.begin() );
	cout << "Noul prim elem este: " << Vectorul.front() << endl;
	cout << "Elementele din vector: " << Vectorul.size() << endl;
	system("pause");

}