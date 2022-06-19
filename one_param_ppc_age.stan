data { 
       int N;
       real car_age[N];
}

generated quantities {
            real alpha = normal_rng(1.2,1);
            real beta_car_age = -0.5*lognormal_rng(-1,1);
            real <lower = 0> sigma = exponential_rng(0.2); 
            real price[N];
            for (i in 1:N) {
                price[i] = normal_rng(car_age[i]*beta_car_age+alpha,sigma);
            }
}


