
#include<math.h>
#include "Matrice.h"
#include <iostream>

using namespace std;

Matrice::Matrice(int l, int c) {

	sizeH = l; sizeW = c;

	vect = new float[l * c];

}

Matrice::Matrice(int l, int c, float* vectIn) { // 2ème constructeur de la classe avec un vecteur de valeurs

	sizeH = l; sizeW = c;

	vect = vectIn;

}


void Matrice::setVal(int i, int j, float v) {

	if (i < sizeH && j < sizeW)
		vect[i * sizeW + j] = v;

}

float Matrice::getVal(int i, int j) {
	if (i < sizeH && j < sizeW)
		return vect[i * sizeW + j];

}

int Matrice::getH() {

	return sizeH;
}
int Matrice::getW() {

	return sizeW;
}

void Matrice::affichage() {

	for (int i = 0; i < sizeH; i++) {
		for (int j = 0; j < sizeW; j++)
			cout << vect[i * sizeW + j] << "	";

		cout << endl;
	}

}


float* Matrice::getMoyenne() {// calcule du vecteur moyenne de la matrice

	float* vectMoyenne = new float[sizeW];

	for (int j = 0; j < sizeW; j++) {
		float somme = 0;
		for (int i = 0; i < sizeH; i++)
			somme += vect[i * sizeW + j];
		vectMoyenne[j] = somme / sizeH;
	}
	return vectMoyenne;
}


float* Matrice::getVariance() {// calcule du vecteur variance de la matrice
	float* vectVariance = new float[sizeW];

	float* vectMoy = getMoyenne();
	for (int j = 0; j < sizeW; j++) {
		float somme = 0;
		for (int i = 0; i < sizeH; i++)
			somme += pow(vect[i * sizeW + j] - vectMoy[j], 2);
		vectVariance[j] = somme / sizeH;
	}

	return vectVariance;
}

float* Matrice::getEcarType() {// calcule du vecteur Ecart_type de la matrice
	float* vectEcarType = new float[sizeW];

	float* vectVar = getVariance();
	for (int j = 0; j < sizeW; j++) {

		vectEcarType[j] = sqrt(vectVar[j]);
	}
	return vectEcarType;
}

float* Matrice::getMatcenter() { // calculer la matrice centrée

	float* vectMatcenter = new float[sizeH * sizeW];

	float* vectMoy = getMoyenne();
	for (int j = 0; j < sizeW; j++) {
		for (int i = 0; i < sizeH; i++)
			vectMatcenter[i * sizeW + j] = vect[i * sizeW + j] - vectMoy[j];
	}
	return vectMatcenter;
}
Matrice* Matrice::produitMat(Matrice* mat2) 
{
	float* vectProduit = new float[sizeH * sizeW];
	int m = 0;
	Matrice* produitMat = new Matrice(sizeH, sizeW, vectProduit);
	for (int i = 0; i < sizeH; i++) {
		for (int j = 0; j < sizeW; j++) 
			for (m = 0; m < sizeH; k++) 

			
		
	}
	return produitMat;
}
float* Matrice::getTraceMat() { 
	
	float* vectTraceMat =new float[ sizeW];
	

    int somme = 0;
	for (int i = 0; i < sizeH; i++) {
		for (int j = 0; j < sizeW; j++)

			if(i == j)
			{
				somme += vect[i * sizeW + j];
				vectTraceMat[i] = somme ;

			}
	}

	return vectTraceMat;
}
float* Matrice::getTransposeMat()
{
	float* vectTranspose =new float[sizeH * sizeW];


	for (int i = 0; i < sizeH; i++) {
		for (int j = 0; j < sizeW; j++)
			vectTranspose[i] = vect[j * sizeH + i];

	}
	return vectTranspose;

}

Matrice* Matrice::getObj_Matcenter() {

	float* vectMatCenter = getMatcenter();

	Matrice* objCenter = new Matrice(sizeH, sizeW, vectMatCenter);

	return objCenter;


}


float* Matrice::getVect() {
	float* vecteur = new float[sizeH * sizeW];
	for (int i = 0; i < sizeH * sizeW; i++)
		vecteur[i] = vect[i];
	return vecteur;
}


Matrice::~Matrice() {
	delete[]vect;
}
