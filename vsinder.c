#include <stdio.h>
#define _ int
#define k long
#define O char
#define X return
#define Y while
_ x(_*x){*x*=2;}O*s=" world!";_ u(_ i){_ b=1;O c=i--;for(;c>i;c=s[-(i---8)])x(&b);X b;}_ l(_ c){_ t=0,i=8;Y(--i)t+=(u(i+1)&c)>>i;t+=c&1;X t;}k p(k p,_ x){_ q=p;Y(x--){p*=q;}X p;}_ c(_ x){X 32-(13*p(x,6))/15120+(349*p(x,5))/8640-(6379*p(x,4))/8640+(11705*p(x,3))/1728-(283729*p(x,2))/8640+(334523*p(x,1))/4320-(125173*x)/2520;}_ v(O*o){O x='\xFF';X (O)(100*(l(o[0]^x))+10*(l(o[1]^x))+(l(o[2]^x)));}main(){O*s="\xFF ~\xFB\xFF\xDF\xFE\xFF\0\x7F\xDF\xFD\xFF""cq";O b[6]={v(s),v(3+s),v(s+6),0,v(9+s),v(s+12)};s=(O[9]){c(0),c(9),c(8),c(5),c(6)+1,c(4),b[1],c(7)-1,c(1)-1};printf("%s%s%s",b,b+2,b+4);}