#include <stdio.h>
#include <math.h>

struct planet {
    char name[30];
    double volume;
    double mass;
    double density;
};
double density(struct planet planet_density)
{
    return planet_density.mass / planet_density.volume;
}
int main ()
{
    struct planet earth = {
            "Earth",
            (1.08*pow(10,12)),
            (5.97223*pow(10,24))
    };

    struct planet mars = {
            "Mars",
            (1.63*pow(10,11)),
            (6.4185*pow(10,23))
    };
    double density_earth = density(earth);
    double density_mars = density(mars);

    FILE* p_file = fopen("planet_file", "w");
    fprintf( p_file, "%s %lf % lf %lf\n", earth.name, earth.mass, earth.volume, density_earth);
    fprintf(p_file, "%s %lf %lf %lf\n", mars.name, mars.mass, mars.volume, density_mars);
    fclose(p_file);

    struct planet planet_array[20];

    FILE* pl_file = fopen("planet_file", "r");
    if (pl_file == NULL)
    {
        printf("nej");
    }
    for (int i = 0; i < 1; ++i) {
        fscanf(pl_file,"%s %lf %lf %lf",planet_array[i].name,&planet_array[i].mass, &planet_array[i].volume, &planet_array[i].density);
    }

    fclose(pl_file);


}
