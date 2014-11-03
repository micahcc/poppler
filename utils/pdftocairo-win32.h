#include <cairo.h>
#include "goo/gmem.h"
#include "goo/gtypes.h"
#include "goo/gtypes_p.h"
#include "goo/GooString.h"

#ifdef CAIRO_HAS_WIN32_SURFACE

#include <cairo-win32.h>

void win32SetupPrinter(GooString *printer, GooString *printOpt,
		       GBool duplex, GBool setupdlg);
void win32ShowPrintDialog(GBool *expand, GBool *noShrink, GBool *noCenter,
			  GBool *usePDFPageSize, GBool *allPages,
			  int *firstPage, int *lastPage, int maxPages);
cairo_surface_t *win32BeginDocument(GooString *inputFileName, GooString *outputFileName);
void win32BeginPage(double *w, double *h, GBool changePageSize, GBool useFullPage);
void win32EndPage(GooString *imageFileName);
void win32EndDocument();

#endif // CAIRO_HAS_WIN32_SURFACE