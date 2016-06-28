// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// databaseInfo
Rcpp::List databaseInfo(SEXP dbpath);
RcppExport SEXP RXapian_databaseInfo(SEXP dbpathSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type dbpath(dbpathSEXP);
    __result = Rcpp::wrap(databaseInfo(dbpath));
    return __result;
END_RCPP
}
// setmetadata
void setmetadata(SEXP dbpath, SEXP key, SEXP value);
RcppExport SEXP RXapian_setmetadata(SEXP dbpathSEXP, SEXP keySEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type dbpath(dbpathSEXP);
    Rcpp::traits::input_parameter< SEXP >::type key(keySEXP);
    Rcpp::traits::input_parameter< SEXP >::type value(valueSEXP);
    setmetadata(dbpath, key, value);
    return R_NilValue;
END_RCPP
}
// getmetadata
Rcpp::StringVector getmetadata(SEXP dbpath, SEXP key);
RcppExport SEXP RXapian_getmetadata(SEXP dbpathSEXP, SEXP keySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type dbpath(dbpathSEXP);
    Rcpp::traits::input_parameter< SEXP >::type key(keySEXP);
    __result = Rcpp::wrap(getmetadata(dbpath, key));
    return __result;
END_RCPP
}
// spelling_suggestion
Rcpp::StringVector spelling_suggestion(SEXP dbpath, SEXP arg);
RcppExport SEXP RXapian_spelling_suggestion(SEXP dbpathSEXP, SEXP argSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type dbpath(dbpathSEXP);
    Rcpp::traits::input_parameter< SEXP >::type arg(argSEXP);
    __result = Rcpp::wrap(spelling_suggestion(dbpath, arg));
    return __result;
END_RCPP
}
// collection_freq
Rcpp::NumericVector collection_freq(SEXP dbpath, SEXP tname);
RcppExport SEXP RXapian_collection_freq(SEXP dbpathSEXP, SEXP tnameSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type dbpath(dbpathSEXP);
    Rcpp::traits::input_parameter< SEXP >::type tname(tnameSEXP);
    __result = Rcpp::wrap(collection_freq(dbpath, tname));
    return __result;
END_RCPP
}
// value_freq
Rcpp::NumericVector value_freq(SEXP dbpath, SEXP slot);
RcppExport SEXP RXapian_value_freq(SEXP dbpathSEXP, SEXP slotSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type dbpath(dbpathSEXP);
    Rcpp::traits::input_parameter< SEXP >::type slot(slotSEXP);
    __result = Rcpp::wrap(value_freq(dbpath, slot));
    return __result;
END_RCPP
}
// value_lower_bound
Rcpp::NumericVector value_lower_bound(SEXP dbpath, SEXP slot);
RcppExport SEXP RXapian_value_lower_bound(SEXP dbpathSEXP, SEXP slotSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type dbpath(dbpathSEXP);
    Rcpp::traits::input_parameter< SEXP >::type slot(slotSEXP);
    __result = Rcpp::wrap(value_lower_bound(dbpath, slot));
    return __result;
END_RCPP
}
// value_upper_bound
Rcpp::NumericVector value_upper_bound(SEXP dbpath, SEXP slot);
RcppExport SEXP RXapian_value_upper_bound(SEXP dbpathSEXP, SEXP slotSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type dbpath(dbpathSEXP);
    Rcpp::traits::input_parameter< SEXP >::type slot(slotSEXP);
    __result = Rcpp::wrap(value_upper_bound(dbpath, slot));
    return __result;
END_RCPP
}
// uuid
Rcpp::StringVector uuid(SEXP dbpath);
RcppExport SEXP RXapian_uuid(SEXP dbpathSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type dbpath(dbpathSEXP);
    __result = Rcpp::wrap(uuid(dbpath));
    return __result;
END_RCPP
}
// doccount
Rcpp::NumericVector doccount(SEXP dbpath);
RcppExport SEXP RXapian_doccount(SEXP dbpathSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type dbpath(dbpathSEXP);
    __result = Rcpp::wrap(doccount(dbpath));
    return __result;
END_RCPP
}
// avlength
Rcpp::NumericVector avlength(SEXP dbpath);
RcppExport SEXP RXapian_avlength(SEXP dbpathSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type dbpath(dbpathSEXP);
    __result = Rcpp::wrap(avlength(dbpath));
    return __result;
END_RCPP
}
// doclength_lower_bound
Rcpp::NumericVector doclength_lower_bound(SEXP dbpath);
RcppExport SEXP RXapian_doclength_lower_bound(SEXP dbpathSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type dbpath(dbpathSEXP);
    __result = Rcpp::wrap(doclength_lower_bound(dbpath));
    return __result;
END_RCPP
}
// doclength_upper_bound
Rcpp::NumericVector doclength_upper_bound(SEXP dbpath);
RcppExport SEXP RXapian_doclength_upper_bound(SEXP dbpathSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type dbpath(dbpathSEXP);
    __result = Rcpp::wrap(doclength_upper_bound(dbpath));
    return __result;
END_RCPP
}
// lastdocid
Rcpp::NumericVector lastdocid(SEXP dbpath);
RcppExport SEXP RXapian_lastdocid(SEXP dbpathSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type dbpath(dbpathSEXP);
    __result = Rcpp::wrap(lastdocid(dbpath));
    return __result;
END_RCPP
}
// has_positions
Rcpp::LogicalVector has_positions(SEXP dbpath);
RcppExport SEXP RXapian_has_positions(SEXP dbpathSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type dbpath(dbpathSEXP);
    __result = Rcpp::wrap(has_positions(dbpath));
    return __result;
END_RCPP
}
// indexWrapper
void indexWrapper(Rcpp::CharacterVector& dbpath, Rcpp::DataFrame& dataFrame, Rcpp::NumericVector& idColumn, Rcpp::List& indexFields, Rcpp::List& filterFields, Rcpp::CharacterVector& stemmer);
RcppExport SEXP RXapian_indexWrapper(SEXP dbpathSEXP, SEXP dataFrameSEXP, SEXP idColumnSEXP, SEXP indexFieldsSEXP, SEXP filterFieldsSEXP, SEXP stemmerSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector& >::type dbpath(dbpathSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame& >::type dataFrame(dataFrameSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type idColumn(idColumnSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type indexFields(indexFieldsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type filterFields(filterFieldsSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector& >::type stemmer(stemmerSEXP);
    indexWrapper(dbpath, dataFrame, idColumn, indexFields, filterFields, stemmer);
    return R_NilValue;
END_RCPP
}
// searchWrapper
Rcpp::List searchWrapper(Rcpp::CharacterVector& dbpath, Rcpp::List& queryList);
RcppExport SEXP RXapian_searchWrapper(SEXP dbpathSEXP, SEXP queryListSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector& >::type dbpath(dbpathSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type queryList(queryListSEXP);
    __result = Rcpp::wrap(searchWrapper(dbpath, queryList));
    return __result;
END_RCPP
}
