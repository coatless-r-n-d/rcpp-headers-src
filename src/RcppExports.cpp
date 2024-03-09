// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// calc_modifications
Rcpp::NumericVector calc_modifications(Rcpp::NumericVector x);
RcppExport SEXP _SrcDir_calc_modifications(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_modifications(x));
    return rcpp_result_gen;
END_RCPP
}
// calc_A_routine
Rcpp::NumericVector calc_A_routine(Rcpp::NumericVector x);
RcppExport SEXP _SrcDir_calc_A_routine(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_A_routine(x));
    return rcpp_result_gen;
END_RCPP
}
// calc_B_routine
Rcpp::NumericVector calc_B_routine(Rcpp::NumericVector x);
RcppExport SEXP _SrcDir_calc_B_routine(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_B_routine(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SrcDir_calc_modifications", (DL_FUNC) &_SrcDir_calc_modifications, 1},
    {"_SrcDir_calc_A_routine", (DL_FUNC) &_SrcDir_calc_A_routine, 1},
    {"_SrcDir_calc_B_routine", (DL_FUNC) &_SrcDir_calc_B_routine, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_SrcDir(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}