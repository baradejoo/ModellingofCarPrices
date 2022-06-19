data { 
    int N;
    int K; //number of predictions
    matrix[N,K] X; //design matrix
    vector[N] car_age;
    real price[N];
}

parameters {
    real alpha;
    vector[K] beta_mileage;
    real beta_car_age;
    real sigma;
}

transformed parameters {
    vector[N] mu = X*beta_mileage+car_age*(-beta_car_age)+alpha;
}

model {
    alpha ~ normal(0.2,0.5);
    beta_car_age ~ lognormal(-1.5, 1);
    beta_mileage ~ normal(-0.2,0.5);
    sigma ~ exponential(0.2);
    price ~ normal(mu,sigma);
}

generated quantities {
    real prices[N];
    real log_lik[N];
    for (i in 1:N) {
        prices[i] = normal_rng(mu[i],sigma);
        log_lik[i] = normal_lpdf(price[i] | mu[i], sigma);
    }
}