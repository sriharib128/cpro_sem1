#include <stdio.h>

int main(int argc , char *argv[])
   {
    FILE *in = fopen(argv[1],"r");
    FILE *m = fopen(argv[2],"w+");
    long long int x;
    long long int n=0;
    long long int sum=0;
    long long int square=0;
    double app_var=0;
    double actual_var=0;
    fprintf(m,"N, Approx, Actual\n");
    while(fscanf(in,"%lld",&x)!=EOF)
    {
        n++;
        sum+=x;
        double app_mean = 1.0*sum/n;
        square+=(x*x);
        app_var+=((x-app_mean)*(x-app_mean))/n*1.0;
        actual_var = ((1.0*square)/n) - (app_mean*app_mean);
        fprintf(m,"%lld, %lf, %lf\n",n,app_var,actual_var);
    }
    double var = ((1.0*square)/n) - ((1.0*sum)/n);
    printf("%lf",var);
    fclose(in);
    fclose(m);
}