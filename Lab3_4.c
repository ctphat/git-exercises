/**
 * C program to count number of characters, words and lines in a text file.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * file;
    char path[100];

    char ch,c;
    int characters, words;


    /* Input path of files to merge to third file */
    printf("Input the file name to be opnened: ");
    scanf("%s", path);

    /* Open source files in 'r' mode */
    file = fopen(path, "r");


    /* Check if file opened successfully */
    if (file == NULL)
    {
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read privilege.\n");

        exit(EXIT_FAILURE);
    }
    
    // Read contents from file
    printf("\nThe content of the file ");
	printf("%s",path);
	printf(" are:\n");
    /*
     * Logic to count characters, words.
     */
    characters = words =  0;
    while ((ch = fgetc(file)) != EOF)
    {
       printf ("%c", ch);
        characters++;
       
        /* Check words */
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
    }

    /* Increment words and lines for last word */
    if (characters > 0)
    {
        words++;
    }

    /* Print file statistics */
    printf("\n");
    printf("The number of words in the file ");
    printf("%s",path);printf(" are:");
    printf("  = %d\n", words);
    printf("The number of characters in the file ");
    printf("%s",path);printf(" are:");
    printf(" = %d\n", characters);    
   
    /* Close files to release resources */
    fclose(file);

    return 0;
}


