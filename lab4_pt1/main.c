//
//  main.c
//  lab4_pt1
//
//  Created by Khalil Gatto on 9/22/23.
//

/*
 
 Write a C program that outputs a half arrow pointing down that is consisted of a rectangle
 and a right triangle. The arrow dimensions are specified, by a user, with arrow base height, arrow
 base width, and arrow head width. Your program should make sure that an arrow head width is
 larger than the arrow base width.
 
 For base, use a nested loop: the inner loop prints the *’s, and the outer loop iterates a number
 of times equal to the height of the arrow base.
 
 For head, use a nested loop: the inner loop prints the *’s, and the outer loop iterates a number
 of times equal to the height of the arrow head.
 
 ---------------------------------
 Example.
 
 base_height = 5
 base_width = 2
 head_width = 4
 

 **
 **
 **
 **
 **
 ****
 ***
 **
 *
 
 */



#include <stdio.h>
int main() {

    int i = 0;
    int j = 0;
    int base_height, base_width, head_width;
    
    printf("Enter arrow base height and width: ");
    scanf("%d %d", &base_height, &base_width);
    
    printf("Enter arrow head width: ");
    scanf("%d", &head_width);
    
    //Array head width must be greater than arrow base width.
    
    while (1)
    {
        if (head_width > base_width)
        {
            
            for (i = 0; i < base_height; i++)
            {
                for (j = 0; j < base_width; j++)
                {
                    printf("*");
                }
                printf("\n");
                
                /*
                 base_height = 5
                 base_width = 2
                 head_width = 4
                 
                 i = 1
                 then j = 1
                 OUTPUT: *
                 then j = 2
                 OUTPUT: **
                 then i = 2.... should work then
                 */
            }
            for (i = head_width; i > 0; --i)
            {
                for (j = 0; j < head_width; ++j)
                {
                    printf("*");
                }
                printf("\n");
                head_width -= 1;
    
                /*
                 i = 1
                 j = 4
                 OUTPUT: ****
                 i = 2
                 j = 3
                 OUTPUT: ***
                 i = 3;
                 j = 2;
                 OUTPUT: **
                 i = 4
                 j = 1
                 OUTPUT: *
                 */
            }
            break;
        }
        else if(head_width  < base_width)
        {
            printf("Head width must be greater than base width.\n");
            printf("Enter arrow base height and width: ");
            scanf("%d %d", &base_height, &base_width);
            
            printf("Enter arrow head width: ");
            scanf("%d", &head_width);
        }
        
    }
    
    
    return 0;
}
