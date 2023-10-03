#ifndef CANNETTEDESODA_H
#define CANNETTEDESODA_H

class CannetteDeSoda {
private:
    double hauteur;
    double rayon;
    
public:
    // Constructeur
    CannetteDeSoda(double hauteur, double rayon);
    
    // Fonctions membres
    double get_surface_area() const;
    double get_volume() const;
};

#endif // CANNETTEDESODA_H
