


class Matrice {

	int sizeH, sizeW; // dimesion de la mtrice
	float* vect; // vecteur des valuers alignées de la matrice

public:
	Matrice(int h, int w); // constructeur de la classe 
	Matrice(int h, int w, float* vectIn); // 2ème constructeur de la classe avec un vecteur de valeurs

	int getH();
	int getW();
	void setVal(int i, int j, float val);
	float getVal(int i, int j);

	void affichage(); //affichage de la matice 

	float* getMoyenne();// calcule du vecteur moyenne de la matrice
	float* getVariance();// calcule du vecteur variance de la matrice
	float* getEcarType();// calcule du vecteur Ecart_type de la matrice
	float* getMatcenter(); // calculer la matrice centrée
	Matrice* getObj_Matcenter(); // calculer la matrice centrée

	float* getVect(); // retourner tout le vecteur de la matrice

	//// TP2 ///////////

	float* getVect(int i); // retourner le vecteur i de la matrice
	float* getTraceMat(); // calculer la trace de la matrice
	float* getTransposeMat(); // retourner la matrice Inverse 
    Matrice* produitMat(Matrice* mat2);


	~Matrice(); // desctricteur de la classe
};

