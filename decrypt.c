
// Encyption Warhammer themed

    #include <stdio.h>
    #include <unistd.h>
    #include <string.h>
    
   int gate();
   void receive();
   int verify();

   int main(void){

      if (gate() == 0){
         return 0;
      }

      receive();
      verify();

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
    printf("Incoming encrypted transmission detected. \n");

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


    sleep(2);

    int u = 21;
    int n = 14;
    int d = 4;
    int e = 5;
    int r = 18;

    int output_u = u * 3 - 10;
    int output_n = n * 3 - 10;
    int output_d = d * 3 - 10;
    int output_e = e * 3 - 10;
    int output_r = r * 3 - 10;

    printf("%d - ", output_u);
    printf("%d - ", output_n);
    printf("%d - ", output_d);
    printf("%d - ", output_e);
    printf("%d\n", output_r);


    sleep(2);

    int s = 19;
    int i = 9;
    int g = 7;
    int e2 = 5;

    int output_s = s + 4 * 5;
    int output_e2 = e2 + 4 * 5;
    int output_i = i + 4 * 5;
    int output_g = g + 4 * 5;

    printf("%d - ", output_s);
    printf("%d - ", output_e2);
    printf("%d - ", output_i);
    printf("%d - ", output_g);
    printf("%d\n", output_e2);


    sleep(2);

    printf("end of transmission \n");


}


int verify(){
    
    char answer[50];
    
    printf("Decryption confirmation required...\n Logic Engine expected output structure, x_x_x_x_x\n underscores instead of spaces, all lower case, no further symbols required.\n");
    
    scanf("%s", answer);
    
    if (strcmp(answer, "baal_under_seige") == 0) {
        printf("match\n Assignment granted, the emperor protects\n");
        return 1;
    } else {
        printf("no match\n");
        return 0;
    }
    
}