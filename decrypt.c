

// Encyption Warhammer themed

    #include <stdio.h>
    
   int gate();
   void receive();

   int main(void){

      if (gate() == 0){
         
      }



    return 0;
   }


    //Access Gate
   int gate(){

   int key;

   printf("Transmit your designated clearance cipher to satisfy the Machine Spirit of this access node.\n");
   scanf("%d", &key);
   
   if (key == 9286){
    printf("Access Granted, recall process\n error: Eb1627388\n Generating data \n");
    return 1;
   }
   else if (key == 6969){
    printf("Access Denied, Satire is not tolerated.\n");
    return 0;
   }
   else {
    printf("Access Denied, try again later. \n");
    return 0;
   }
}

// Get a message
void receive(){
    printf("Incoming encrypted transmission detected.");

    int a = 1;
    int b = 2;
    int l = 12;

    int output_a = a * 2 + 1;
    int output_b = b * 2 + 1;
    int output_l = l * 2 + 1;

    printf("%d - ", output_b);
    printf("%d - ", output_a);
    printf("%d - ", output_a);
    printf("%d\n", output_l);

}

