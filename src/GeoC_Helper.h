#ifndef GEO_C_HELPER_H
#define GEO_C_HELPER_H

#include <Rcpp.h>

double sum_nona(Rcpp::NumericVector x);
double mean_nona(Rcpp::NumericVector x);
double min_nona(Rcpp::NumericVector x);
double sd_nona(Rcpp::NumericVector x);
double matrix_sum(Rcpp::NumericMatrix mat);
double InforEntropy(Rcpp::NumericVector x);
double CosineSimilarity(Rcpp::NumericVector A,
                        Rcpp::NumericVector B);
double spatial_variance(Rcpp::NumericVector x,
                        Rcpp::NumericMatrix wt);
Rcpp::IntegerVector rcpp_which(Rcpp::LogicalVector x);
Rcpp::IntegerVector rcpp_seq(int start, int end);
Rcpp::IntegerVector extract_window(Rcpp::IntegerMatrix mat,
                                   int window_size);
Rcpp::NumericVector rcpp_log2(Rcpp::NumericVector vec);
Rcpp::NumericVector multiply_vector(Rcpp::NumericVector numvec1,
                                    Rcpp::NumericVector numvec2);
Rcpp::NumericVector NormalizeVector(Rcpp::NumericVector x,
                                    double a, double b);
Rcpp::NumericMatrix NormalizeMatRow(Rcpp::NumericMatrix mat,
                                    double a, double b);
Rcpp::NumericVector GCS_Variance(Rcpp::NumericMatrix x,
                                 Rcpp::NumericMatrix wt,
                                 Rcpp::String method);
Rcpp::NumericMatrix MatRowStandardize(Rcpp::NumericMatrix mat);
Rcpp::NumericMatrix MatGlobalStandardize(Rcpp::NumericMatrix mat);
Rcpp::NumericMatrix subset_matrix(Rcpp::NumericMatrix matrix,
                                  Rcpp::IntegerVector rows,
                                  Rcpp::IntegerVector cols);
Rcpp::NumericVector SSH_Variance(Rcpp::NumericVector x,
                                 Rcpp::NumericMatrix wt,
                                 Rcpp::String method);
Rcpp::List remove_index(Rcpp::List lst, int idx);
Rcpp::List RasterQueenNeighbors(int rows, int cols);
Rcpp::List RasterGeoCNeighbors(int rows, int cols);

#endif // GEO_C_HELPER_H
