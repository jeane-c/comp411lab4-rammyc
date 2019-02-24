/* Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */


#define NUM 25   /* number of strings */
#define LEN 1000  /* max length of each string */


/*
int my_compare_strings(char string1[], char string2[]) {
    int ret = 0; //value to place result into
    int until; //value to place length of shorter string

    if (strlen(string1) < strlen(string2)) { until = strlen(string1); }
    else { until = strlen(string2); } //check which string is shorter so we won't segfault or check null

    for (int i = 0; i < until; i++) {
        //check alphabetical; if different, change ret accordingly and break
        if (string1[i] < string2[i]) { 
            ret = -1;
            break;
        }
        if (string2[i] < string1[i]) {
            ret = 1;
            break;
        }
    }

    if (ret == 0) { //if there was no difference, check to see if there was a length difference 
        if (strlen(string1) < strlen(string2)) { ret = -1; }
        else if (strlen(string2) < strlen(string1)) { ret = 1; }
    }

    return ret;
}


void my_swap_strings(char string1[], char string2[]) {
    char temp = ' ';    // char variable used in swapping one character at a time

    // Write code here to swap the contents of string1 and string2, one
    //  character at a time, WITHOUT USING ANY C STRING LIBRARY FUNCTIONS. 
    //
    //  The max length of the strings is LEN, though they may be shorter, so look
    //  for the string terminators.
    //

    for (int i = 0; i < LEN; i++) {
        temp = string1[i];
        string1[i] = string2[i];
        string2[i] = temp;
    }
}
*/

int main()
{
    char Strings[NUM][LEN];

    printf("Please enter %d strings, one per line:\n", NUM);

    /* Write a for loop here to read NUM strings.
        Use fgets(), with LEN as an argument to ensure that an input line that is too
        long does not exceed the bounds imposed by the string's length.  Note that the
        newline and NULL characters will be included in LEN.
    */
  
    for (int i = 0; i < NUM; i++){
        fgets( Strings[i], LEN, stdin );
    }  

  
    puts("\nHere are the strings in the order you entered:");

  
    /* Write a for loop here to print all the strings. */
    for (int i = 0; i < NUM; i++) {
        puts(Strings[i]);
    }
  
  
    /* Bubble sort */
    /* Write code here to bubble sort the strings in ascending alphabetical order
        Use the function my_compare_strings() to compare two strings.  If they are out of order,
        use the function my_swap_strings() to swap their contents.
    */

    int sorted = 0; //boolean
    while (!sorted) {
        sorted = 1;
        for (int i = 0; i < NUM-1; i++) {
            if (strcmp(Strings[i], Strings[i+1]) > 0) {
                
                char tempstring[LEN];
                strcpy(tempstring, Strings[i]);
                strcpy(Strings[i], Strings[i+1]);
                strcpy(Strings[i+1], tempstring);

                sorted = 0;
            }
        }
    }
  
    /* Output sorted list */
  
    puts("\nIn alphabetical order, the strings are:");     
    /* Write a for loop here to print all the strings. Feel free to use puts/printf
       etc. for printing each string.
    */
    
    for (int i = 0; i < NUM; i++) {
        puts(Strings[i]);
    }

}
