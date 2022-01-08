# OS-Project1



# cat tests

![wcat](https://user-images.githubusercontent.com/66404704/148628417-4440d165-2bf0-4149-ae66-45058ec4cb96.jpeg)


# grep

Grep is a command line utility in Unix and Linux systems. It is used for finding a search patterns in the content of a given file.
So the standard command is grep and then the string whichever you are looking for and finally the file  you want to search in.

# Syntax:

grep [options] pattern [files]

# Options available are:

-h ==> it prints the matched lines, but do not print the filenames.

-l ==> it prints a list of a filenames only.

-n ==> it prints the matched lines and their line numbers.

-c ==> it prints only a count of the lines that match a pattern





# examples

1.  grep  line *

Explanation: let’s say we do grep line which will search for the word line in every file in our current folder

 2.  grep world  hello
 
 Explanation: in this case, look for a world with file name, hello, and then it will return every line where there’s a match every line where it finds this pattern or this word in this file.



# tests

![wgrep](https://user-images.githubusercontent.com/66404704/148626285-f5ad1144-1b6d-4f02-9eec-61db073565ff.jpeg)



# Wzip an Wunzip




The type of compression used here is a simple form of compression called run-length encoding (RLE).

RLE is quite simple: when you encounter n characters of the same type in a row the compression tool (wzip) will turn that into the number n and a single instance of the character.

So if we had a file with the following contents: aaaaaaaaaabbbb 

The tool would turn it into: 10a4b

Here we will write out a 4-byte integer in binary format followed by the single character in ASCII. So a compressed file will consist of some number of 5-byte entries each of which is comprised of a 4-byte integer and the single character.

To write out an integer in binary format (not ASCII), we should use fwrite().

To compress the file file.txt into a file.z 

We will type: prompt> ./wzip file.txt > file.z

The “greater than” sign is a UNIX shell redirection.

In this case, the output from wzip is written to the file file.z instead of being printed to the screen. 



The wunzip tool simply does the reverse of the wzip tool, taking from a compressed file and writing to standard output again the uncompressed results. For example, to see the contents of file.txt we will type:

prompt> ./wunzip file.z

wunzip should read in the compressed file (likely using fread())and print out the uncompressed output to standard output using printf().


• If multiple files are passed to wzip they are compressed into a single compressed output, and when unzipped, will turn into a single uncompressed stream of text.







