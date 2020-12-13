#include <stdio.h>
#define _ int
#define __ long
#define O char
#define X return
#define Y while
//multiplies a int pointer by 2
_ x(_*x){*x*=2;}
//red herring
O*s = " world!";
//returns 2^i apart from <= 1 which returns 0
_ binaryIndex(_ i)
{
    _ b = 1; O c = i--;
    for(;c > i; c=s[-(i---8)])
        x(&b);
    X b;
}
_ countHowManyBinaryOnesAreInACharacter(_ c)
{
    _ cumulator = 0, i = 8;
    Y(--i) cumulator+= (binaryIndex(i+1) & c)>>i;
    cumulator+=c&1;
    X cumulator;
}

//returns p to the power of x+1
__ p(__ p,_ x){_ q=p;Y(x--){p*=q;}X p;}

//https://www.wolframalpha.com/input/?i=curve+fitting+%7B0%2C+32%7D%2C+%7B1%2C+33%7D+%7B4%2C+100%7D%2C+%7B5%2C+105%7D%2C+%7B6%2C+110%7D%2C+%7B7%2C+114%7D%2C+%7B8%2C+115%7D%2C+%7B9%2C+118%7D
_ curve(_ x)
{
     X 32-(13*p(x,6))/15120
     + (349*p(x,5))/8640
     - (6379*p(x,4))/8640
     + (11705*p(x,3))/1728
     - (283729*p(x,2))/8640
     + (334523*p(x,1))/4320
     - (125173*x)/2520;
}

_ threeCharsToNum(O*o)
{
    O x='\xFF';
    X (O)(100*(countHowManyBinaryOnesAreInACharacter(o[0]^x))
    + 10*(countHowManyBinaryOnesAreInACharacter(o[1]^x))
    + (countHowManyBinaryOnesAreInACharacter(o[2]^x)));
}

main()
{
    //H 72 e 101 l 108 o 111 , 44
    //obfuscate by generating the numbers using countHowManyBinaryOnesAreInACharacter
    //then multiplying them by the base10 index 2 1 0
    //each character will be xored
    O*s="\xFF ~\xFB\xFF\xDF\xFE\xFF\0\x7F\xDF\xFD\xFF""cq";
    O b[6] = {threeCharsToNum(s),
        threeCharsToNum(3 + s),
        threeCharsToNum(s + 6),
        0,
        threeCharsToNum(9 + s),
        threeCharsToNum(s + 12)
    };
    s=(O[9]){curve(0), curve(9), curve(8), curve(5), curve(6)+1, curve(4), b[1], curve(7)-1, curve(1)-1};
    // so I was planning on adding "s" to the printf statement here but apparently IT DOESN'T NEED IT?
    // somehow when i set s=... it appends to b + 4
	// this is great, it's somehow obfuscated such that even I don't understand it
	printf("%s%s%s", b, b+2, b+4);
}
