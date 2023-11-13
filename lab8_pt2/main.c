//
//  main.c
//  lab8_pt2
//
//  Created by Khalil Gatto on 10/27/23.
//

#include <stdio.h>
#include <math.h>
#define PI 3.14159

typedef struct cartesian_s {
    double x, y, z;
} cartesian;


typedef struct spherical_s {
    double rho;
    double theta_degree;
    double phi_degree;
} spherical;


int main()
{
    char user_inp = 'w';
    double rho = -1;
    double theta = -1;
    double phi = -1;
    
    cartesian cartes;
    spherical sphere;
    
    do{
        
        while (rho < 0)
        {
            printf("Enter spherical coordinate values for rho >= 0: ");
            scanf("%lf", &rho);
            
            if (rho >= 0)
            {
                sphere.rho = rho;
                break;
            }
        }
        
        printf("Enter theta(degrees) and phi(degrees): ");
        scanf("%lf %lf", &sphere.theta_degree, &sphere.phi_degree);
        
        //convert to radians
        
        sphere.theta_degree = sphere.theta_degree * (PI / 180.0);
        sphere.phi_degree = sphere.phi_degree * (PI / 180.0);

        //Now compute
        
        cartes.x = sphere.rho * cos(sphere.theta_degree) * sin(sphere.phi_degree);
        cartes.y = sphere.rho * sin(sphere.theta_degree) * sin(sphere.phi_degree);
        cartes.z = sphere.rho * cos(sphere.phi_degree);
        
    
        printf("Its cartesian value: x = %.4lf, y = %.4lf, z = %.4lf\n", cartes.x,cartes.y,cartes.z);
        
        printf("Continue (n for no)? ");
        scanf(" %c", &user_inp);
        
        rho = -1;
        
    } while (user_inp != 'n');
    
    
    return 0;
}
