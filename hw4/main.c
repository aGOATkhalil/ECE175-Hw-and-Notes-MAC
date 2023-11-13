//
//  main.c
//  hw4
//
//  Created by Khalil Gatto on 9/14/23.
//

/*
 
 You are given a file called Romeo.txt that contains a speech from Shakespeare’s play Romeo and Juliet. Unfortunately the file has been corrupted in the following way:
 
 Actual Character   |   Intended character
 #                      '
 *                      .
 >                      a
 /                      e
 {                      i
 6                      o
 ]                      u
 
 We can get the original text back by replacing the incorrect Actual characters in the given .txt file with the Intended characters from the table above. Any
 character not listed in the table is already correct.

 Write a C program that reads (one character at a time) the contents of the file Romeo.txt, and prints the contents out to a different file called Romeofixed.txt,
 where Romeofixed.txt has been corrected as described above.

 Note: Make sure that you write into the output text file called Romeofixed.txt. Otherwise, you will get 0 point on this zyBooks test even though your code does the
 character correction correctly.
 
 
 */



#include <stdio.h>

int main()
{
    FILE* inFile = NULL;
    char romeo_contents;
    char romeo_fixed;
    
    
    

    return 0;
}
