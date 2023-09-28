// String operations

Strcat(s, t)         // concatenate t to end of s
    strncat(s, t, n) // concatenate n characters of t to end of s
    Strcmp(s, t)     // return negative zero or positive for s<t,s==t or s>t
    Stcncmp(s, t, n) // Same as strcmp but only in first n characters
    Strcpy(s, t)     // copy t to s
    Stcncpy(s, t, n) // Copy at most n characters of t to s
    strlen(s)        // Return length of s
    Strchar(s, c)    // Return pointer to first c in s or Null if not present
                     // In the above example we pass the first address of the string "*" and to the next
                     // we pass the next pointer to check in the string "c"