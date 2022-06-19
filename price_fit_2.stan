data { 
    int N;
    vector[N] mileage;
    vector[N] car_age;
    real price[N];
}

parameters {
    real alpha;
    real beta_mileage;
    real beta_car_age;
    real<lower=0> sigma;
}

transformed parameters {
    vector[N] mu = mileage*(-0.5*beta_mileage)+car_age*(-0.5*beta_car_age)+alpha;
}

model {
    alpha ~ normal(1.5,1);
    beta_mileage ~ lognormal(-1,1);
    beta_car_age ~ lognormal(-1, 1);
    sigma ~ exponential(0.5);
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