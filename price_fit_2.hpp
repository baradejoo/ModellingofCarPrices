
// Code generated by stanc v2.29.1
#include <stan/model/model_header.hpp>
namespace price_fit_2_model_namespace {

using stan::model::model_base_crtp;
using namespace stan::math;


stan::math::profile_map profiles__;
static constexpr std::array<const char*, 30> locations_array__ = 
{" (found before start of program)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 10, column 4 to column 15)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 11, column 4 to column 27)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 12, column 4 to column 22)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 13, column 4 to column 15)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 17, column 4 to column 64)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 29, column 4 to column 19)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 30, column 4 to column 20)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 32, column 8 to column 44)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 33, column 8 to column 58)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 31, column 19 to line 34, column 5)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 31, column 4 to line 34, column 5)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 21, column 4 to column 24)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 22, column 4 to column 38)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 23, column 4 to column 31)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 24, column 4 to column 30)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 25, column 4 to column 29)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 2, column 4 to column 10)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 3, column 4 to column 10)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 4, column 11 to column 12)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 4, column 13 to column 14)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 4, column 4 to column 18)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 5, column 11 to column 12)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 5, column 4 to column 22)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 6, column 15 to column 16)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 6, column 4 to column 18)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 11, column 11 to column 12)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 17, column 11 to column 12)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 29, column 16 to column 17)",
 " (in '/Users/kamilbaradziej/PythonProjects/ModellingofCarPrices/price_fit_2.stan', line 30, column 17 to column 18)"};




class price_fit_2_model final : public model_base_crtp<price_fit_2_model> {

 private:
  int N;
  int K;
  Eigen::Matrix<double, -1, -1> X__;
  Eigen::Matrix<double, -1, 1> car_age__;
  std::vector<double> price; 
  Eigen::Map<Eigen::Matrix<double, -1, -1>> X{nullptr, 0, 0};
  Eigen::Map<Eigen::Matrix<double, -1, 1>> car_age{nullptr, 0};
 
 public:
  ~price_fit_2_model() { }
  
