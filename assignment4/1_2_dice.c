    #include <stdio.h>  
    #include <stdlib.h>  
      
    int main()  
    {  
        int count;  
        unsigned int seed =20; // use for randomize number   
        srand (seed); // pass parameter  
        long int ct[13] = {};

        long int num = 1000000;

        // generate random number between 1 to 6  
        for (long int i  = 1; i <=num; i++)  
        {  
            int a = 1 + (rand () % 6); 
            int b = 1 + (rand () % 6);

            ct[(a+b)]++;

            // if (count % 6 == 0) // print the number in next line  
            //     puts(" ");  
        } 
        for (int i  = 2; i <=12; i++)
            printf("%d ==> %ld\n",i,ct[i]);

        printf("\nBelow is for unbiased dice roll\n");
        long int b[13]={};
        int x=1;
        for(int i=2;i<=12;i++)
        {
            b[i]=(int)((1.0*x/36)*num);
            if(i<7) x++;
            else x--;
        }

        for (int i  = 2; i <=12; i++)
            printf("%d ==> %ld\n",i,b[i]);
        return 0;
    }  

    /*
    
1 - 166685
2 - 166646
3 - 166734
4 - 166377
5 - 166589
6 - 166969

2 ==> 27823
3 ==> 55724
4 ==> 83519
5 ==> 110828
6 ==> 138880
7 ==> 166637
8 ==> 138787
9 ==> 111481
10 ==> 83216
11 ==> 55327
12 ==> 27778

Below is for unbiased dice roll
2 ==> 27777
3 ==> 55555
4 ==> 83333
5 ==> 111111
6 ==> 138888
7 ==> 166666
8 ==> 138888
9 ==> 111111
10 ==> 83333
11 ==> 55555
12 ==> 27777
    */