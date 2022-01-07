#include <stdio.h>
#include <stdlib.h>    // exit
#include <string.h>
#include <arpa/inet.h> // for htonl function
void
writeFile(int count, char *oldBuff)
{
    count = htonl(count);    // write as network byte order (BIG endian)
    fwrite(&count, 4, 1, stdout);   // write from address of count  , 4  (bytes for every elemnts) , 1 (number of elements) and each one with a size of size bytes.(4)
    fwrite(oldBuff, 1, 1, stdout); //write in terminal from array of olddbuff
}
int
main(int argc, char *argv[])
{
    FILE *fp;        // pointer to file
    char buff[2], oldBuff[2];
    int count;          // num of repetion of character
    if (argc <= 1) {  // If number of arguments in command line less or equal 2
        printf("wzip: file1 [file2 ...]\n");
        exit(EXIT_FAILURE);   / / to terminate the program
    }
    for (size_t i = 1; i < argc; i++) {
        if ((fp = fopen(argv[i], "r")) == NULL) {
            printf("wzip: cannot open file\n");
            exit(EXIT_FAILURE);  / / which mean unsuccessful execution of a program
        }
        while (fread(buff, 1, 1, fp)) {     //read from file to array  buff
            if (strcmp(buff, oldBuff) == 0) {       //compare buff and oldbuff by subtraction method
                count++;
            } else {
                if (oldBuff[0] != '\0') writeFile(count, oldBuff);   //if old buff equal end of file
                else {
                   count = 1;
                strcpy(oldBuff, buff);       / /copy  buff to oldbuff
}
            }
        }
        fclose(fp);
    }
    writeFile(count, oldBuff);    //send count and oldbuff to fun to display it
    return 0;
}
