/*
 * Summary: Provide Canonical XML and Exclusive XML Canonicalization
 * Description: the c14n modules provides a
 *
 * "Canonical XML" implementation
 * http://www.w3.org/TR/xml-c14n
 *
 * and an
 *
 * "Exclusive XML Canonicalization" implementation
 * http://www.w3.org/TR/xml-exc-c14n

 * Copy: See Copyright for the status of this software.
 *
 * Author: Aleksey Sanin <aleksey@aleksey.com>
 */
#ifndef __XML_C14N_H__
#define __XML_C14N_H__
#ifdef LIBXML_C14N_ENABLED
#ifdef LIBXML_OUTPUT_ENABLED

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <libxml/xmlversion.h>
#include <libxml/tree.h>
#include <libxml/xpath.h>

/*
 * XML Canonicazation
 * http://www.w3.org/TR/xml-c14n
 *
 * Exclusive XML Canonicazation
 * http://www.w3.org/TR/xml-exc-c14n
 *
 * Canonical form of an XML document could be created if and only if
 *  a) default attributes (if any) are added to all nodes
 *  b) all character and parsed entity references are resolved
 * In order to achive this in libxml2 the document MUST be loaded with
 * following global setings:
 *
 *    xmlLoadExtDtdDefaultValue = XML_DETECT_IDS | XML_COMPLETE_ATTRS;
 *    xmlSubstituteEntitiesDefault(1);
 *
 * or corresponding parser context setting:
 *    xmlParserCtxtPtr ctxt;
 *
 *    ...
 *    ctxt->loadsubset = XML_DETECT_IDS | XML_COMPLETE_ATTRS;
 *    ctxt->replaceEntities = 1;
 *    ...
 */


XMLPUBFUN int XMLCALL
		xmlC14NDocSaveTo	(xmlDocPtr doc,
					 xmlNodeSetPtr nodes,
					 int exclusive,
					 xmlChar **inclusive_ns_prefixes,
					 int with_comments,
					 xmlOutputBufferPtr buf);

XMLPUBFUN int XMLCALL
		xmlC14NDocDumpMemory	(xmlDocPtr doc,
					 xmlNodeSetPtr nodes,
					 int exclusive,
					 xmlChar **inclusive_ns_prefixes,
					 int with_comments,
					 xmlChar **doc_txt_ptr);

XMLPUBFUN int XMLCALL
		xmlC14NDocSave		(xmlDocPtr doc,
					 xmlNodeSetPtr nodes,
					 int exclusive,
					 xmlChar **inclusive_ns_prefixes,
					 int with_comments,
					 const char* filename,
					 int compression);


/**
 * This is the core C14N function
 */
/**
 * xmlC14NIsVisibleCallback:
 * @user_data: user data
 * @node: the curent node
 * @parent: the parent node
 *
 * Signature for a C14N callback on visible nodes
 *
 * Returns 1 if the node should be included
 */
typedef int (*xmlC14NIsVisibleCallback)	(void* user_data,
					 xmlNodePtr node,
					 xmlNodePtr parent);

XMLPUBFUN int XMLCALL
		xmlC14NExecute		(xmlDocPtr doc,
					 xmlC14NIsVisibleCallback is_visible_callback,
					 void* user_data,
					 int exclusive,
					 xmlChar **inclusive_ns_prefixes,
					 int with_comments,
					 xmlOutputBufferPtr buf);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* LIBXML_OUTPUT_ENABLED */
#endif /* LIBXML_C14N_ENABLED */
#ifdef __QNXNTO__
#include<sys/srcversion.h>
__SRCVERSION( "$URL: http://svn/product/branches/MM_1.2/ce/BX650_3579_build20-26/lib/xml2/public/libxml/c14n.h $ $Rev: 244324 $" )
#endif
#endif /* __XML_C14N_H__ */

