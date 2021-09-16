#include <stdio.h>
#include<math.h>

int main(void) {
	// your code goes here
	int t,act,laddus=0,rank=0,sev=0,x;
	char org[20],bug[20];
	 char  one[20]= "CONTEST_WON", two[20]= "TOP_CONTRIBUTOR", three[20]= "BUG_FOUND", four[20]= "CONTEST_HOSTED";
	
	scanf("%d",&t);
	
	
	for (int i = 0; i < t; i++) {
	    /* code */
	    
	     scanf("%d",&act);
	     scanf("%s",&org);
	     for (int i = 0; i < act; i++) {
	         char input[20];
	         scanf("%s",&input);
	         //printf("%s\n",input);
	         
	             if(strcmp(input,one)==0){
	                    scanf("%d",&rank);
	                    if(rank<20){
	                    laddus += 300+(20-rank);
	                   
	                    }
	                    else{
	                        laddus += 300;
	                        
	                    }
	                    
	             }
	            
	             if(strcmp(input,two)==0){
	                    laddus += 300;
	                     
	             }
	             if(strcmp(input,three)==0){
	                    scanf("%d", &sev);
	                    laddus +=sev;
	                     
	             }
	             if(strcmp(input,four)==0){
	                    laddus +=50;
	                     
	             }
	             
	            
	       // printf("%d\n",laddus);
	         
	         
	         /* code */
	     }
	     if(strcmp(org,"INDIAN")==0){
	         x = floor(laddus/200);
	          printf("%d\n",x);
	     }
	     else{
	         x = floor(laddus/400);
	         printf("%d\n",x);
	         
	     }
	    
	     // printf("%d\n",laddus);
	      laddus=0;
	     
	}
	
	    /* code */
 
	          
	        
	        
	        
	         
	       
	    
	
	
	
	
	return 0;
}

