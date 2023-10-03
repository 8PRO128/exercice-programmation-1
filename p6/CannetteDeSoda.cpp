#include "CannetteDeSoda.h"
#include <cmath>  // pour M_PI

CannetteDeSoda::CannetteDeSoda(double h, double r) : 
                                hauteur(h), rayon(r) {}

double CannetteDeSoda::get_surface_area() const {
    // Surface = 2*pi*rayon*hauteur + 2*pi*rayon^2
    return 2 * M_PI * rayon * hauteur + 2 * M_PI * rayon * rayon;
}

double CannetteDeSoda::get_volume() const {
    // Volume = pi*rayon^2*hauteur
    return M_PI * rayon * rayon * hauteur;
}
