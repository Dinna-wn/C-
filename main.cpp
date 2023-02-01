#include "Matrice.h"
#include <iostream>
#include "Matrice.cpp"
using namespace std;

int main()
{

		int h, w;
		cin >> h;
		cin >> w;

		Matrice* mat = new Matrice(h, w); // instancier l'objet mat de la classe Matrice
		//Matrice* mat2 = new Matrice(h, w);
		//Matrice* mat3 = new Matrice(h, w);
		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++) {
				float tmp;
				cin >> tmp;
				mat->setVal(i, j, tmp); // remplace des valeurs 
			}
		mat->affichage();

		float* moy = mat->getMoyenne();
		for (int j = 0; j < w; j++)
			cout << moy[j] << "	";
		cout << endl;

		float* variance = mat->getVariance();
		for (int j = 0; j < w; j++)
			cout << variance[j] << "	";
		cout << endl;

		float* ecartType = mat->getEcarType();
		for (int j = 0; j < w; j++)
			cout << ecartType[j] << "	";
		cout << endl;
		float* matCenter = mat->getMatcenter();

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++)
				cout << matCenter[i * w + j] << "	";
			cout << endl;
		}
		cout << endl;


		Matrice* mat2 = mat->getObj_Matcenter();

		mat2->affichage();
		cout << endl;

		Matrice* mat3 = new Matrice(mat->getH(), mat->getW(), mat->getMatcenter());
		mat3->affichage();

		float* vectTmp = mat->getVect();

		vectTmp[0] = 100;

		mat->affichage();

		delete mat; //appel du destructeur 

	


}