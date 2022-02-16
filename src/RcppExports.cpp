// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// set_poppler_data
bool set_poppler_data(std::string path);
RcppExport SEXP _pdftools_set_poppler_data(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(set_poppler_data(path));
    return rcpp_result_gen;
END_RCPP
}
// get_poppler_config
List get_poppler_config();
RcppExport SEXP _pdftools_get_poppler_config() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(get_poppler_config());
    return rcpp_result_gen;
END_RCPP
}
// poppler_pdf_info
List poppler_pdf_info(RawVector x, std::string opw, std::string upw);
RcppExport SEXP _pdftools_poppler_pdf_info(SEXP xSEXP, SEXP opwSEXP, SEXP upwSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type opw(opwSEXP);
    Rcpp::traits::input_parameter< std::string >::type upw(upwSEXP);
    rcpp_result_gen = Rcpp::wrap(poppler_pdf_info(x, opw, upw));
    return rcpp_result_gen;
END_RCPP
}
// poppler_pdf_data
List poppler_pdf_data(RawVector x, bool get_font_info, std::string opw, std::string upw);
RcppExport SEXP _pdftools_poppler_pdf_data(SEXP xSEXP, SEXP get_font_infoSEXP, SEXP opwSEXP, SEXP upwSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type get_font_info(get_font_infoSEXP);
    Rcpp::traits::input_parameter< std::string >::type opw(opwSEXP);
    Rcpp::traits::input_parameter< std::string >::type upw(upwSEXP);
    rcpp_result_gen = Rcpp::wrap(poppler_pdf_data(x, get_font_info, opw, upw));
    return rcpp_result_gen;
END_RCPP
}
// poppler_pdf_text
CharacterVector poppler_pdf_text(RawVector x, std::string opw, std::string upw);
RcppExport SEXP _pdftools_poppler_pdf_text(SEXP xSEXP, SEXP opwSEXP, SEXP upwSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type opw(opwSEXP);
    Rcpp::traits::input_parameter< std::string >::type upw(upwSEXP);
    rcpp_result_gen = Rcpp::wrap(poppler_pdf_text(x, opw, upw));
    return rcpp_result_gen;
END_RCPP
}
// poppler_pdf_pagesize
DataFrame poppler_pdf_pagesize(RawVector x, std::string opw, std::string upw);
RcppExport SEXP _pdftools_poppler_pdf_pagesize(SEXP xSEXP, SEXP opwSEXP, SEXP upwSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type opw(opwSEXP);
    Rcpp::traits::input_parameter< std::string >::type upw(upwSEXP);
    rcpp_result_gen = Rcpp::wrap(poppler_pdf_pagesize(x, opw, upw));
    return rcpp_result_gen;
END_RCPP
}
// poppler_pdf_fonts
List poppler_pdf_fonts(RawVector x, std::string opw, std::string upw);
RcppExport SEXP _pdftools_poppler_pdf_fonts(SEXP xSEXP, SEXP opwSEXP, SEXP upwSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type opw(opwSEXP);
    Rcpp::traits::input_parameter< std::string >::type upw(upwSEXP);
    rcpp_result_gen = Rcpp::wrap(poppler_pdf_fonts(x, opw, upw));
    return rcpp_result_gen;
END_RCPP
}
// poppler_pdf_files
List poppler_pdf_files(RawVector x, std::string opw, std::string upw);
RcppExport SEXP _pdftools_poppler_pdf_files(SEXP xSEXP, SEXP opwSEXP, SEXP upwSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type opw(opwSEXP);
    Rcpp::traits::input_parameter< std::string >::type upw(upwSEXP);
    rcpp_result_gen = Rcpp::wrap(poppler_pdf_files(x, opw, upw));
    return rcpp_result_gen;
END_RCPP
}
// poppler_pdf_toc
List poppler_pdf_toc(RawVector x, std::string opw, std::string upw);
RcppExport SEXP _pdftools_poppler_pdf_toc(SEXP xSEXP, SEXP opwSEXP, SEXP upwSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type opw(opwSEXP);
    Rcpp::traits::input_parameter< std::string >::type upw(upwSEXP);
    rcpp_result_gen = Rcpp::wrap(poppler_pdf_toc(x, opw, upw));
    return rcpp_result_gen;
END_RCPP
}
// poppler_render_page
RawVector poppler_render_page(RawVector x, int pagenum, double dpi, std::string opw, std::string upw, bool antialiasing, bool text_antialiasing);
RcppExport SEXP _pdftools_poppler_render_page(SEXP xSEXP, SEXP pagenumSEXP, SEXP dpiSEXP, SEXP opwSEXP, SEXP upwSEXP, SEXP antialiasingSEXP, SEXP text_antialiasingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type pagenum(pagenumSEXP);
    Rcpp::traits::input_parameter< double >::type dpi(dpiSEXP);
    Rcpp::traits::input_parameter< std::string >::type opw(opwSEXP);
    Rcpp::traits::input_parameter< std::string >::type upw(upwSEXP);
    Rcpp::traits::input_parameter< bool >::type antialiasing(antialiasingSEXP);
    Rcpp::traits::input_parameter< bool >::type text_antialiasing(text_antialiasingSEXP);
    rcpp_result_gen = Rcpp::wrap(poppler_render_page(x, pagenum, dpi, opw, upw, antialiasing, text_antialiasing));
    return rcpp_result_gen;
END_RCPP
}
// poppler_convert
std::vector<std::string> poppler_convert(RawVector x, std::string format, std::vector<int> pages, std::vector<std::string> names, double dpi, std::string opw, std::string upw, bool antialiasing, bool text_antialiasing, bool verbose);
RcppExport SEXP _pdftools_poppler_convert(SEXP xSEXP, SEXP formatSEXP, SEXP pagesSEXP, SEXP namesSEXP, SEXP dpiSEXP, SEXP opwSEXP, SEXP upwSEXP, SEXP antialiasingSEXP, SEXP text_antialiasingSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type format(formatSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type pages(pagesSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type names(namesSEXP);
    Rcpp::traits::input_parameter< double >::type dpi(dpiSEXP);
    Rcpp::traits::input_parameter< std::string >::type opw(opwSEXP);
    Rcpp::traits::input_parameter< std::string >::type upw(upwSEXP);
    Rcpp::traits::input_parameter< bool >::type antialiasing(antialiasingSEXP);
    Rcpp::traits::input_parameter< bool >::type text_antialiasing(text_antialiasingSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(poppler_convert(x, format, pages, names, dpi, opw, upw, antialiasing, text_antialiasing, verbose));
    return rcpp_result_gen;
END_RCPP
}
// set_error_callback
void set_error_callback();
RcppExport SEXP _pdftools_set_error_callback() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    set_error_callback();
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_pdftools_set_poppler_data", (DL_FUNC) &_pdftools_set_poppler_data, 1},
    {"_pdftools_get_poppler_config", (DL_FUNC) &_pdftools_get_poppler_config, 0},
    {"_pdftools_poppler_pdf_info", (DL_FUNC) &_pdftools_poppler_pdf_info, 3},
    {"_pdftools_poppler_pdf_data", (DL_FUNC) &_pdftools_poppler_pdf_data, 4},
    {"_pdftools_poppler_pdf_text", (DL_FUNC) &_pdftools_poppler_pdf_text, 3},
    {"_pdftools_poppler_pdf_pagesize", (DL_FUNC) &_pdftools_poppler_pdf_pagesize, 3},
    {"_pdftools_poppler_pdf_fonts", (DL_FUNC) &_pdftools_poppler_pdf_fonts, 3},
    {"_pdftools_poppler_pdf_files", (DL_FUNC) &_pdftools_poppler_pdf_files, 3},
    {"_pdftools_poppler_pdf_toc", (DL_FUNC) &_pdftools_poppler_pdf_toc, 3},
    {"_pdftools_poppler_render_page", (DL_FUNC) &_pdftools_poppler_render_page, 7},
    {"_pdftools_poppler_convert", (DL_FUNC) &_pdftools_poppler_convert, 10},
    {"_pdftools_set_error_callback", (DL_FUNC) &_pdftools_set_error_callback, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_pdftools(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
