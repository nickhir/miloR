#ifndef INFERENCE_H
#define INFERENCE_H

#include<RcppArmadillo.h>
// [[Rcpp::depends(RcppArmadillo)]]

arma::vec computeSE(const int& m, const int& c, const arma::mat& coeff_mat);
arma::vec computeTScore(const arma::vec& curr_beta, const arma::vec& SE);
arma::mat varCovar(const Rcpp::List& psvari, const int& c);
// arma::vec computeDF(const arma::mat& X, const arma::vec& se, const arma::mat coeff_mat,
//                     const arma::vec& sigmas, const arma::vec& betas, const arma::mat& P,
//                     Rcpp::List Vpartials);

#endif
