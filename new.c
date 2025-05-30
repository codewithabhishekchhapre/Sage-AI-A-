
void main(){

     for(int i = 0; i < 6; i++) {

          if(i%2==0){
               printf("%d",i%2);
          }
          else{
               printf("%d\n",i%2);
          }
          if(i%2==0 && i > 3){
               printf("%d\n",i%3);
          }
          else if(i%2==0 || i < 5){
               printf("%d\n",i+2);
          }
          else{
               printf("%d\n",i+1);
          }
     }

}