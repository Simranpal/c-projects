#include <stdio.h>
#include <string.h>

int main(){

    //char my_str[] = "In this programme we will find the longest word in a string";

    //    You can test using the following initializations as well:
    //    char my_str[] = "xxx xxxx xxxxx xxxxxxx xxxxxx xx xx xxxxxxxx aaaaaaaa ooooooooooo";
        char my_str[] = "gg aaaa aaaaaa aaaaaaaaaaaaaaaa";



    int longest = 0; // initially longest word length is 0
    char word[20];  // You will need to find each word from my_str and keep in this array
    char longestWord[20]; // will keep the current longest word here

    int i = 0;
    int j = 0;

    while(my_str[i]!='\0'){
        if(my_str[i] != ' ') {
                word[j] = my_str[i];
                //printf("j: %d, i : %d\n", j, i);
        }

        if(my_str[i] == ' '|| my_str[i+1] == '\0' ) {
                word[j] = '\0';
                if(j >= longest) {
                    longest = j+1 ;

                    strncpy(longestWord,word,longest);
                    longestWord[longest] = '\0';
                }
            j = -1;
                 //printf("word: %s, j: %d\n", word,j);

        }
        i++;
        j++;
        // Instructions:
        // here you will need to copy characters from my_str to word,
        // you need to continue doing the copy of characters from ith index of my_str
        // to the jth index of word until you get a space (or NULL for the last word).
        // That means continue copy if the current character is not a space AND not a NULL
        //
        // When the word is copied you need to append a NULL at the end of the word.
        // Now check if the length of the word is greater than longest, if so, then
        // update longest and copy the word to longestWord (you may use strcpy).
        //
        // If you are still not at the end of my_str then update i

    }
    printf("Longest word: %s\n", longestWord);
    printf("Length: %d\n", longest);

    return 0;
}
