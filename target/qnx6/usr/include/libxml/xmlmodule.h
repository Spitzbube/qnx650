/*
 * Summary: dynamic module loading
 * Description: basic API for dynamic module loading, used by
 *              libexslt added in 2.6.17
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Joel W. Reed
 */

#ifndef __XML_MODULE_H__
#define __XML_MODULE_H__

#include <libxml/xmlversion.h>

#ifdef LIBXML_MODULES_ENABLED

#ifdef __cplusplus
extern "C" {
#endif

/**
 * xmlModulePtr:
 *
 * A handle to a dynamically loaded module
 */
typedef struct _xmlModule xmlModule;
typedef xmlModule *xmlModulePtr;

/**
 * xmlModuleOption:
 *
 * enumeration of options that can be passed down to xmlModuleOpen()
 */
typedef enum {
    XML_MODULE_LAZY = 1,	/* lazy binding */
    XML_MODULE_LOCAL= 2		/* local binding */
} xmlModuleOption;

XMLPUBFUN xmlModulePtr XMLCALL xmlModuleOpen	(const char *filename,
						 int options);

XMLPUBFUN int XMLCALL xmlModuleSymbol		(xmlModulePtr module,
						 const char* name,
						 void **result);

XMLPUBFUN int XMLCALL xmlModuleClose		(xmlModulePtr module);

XMLPUBFUN int XMLCALL xmlModuleFree		(xmlModulePtr module);

#ifdef __cplusplus
}
#endif 

#endif /* LIBXML_MODULES_ENABLED */

#endif /*__XML_MODULE_H__ */

__SRCVERSION( "$URL: http://svn/product/branches/MM_1.2/ce/BX650_3579_build20-26/lib/xml2/public/libxml/xmlmodule.h $ $Rev: 219996 $" )
