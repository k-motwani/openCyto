// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// getTautStringApprox
Rcpp::List getTautStringApprox(std::vector<double> dataVec);
RcppExport SEXP _openCyto_getTautStringApprox(SEXP dataVecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type dataVec(dataVecSEXP);
    rcpp_result_gen = Rcpp::wrap(getTautStringApprox(dataVec));
    return rcpp_result_gen;
END_RCPP
}
// collapseData
NumericMatrix collapseData(List mat_list, StringVector colnames);
RcppExport SEXP _openCyto_collapseData(SEXP mat_listSEXP, SEXP colnamesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type mat_list(mat_listSEXP);
    Rcpp::traits::input_parameter< StringVector >::type colnames(colnamesSEXP);
    rcpp_result_gen = Rcpp::wrap(collapseData(mat_list, colnames));
    return rcpp_result_gen;
END_RCPP
}
// singleDip
double singleDip(const std::vector<double>& x);
RcppExport SEXP _openCyto_singleDip(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(singleDip(x));
    return rcpp_result_gen;
END_RCPP
}
// tsGates
std::vector<double> tsGates(const std::vector<double>& xVec, int modePrior);
RcppExport SEXP _openCyto_tsGates(SEXP xVecSEXP, SEXP modePriorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type xVec(xVecSEXP);
    Rcpp::traits::input_parameter< int >::type modePrior(modePriorSEXP);
    rcpp_result_gen = Rcpp::wrap(tsGates(xVec, modePrior));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP unlockNamespace(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_openCyto_getTautStringApprox", (DL_FUNC) &_openCyto_getTautStringApprox, 1},
    {"_openCyto_collapseData", (DL_FUNC) &_openCyto_collapseData, 2},
    {"_openCyto_singleDip", (DL_FUNC) &_openCyto_singleDip, 1},
    {"_openCyto_tsGates", (DL_FUNC) &_openCyto_tsGates, 2},
    {"unlockNamespace", (DL_FUNC) &unlockNamespace, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_openCyto(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
