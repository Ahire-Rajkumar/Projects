<<doc
Name:Rajkumar Tulshidas Ahire
Date:02-02-2024
Description:Write a script to print chess board
Sample input:1. ./chess_board.sh
Sample output:To print the chess board 8 rows and 8 coloms black and white combination 
doc

#!bin/bash

for row in `seq 8`                            # loop is number of row seq8
do
    for col in `seq 8`                        # loop is number of col seq8
    do
        if  [[ $(((($row+$col))%2)) -eq 0 ]]  # using if condition to addition row and col
        then
            echo -e -n "\e[47m" " "           # to print the white box using colour code
        else
            echo -e -n "\e[40m" " "           # to print the block box using colour code
            
        fi          
       
    done
  echo -e -n "\e[0m" " "                      # whether 8 colomns to make a colour

    echo

 done 
