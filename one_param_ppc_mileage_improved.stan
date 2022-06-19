data { 
    int N;
    real mileage[N];
}

generated quantities {
            real alpha = normal_rng(1.2,1);
            real beta = -0.5*lognormal_rng(-1,1);
            real <lower = 0> sigma = exponential_rng(0.1); 
            real price[N];
            for (i in 1:N) {
                price[i] = normal_rng(mileage[i]*beta+alpha,sigma);
            }
}

