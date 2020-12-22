#include <stdio.h>
#define L int
#define O char
#define V return
#define E while
//red herring
O*s = " world!";
//returns 2^i apart from <= 1 which returns 0
L binaryIndex(L i)
{
    L b = 1; O c = i--;
    for(;c > i; c=s[-(i---8)])
        b*=2;
    V b;
}
L countHowManyBinaryOnesAreInACharacter(L c)
{
    L cumulator = 0, i = 8;
    E(--i) cumulator+= (binaryIndex(i+1) & c)>>i;
    cumulator+=c&1;
    V cumulator;
}

//returns p to the power of x+1
L p(L p,L x){L q=p;E(x--){p*=q;}V p;}

//https://www.wolframalpha.com/input/?i=curve+fitting+%7B1%2C+100%7D%2C+%7B2%2C+105%7D%2C+%7B3%2C+110%7D%2C+%7B4%2C+114%7D%2C+%7B5%2C+115%7D%2C+%7B6%2C+118%7D
L curve(L x)
{
     V 87 + p(x,4)/15 - 25*p(x,3)/24 + 71*p(x,2)/12 - 371*p(x,1)/24 + 1411*x/60;
}

L threeCharsToNum(O*o)
{
    V (O)(100*countHowManyBinaryOnesAreInACharacter(*o)
    + 10*countHowManyBinaryOnesAreInACharacter(o[1])
    + countHowManyBinaryOnesAreInACharacter(o[2]));
}

main()
{
    //H 72 e 101 l 108 o 111 , 44
    //obfuscate by generating the numbers using countHowManyBinaryOnesAreInACharacter
    //then multiplying them by the base10 index 2 1 0
    //each character will be xored
    O*s="\0\x7F!@\0  \0\xFF   \0:9";
    O b[6] = {threeCharsToNum(s),
        threeCharsToNum(3 + s),
        threeCharsToNum(s + 6),
        0,
        threeCharsToNum(9 + s),
        threeCharsToNum(s + 12)
    };
    s=(O[9]){s[6], curve(6), curve(5)+1, curve(2)-1, curve(3)+1, curve(1)+1, b[1], curve(4), s[2]};
    // so I was planning on adding "s" to the printf statement here but it doesn't need it
    // because I initialize my character arrays manually without a null terminator
	// meaning it will continue to read the stack, and the stack must contain nulls after for it to terminate
	printf("%s%s%s", b, b+2, b+4);
}
