/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toBinary.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:57:02 by cyalniz           #+#    #+#             */
/*   Updated: 2022/03/22 12:57:12 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
char *ascii_byte(int c)
{
    int i;
    int value;
    char *str;
    str = (char *)malloc(sizeof(char) * 8);
    value = 0;
    i = 0;
    while (i < 8)
    {
        value = c / pow(2, i);
        if (value % 2 == 0)
            str[7 - i] = '0';
        else if (value % 2 != 0)
            str[7 - i] = '1';
        i++;
    }
    str[8] = '\0';
    return (str);
}
int main()
{
    printf("%s", ascii_byte('E'));
}
/*                
example:
e for ascii code: 101
e for binary: 01100101
101/(2^0) = 101 (odd)(tek) => 1
101/(2^1) = 50  (even)(çift) => 0
101//(2^2) = 25 (odd)(tek) => 1
101/(2^3) = 12 (even)(çift) => 0
101/(2^4) = 6 (even)(çift) => 0
101/(2^5) = 3 (odd)(tek) => 1
101/(2^6) = 1 (odd)(tek) => 1

E for ascii cod: 69
E for binary: 01000101
*/
