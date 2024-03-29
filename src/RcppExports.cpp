// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// benchmark
Rcpp::List benchmark(bool excess, bool defect, int num_nodes, double average_k, int max_degree, double tau, double tau2, double mixing_parameter, int overlapping_nodes, int overlap_membership, int nmin, int nmax, bool fixed_range);
RcppExport SEXP _netUtils_benchmark(SEXP excessSEXP, SEXP defectSEXP, SEXP num_nodesSEXP, SEXP average_kSEXP, SEXP max_degreeSEXP, SEXP tauSEXP, SEXP tau2SEXP, SEXP mixing_parameterSEXP, SEXP overlapping_nodesSEXP, SEXP overlap_membershipSEXP, SEXP nminSEXP, SEXP nmaxSEXP, SEXP fixed_rangeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type excess(excessSEXP);
    Rcpp::traits::input_parameter< bool >::type defect(defectSEXP);
    Rcpp::traits::input_parameter< int >::type num_nodes(num_nodesSEXP);
    Rcpp::traits::input_parameter< double >::type average_k(average_kSEXP);
    Rcpp::traits::input_parameter< int >::type max_degree(max_degreeSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type tau2(tau2SEXP);
    Rcpp::traits::input_parameter< double >::type mixing_parameter(mixing_parameterSEXP);
    Rcpp::traits::input_parameter< int >::type overlapping_nodes(overlapping_nodesSEXP);
    Rcpp::traits::input_parameter< int >::type overlap_membership(overlap_membershipSEXP);
    Rcpp::traits::input_parameter< int >::type nmin(nminSEXP);
    Rcpp::traits::input_parameter< int >::type nmax(nmaxSEXP);
    Rcpp::traits::input_parameter< bool >::type fixed_range(fixed_rangeSEXP);
    rcpp_result_gen = Rcpp::wrap(benchmark(excess, defect, num_nodes, average_k, max_degree, tau, tau2, mixing_parameter, overlapping_nodes, overlap_membership, nmin, nmax, fixed_range));
    return rcpp_result_gen;
END_RCPP
}
// mse
IntegerMatrix mse(List adjList, IntegerVector deg);
RcppExport SEXP _netUtils_mse(SEXP adjListSEXP, SEXP degSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type adjList(adjListSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type deg(degSEXP);
    rcpp_result_gen = Rcpp::wrap(mse(adjList, deg));
    return rcpp_result_gen;
END_RCPP
}
// sortxy
IntegerVector sortxy(IntegerVector x, IntegerVector y);
RcppExport SEXP _netUtils_sortxy(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(sortxy(x, y));
    return rcpp_result_gen;
END_RCPP
}
// triadCensusCol
NumericVector triadCensusCol(const arma::sp_mat& A, IntegerVector attr, IntegerMatrix orbitClasses, NumericVector triads);
RcppExport SEXP _netUtils_triadCensusCol(SEXP ASEXP, SEXP attrSEXP, SEXP orbitClassesSEXP, SEXP triadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type attr(attrSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type orbitClasses(orbitClassesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type triads(triadsSEXP);
    rcpp_result_gen = Rcpp::wrap(triadCensusCol(A, attr, orbitClasses, triads));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_netUtils_benchmark", (DL_FUNC) &_netUtils_benchmark, 13},
    {"_netUtils_mse", (DL_FUNC) &_netUtils_mse, 2},
    {"_netUtils_sortxy", (DL_FUNC) &_netUtils_sortxy, 2},
    {"_netUtils_triadCensusCol", (DL_FUNC) &_netUtils_triadCensusCol, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_netUtils(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
