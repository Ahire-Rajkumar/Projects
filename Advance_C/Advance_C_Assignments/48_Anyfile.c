/*
Name:Rajkumar Tulshidas Ahire
Date:05/04/2024
Description:Provide a menu to manipulate or display the value of variable of type t
Sample I/P and O/P:Test Case 1:
                   user@emertxe] ./mem_manager
                   Menu :
                   1. Add element
                   2. Remove element
                   3. Display element
                   4. Exit from the program

                   Choice ---> 1
                   Enter the type you have to insert:
                   1. int
                   2. char
                   3. float
                   4. double
                   Choice ---> 2
                   Enter the char : k
                   1. Add element
                   2. Remove element
                   3. Display element
                   4. Exit from the program
                   Choice ---> 3
                   -------------------------
                   0 -> k
                   -------------------------
                   1. Add element
                   2. Remove element
                   3. Display element
                   4. Exit from the program
                   Choice ---> 1
                   Enter the type you have to insert:
                   1. int
                   2. char
                   3. float
                   4. double
                   Choice ---> 1
                   Enter the int : 10
                   1. Add element
                   2. Remove element
                   3. Display element
                   4. Exit from the program
                   Choice ---> 3
                   ------------------------
                   0 -> k (char)
                   1 -> 10 (int)
                   ------------------------
                   1. Add element
                   2. Remove element
                   3. Display element
                   4. Exit from the program

                   Choice ---> 2
                   0 -> k
                   1 -> 10
                   Enter the index value to be deleted : 0
                   index 0 successfully deleted.
                   1. Add element
                   2. Remove element
                   3. Display element
                   4. Exit from the program
                   Choice ---> 4

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int choice, option, index;		// VARIABLE DECLARATION
	int pos[5]; // Array to store positions of elements in memory
	
	int c_flag = 0, s_flag = 0, i_flag = 0, f_flag = 0, d_flag = 0; // Flags to track occupied memory
	
	void *ptr;
	ptr = malloc ( 8 * sizeof(char));	// ALLOCATING 8 BYTES CONTINUOUSLY
	
	while (1)
	{
		printf("Menu :\n1. Add element\n2. Remove element\n3. Display element\n4. Exit from the program\nChoice ---> ");	
	    
		scanf("%d",&choice);	// READ CHOICE FROM USER
		switch(choice)
		{
			case 1:		// ADD ELEMENT
			{
				printf("Enter the type you have to insert:\n1.int\n2.char\n3.float\n4.double\n");
				printf("choice ---> ");
				scanf("%d",&option);		// READ CHOICE FROM USER
				
				switch (option)
				{
					case 1:
						if ( i_flag == 0 && f_flag == 0 && d_flag == 0)
						{
							i_flag++;
							printf("Enter the integer : ");	
							scanf("%d",((int*)ptr) + 1);		// READ INT FROM USER AND STORE IT IN SECOND SET OF 4 BYTES 
						}
						else
							printf("Memory is occupied\n");
						break;
					case 2:
						if( c_flag < 2 && d_flag == 0	)
						{
							printf("Enter the character : ");
							scanf(" %c",((char*)ptr) + c_flag); // READ CHAR FROM USER AND STORE IT IN SET OF FIRST 2 BYTES
							c_flag++;
						}
						else
							printf("Memory is occupied\n");
						break;
					case 3:
						if ( s_flag == 0 && d_flag == 0 )
						{
							s_flag++;
							printf("Enter the integer (short) : ");
							scanf("%hd",((short*)ptr) + 1);		// READ SHORT FROM USER AND STORE IT IN SECOND SET OF 2 BYTES 
						}
						else
							printf("Memory is occupied\n");
						break;
					case 4:
						if ( i_flag == 0 && f_flag == 0 && d_flag == 0)
						{
							f_flag++;
							printf("Enter the float value : ");
							scanf("%f",((float*)ptr) + 1);	// READ FLOATT FROM USER AND STORE IT IN SECOND SET OF 4 BYTES 
						}
						else
							printf("Memory is occupied\n");
						break;
					case 5:
						if ( c_flag == 0 && i_flag == 0 && s_flag == 0 && f_flag == 0 && d_flag == 0)
						{
							d_flag++;
							printf("Enter the double value : ");
							scanf("%lf",((double*)ptr) );		// READ DOUBLE FROM USER AND STORE IT IN 8 BYTES MEMORY ALLOCATED 
						}
						else
							printf("Memory is occupied\n");
						break;
					default :
						printf("Invalid option");
				}
				break;			
			}
			case 2:	// REMOVE ELEMENT
			{
				index = 0;	
				// PRINTING ELEMENT WITH POSITION IN THAT 8 BYTES MEMORY ALLOCATED
				
				if ( c_flag > 0 )
				{
					printf("%d -> %c\n",index, *((char*)ptr));	// 1ST CHARACTER 
					pos[index++] = 1;
					if ( c_flag > 1 )
					{
						printf("%d -> %c\n",index, *(((char*)ptr)+ 1) );	// 2ND CHARACTER
						pos[index++] = 1;
					}
				}
				if ( i_flag == 1 )
				{
					printf("%d -> %d\n",index, *(((int*)ptr) + 1) );		// 1 INT (AT 5TH TO 8TH BYTE ) TOTALLY 4 BYTES FOR INT
					pos[index++] = 3;
				}
				if ( f_flag == 1 )
				{
					printf("%d -> %f\n",index, *(((float*)ptr) + 1) );		// 1 FLOAT (AT 5TH TO 8TH BYTE ) TOTALLY 4 BYTES FOR FLOAT
					pos[index++] = 4;
				}
				if ( d_flag == 1 )
				{
					printf("%d -> %lf\n",index, *((double*)ptr) );	// 1 DOUBLE ENTIRE 8 BYTES ALLOCATED
					pos[index++] = 5;
				}
				printf("Enter the index value to be deleted : ");
				scanf("%d",&index);	// READ INDEX FROM USER 
				
				switch ( pos[index] )
				{
					case 1 :	//REMOVE CHARACTER
						if ( c_flag > 0 )	
						{
							if (  index == 0 )
							{
								*((char*)ptr) = *(((char*)ptr)+ 1);
								c_flag--;
							}
							if ( index == 1 )
							{
								c_flag--;
							}
							printf("Index %d is successfully deleted. \n",index);
						}
						else
							printf("Already deleted\n");
						break;
					case 2:	// REMOVE SHORT
						if ( s_flag == 1 )
						{
							s_flag--;
							printf("Index %d is successfully deleted \n",index);
						}
						else
							printf("Already deleted\n");
						break;
					case 3:	// REMOVE INT
						if ( i_flag == 1 )
						{
							i_flag--;
							printf("Index %d is successfully deleted \n",index);
						}
						else
							printf("Already deleted\n");
						break;
					case 4:	//REMOVE FLOAT
						if ( f_flag == 1 )
						{
							f_flag--;
							printf("Index %d is successfully deleted \n",index);
						}
						else
							printf("Already deleted\n");
						break;
					case 5:	//REMOVE DOUBLE
						if ( d_flag == 1 )
						{
							d_flag--;
							printf("Index %d is successfully deleted \n",index);
						}
						else
							printf("Already deleted\n");
						break;
					default :
						printf("Invalid option");
				}
				break;
			}
			case 3:	// DISPLAY ELEMENT
			{   
				index = 0;
				printf("\n");
			
				if ( c_flag > 0 )
				{
					printf("-------------------------");
					printf("\n%d -> %c\t(char)\n",index++, *((char*)ptr));
					
					if ( c_flag > 1 )
						printf("%d -> %c\t(char)\n",index++, *(((char*)ptr)+ 1) );	
				}
			
				if ( i_flag == 1 )
					printf("%d -> %d\t(int)\n",index++, *(((int*)ptr) + 1) );
				
				if ( f_flag == 1 )
					printf("%d -> %f\t(float)\n",index++, *(((float*)ptr) + 1) );
				
				if ( d_flag == 1 )
					printf("%d -> %lf\t(double)\n",index++, *((double*)ptr) );
					
				if ( c_flag == 0 && i_flag == 0 && s_flag == 0 && f_flag == 0 && d_flag == 0)
					printf("Nothing available all indexes are empty\n"); 
				printf("-------------------------\n");
				break;
			}
			case 4 :	// EXIT FROM PROGRAM
				free(ptr);
				ptr = NULL;
				exit(1);
				break;
			default :
				printf("Invalid option\n");
		}
	}
}