  inline std::string model_name() const final { return "price_fit_2_model"; }

  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.29.1", "stancflags = "};
  }
  
  
  price_fit_2_model(stan::io::var_context& context__,
                    unsigned int random_seed__ = 0,
                    std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static constexpr const char* function__ = "price_fit_2_model_namespace::price_fit_2_model";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 17;
      context__.validate_dims("data initialization","N","int",
           std::vector<size_t>{});
      N = std::numeric_limits<int>::min();
      
      
      current_statement__ = 17;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 18;
      context__.validate_dims("data initialization","K","int",
           std::vector<size_t>{});
      K = std::numeric_limits<int>::min();
      
      
      current_statement__ = 18;
      K = context__.vals_i("K")[(1 - 1)];
      current_statement__ = 19;
      stan::math::validate_non_negative_index("X", "N", N);
      current_statement__ = 20;
      stan::math::validate_non_negative_index("X", "K", K);
      current_statement__ = 21;
      context__.validate_dims("data initialization","X","double",
           std::vector<size_t>{static_cast<size_t>(N),
            static_cast<size_t>(K)});
      X__ = 
        Eigen::Matrix<double, -1, -1>::Constant(N, K,
          std::numeric_limits<double>::quiet_NaN());
      new (&X) Eigen::Map<Eigen::Matrix<double, -1, -1>>(X__.data(), N, K);
      
      {
        std::vector<local_scalar_t__> X_flat__;
        current_statement__ = 21;
        X_flat__ = context__.vals_r("X");
        current_statement__ = 21;
        pos__ = 1;
        current_statement__ = 21;
        for (int sym1__ = 1; sym1__ <= K; ++sym1__) {
          current_statement__ = 21;
          for (int sym2__ = 1; sym2__ <= N; ++sym2__) {
            current_statement__ = 21;
            stan::model::assign(X, X_flat__[(pos__ - 1)],
              "assigning variable X", stan::model::index_uni(sym2__),
                                        stan::model::index_uni(sym1__));
            current_statement__ = 21;
            pos__ = (pos__ + 1);
          }
        }
      }
      current_statement__ = 22;
      stan::math::validate_non_negative_index("car_age", "N", N);
      current_statement__ = 23;
      context__.validate_dims("data initialization","car_age","double",
           std::vector<size_t>{static_cast<size_t>(N)});
      car_age__ = 
        Eigen::Matrix<double, -1, 1>::Constant(N,
          std::numeric_limits<double>::quiet_NaN());
      new (&car_age) Eigen::Map<Eigen::Matrix<double, -1, 1>>(car_age__.data(), N);
        
      
      {
        std::vector<local_scalar_t__> car_age_flat__;
        current_statement__ = 23;
        car_age_flat__ = context__.vals_r("car_age");
        current_statement__ = 23;
        pos__ = 1;
        current_statement__ = 23;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 23;
          stan::model::assign(car_age, car_age_flat__[(pos__ - 1)],
            "assigning variable car_age", stan::model::index_uni(sym1__));
          current_statement__ = 23;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 24;
      stan::math::validate_non_negative_index("price", "N", N);
      current_statement__ = 25;
      context__.validate_dims("data initialization","price","double",
           std::vector<size_t>{static_cast<size_t>(N)});
      price = 
        std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      
      
      current_statement__ = 25;
      price = context__.vals_r("price");
      current_statement__ = 26;
      stan::math::validate_non_negative_index("beta_mileage", "K", K);
      current_statement__ = 27;
      stan::math::validate_non_negative_index("mu", "N", N);
      current_statement__ = 28;
      stan::math::validate_non_negative_index("prices", "N", N);
      current_statement__ = 29;
      stan::math::validate_non_negative_index("log_lik", "N", N);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = 1 + K + 1 + 1;
    
  }
  
  template <bool propto__, bool jacobian__ , typename VecR, typename VecI, 
  stan::require_vector_like_t<VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline stan::scalar_type_t<VecR> log_prob_impl(VecR& params_r__,
                                                 VecI& params_i__,
                                                 std::ostream* pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "price_fit_2_model_namespace::log_prob";
    (void) function__;  // suppress unused var warning
    
    try {
      local_scalar_t__ alpha = DUMMY_VAR__;
      current_statement__ = 1;
      alpha = in__.template read<local_scalar_t__>();
      Eigen::Matrix<local_scalar_t__, -1, 1> beta_mileage =
         Eigen::Matrix<local_scalar_t__, -1, 1>::Constant(K, DUMMY_VAR__);
      current_statement__ = 2;
      beta_mileage = in__.template read<
                       Eigen::Matrix<local_scalar_t__, -1, 1>>(K);
      local_scalar_t__ beta_car_age = DUMMY_VAR__;
      current_statement__ = 3;
      beta_car_age = in__.template read<local_scalar_t__>();
      local_scalar_t__ sigma = DUMMY_VAR__;
      current_statement__ = 4;
      sigma = in__.template read<local_scalar_t__>();
      Eigen::Matrix<local_scalar_t__, -1, 1> mu =
         Eigen::Matrix<local_scalar_t__, -1, 1>::Constant(N, DUMMY_VAR__);
      current_statement__ = 5;
      stan::model::assign(mu,
        stan::math::add(
          stan::math::add(stan::math::multiply(X, beta_mileage),
            stan::math::multiply(car_age, -beta_car_age)), alpha),
        "assigning variable mu");
      {
        current_statement__ = 12;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(alpha, 1, 2));
        current_statement__ = 13;
        lp_accum__.add(
          stan::math::lognormal_lpdf<propto__>(beta_car_age, -1.5, 1));
        current_statement__ = 14;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(beta_mileage, 1, 2));
        current_statement__ = 15;
        lp_accum__.add(stan::math::exponential_lpdf<propto__>(sigma, 0.01));
        current_statement__ = 16;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(price, mu, sigma));
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
    } // log_prob_impl() 
    
