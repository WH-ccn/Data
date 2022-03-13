#include<stdio.h>
int n,m,i;
int p;
int d;
int s[1001];
int o[1001];
int main(){
 scanf("%d %d",&n,&m);	
   for(i=0;i<n;i++){
  	scanf("%d",&p);
  	s[i]=p;
   }
   i=0;
   int j,hold,an;
   for(i=0;i<n;i++){
   	d=s[i]-m;
   	if (d<0){
   		d=-d;
	   }
   	o[i]=d;
   }
   i=0;
   for(i=0;i<n-1;i++){
   	for(j=0;j<n-1-i;j++){
   		if(o[j]>o[j+1]){
   			hold=o[j];
   			o[j]=o[j+1];
   			o[j+1]=hold;
   			an=s[j];
   			s[j]=s[j+1];
   			s[j+1]=an;
		   }
	   }
   }
   i=0;
   for(i=0;i<n-1;i++){
   	if(o[i]==o[i+1]){
   		if(s[i]>=s[i+1]){
   			an=s[i+1];
   			s[i+1]=s[i];
   			s[i]=an;
		   }
	   }
   }	
i=0;
for(i=0;i<n;i++){
	printf("%d\n",s[i]);
}
	
	
	return 0;
}