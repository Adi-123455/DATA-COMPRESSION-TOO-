#include <stdio.h>
#include <string.h>

// Function to perform Run-Length Encoding (RLE) compression
void runLengthEncode(const char *input) {
    int len = strlen(input); // Get the length of the input string
    int i = 0;

    printf("Compressed Output: ");

    // Traverse the string character by character
    while (i < len) {
        char current = input[i]; // Store current character
        int count = 1;           // Initialize count of repetitions

        // Count how many times the current character repeats consecutively
        while (i + 1 < len && input[i] == input[i + 1]) {
            count++;
            i++;
        }

        // Print the character followed by its frequency
        printf("%c%d", current, count);
        i++; // Move to the next character group
    }

    printf("\n");
}

int main() {
    char input[1000]; // Buffer to store the user's input string

    // Prompt user to enter input
    printf("Enter a string to compress (no spaces): ");
    scanf("%s", input); // Read string from user (up to first space)

    // Call the compression function
    runLengthEncode(input);

    return 0; // Indicate successful program termination
}
