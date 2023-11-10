void lagrange(float x[], float y[], int n, float xp, float *yp){
   int i, j;
   float p;
   *yp = 0;
   for (i = 0; i < n; i++) {
     p = 1;
     for (j = 0; j < n; j++) {
       if (i != j) {
        p = p * (xp - x[j]) / (x[i] - x[j]);
       }
     }
     *yp = *yp + p * y[i];
    }
}

