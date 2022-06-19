data { 
    int N;
    real mileage[N];
}

generated quantities {
            real alpha = normal_rng(2,2);
            real beta = normal_rng(-0.5,0.5);
            real <lower = 0> sigma = exponential_rng(0.3); 
            real price[N];
            for (i in 1:N) {
                price[i] = normal_rng(mileage[i]*beta+alpha,sigma);
            }
}

