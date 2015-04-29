// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// gainOffsetRescale
NumericMatrix gainOffsetRescale(NumericMatrix x, NumericVector g, NumericVector o);
RcppExport SEXP RStoolbox_gainOffsetRescale(SEXP xSEXP, SEXP gSEXP, SEXP oSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type g(gSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type o(oSEXP);
    __result = Rcpp::wrap(gainOffsetRescale(x, g, o));
    return __result;
END_RCPP
}
// specSimC
NumericMatrix specSimC(NumericMatrix& x, NumericMatrix& em);
RcppExport SEXP RStoolbox_specSimC(SEXP xSEXP, SEXP emSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type em(emSEXP);
    __result = Rcpp::wrap(specSimC(x, em));
    return __result;
END_RCPP
}
// whichColMinC
IntegerVector whichColMinC(NumericMatrix x, NumericMatrix centers);
RcppExport SEXP RStoolbox_whichColMinC(SEXP xSEXP, SEXP centersSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type centers(centersSEXP);
    __result = Rcpp::wrap(whichColMinC(x, centers));
    return __result;
END_RCPP
}
