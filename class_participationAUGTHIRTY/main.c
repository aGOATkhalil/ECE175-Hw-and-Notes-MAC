//
//  main.c
//  class_participationAUGTHIRTY
//
//  Created by Khalil Gatto on 8/31/23.
//

#include <stdio.h>
#include <math.h>

int main(void) {
 
    double width, height;
    
    printf("Enter wall height (feet): ");
    scanf("%lf", &height);
    
    printf("Enter wall width (feet): ");
    scanf("%lf", &width);
    
    double wall_area = width * height; //1 gal = 1 can and 1 gal cover 350 square feet.
    double paint_needed = wall_area / 350;
    int cans_needed = ceil(paint_needed);
    
    printf("Wall area (ft^2): %.2lf\n",wall_area);
    printf("Paint needed: %.2lf gallons\n", paint_needed);
    
    printf("Cans needed: %d\n", cans_needed);

    
    
    return 0;
}
