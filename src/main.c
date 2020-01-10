#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
#include "imglib.h"

int main(void)
{
    /* Set CPU and Cam */
    cpu_ini();
    cam_ini();
    /* Load Model */
    model_load();
    
    /* init face detect model */
   // uint64_t time_last = sysctl_get_time_us();
    //uint64_t time_now = sysctl_get_time_us();
    //int time_count = 0;
    while (1)
    {
        run_model();
        //time_count ++;
        //if(time_count % 100 == 0)
       // {
        //    time_now = sysctl_get_time_us();
         //   printf("SPF:%fms\n", (time_now - time_last)/1000.0/100);
        //    time_last = time_now;
        //}
    }
}
