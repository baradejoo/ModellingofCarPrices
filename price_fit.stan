data { 
    int N;
    vector[N] mileage;
    real price[N];
}

parameters {
    real alpha;
    real beta;
    real<lower=0> sigma;
}
          
transformed parameters {
    vector[N] mu = mileage*beta+alpha;
}

model {
    alpha ~ normal(2,2);
    beta ~ normal(-0.5,0.5);
    sigma ~ exponential(0.3);
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