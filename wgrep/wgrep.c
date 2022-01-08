
#include <stdio.h>
#include <stdlib.h>    // exit, free
#include <string.h>    // strstr

int
main(int argc, char *argv[])
{
    FILE *fp = NULL;
    char *line = NULL;
    size_t linecap = 0;

    if (argc <= 1) {     // there’s 1 or 2 arguments and  no file to read from
        printf("wgrep: searchterm [file ...]\n");
        exit(EXIT_FAILURE);  
    }

    if (argc >= 3 && (fp = fopen(argv[2], "r")) == NULL) {   // can’t open and read from file "argv[2]" && command line consists of more than 3 arguments
        printf("wgrep: cannot open file\n");
        exit(EXIT_FAILURE);
    }

    if (argc == 2) //  the command line with 3 arguments 'is complete' 
        fp = stdin; // data will be read from file by program

    while (getline(&line, &linecap, fp) > 0)  // reads full line from a stream
        if (strstr(line, argv[1])) // search for the occurance of the argv[1] 'pattern we want' in the line and if found excute the next line
            printf("%s", line);  // print the line that contains the argv[1]

    free(line); // return data of line to the heap to be used for other process 
    fclose(fp);  // close file 

    return 0;
}




