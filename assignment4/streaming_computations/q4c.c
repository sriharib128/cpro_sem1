#include <stdio.h>

int main(int argc , char *argv[])
   {
    FILE *in = fopen(argv[1],"r");
    FILE *m = fopen(argv[2],"w");
    FILE *r = fopen(argv[3],"w");
    long long int x;
    long long int n=0;
    long long int ct=0;
    long long int sum=0;
    while(fscanf(in,"%lld",&x)!=EOF)
    {
        n++;
        sum+=x;
        double mean=1.0*sum/n;
        if( (x<=(1.2*mean)) && (x>=(0.8*mean)) )
            ct++;
    }
    double mean=1.0*sum/n;
    fprintf(m,"%lf",mean);
    fprintf(r,"%lf",(ct*100.0/n));
    fclose(in);
    fclose(m);
    fclose(r);
}