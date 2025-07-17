# DATA-COMPRESSION-TOOL
*COMPANY*: CODTECH IT SOLUTIONS
*NAME*: ADI BAIS
*INTERN ID*: CT04DG2170
*DOMAIN*: C PROGRAMMING
*DURATION*: 4 WEEKS
*MENTOR*: NEELA SANTOSH

*DESCRIPTION*:
The given C program performs Run-Length Encoding (RLE) on a user-input string. RLE is a basic lossless compression technique that encodes consecutive repeating characters into a shorter representation. Instead of storing every individual character, it stores a character followed by its count, significantly reducing the size for strings with many repeated characters.

For example, the string "aaabbcccc" would be compressed to "a3b2c4", which clearly shows how repeated characters are encoded efficiently. This method is widely used in data compression tasks, especially for image data (like in BMP or TIFF formats) or in simple text compression scenarios.

Program Structure and Logic
The program begins by importing two essential header files:

stdio.h for input/output functions.

string.h for using strlen() to determine the length of the input string.

The core functionality is implemented in the runLengthEncode() function. This function accepts a string and prints its RLE-compressed version. Inside the function, it first calculates the length of the input string using strlen(). Then it uses a while loop to iterate through each character of the string.

A count variable is initialized to 1 and is incremented as long as the current character is the same as the next one. Once a different character is encountered (or the end of the string is reached), it prints the character and the count (e.g., a3, b2). It then continues with the next new character.

The function handles both short and long sequences of repeated characters and ensures that each group of characters is compressed properly. The compression is done on the fly — that is, no additional arrays or memory are required for storing intermediate compressed data.

The main() function handles user input. It prompts the user to enter a string and stores it in a character array named input. The scanf() function is used for input, which reads characters up to the first whitespace. This means that the input should not contain spaces for the program to function correctly.

Once the input is received, the runLengthEncode() function is called, and the compressed string is printed directly to the console.

Educational and Practical Value
This program is an excellent example of:

String manipulation

Basic algorithm implementation

Looping and conditional logic

Character handling in C

It’s simple yet effective for teaching how compression algorithms work in a practical and visual way.

Possible Enhancements
Allow compression of strings with spaces using fgets() instead of scanf().

Store the compressed output in another array or file.

Handle digits in the input string (e.g., a5 could be confused with a decoded version).

Add a decoding function to reconstruct the original string from the compressed one.

*OUTPUT*:
<img width="1920" height="1080" alt="Image" src="https://github.com/user-attachments/assets/305e8d03-c023-4818-910b-a6a15270462e" />

Conclusion
In summary, this Run-Length Encoding program demonstrates how a classic data compression algorithm can be implemented using basic C constructs. It's ideal for students learning about string processing, algorithms, or data compression principles. It shows how even a small piece of code can serve an important purpose in fields like storage optimization and transmission efficiency.
