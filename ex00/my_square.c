#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, char *argv[]){
    int M, N; // initializing the variables M and N

    if (argc < 2){ //this condition checks if any arguments were passed to the terminal.
    // if the condition above equals true, then no command line arguments  were passed.
        exit(0);// the program will be exited in order to avoid segmentation error.
    }
    
    if (strcmp(argv[1], "") == 0 && strcmp(argv[2],"") == 0) { // This condition is used to compare that the arguments
        //passed to the command are not empty strings. 
        exit(0); // if this true, the program is exited because the values of N and M would be zero which 
        // would cause the program to crash.
    }
    else if (argc==2) {// This condition checks the argument count passed to the command line.
        // if this is true, it then means that only one argument was passed.
        exit(0);// the program is exited because both arguments are needed before the program can be executed.
    }
    else {
        // else if all the conditions above are false, then both arguments are converted to integer using the 
        // atoi(argv[i]) function.
        M = atoi(argv[1]);
        N = atoi(argv[2]);

        for (int i = 1; i <= M; i++){// the for loop is initialized to start from 1 to the value of M.
        /* o---o;
        To draw the figure above, the circles will be placed at the first position of 1 and the last position
        of M while at other values, the "-" will be printed.
        */
        if (i == 1 || i == M){ //This conditon takes care of the first and last circle
            printf("o");
        }
        else if (i != 1 && i != M) {// this condition takes care of printing the dashes "-" where i is not 1 
        // or M.
            printf("-");
        }
    }
    printf("\n"); //prints a new line for the next for loop

    /* 
    considering the structure above;
    in the same vein, the pipe ("|") must also be positioned at the first and last positions of the two circles
    and that can only be possible if it placed at the first position (1) and the last position (M).
    */

    int height = N - 2; // This is value that controls the number of pipes to be printed on each side of the square
    while (height != 0) {// the condition that controls the while loop.
        for (int i = 1; i <= M; i++){ //initializing the for loop from 1 to the value of N
        if (i == 1){ // if equals 1, it prints "|" at the first position
            printf("|");
        }
        else if (i != 1 && i != M){ //if i does not equal 1 or the value of M, it will print empty strings
            printf(" ");
        }
        else if (i == M) { //if i equals the value of M, it first prints  "|" at the position of M and a new line as well
            printf("|");
            printf("\n");
        }
    }
    height--; // the height is then decremented.
    }
    
    // to complete the square, we use the same piece of code for the first for loop.
    for (int i = 1; i <= M; i++){
        if (i == 1 || i == M){
            printf("o");
        }
        else if (i != 1 && i != M){
            printf("-");
        }
    }
    printf("\n"); //print newline.
    }

    return 0;
}

