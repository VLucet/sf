// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// CPL_get_bbox
Rcpp::NumericVector CPL_get_bbox(Rcpp::List sf, int depth);
RcppExport SEXP sf_CPL_get_bbox(SEXP sfSEXP, SEXP depthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sf(sfSEXP);
    Rcpp::traits::input_parameter< int >::type depth(depthSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_get_bbox(sf, depth));
    return rcpp_result_gen;
END_RCPP
}
// CPL_gdal_init
void CPL_gdal_init();
RcppExport SEXP sf_CPL_gdal_init() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    CPL_gdal_init();
    return R_NilValue;
END_RCPP
}
// CPL_gdal_cleanup_all
void CPL_gdal_cleanup_all();
RcppExport SEXP sf_CPL_gdal_cleanup_all() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    CPL_gdal_cleanup_all();
    return R_NilValue;
END_RCPP
}
// CPL_gdal_version
const char* CPL_gdal_version(const char* what);
RcppExport SEXP sf_CPL_gdal_version(SEXP whatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type what(whatSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_gdal_version(what));
    return rcpp_result_gen;
END_RCPP
}
// CPL_crs_parameters
Rcpp::List CPL_crs_parameters(std::string p4s);
RcppExport SEXP sf_CPL_crs_parameters(SEXP p4sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type p4s(p4sSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_crs_parameters(p4s));
    return rcpp_result_gen;
END_RCPP
}
// CPL_crs_from_epsg
Rcpp::List CPL_crs_from_epsg(int epsg);
RcppExport SEXP sf_CPL_crs_from_epsg(SEXP epsgSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type epsg(epsgSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_crs_from_epsg(epsg));
    return rcpp_result_gen;
END_RCPP
}
// CPL_crs_from_wkt
Rcpp::List CPL_crs_from_wkt(Rcpp::CharacterVector wkt);
RcppExport SEXP sf_CPL_crs_from_wkt(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_crs_from_wkt(wkt));
    return rcpp_result_gen;
END_RCPP
}
// CPL_roundtrip
Rcpp::List CPL_roundtrip(Rcpp::List sfc);
RcppExport SEXP sf_CPL_roundtrip(SEXP sfcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_roundtrip(sfc));
    return rcpp_result_gen;
END_RCPP
}
// CPL_transform
Rcpp::List CPL_transform(Rcpp::List sfc, Rcpp::CharacterVector proj4);
RcppExport SEXP sf_CPL_transform(SEXP sfcSEXP, SEXP proj4SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type proj4(proj4SEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_transform(sfc, proj4));
    return rcpp_result_gen;
END_RCPP
}
// CPL_wrap_dateline
Rcpp::List CPL_wrap_dateline(Rcpp::List sfc, Rcpp::CharacterVector opt, bool quiet);
RcppExport SEXP sf_CPL_wrap_dateline(SEXP sfcSEXP, SEXP optSEXP, SEXP quietSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type opt(optSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_wrap_dateline(sfc, opt, quiet));
    return rcpp_result_gen;
END_RCPP
}
// CPL_crs_from_proj4string
Rcpp::List CPL_crs_from_proj4string(Rcpp::CharacterVector p4s);
RcppExport SEXP sf_CPL_crs_from_proj4string(SEXP p4sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type p4s(p4sSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_crs_from_proj4string(p4s));
    return rcpp_result_gen;
END_RCPP
}
// CPL_get_rgdal_drivers
Rcpp::List CPL_get_rgdal_drivers(int dummy);
RcppExport SEXP sf_CPL_get_rgdal_drivers(SEXP dummySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type dummy(dummySEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_get_rgdal_drivers(dummy));
    return rcpp_result_gen;
END_RCPP
}
// CPL_sfc_from_wkt
Rcpp::List CPL_sfc_from_wkt(Rcpp::CharacterVector wkt);
RcppExport SEXP sf_CPL_sfc_from_wkt(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_sfc_from_wkt(wkt));
    return rcpp_result_gen;
END_RCPP
}
// CPL_area
Rcpp::NumericVector CPL_area(Rcpp::List sfc);
RcppExport SEXP sf_CPL_area(SEXP sfcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_area(sfc));
    return rcpp_result_gen;
END_RCPP
}
// CPL_gdal_dimension
Rcpp::IntegerVector CPL_gdal_dimension(Rcpp::List sfc, bool NA_if_empty);
RcppExport SEXP sf_CPL_gdal_dimension(SEXP sfcSEXP, SEXP NA_if_emptySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    Rcpp::traits::input_parameter< bool >::type NA_if_empty(NA_if_emptySEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_gdal_dimension(sfc, NA_if_empty));
    return rcpp_result_gen;
END_RCPP
}
// CPL_length
Rcpp::NumericVector CPL_length(Rcpp::List sfc);
RcppExport SEXP sf_CPL_length(SEXP sfcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_length(sfc));
    return rcpp_result_gen;
