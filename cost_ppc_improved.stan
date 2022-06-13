data { int N;
       real mileage[N];
}
generated quantities {
            real alpha = normal_rng(0,1);
            real beta = lognormal_rng(0,1);
            real sigma = exponential_rng(0.001); # variable that provide better ribbon plot
            real price[N];
            for (i in 1:N) {
              price[i] = normal_rng(mileage[i]*beta+alpha,sigma);
            }
}

