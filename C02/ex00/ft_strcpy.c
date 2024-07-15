//return type is 'char *src', which is pointer to a character
//strcpy copies string from a location to another 
//The function takes two arguments: a destination buffer where the copied string will be stored, and a source string that will be copied.
//the entire source string is copied, including the null terminator, into the destination buffer.
//the retun value: pointer to the destination string 
char *ft_strcpy(char *dest, char *src){
	char *original_dest=dest;//saving original destination 
        while(*src){
                *dest++=*src++;
        }
	*dest='\0';
        return original_dest;
}
