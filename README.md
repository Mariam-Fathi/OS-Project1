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



# tests

![wgrep](https://user-images.githubusercontent.com/66404704/148626285-f5ad1144-1b6d-4f02-9eec-61db073565ff.jpeg)



# Wzip an Wunzip




The type of compression used here is a simple form of compression called run-length encoding (RLE).

RLE is quite simple: when you encounter n characters of the same type in a row, the compression tool (wzip) will turn that into the number n and a single instance of thecharacter.

Thus, if we had a file with the following contents: aaaaaaaaaabbbb 

The tool would turn it (logically) into: 10a4b

Here, you will write out a 4-byte integer in binaryformat followed by the single character in ASCII. Thus, acompressed file will consist of some number of 5-byte entries, eachof which is comprised of a 4-byte integer (the run length) and thesingle character.

To write out an integer in binary format (not ASCII), we should use fwrite(). For wzip, all output should be written to standard output (the stdoutfile stream, which, as with stdin, is already open when the program starts running).

Note that typical usage of the wzip tool would thus use shell redirection in order to write the compressed output to a file. Forexample, to compress the file file.txt into a (hopefully smaller)file.z, you would type:

prompt> ./wzipfile.txt > file.z

The “greater than” sign is a UNIX shell redirection; in this case, it ensures that the output from wzipis written to the filefile.z(instead of being printed to the screen). You’ll learn more about how this works a little later in the course.

The wunzip tool simply does the reverse of the wzip tool, takingin a compressed file and writing (to standard output again) theuncompressed results. For example, to see the contents of file.txt,you would type:

prompt> ./wunzipfile.z

wunzip should read in the compressed file (likely using fread())and print out the uncompressed output to standard output usingprintf().

Details

• Correct invocation should pass one or more files via thecommand line to the program; if no files are specified, the programshould exit with return code 1 and print “wzip: file1 [file2 …]”(followed by a newline) or “wunzip: file1 [file2 …]” (followed bya newline) for wzip and wunzip respectively.

• The format of the compressed file must match the descriptionabove exactly (a 4-byte integer followed by a character for eachrun).

• Do note that if multiple files are passed to *wzip, they arecompressed into a single compressed output, and when unzipped, willturn into a single uncompressed stream of text (thus, theinformation that multiple files were originally input into wzip islost). The same thing holds for wunzip.

Expert Answer
Answer to wzip and wunzip – MUST BE WRITTEN IN C The next tools you will build come in a pair, because one (wzip) is a file comp…
