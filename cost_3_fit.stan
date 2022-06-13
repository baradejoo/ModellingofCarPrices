data { int N;
  vector[N] mileage;
  vector[N] vol_engine;
  real price[N];
}

parameters {
  real alpha;
  real beta_mileage;
  real beta_vol_engine;
  real beta_vol_engine2;
  real beta_vol_engine3;


  real<lower=0> sigma;
}

transformed parameters {
  vector[N] mu = mileage*beta_mileage+vol_engine*beta_vol_engine+(vol_engine^2)*beta_vol_engine2+ +(vol_engine^3)*beta_vol_engine3 +alpha;
}

model {
  alpha ~ normal(0,1);
  beta_mileage ~ normal(0,1);
  beta_vol_engine ~ normal(0, 1);
  sigma ~ exponential(0.01);
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