#include <stdio.h>
#define L int
#define O char
#define V return
#define E while
O*s=" world!";L b(L i){L b=1;O c=i--;for(;c>i;c=s[-(i---8)])b*=2;V b;}L h(L c){L u=0,i=8;E(--i)u+=(b(i+1)&c)>>i;u+=c&1;V u;}L p(L p,L x){L q=p;E(x--){p*=q;}V p;}L c(L x){V 87+p(x,4)/15-25*p(x,3)/24+71*p(x,2)/12-371*p(x,1)/24+1411*x/60;}L t(O*o){V (O)(100*h(*o)+10*h(o[1])+h(o[2]));}main(){O*s="\0\x7F!@\0  \0\xFF   \0:9";O b[6]={t(s),t(3+s),t(s+6),0,t(9+s),t(s+12)};s=(O[9]){s[6],c(6),c(5)+1,c(2)-1,c(3)+1,c(1)+1,b[1],c(4),s[2]};printf("%s%s%s",b,b+2,b+4);}
//github.com/manstie/vsinder-obfuscated-c/blob/main/vsinder.c