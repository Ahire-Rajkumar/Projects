<<doc
Name:Rajkumar Tulshidas Ahire
Date:06-02-2024
Description:Write a script to rename a file/directory replaced by lower/upper case letters
Sample input:ls
             File.txt MyScript.SH MyFile007.txt dir/ Assign1/ newfolder/
Sample output:./file_upper_lower.sh
              Files are rename in lowercase and directories are renamed in upper case
              $ ls
              file.txt myfile007.txt myscript.sh DIR/ ASSIGN1/ NEWFOLDER/

doc

#!/bin/bash

    arr=(`ls`)                                            # using array method to passing files
     
    for i in ${arr[@]}                                    # using intilazation full element of array
      do

   if [ -f $i ]                                           # to check the file
   then

               f=`echo "$i" | tr '[:upper:]' '[:lower:]'` # using variable tr method upper and lower converting
              
               mv $i $f                                   # mv to element into the file rename

           fi      
   if [ -d $i ]                                           # to check the directory
    then
              
               d=`echo "$i" | tr '[:lower:]' '[:upper:]'` # using var in tr method coverting  lower to upper
                
               mv $i $d                                   # using mv element into the fle rename
             
        echo "Files are rename in lowercase and directories are renamed in upper case"
                  
       fi
done

