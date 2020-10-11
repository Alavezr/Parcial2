//Acomoda el numero

#include <stdio.h>

int main(int argc, char *argv[]){
	int M,C;
	int	L=0;
	scanf("%i",&M);
	struct numero{
		int p;
	}numero[M];
	for(int i=0;i<M;i++){
		scanf("%i",&numero[i].p);
	}
	C=0;
	do{
		if(numero[0].p > numero[C].p)
			L++;
		C++;
	}while(C!=M);
	printf("%i",L);
 }



//fizz bozz

#include <stdio.h>

int main(int argc, char *argv[]) {
	int c;
	scanf("%d",&c);
	int v[c];
	for(int i=0;i<c;i++){
		scanf("%d",&v[i]);
	}
	for(int i=0;i<=c-1;i++)
	{
	if(v[i]%3==0&&v[i]%5==0){
		printf("FizzBozz\n");
	}else{
	if(v[i]%5==0){
			printf("Bozz\n");
	}else{
		if(v[i]%3==0){
				printf("Fizz\n");
		}else{
		if(v[i]%3!=0&&v[i]%5!=0){
				printf("NoFizzBozz\n");
					}
				}
			}
		}
	}
	
	return 0;
}

//Numeros locos

#include <stdio.h>

int main(int argc, char *argv[]) {
	int a,b,i,c,s;
	int d=0;
	scanf("%d",&a);
	scanf("%d",&b);
	int v[b];
	for(i=1;i<=b;i++){
		scanf("%d",&c);
		v[i]=c;
	}
	for(i=1;i<=b;i++){
		if (i<b)
			s=v[i]+v[i+1];
		else{
			s=v[i]+v[1];
		}
		if (s%a==0)
			d=d+1;
	}
	printf("%d",d);
	return 0;
}


//Apilando digitos

#include <stdio.h>
#include <stdlib.h>
int main (int argc, char** argv) {
   int x,y,z=0,i;
    scanf ("%d",&x);
    scanf ("%d",&y);
    int v[x];
    for (i=0;i<x;i++){
        scanf ("%d",&v[i]);
    }
    for (i=0;i<x;i++){
        if (v[i]==y){
            z++;
        }
    }
    printf ("%d",z);
return 0;   
}

// Alicia
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int a,c;
int main(){
    scanf("%i", &a);
    int lol[100001];
    for(int i=0;i<100002;++i)lol[i]=0;
    for(int i=0;i<a;++i)scanf("%i", &c),lol[c]=i+1;
    scanf("%i", &a);
    for(int i=0;i<a;++i)scanf("%i", &c),printf("%i ", lol[c]);
    return 0;
}



//Contar lapices
#include <stdio.h>
#include <stdlib.h>
int main (int argc, char** argv) {
   int x,y,z=0,i;
    scanf ("%d",&x);
    scanf ("%d",&y);
    int v[x];
    for (i=0;i<x;i++){
        scanf ("%d",&v[i]);
    }
    for (i=0;i<x;i++){
        if (v[i]==y){
            z++;
        }
    }
    printf ("%d",z);
return 0;   
}
//A Pares y nones

#include <stdio.h>
#include <stdlib.h>
int main (int argc, char** argv) {
   int x,y,z,c,j,k,i;
    scanf ("%d\n",&x);
    z=0;
    c=0;
    j=0;
    k=0;        
    int v[x];
    for (i=0;i<x;i++){
        scanf ("%d",&v[i]);
    }
    for (i=0;i<x;i++){
        y=v[i]%2;
        if (y==0){
            z+=v[i];
            j++;
            
        }
        else {
            c+=v[i];
            k++;
            
        }
    }
    z/=j;
    c/=k;
    if (z==c){
    printf ("EMPATE!");
    }
    else if (z<c){
        printf ("NONILA");
    }
   else if (z>c){
        printf ("APARICIO");
    }
return 0;   
}

//Pitagoras
#include <stdio.h>
#include <math.h>

int main (int argc, char** argv) {
    int i,j,k,d=0,x,y;
    scanf ("%d %d",&x,&y);    
    for (i=x;i<=y;i++){
        for (j=x;j<=y;j++){
           float c= (float) sqrt(pow(i,2)+pow(j,2));
           int aux = floor(c);
                if (c>=x && c<=y && i<=j && c-aux==0){
                    
                    d++;
                }               
        } 
    }
    
    printf ("%d",d);
     
          return 0;   
}