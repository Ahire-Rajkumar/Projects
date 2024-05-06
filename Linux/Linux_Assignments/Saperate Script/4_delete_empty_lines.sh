<<doc
Name:Rajkumar Tulshidas Ahire
Date:06-02-2024
Description:Write a script to delete empty lines from a file
Sample input:Enter the number :1. ./delete_empty_lines.sh file.txt
                               2. ./delete_empty_lines.sh
Sample Output:1. Empty lines are deleted
              Hello
              How
              are
              you?
              2. Error: Please pass the file name through command line.
doc

#!/bin/bash

if [ $# -gt 0 ]                            # to check the aruments passing or not       

then
    
    echo "Empty lines are deleted"         # output contents


  sed  '/^[[:blank:]]*$/d' $1              # using sed command to delecting the empty lines

else

    echo "Error: Please pass the file name through command line." 
                                           # aruments not passing print the error message 
fi

                                           # sed- commands usage
                                           # /^-represented in between space line are delecting
                                           # [:blank:]*-represented  all blank lines
                                           # d-particular line delected
                                           # $-end of the line

<<doc
1.Empty lines are deleted
root@Tulshi:~/linux_assignments# vi file.txt
root@Tulshi:~/linux_assignments# cat file.txt
Hello



How



are



you?
root@Tulshi:~/linux_assignments# sed /^[[:blank:]]*$/d file.txt
Hello
How
are
you?
2.root@Tulshi:~/linux_assignments# vi delete_empty_lines.sh
root@Tulshi:~/linux_assignments# bash delete_empty_lines.sh
Error: Please pass the file name through command line.
doc