  template <typename RNG, typename VecR, typename VecI, typename VecVar, 
  stan::require_vector_like_vt<std::is_floating_point, VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr, 
  stan::require_std_vector_vt<std::is_floating_point, VecVar>* = nullptr> 
  inline void write_array_impl(RNG& base_rng__, VecR& params_r__,
                               VecI& params_i__, VecVar& vars__,
                               const bool emit_transformed_parameters__ = true,
                               const bool emit_generated_quantities__ = true,
                               std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    static constexpr bool propto__ = true;
    (void) propto__;
    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    int current_statement__ = 0; 
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    constexpr bool jacobian__ = false;
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "price_fit_2_model_namespace::write_array";
    (void) function__;  // suppress unused var warning
    
    try {
      double alpha = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 1;
      alpha = in__.template read<local_scalar_t__>();
      Eigen::Matrix<double, -1, 1> beta_mileage =
         Eigen::Matrix<double, -1, 1>::Constant(K,
           std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 2;
      beta_mileage = in__.template read<
                       Eigen::Matrix<local_scalar_t__, -1, 1>>(K);
      double beta_car_age = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 3;
      beta_car_age = in__.template read<local_scalar_t__>();
      double sigma = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 4;
      sigma = in__.template read<local_scalar_t__>();
      Eigen::Matrix<double, -1, 1> mu =
         Eigen::Matrix<double, -1, 1>::Constant(N,
           std::numeric_limits<double>::quiet_NaN());
      out__.write(alpha);
      out__.write(beta_mileage);
      out__.write(beta_car_age);
      out__.write(sigma);
      if (stan::math::logical_negation((stan::math::primitive_value(
            emit_transformed_parameters__) || stan::math::primitive_value(
            emit_generated_quantities__)))) {
        return ;
      } 
      current_statement__ = 5;
      stan::model::assign(mu,
        stan::math::add(
          stan::math::add(stan::math::multiply(X, beta_mileage),
            stan::math::multiply(car_age, -beta_car_age)), alpha),
        "assigning variable mu");
      if (emit_transformed_parameters__) {
        out__.write(mu);
      } 
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      } 
      std::vector<double> prices =
         std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      std::vector<double> log_lik =
         std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 11;
      for (int i = 1; i <= N; ++i) {
        current_statement__ = 8;
        stan::model::assign(prices,
          stan::math::normal_rng(
            stan::model::rvalue(mu, "mu", stan::model::index_uni(i)), sigma,
            base_rng__),
          "assigning variable prices", stan::model::index_uni(i));
        current_statement__ = 9;
        stan::model::assign(log_lik,
          stan::math::normal_lpdf<false>(
            stan::model::rvalue(price, "price", stan::model::index_uni(i)),
            stan::model::rvalue(mu, "mu", stan::model::index_uni(i)), sigma),
          "assigning variable log_lik", stan::model::index_uni(i));
      }
      out__.write(prices);
      out__.write(log_lik);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // write_array_impl() 
    
  template <typename VecVar, typename VecI, 
  stan::require_std_vector_t<VecVar>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline void transform_inits_impl(VecVar& params_r__, VecI& params_i__,
                                   VecVar& vars__,
                                   std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      local_scalar_t__ alpha = DUMMY_VAR__;
      alpha = in__.read<local_scalar_t__>();
      out__.write(alpha);
      Eigen::Matrix<local_scalar_t__, -1, 1> beta_mileage =
         Eigen::Matrix<local_scalar_t__, -1, 1>::Constant(K, DUMMY_VAR__);
      for (int sym1__ = 1; sym1__ <= K; ++sym1__) {
        stan::model::assign(beta_mileage, in__.read<local_scalar_t__>(),
          "assigning variable beta_mileage", stan::model::index_uni(sym1__));
      }
      out__.write(beta_mileage);
      local_scalar_t__ beta_car_age = DUMMY_VAR__;
      beta_car_age = in__.read<local_scalar_t__>();
      out__.write(beta_car_age);
      local_scalar_t__ sigma = DUMMY_VAR__;
      sigma = in__.read<local_scalar_t__>();
      out__.write(sigma);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__ = std::vector<std::string>{"alpha", "beta_mileage",
      "beta_car_age", "sigma", "mu", "prices", "log_lik"};
    
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{},
      std::vector<size_t>{static_cast<size_t>(K)}, std::vector<size_t>{
      }, std::vector<size_t>{}, std::vector<size_t>{static_cast<size_t>(N)},
      std::vector<size_t>{static_cast<size_t>(N)},
      std::vector<size_t>{static_cast<size_t>(N)}};
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "alpha");
    for (int sym1__ = 1; sym1__ <= K; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "beta_mileage" + '.' + std::to_string(sym1__));
      } 
    }
    param_names__.emplace_back(std::string() + "beta_car_age");
    param_names__.emplace_back(std::string() + "sigma");
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "mu" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "prices" + '.' + std::to_string(sym1__));
        } 
      }
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "log_lik" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "alpha");
    for (int sym1__ = 1; sym1__ <= K; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "beta_mileage" + '.' + std::to_string(sym1__));
      } 
    }
    param_names__.emplace_back(std::string() + "beta_car_age");
    param_names__.emplace_back(std::string() + "sigma");
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "mu" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "prices" + '.' + std::to_string(sym1__));
        } 
      }
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "log_lik" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"alpha\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"beta_mileage\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(K) + "},\"block\":\"parameters\"},{\"name\":\"beta_car_age\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"mu\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"transformed_parameters\"},{\"name\":\"prices\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"},{\"name\":\"log_lik\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"}]");
    
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"alpha\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"beta_mileage\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(K) + "},\"block\":\"parameters\"},{\"name\":\"beta_car_age\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"mu\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"transformed_parameters\"},{\"name\":\"prices\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"},{\"name\":\"log_lik\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"}]");
    
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    inline void write_array(RNG& base_rng,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                            const bool emit_transformed_parameters = true,
                            const bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 
  (((1 + K) + 1) + 1);
      const size_t num_transformed = N;
      const size_t num_gen_quantities = 
  (N + N);
      std::vector<double> vars_vec(num_params__
       + (emit_transformed_parameters * num_transformed)
       + (emit_generated_quantities * num_gen_quantities));
      std::vector<int> params_i;
      write_array_impl(base_rng, params_r, params_i, vars_vec,
          emit_transformed_parameters, emit_generated_quantities, pstream);
      vars = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        vars_vec.data(), vars_vec.size());
    }

    template <typename RNG>
    inline void write_array(RNG& base_rng, std::vector<double>& params_r,
                            std::vector<int>& params_i,
                            std::vector<double>& vars,
                            bool emit_transformed_parameters = true,
                            bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 
  (((1 + K) + 1) + 1);
      const size_t num_transformed = N;
      const size_t num_gen_quantities = 
  (N + N);
      vars.resize(num_params__
        + (emit_transformed_parameters * num_transformed)
        + (emit_generated_quantities * num_gen_quantities));
      write_array_impl(base_rng, params_r, params_i, vars, emit_transformed_parameters, emit_generated_quantities, pstream);
    }

    template <bool propto__, bool jacobian__, typename T_>
    inline T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
                       std::ostream* pstream = nullptr) const {
      Eigen::Matrix<int, -1, 1> params_i;
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }

    template <bool propto__, bool jacobian__, typename T__>
    inline T__ log_prob(std::vector<T__>& params_r,
                        std::vector<int>& params_i,
                        std::ostream* pstream = nullptr) const {
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }


    inline void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream = nullptr) const final {
      std::vector<double> params_r_vec(params_r.size());
      std::vector<int> params_i;
      transform_inits(context, params_i, params_r_vec, pstream);
      params_r = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        params_r_vec.data(), params_r_vec.size());
    }

  inline void transform_inits(const stan::io::var_context& context,
                              std::vector<int>& params_i,
                              std::vector<double>& vars,
                              std::ostream* pstream__ = nullptr) const {
     constexpr std::array<const char*, 4> names__{"alpha", "beta_mileage",
      "beta_car_age", "sigma"};
      const std::array<Eigen::Index, 4> constrain_param_sizes__{1, K, 1, 1};
      const auto num_constrained_params__ = std::accumulate(
        constrain_param_sizes__.begin(), constrain_param_sizes__.end(), 0);
    
     std::vector<double> params_r_flat__(num_constrained_params__);
     Eigen::Index size_iter__ = 0;
     Eigen::Index flat_iter__ = 0;
     for (auto&& param_name__ : names__) {
       const auto param_vec__ = context.vals_r(param_name__);
       for (Eigen::Index i = 0; i < constrain_param_sizes__[size_iter__]; ++i) {
         params_r_flat__[flat_iter__] = param_vec__[i];
         ++flat_iter__;
       }
       ++size_iter__;
     }
     vars.resize(num_params_r__);
     transform_inits_impl(params_r_flat__, params_i, vars, pstream__);
    } // transform_inits() 
    
};
}
using stan_model = price_fit_2_model_namespace::price_fit_2_model;

#ifndef USING_R

// Boilerplate
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}

stan::math::profile_map& get_stan_profile_data() {
  return price_fit_2_model_namespace::profiles__;
}

#endif