END_RCPP
}
// CPL_gdal_segmentize
Rcpp::List CPL_gdal_segmentize(Rcpp::List sfc, double dfMaxLength);
RcppExport SEXP sf_CPL_gdal_segmentize(SEXP sfcSEXP, SEXP dfMaxLengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    Rcpp::traits::input_parameter< double >::type dfMaxLength(dfMaxLengthSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_gdal_segmentize(sfc, dfMaxLength));
    return rcpp_result_gen;
END_RCPP
}
// CPL_gdal_linestring_sample
Rcpp::List CPL_gdal_linestring_sample(Rcpp::List sfc, Rcpp::List distLst);
RcppExport SEXP sf_CPL_gdal_linestring_sample(SEXP sfcSEXP, SEXP distLstSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type distLst(distLstSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_gdal_linestring_sample(sfc, distLst));
    return rcpp_result_gen;
END_RCPP
}
// CPL_get_layers
Rcpp::List CPL_get_layers(Rcpp::CharacterVector datasource, Rcpp::CharacterVector options, bool do_count);
RcppExport SEXP sf_CPL_get_layers(SEXP datasourceSEXP, SEXP optionsSEXP, SEXP do_countSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type datasource(datasourceSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type options(optionsSEXP);
    Rcpp::traits::input_parameter< bool >::type do_count(do_countSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_get_layers(datasource, options, do_count));
    return rcpp_result_gen;
END_RCPP
}
// CPL_read_ogr
Rcpp::List CPL_read_ogr(Rcpp::CharacterVector datasource, Rcpp::CharacterVector layer, Rcpp::CharacterVector options, bool quiet, Rcpp::NumericVector toTypeUser, bool promote_to_multi, bool int64_as_string);
RcppExport SEXP sf_CPL_read_ogr(SEXP datasourceSEXP, SEXP layerSEXP, SEXP optionsSEXP, SEXP quietSEXP, SEXP toTypeUserSEXP, SEXP promote_to_multiSEXP, SEXP int64_as_stringSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type datasource(datasourceSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type options(optionsSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type toTypeUser(toTypeUserSEXP);
    Rcpp::traits::input_parameter< bool >::type promote_to_multi(promote_to_multiSEXP);
    Rcpp::traits::input_parameter< bool >::type int64_as_string(int64_as_stringSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_read_ogr(datasource, layer, options, quiet, toTypeUser, promote_to_multi, int64_as_string));
    return rcpp_result_gen;
END_RCPP
}
// CPL_write_ogr
void CPL_write_ogr(Rcpp::List obj, Rcpp::CharacterVector dsn, Rcpp::CharacterVector layer, Rcpp::CharacterVector driver, Rcpp::CharacterVector dco, Rcpp::CharacterVector lco, Rcpp::List geom, Rcpp::CharacterVector dim, bool quiet, bool update, bool delete_dsn, bool delete_layer);
RcppExport SEXP sf_CPL_write_ogr(SEXP objSEXP, SEXP dsnSEXP, SEXP layerSEXP, SEXP driverSEXP, SEXP dcoSEXP, SEXP lcoSEXP, SEXP geomSEXP, SEXP dimSEXP, SEXP quietSEXP, SEXP updateSEXP, SEXP delete_dsnSEXP, SEXP delete_layerSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type obj(objSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type driver(driverSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type dco(dcoSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type lco(lcoSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type geom(geomSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    Rcpp::traits::input_parameter< bool >::type update(updateSEXP);
    Rcpp::traits::input_parameter< bool >::type delete_dsn(delete_dsnSEXP);
    Rcpp::traits::input_parameter< bool >::type delete_layer(delete_layerSEXP);
    CPL_write_ogr(obj, dsn, layer, driver, dco, lco, geom, dim, quiet, update, delete_dsn, delete_layer);
    return R_NilValue;
END_RCPP
}
// CPL_geos_binop
Rcpp::List CPL_geos_binop(Rcpp::List sfc0, Rcpp::List sfc1, std::string op, double par, std::string pattern, bool sparse, bool prepared);
RcppExport SEXP sf_CPL_geos_binop(SEXP sfc0SEXP, SEXP sfc1SEXP, SEXP opSEXP, SEXP parSEXP, SEXP patternSEXP, SEXP sparseSEXP, SEXP preparedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc0(sfc0SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc1(sfc1SEXP);
    Rcpp::traits::input_parameter< std::string >::type op(opSEXP);
    Rcpp::traits::input_parameter< double >::type par(parSEXP);
    Rcpp::traits::input_parameter< std::string >::type pattern(patternSEXP);
    Rcpp::traits::input_parameter< bool >::type sparse(sparseSEXP);
    Rcpp::traits::input_parameter< bool >::type prepared(preparedSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_geos_binop(sfc0, sfc1, op, par, pattern, sparse, prepared));
    return rcpp_result_gen;
END_RCPP
}
// CPL_geos_is_valid_reason
Rcpp::CharacterVector CPL_geos_is_valid_reason(Rcpp::List sfc);
RcppExport SEXP sf_CPL_geos_is_valid_reason(SEXP sfcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_geos_is_valid_reason(sfc));
    return rcpp_result_gen;
END_RCPP
}
// CPL_geos_is_valid
Rcpp::LogicalVector CPL_geos_is_valid(Rcpp::List sfc, bool NA_on_exception);
RcppExport SEXP sf_CPL_geos_is_valid(SEXP sfcSEXP, SEXP NA_on_exceptionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    Rcpp::traits::input_parameter< bool >::type NA_on_exception(NA_on_exceptionSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_geos_is_valid(sfc, NA_on_exception));
    return rcpp_result_gen;
END_RCPP
}
// CPL_geos_is_simple
Rcpp::LogicalVector CPL_geos_is_simple(Rcpp::List sfc);
RcppExport SEXP sf_CPL_geos_is_simple(SEXP sfcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_geos_is_simple(sfc));
    return rcpp_result_gen;
END_RCPP
}
// CPL_geos_union
Rcpp::List CPL_geos_union(Rcpp::List sfc, bool by_feature);
RcppExport SEXP sf_CPL_geos_union(SEXP sfcSEXP, SEXP by_featureSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    Rcpp::traits::input_parameter< bool >::type by_feature(by_featureSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_geos_union(sfc, by_feature));
    return rcpp_result_gen;
END_RCPP
}
// CPL_geos_op
Rcpp::List CPL_geos_op(std::string op, Rcpp::List sfc, Rcpp::NumericVector bufferDist, int nQuadSegs, double dTolerance, bool preserveTopology, int bOnlyEdges, double dfMaxLength);
RcppExport SEXP sf_CPL_geos_op(SEXP opSEXP, SEXP sfcSEXP, SEXP bufferDistSEXP, SEXP nQuadSegsSEXP, SEXP dToleranceSEXP, SEXP preserveTopologySEXP, SEXP bOnlyEdgesSEXP, SEXP dfMaxLengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type op(opSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type bufferDist(bufferDistSEXP);
    Rcpp::traits::input_parameter< int >::type nQuadSegs(nQuadSegsSEXP);
    Rcpp::traits::input_parameter< double >::type dTolerance(dToleranceSEXP);
    Rcpp::traits::input_parameter< bool >::type preserveTopology(preserveTopologySEXP);
    Rcpp::traits::input_parameter< int >::type bOnlyEdges(bOnlyEdgesSEXP);
    Rcpp::traits::input_parameter< double >::type dfMaxLength(dfMaxLengthSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_geos_op(op, sfc, bufferDist, nQuadSegs, dTolerance, preserveTopology, bOnlyEdges, dfMaxLength));
    return rcpp_result_gen;
END_RCPP
}
// CPL_geos_voronoi
Rcpp::List CPL_geos_voronoi(Rcpp::List sfc, Rcpp::List env, double dTolerance, int bOnlyEdges);
RcppExport SEXP sf_CPL_geos_voronoi(SEXP sfcSEXP, SEXP envSEXP, SEXP dToleranceSEXP, SEXP bOnlyEdgesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type env(envSEXP);
    Rcpp::traits::input_parameter< double >::type dTolerance(dToleranceSEXP);
    Rcpp::traits::input_parameter< int >::type bOnlyEdges(bOnlyEdgesSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_geos_voronoi(sfc, env, dTolerance, bOnlyEdges));
    return rcpp_result_gen;
END_RCPP
}
// CPL_geos_op2
Rcpp::List CPL_geos_op2(std::string op, Rcpp::List sfcx, Rcpp::List sfcy);
RcppExport SEXP sf_CPL_geos_op2(SEXP opSEXP, SEXP sfcxSEXP, SEXP sfcySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type op(opSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sfcx(sfcxSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sfcy(sfcySEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_geos_op2(op, sfcx, sfcy));
    return rcpp_result_gen;
END_RCPP
}
// CPL_geos_version
std::string CPL_geos_version(bool b);
RcppExport SEXP sf_CPL_geos_version(SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_geos_version(b));
    return rcpp_result_gen;
END_RCPP
}
// CPL_geos_dist
Rcpp::NumericMatrix CPL_geos_dist(Rcpp::List sfc0, Rcpp::List sfc1);
RcppExport SEXP sf_CPL_geos_dist(SEXP sfc0SEXP, SEXP sfc1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc0(sfc0SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc1(sfc1SEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_geos_dist(sfc0, sfc1));
    return rcpp_result_gen;
END_RCPP
}
// CPL_geos_relate
Rcpp::CharacterVector CPL_geos_relate(Rcpp::List sfc0, Rcpp::List sfc1);
RcppExport SEXP sf_CPL_geos_relate(SEXP sfc0SEXP, SEXP sfc1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc0(sfc0SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc1(sfc1SEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_geos_relate(sfc0, sfc1));
    return rcpp_result_gen;
END_RCPP
}
// CPL_invert_sparse_incidence
Rcpp::List CPL_invert_sparse_incidence(Rcpp::List m, int n);
RcppExport SEXP sf_CPL_invert_sparse_incidence(SEXP mSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_invert_sparse_incidence(m, n));
    return rcpp_result_gen;
END_RCPP
}
// CPL_lwgeom_version
Rcpp::CharacterVector CPL_lwgeom_version(bool b);
RcppExport SEXP sf_CPL_lwgeom_version(SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_lwgeom_version(b));
    return rcpp_result_gen;
END_RCPP
}
// CPL_make_valid
Rcpp::List CPL_make_valid(Rcpp::List sfc);
RcppExport SEXP sf_CPL_make_valid(SEXP sfcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_make_valid(sfc));
    return rcpp_result_gen;
END_RCPP
}
// CPL_geohash
Rcpp::CharacterVector CPL_geohash(Rcpp::List sfc, int prec);
RcppExport SEXP sf_CPL_geohash(SEXP sfcSEXP, SEXP precSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    Rcpp::traits::input_parameter< int >::type prec(precSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_geohash(sfc, prec));
    return rcpp_result_gen;
END_RCPP
}
// CPL_proj_version
std::string CPL_proj_version(bool b);
RcppExport SEXP sf_CPL_proj_version(SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_proj_version(b));
    return rcpp_result_gen;
END_RCPP
}
// CPL_proj_is_valid
Rcpp::List CPL_proj_is_valid(std::string proj4string);
RcppExport SEXP sf_CPL_proj_is_valid(SEXP proj4stringSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type proj4string(proj4stringSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_proj_is_valid(proj4string));
    return rcpp_result_gen;
END_RCPP
}
// CPL_proj_info
Rcpp::List CPL_proj_info(int type);
RcppExport SEXP sf_CPL_proj_info(SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_proj_info(type));
    return rcpp_result_gen;
END_RCPP
}
// CPL_hex_to_raw
Rcpp::List CPL_hex_to_raw(Rcpp::CharacterVector cx);
RcppExport SEXP sf_CPL_hex_to_raw(SEXP cxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type cx(cxSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_hex_to_raw(cx));
    return rcpp_result_gen;
END_RCPP
}
// CPL_raw_to_hex
Rcpp::CharacterVector CPL_raw_to_hex(Rcpp::RawVector raw);
RcppExport SEXP sf_CPL_raw_to_hex(SEXP rawSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RawVector >::type raw(rawSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_raw_to_hex(raw));
    return rcpp_result_gen;
END_RCPP
}
// CPL_read_wkb
Rcpp::List CPL_read_wkb(Rcpp::List wkb_list, bool EWKB, bool spatialite, int endian);
RcppExport SEXP sf_CPL_read_wkb(SEXP wkb_listSEXP, SEXP EWKBSEXP, SEXP spatialiteSEXP, SEXP endianSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkb_list(wkb_listSEXP);
    Rcpp::traits::input_parameter< bool >::type EWKB(EWKBSEXP);
    Rcpp::traits::input_parameter< bool >::type spatialite(spatialiteSEXP);
    Rcpp::traits::input_parameter< int >::type endian(endianSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_read_wkb(wkb_list, EWKB, spatialite, endian));
    return rcpp_result_gen;
END_RCPP
}
// CPL_write_wkb
Rcpp::List CPL_write_wkb(Rcpp::List sfc, bool EWKB, int endian, Rcpp::CharacterVector dim, double precision);
RcppExport SEXP sf_CPL_write_wkb(SEXP sfcSEXP, SEXP EWKBSEXP, SEXP endianSEXP, SEXP dimSEXP, SEXP precisionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    Rcpp::traits::input_parameter< bool >::type EWKB(EWKBSEXP);
    Rcpp::traits::input_parameter< int >::type endian(endianSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< double >::type precision(precisionSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_write_wkb(sfc, EWKB, endian, dim, precision));
    return rcpp_result_gen;
END_RCPP
}
