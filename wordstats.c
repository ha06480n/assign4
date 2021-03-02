#include <stdio.h>
#include <string.h>
#define MAX_BUF 1024


int main()
{
    // Frequency count of every character is stored in here.
    int letter_frequency[26] = {0};

    int len,i,flag = 0;

    // Initializing buffer with max size of 1024 characters.
    char buf[MAX_BUF];

    do {

        // if pattern matches are greater than 0, non empty string is read into the buffer.
        if (scanf("%[^\n]s", buf) == 1) len = strlen(buf); // calculating and storing the length of buffer.
        else len = 0; // if matches are 0, i.e empty string is read, then length is set to 0.

        // iterating over the entire string.
        for (int j = 0; j < len; ++j){

            // checking whether the characters are alphabets or not.
            // if true, incrementing the Frequency of the character alphabet.

            if (buf[j] >= 'A' && buf[j] <= 'Z') letter_frequency[buf[j] - 'A']++;
            else if (buf[j] >= 'a' && buf[j] <= 'z') letter_frequency[buf[j] - 'a']++;

            // Note: The Capital letter and Small letter alphabets are treated likely.
        }

        // To skip the trailing newline characters at the end.
        getchar();

    } while(len > 0);

    printf("Frequency of each character after the text analysis..\n");

    for(i = 0; i<26; ++i){
        // ASCII code of 'A' is 65.
        printf("%c : %d\n", (65 + i), letter_frequency[i]);
    }

    return 0;
}
