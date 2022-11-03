#include <stdio.h>                                                                            

/**
 * _getLenght- to fetch length of var
 * @var: The var lenght
 * Return: int
 */                                                                      

int _getLength(char *var)                                                                     

{                                                                                             

	int i = 0;                                                                                    

	int len = 0;                                                                                  

	                                                                                              

	while (var[i] != '\0')                                                                        

	{                                                                                             

		i++;                                                                                          

		len++;                                                                                        

	}                                                                                             

	return (len);                                                                                 

}

/**                                                                                           
  *
 *  * _strcat- To concatinate                                                                    
 *
 *   * @dest: destination var                                                                     
 *
 *    * @src: source var                                                                           
 *
 *     * Return: pointer to destination                                                             
 *
 *      */                                                                                           
char *_strncat(char *dest, char *src, int n)
{                                                                                             

	int i;                                                                                        

	int destlen = _getLength(dest);                                                               

	int srclen = _getLength(src);                                                                 

	for (i = 0; i <= n; i++)                                                                 

	{                                                                                             

		dest[destlen + i] = src[i];                                                                   

	}                                                                                             

	printf("%s", dest);                                                                           

}

void main(void)
{
_strncat("Apple", "pinnepale", 4);
}
