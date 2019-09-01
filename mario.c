#include <cs50.h>
#include <stdio.h>

int get_positive_int (string prompt);

int main(void)
{
    int height = get_positive_int("Height:");
    if(height==1){
        printf("#  #\n");
    }
    else if(height==2){
        printf(" #  #\n##  ##\n");
    }
    else if(height==3){
        printf("  #  #\n ##  ##\n###  ###\n");
    }
    else if(height==4){
        printf("   #  #\n  ##  ##\n ###  ###\n####  ####\n");
    }
    else if(height==5){
        printf("    #  #\n   ##  ##\n  ###  ###\n ####  ####\n#####  #####\n");
    }
    else if(height==6){
        printf("     #  #\n    ##  ##\n   ###  ###\n  ####  ####\n #####  #####\n######  ######\n");
    }
    else if(height==7){
        printf("      #  #\n     ##  ##\n    ###  ###\n   ####  ####\n  #####  #####\n ######  ######\n#######  #######\n");
    }
    else if(height==8){
        printf("       #  #\n      ##  ##\n     ###  ###\n    ####  ####\n   #####  #####\n  ######  ######\n #######  #######\n########  ########\n");
    }
}

int get_positive_int (string prompt)
{
    int n;
    do{
        n=get_int ("Height:");
    }
    while (n<1 || n>8);
    return n;
}
