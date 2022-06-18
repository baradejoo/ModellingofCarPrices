data { int N;
  vector[N] mileage;
  vector[N] vol_engine;
  real price[N];
}

parameters {
  real alpha;
  real beta_mileage;
  real beta_vol_engine;
  real<lower=0> sigma;
}

transformed parameters {
  vector[N] mu = mileage*(-0.5*beta_mileage)+vol_engine*(-0.5*beta_vol_engine)+alpha;
}

model {
  alpha ~ normal(1.5,1);
  beta_mileage ~ lognormal(-1,1);
  beta_vol_engine ~ lognormal(-1, 1);
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