/*
 *  Scrieti un program care, in functie optionea utilizatorului, calculeaza si afiseaza aria unui patrat cu latura l, sau aria 
 *  unui cerc de raza r sau aria unui dreptunghi de lungime 11 si latime 12, sau aria unui triunghi cu baza b si inaltime h. Optiuni
 *  ale utilizatorului: P(patrat), C(cerc), D(dreptunghi), T(Triunghi). Se presupune ca toate elementele care intervin in calculul ariei
 *  unei figuri geometrice sunt strict pozitive (datele sunt corect introduse de catre utilizator).
 */
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char opt;
    float area;
    cout<<"Alegeti o figura geometrica:"<<endl;
    cout<<"P - Patrat"<<endl;	 
    cout<<"c - Cerc"<<endl;
    cout<<"D - Dreptunghi"<<endl;
    cout<<"T - Triunghi"<<endl;
	cin>>opt;
    opt = toupper(opt);
    cout<<opt; 
	switch(opt) {
		case 'P':
		int l;
		cout<<"Give side: ";
		cin>>l;
		area = l * l;
		break;
		case 'C':
		int r;
		cout<<"Give radius: ";
		cin>>r;
		area = 3.14 * r * r;
		break;
		case 'D':
		int latime, lungime;
		cout<<"Give latime & lungime: ";
		cin>>latime>>lungime;
		area = latime * lungime;
		break;
		case 'T':
		int b,h;
		cout<<"Give base & h: ";
		cin>>b>>h;
		area = b * h / 2;
		break;
		default:
		area = -1;
	}

	if(area!=-1) {
		cout<<area;
	}
	return 0;
}
