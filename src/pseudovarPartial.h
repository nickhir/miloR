#ifndef PSEUDOVARPARTIAL_H
#define PSEUDOVARPARTIAL_H

#include<RcppArmadillo.h>
// [[Rcpp::depends(RcppArmadillo)]]

Rcpp::List pseudovarPartial(arma::mat x, Rcpp::List rlevels, Rcpp::StringVector cnames);
Rcpp::List pseudovarPartial_C(arma::mat Z, Rcpp::List u_indices);
Rcpp::List pseudovarPartial_P(arma::mat Z, Rcpp::List u_indices, const arma::mat& P);

#endif