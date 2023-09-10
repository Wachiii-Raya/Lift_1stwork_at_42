# 42 Curcus: Libft
the very first project @42Bangkok <br>
maintainer: @wachiii-raya
<br>

## PART1: Libc functions

| Function  				 		 |      Description   			   			      |   Original Function        			  |   Return				 		 |
|------------------------------------|:----------------------------------------------:|:-------------------------------------:|:--------------------------------:|
| [ft_atoi](libft/ft_atoi.c)  		 | convert ASCII string to integer				  | int atoi(const char *str);     		  | int array			      	     |
| [ft_isalnum](libft/ft_isalnum.c)	 | check isdigit or isapha						  | int isalnum(int c);	 				  |	0 if false, 1 if true		 	 |
| [ft_isaplha](libft/ft_isalpha.c)	 | check alphabetic character					  | int isalpha(int c); 				  | 0 if false, other num if true	 |
| [ft_isascii](libft/ft_isascii.c)	 | check if ascii character						  | int isascii(int c);	 				  | 0 if false, 1 if true		 	 |
| [ft_isdigit](libft/ft_isdigit.c)	 | check if decimal digit character (48 - 57)	  | int isdigit(int c);		 			  | 0 if false, other num if true	 |
| [ft_isprint](libft/ft_isprint.c)	 | check if printalble character (32 - 126)		  | int isprint(int c);		  			  | 0 if false, other nun if true	 |
| [ft_strlcat](libft/ft_strlcat.c)	 | concatenates string onto the end of another    | size_t strlcpy(char *restrict dst, const char *restrict src, size_t dstsize); | total length of the string they tried to create|
| [ft_strlen](libft/ft_strlen.c)	 | check length of string						  | size_t strlen(const char *s);	      | length of the string s.			 |
| [ft_strlcpy](libft/ft_strlcpy.c)	 | copies a string onto the end of another string | size_t strlcpy(char *restrict dst, const char *restrict src, size_t) | the length of the source string|
| [ft_memset](libft/ft_memset.c)	 | set the first n bytes of pointed mem. to val c | void * memset(void *b, int c, size_t len);| returns its first argument.|
| [ft_bzero](libft/ft_bzero.c)		 | sets the first n bytes of the memory area pointed to by ptr to zero| void bzero(void *s, size_t n);| does not return a value.|
| [ft_memcpy](libft/ft_memcpy.c)	 | copies the bytes from the memory area pointed to by src to the memory area pointed to by dest in the same order. | void *memcpy(void *restrict dst, const void *restrict src, size_t n);| original value of dst.|
| [ft_memmove](libft/ft_memmove.c)	 | copies the bytes from the memory area pointed to by src to the memory area pointed to by dest in reverse order. | void *memmove(void *dst, const void *src, size_t len);| the original value of dst. |
| [ft_toupper](libft/ft_toupper.c) 	 | converts a lower-case letter to the upper-case | int toupper_l(int c, locale_t loc);	  | upper-case letter				 |
| [ft_tolower](libft/ft_tolower.c)	 | convert a upper-case letter to the lower-case  | int tolower_l(int c, locale_t loc);	  | lower-case letter				 |
| [ft_strchr](/libft/ft_strchr.c)	 | find the first occurrence of a specified character in a given string if c = '\0', the ptr will point at terminated str '\0'| char *strchr(const char *s, int c); | a pointer or NULL |
| [ft_strrchr](/libft/ft_strrchr.c)  | find the last occurrence of a specified character in a given string, if c = '\0', the ptr will point at terminated str '\0'| char *strchr(const char *s, int c); | a pointer or NULL |
| [ft_strcmp](/libft/ft_strncmp.c)   | compare the first n characters of two strings to determine if they are equal or which one is greater (compare only string) | int strncmp(const char *s1, const char *s2, size_t n); | An integer less than, equal to, or greater than zero if one of the first n bytes of s1 is found to be less than, to match, or to be greater than s2.|
| [ft_memchr](/libft/ft_memchr.c)	 | locates the first occurrence of c in string s  | void * memchr(const void *s, int c, size_t n); | a pointer to the byte located, or NULL if no such byte exists within n bytes |
| [ft_memcmp](/libft/ft_memcmp.c)	 | compares the first n bytes of the memory s1 and s2 (compare everthing in memmory adress, bit by bit, not terminate at '\0') | int memcmp(const void *s1, const void *s2, size_t n); | integer less than, equal to, or greater than zero if the first n bytes of s1 is found to be less than, equal to, or greater than the first n bytes of s2. Zero if n is equal to zero |
| [ft_strnstr](/libft/ft_strnstr.c)	 | searches the first n bytes of the given string s1 for the first occurence of the full string s2 | char * strstr(const char *haystack, const char *needle, size_t len); | a pointer to the first character of the first occurrence of s2 or a pointer to s1 if s2 is empty |


## PART2: Additional Functions
| Function  				 		 |      Description   			   			      |   Original Function / Prototype		  |   Return				 		 |
|------------------------------------|:----------------------------------------------:|:-------------------------------------:|:--------------------------------:|
| [ft_calloc](/libft/ft_calloc.c)	 | malloc mem for an arr and sets the mem to 0 | void *calloc(size_t count, size_t size);| pointer to allocated memory or a NULL pointer and set errno to ENOMEM |
| [ft_strdup](/libft/ft_strdup.c)	 | malloc sufficient mem for a copy of the string s1 | char * strdup(const char *s1);  | pointer, if success. null if not |
| [ft_substr](/libft/ft_substr.c)	 | malloc and extract substring from string s for length len| char *ft_substr(char const *s, unsigned int start, size_t len);| the substring or Null if malloc fail|
| [ft_strjoin](/libft/ft_strjoin.c)	 | malloc + concat the given strings s1 and s2 onto that mem| char *ft_strjoin(char const *s1, char const *s2); | the new string or null if malloc fail |

