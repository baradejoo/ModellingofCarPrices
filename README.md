## **1. Problem formulation**

**Stating the problem**

The problem being studied is the prediction of car sales prices.

**Use cases**

- Due to the increased price of new cars and the incapability of customers to buy new cars due to the lack of funds, used cars sales are on a global increase. 

- There is a need for a used car price prediction system to effectively determine the worthiness of the car using a variety of features. Even though there are websites that offers this service, their prediction method may not be the best. 

- Besides, different models and systems may contribute on predicting power for a used car’s actual market value. It is important to know their actual market value while both buying and selling.

To be able to predict used cars market value can help both buyers and sellers. The client can be a:
- Used car seller (dealer)
- Online pricing service
- Individual

**The used dataset**

The dataset is from Kaggle, which is an online community platform for data scientists and machine learning enthusiasts. Kaggle allows users to collaborate with other users, find and publish datasets, use GPU integrated notebooks, and compete with other data scientists to solve data science challenges.

The dataset was assembled in January 2022 from a well-known car sale site in Poland (which is public).

The dataset contains information about the brand, model, generation, year of production, mileage, engine type and volume, localization and price for each car.

### **Data pre-processing**

**Preprocessing steps**

In order to preprocess the data, it is needed to:
- delete all columns thats contain any empty rows
- delete the column "Unnamed: 0"
- delete unneccasary columns: city and province

Adding columns with:
- standarized mileage, vol_engine and price
- the calculation of the age of the car (current year minus the year of production)

Adding the seperation of car brands to segments, with the addition of "unknown segment" option.

Due to the COVID-19 pandemic, there has been a significant and disproportionate increase in car prices over the past 2 years (2020-2022). This is a new occurrence that would require a separate analysis, ideally with data from the next 2-3 years.

## **2. Model**

**Models specified**

Two models were created. 

The first model analyzes the price based on the age of the car. The second model has two predictors: analysis of the car age and kilometers driven.

Adding an aditional  in the second model makes sense, as it has more relevant conditions, which presumably should make this model more accurate. It is known, that if there is a car producted in the same year as another one and has more kilometers droven - it will have less value and be the "worse choice" for the customer.

As a general rule, most cars over 300,000 kilometres aren't worth your time unless you have experience working on vehicles yourself and the price is tempting enough.

**Model creation**

To create a model you need to: recognize the set of measurements that determine the outcome, define likehood of individual observations (here the Gaussian model), relate it’s distribution to the predictor variables – to define model parameters and the final step is choosing priors for model parameters.

**Our models**

We decided to study selected three car brands - we analyze the German car market and the brands: BMW, Mercedes, Auti. For these brands, the different segments have very close prices (from general knowledge). We analize the S-segment, which is a European car-classification segment for sport coupés. The cars are often described as sports cars.

We create two models. All cars are divided into segments. The first model is created based on the mileage. The second model based on the mileage and age of the car.

Adding the aditional parameter is justified because when buying a used car, there are two things to consider — the miles on the vehicle and its age. Newer used vehicles typically cost more than older ones, as they usually have less wear and tear. And used cars with lower mileage usually cost more than those with higher mileage.
Expanding the first model by increasing the number of predictors allows for a better fit of the model to the observations – when it comes to the data and value prediction.
The first model uses the first degree polynomial (linear function). The second model uses the 3th degree polynomial.

## **3. Priors**

Generally prior predictive distribution, is a distribution without measurements, just based on our prior knowledge. This can be used to determine if our later results make sense. Data can be generated and compared to those actually obtained to determine if the prior is correct, it is used only in Bayesian models and it cannot be a function of the data.

Parameters simulated from priors are a result of the models definition.

Priors were selected experimentally. We are not considering different segments of different quality companies. Therefore, within sililar companies it is logical that the price depends on the age of the car and the mileage traveled.

Price is distributed negatively with age or mileage, hence the negative from the log-normal distribution, which has lower constraints running to "0" and decreases with time - so it fits our data perfectly.

## **4. Posterior analysis**

We create posterior to actually predict the future observed values. It is a kind of update of our knowledge based on the results from the previous study in the same form. Unlike the prior, the source here is observations, not knowledge.

For both models there were no issues with the sampling. The samples from posterior predictive distribution were analyzed. There were no issues with the sampling. The samples from posterior predictive distribution were analyzed. The data is pretty much consistent with posterior predictive samples.

Based on the graphs and histograms of parameters for the first model, it can be concluded that the parameter values are not relatively concentrated. However, they are relatively concentrated in the second model – it is better than the first one.

## **5. Model comparison**

Leave-one-out cross-validation is a special case of cross-validation where the number of folds equals the number of instances in the data set. The leave-one-out cross-validation procedure is appropriate when you have a small dataset or when an accurate estimate of model performance is more important than the computational cost of the method.

WAIC is a more fully Bayesian approach for estimating the out-of-sample expectation, starting with the computed log pointwise posterior predictive density and then adding a correction for effective number of parameters to adjust for overfitting.

Based on the LOO cross-validation and on the WAIC approach, you can see that the second model with two predictors has the lowest rank, which makes it the best model. Also it has higher probability of the correctness of the model and higher out-of-sample predictive fit.
