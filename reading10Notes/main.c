//
//  main.c
//  reading10Notes
//
//  Created by Khalil Gatto on 9/25/23.
//

#include <stdio.h>

int main()
{

    /*
     
     //MARK: Self notes
     
     assert() function is used in testing.
     
     TERMS
    
     Testbench aka testharness - basically using another file to test your code by each 'unit.'
     Test vector - A unique set of input values.
     Border cases - testing functionality of program with "wierd inputs.
     Stack frame - a set of local variables inside a function.
     Side effects - when a global variable updates and becomes hard to maintain.
     global variable - duh
     
     Good practice is to minimize the use of non-const global variables.
     
     You can declare functions in the beginning of your program and then define them
     after the main() function.
     
     //MARK: Function declaration EXAMPLE
     
     double fuck(int what, int fortnite);
     
     main()
     {
        fuck(arguments)
     }
     
     double fuck(int what,int fortnite)
     {
        code
     }
     
    
     //MARK: assert() EXAMPLE
     
     #include <stdio.h>
     #include <assert.h>

     double HrMinToMin(int origHours, int origMinutes) {
        int totMinutes;  // Resulting minutes
        
        totMinutes = (origHours * 60) + origMinutes;
        
        return origMinutes;
     }

     int main(void) {
        
        printf("Testing started\n");
        
        assert(HrMinToMin(0, 0) == 0);
        assert(HrMinToMin(0, 1) == 1);
        assert(HrMinToMin(0, 99) == 99);
        assert(HrMinToMin(1, 0) == 60);
        assert(HrMinToMin(5, 0) == 300);
        assert(HrMinToMin(2, 30) == 150);
        // Many more test vectors would be typical...
        
        printf("Testing completed\n");
        
        return 0;
     }
     
     This will return:
     
     Testing started
     Assertion failed: (HrMinToMin(1, 0) == 60), function main, file main.c, line 19.
     
     */
    
    
    
    
    
    return 0;
}
