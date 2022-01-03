# OS-Project1


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
