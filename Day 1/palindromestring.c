  #include <stdio.h>
  #include <string.h>
  #include <ctype.h>
 
  // Function to check if a string is a palindrome
  int isPalindrome(char *str) {
     int left = 0;
     int right = strlen(str) - 1;
 
     while (left < right) {
         // Skip non-alphanumeric characters (optional, if ignoring spaces and punctuation)
         while (left < right && !isalnum(str[left])) {
             left++;
         }
        while (left < right && !isalnum(str[right])) {
             right--;
         }
 
         // Compare characters, ignoring case
         if (tolower(str[left]) != tolower(str[right])) {
             return 0; // Not a palindrome
         }
         
       left++;
         right--;
     }
 
     return 1; // Is a palindrome
  }
 
  int main() {
     char str[] = "A man, a plan, a canal, Panama";
     
   if (isPalindrome(str)) {
         printf("\"%s\" is a palindrome.\n", str);
     } else {
         printf("\"%s\" is not a palindrome.\n", str);
     }
 
     return 0;
  } 
