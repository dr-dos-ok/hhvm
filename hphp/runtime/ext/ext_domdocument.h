/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010-2013 Facebook, Inc. (http://www.facebook.com)     |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef incl_HPHP_EXT_DOMDOCUMENT_H_
#define incl_HPHP_EXT_DOMDOCUMENT_H_

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include "hphp/runtime/base/base-includes.h"
#include "hphp/runtime/ext/ext_domdocument_includes.h"
namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

Variant f_dom_document_create_element(CVarRef obj, CStrRef name, CStrRef value = null_string);
Variant f_dom_document_create_document_fragment(CVarRef obj);
Variant f_dom_document_create_text_node(CVarRef obj, CStrRef data);
Variant f_dom_document_create_comment(CVarRef obj, CStrRef data);
Variant f_dom_document_create_cdatasection(CVarRef obj, CStrRef data);
Variant f_dom_document_create_processing_instruction(CVarRef obj, CStrRef target, CStrRef data = null_string);
Variant f_dom_document_create_attribute(CVarRef obj, CStrRef name);
Variant f_dom_document_create_entity_reference(CVarRef obj, CStrRef name);
Variant f_dom_document_get_elements_by_tag_name(CVarRef obj, CStrRef name);
Variant f_dom_document_import_node(CVarRef obj, CObjRef importednode, bool deep = false);
Variant f_dom_document_create_element_ns(CVarRef obj, CStrRef namespaceuri, CStrRef qualifiedname, CStrRef value = null_string);
Variant f_dom_document_create_attribute_ns(CVarRef obj, CStrRef namespaceuri, CStrRef qualifiedname);
Variant f_dom_document_get_elements_by_tag_name_ns(CVarRef obj, CStrRef namespaceuri, CStrRef localname);
Variant f_dom_document_get_element_by_id(CVarRef obj, CStrRef elementid);
Variant f_dom_document_normalize_document(CVarRef obj);
Variant f_dom_document_save(CVarRef obj, CStrRef file, int64_t options = 0);
Variant f_dom_document_savexml(CVarRef obj, CObjRef node = null_object, int64_t options = 0);
Variant f_dom_document_validate(CVarRef obj);
Variant f_dom_document_xinclude(CVarRef obj, int64_t options = 0);
Variant f_dom_document_save_html(CVarRef obj);
Variant f_dom_document_save_html_file(CVarRef obj, CStrRef file);
Variant f_dom_document_schema_validate_file(CVarRef obj, CStrRef filename);
Variant f_dom_document_schema_validate_xml(CVarRef obj, CStrRef source);
Variant f_dom_document_relaxng_validate_file(CVarRef obj, CStrRef filename);
Variant f_dom_document_relaxng_validate_xml(CVarRef obj, CStrRef source);
Variant f_dom_node_insert_before(CVarRef obj, CObjRef newnode, CObjRef refnode = Object());
Variant f_dom_node_replace_child(CVarRef obj, CObjRef newchildobj, CObjRef oldchildobj);
Variant f_dom_node_remove_child(CVarRef obj, CObjRef node);
Variant f_dom_node_append_child(CVarRef obj, CObjRef newnode);
Variant f_dom_node_has_child_nodes(CVarRef obj);
Variant f_dom_node_clone_node(CVarRef obj, bool deep = false);
Variant f_dom_node_normalize(CVarRef obj);
Variant f_dom_node_is_supported(CVarRef obj, CStrRef feature, CStrRef version);
Variant f_dom_node_has_attributes(CVarRef obj);
Variant f_dom_node_is_same_node(CVarRef obj, CObjRef node);
Variant f_dom_node_lookup_prefix(CVarRef obj, CStrRef prefix);
Variant f_dom_node_is_default_namespace(CVarRef obj, CStrRef namespaceuri);
Variant f_dom_node_lookup_namespace_uri(CVarRef obj, CStrRef namespaceuri);
Variant f_dom_nodelist_item(CVarRef obj, int64_t index);
Variant f_dom_namednodemap_get_named_item(CVarRef obj, CStrRef name);
Variant f_dom_namednodemap_item(CVarRef obj, int64_t index);
Variant f_dom_namednodemap_get_named_item_ns(CVarRef obj, CStrRef namespaceuri, CStrRef localname);
Variant f_dom_characterdata_substring_data(CVarRef obj, int64_t offset, int64_t count);
Variant f_dom_characterdata_append_data(CVarRef obj, CStrRef arg);
Variant f_dom_characterdata_insert_data(CVarRef obj, int64_t offset, CStrRef data);
Variant f_dom_characterdata_delete_data(CVarRef obj, int64_t offset, int64_t count);
Variant f_dom_characterdata_replace_data(CVarRef obj, int64_t offset, int64_t count, CStrRef data);
Variant f_dom_attr_is_id(CVarRef obj);
Variant f_dom_element_get_attribute(CVarRef obj, CStrRef name);
Variant f_dom_element_set_attribute(CVarRef obj, CStrRef name, CStrRef value);
Variant f_dom_element_remove_attribute(CVarRef obj, CStrRef name);
Variant f_dom_element_get_attribute_node(CVarRef obj, CStrRef name);
Variant f_dom_element_set_attribute_node(CVarRef obj, CObjRef newattr);
Variant f_dom_element_remove_attribute_node(CVarRef obj, CObjRef oldattr);
Variant f_dom_element_get_elements_by_tag_name(CVarRef obj, CStrRef name);
Variant f_dom_element_get_attribute_ns(CVarRef obj, CStrRef namespaceuri, CStrRef localname);
Variant f_dom_element_set_attribute_ns(CVarRef obj, CStrRef namespaceuri, CStrRef name, CStrRef value);
Variant f_dom_element_remove_attribute_ns(CVarRef obj, CStrRef namespaceuri, CStrRef localname);
Variant f_dom_element_get_attribute_node_ns(CVarRef obj, CStrRef namespaceuri, CStrRef localname);
Variant f_dom_element_set_attribute_node_ns(CVarRef obj, CObjRef newattr);
Variant f_dom_element_get_elements_by_tag_name_ns(CVarRef obj, CStrRef namespaceuri, CStrRef localname);
Variant f_dom_element_has_attribute(CVarRef obj, CStrRef name);
Variant f_dom_element_has_attribute_ns(CVarRef obj, CStrRef namespaceuri, CStrRef localname);
Variant f_dom_element_set_id_attribute(CVarRef obj, CStrRef name, bool isid);
Variant f_dom_element_set_id_attribute_ns(CVarRef obj, CStrRef namespaceuri, CStrRef localname, bool isid);
Variant f_dom_element_set_id_attribute_node(CVarRef obj, CObjRef idattr, bool isid);
Variant f_dom_text_split_text(CVarRef obj, int64_t offset);
Variant f_dom_text_is_whitespace_in_element_content(CVarRef obj);
Variant f_dom_xpath_register_ns(CVarRef obj, CStrRef prefix, CStrRef uri);
Variant f_dom_xpath_query(CVarRef obj, CStrRef expr, CObjRef context = null_object);
Variant f_dom_xpath_evaluate(CVarRef obj, CStrRef expr, CObjRef context = null_object);
Variant f_dom_xpath_register_php_functions(CVarRef obj, CVarRef funcs = uninit_null());
Variant f_dom_import_simplexml(CObjRef node);

///////////////////////////////////////////////////////////////////////////////
// class DOMNode

FORWARD_DECLARE_CLASS_BUILTIN(DOMNode);
class c_DOMNode : public ExtObjectDataFlags<ObjectData::UseGet|ObjectData::UseSet|ObjectData::UseIsset> {
 public:
  DECLARE_CLASS(DOMNode, DOMNode, ObjectData)

  // need to implement
  public: c_DOMNode(Class* cls = c_DOMNode::s_cls);
  public: ~c_DOMNode();
  public: void t___construct();
  public: Variant t_appendchild(CObjRef newnode);
  public: Variant t_clonenode(bool deep = false);
  public: int64_t t_getlineno();
  public: bool t_hasattributes();
  public: bool t_haschildnodes();
  public: Variant t_insertbefore(CObjRef newnode, CObjRef refnode = Object());
  public: bool t_isdefaultnamespace(CStrRef namespaceuri);
  public: bool t_issamenode(CObjRef node);
  public: bool t_issupported(CStrRef feature, CStrRef version);
  public: Variant t_lookupnamespaceuri(CStrRef namespaceuri);
  public: Variant t_lookupprefix(CStrRef prefix);
  public: void t_normalize();
  public: Variant t_removechild(CObjRef node);
  public: Variant t_replacechild(CObjRef newchildobj, CObjRef oldchildobj);
  public: Variant t_c14n(bool exclusive = false, bool with_comments = false, CVarRef xpath = uninit_null(), CVarRef ns_prefixes = uninit_null());
  public: Variant t_c14nfile(CStrRef uri, bool exclusive = false, bool with_comments = false, CVarRef xpath = uninit_null(), CVarRef ns_prefixes = uninit_null());
  public: Variant t_getnodepath();
  public: Variant t___get(Variant name);
  public: Variant t___set(Variant name, Variant value);
  public: bool t___isset(Variant name);



public:
  virtual c_DOMNode* clone();
  virtual p_DOMDocument doc() { return m_doc;}
  p_DOMDocument m_doc;
  xmlNodePtr m_node;
};

///////////////////////////////////////////////////////////////////////////////
// class DOMAttr

FORWARD_DECLARE_CLASS_BUILTIN(DOMAttr);
class c_DOMAttr : public c_DOMNode {
 public:
  DECLARE_CLASS(DOMAttr, DOMAttr, DOMNode)

  // need to implement
  public: c_DOMAttr(Class* cls = c_DOMAttr::s_cls);
  public: ~c_DOMAttr();
  public: void t___construct(CStrRef name, CStrRef value = null_string);
  public: bool t_isid();
  public: Variant t___get(Variant name);
  public: Variant t___set(Variant name, Variant value);
  public: bool t___isset(Variant name);



};

///////////////////////////////////////////////////////////////////////////////
// class DOMCharacterData

FORWARD_DECLARE_CLASS_BUILTIN(DOMCharacterData);
class c_DOMCharacterData : public c_DOMNode {
 public:
  DECLARE_CLASS(DOMCharacterData, DOMCharacterData, DOMNode)

  // need to implement
  public: c_DOMCharacterData(Class* cls = c_DOMCharacterData::s_cls);
  public: ~c_DOMCharacterData();
  public: void t___construct();
  public: bool t_appenddata(CStrRef arg);
  public: bool t_deletedata(int64_t offset, int64_t count);
  public: bool t_insertdata(int64_t offset, CStrRef data);
  public: bool t_replacedata(int64_t offset, int64_t count, CStrRef data);
  public: String t_substringdata(int64_t offset, int64_t count);
  public: Variant t___get(Variant name);
  public: Variant t___set(Variant name, Variant value);
  public: bool t___isset(Variant name);



};

///////////////////////////////////////////////////////////////////////////////
// class DOMComment

FORWARD_DECLARE_CLASS_BUILTIN(DOMComment);
class c_DOMComment : public c_DOMCharacterData {
 public:
  DECLARE_CLASS(DOMComment, DOMComment, DOMCharacterData)

  // need to implement
  public: c_DOMComment(Class* cls = c_DOMComment::s_cls);
  public: ~c_DOMComment();
  public: void t___construct(CStrRef value = null_string);



};

///////////////////////////////////////////////////////////////////////////////
// class DOMText

FORWARD_DECLARE_CLASS_BUILTIN(DOMText);
class c_DOMText : public c_DOMCharacterData {
 public:
  DECLARE_CLASS(DOMText, DOMText, DOMCharacterData)

  // need to implement
  public: c_DOMText(Class* cls = c_DOMText::s_cls);
  public: ~c_DOMText();
  public: void t___construct(CStrRef value = null_string);
  public: bool t_iswhitespaceinelementcontent();
  public: Variant t_splittext(int64_t offset);
  public: Variant t___get(Variant name);
  public: Variant t___set(Variant name, Variant value);
  public: bool t___isset(Variant name);



};

///////////////////////////////////////////////////////////////////////////////
// class DOMCDATASection

FORWARD_DECLARE_CLASS_BUILTIN(DOMCDATASection);
class c_DOMCDATASection : public c_DOMText {
 public:
  DECLARE_CLASS(DOMCDATASection, DOMCDATASection, DOMText)

  // need to implement
  public: c_DOMCDATASection(Class* cls = c_DOMCDATASection::s_cls);
  public: ~c_DOMCDATASection();
  public: void t___construct(CStrRef value);



};

///////////////////////////////////////////////////////////////////////////////
// class DOMDocument

FORWARD_DECLARE_CLASS_BUILTIN(DOMDocument);
class c_DOMDocument : public c_DOMNode, public Sweepable {
 public:
  DECLARE_CLASS(DOMDocument, DOMDocument, DOMNode)

  // need to implement
  public: c_DOMDocument(Class* cls = c_DOMDocument::s_cls);
  public: ~c_DOMDocument();
  public: void t___construct(CStrRef version = null_string, CStrRef encoding = null_string);
  public: Variant t_createattribute(CStrRef name);
  public: Variant t_createattributens(CStrRef namespaceuri, CStrRef qualifiedname);
  public: Variant t_createcdatasection(CStrRef data);
  public: Variant t_createcomment(CStrRef data);
  public: Variant t_createdocumentfragment();
  public: Variant t_createelement(CStrRef name, CStrRef value = null_string);
  public: Variant t_createelementns(CStrRef namespaceuri, CStrRef qualifiedname, CStrRef value = null_string);
  public: Variant t_createentityreference(CStrRef name);
  public: Variant t_createprocessinginstruction(CStrRef target, CStrRef data = null_string);
  public: Variant t_createtextnode(CStrRef data);
  public: Variant t_getelementbyid(CStrRef elementid);
  public: Variant t_getelementsbytagname(CStrRef name);
  public: Variant t_getelementsbytagnamens(CStrRef namespaceuri, CStrRef localname);
  public: Variant t_importnode(CObjRef importednode, bool deep = false);
  public: Variant t_load(CStrRef filename, int64_t options = 0);
  public: Variant t_loadhtml(CStrRef source);
  public: Variant t_loadhtmlfile(CStrRef filename);
  public: Variant t_loadxml(CStrRef source, int64_t options = 0);
  public: void t_normalizedocument();
  public: bool t_registernodeclass(CStrRef baseclass, CStrRef extendedclass);
  public: bool t_relaxngvalidate(CStrRef filename);
  public: bool t_relaxngvalidatesource(CStrRef source);
  public: Variant t_save(CStrRef file, int64_t options = 0);
  public: Variant t_savehtml();
  public: Variant t_savehtmlfile(CStrRef file);
  public: Variant t_savexml(CObjRef node = null_object, int64_t options = 0);
  public: bool t_schemavalidate(CStrRef filename);
  public: bool t_schemavalidatesource(CStrRef source);
  public: bool t_validate();
  public: Variant t_xinclude(int64_t options = 0);
  public: Variant t___get(Variant name);
  public: Variant t___set(Variant name, Variant value);
  public: bool t___isset(Variant name);



public:
  virtual p_DOMDocument doc() { return this;}
  bool m_formatoutput;
  bool m_validateonparse;
  bool m_resolveexternals;
  bool m_preservewhitespace;
  bool m_substituteentities;
  bool m_stricterror;
  bool m_recover;
  Array m_classmap;
  std::auto_ptr<XmlNodeSet> m_orphans;
  bool m_owner;
};

///////////////////////////////////////////////////////////////////////////////
// class DOMDocumentFragment

FORWARD_DECLARE_CLASS_BUILTIN(DOMDocumentFragment);
class c_DOMDocumentFragment : public c_DOMNode {
 public:
  DECLARE_CLASS(DOMDocumentFragment, DOMDocumentFragment, DOMNode)

  // need to implement
  public: c_DOMDocumentFragment(Class* cls = c_DOMDocumentFragment::s_cls);
  public: ~c_DOMDocumentFragment();
  public: void t___construct();
  public: bool t_appendxml(CStrRef data);



};

///////////////////////////////////////////////////////////////////////////////
// class DOMDocumentType

FORWARD_DECLARE_CLASS_BUILTIN(DOMDocumentType);
class c_DOMDocumentType : public c_DOMNode {
 public:
  DECLARE_CLASS(DOMDocumentType, DOMDocumentType, DOMNode)

  // need to implement
  public: c_DOMDocumentType(Class* cls = c_DOMDocumentType::s_cls);
  public: ~c_DOMDocumentType();
  public: void t___construct();
  public: Variant t___get(Variant name);
  public: Variant t___set(Variant name, Variant value);
  public: bool t___isset(Variant name);



};

///////////////////////////////////////////////////////////////////////////////
// class DOMElement

FORWARD_DECLARE_CLASS_BUILTIN(DOMElement);
class c_DOMElement : public c_DOMNode {
 public:
  DECLARE_CLASS(DOMElement, DOMElement, DOMNode)

  // need to implement
  public: c_DOMElement(Class* cls = c_DOMElement::s_cls);
  public: ~c_DOMElement();
  public: void t___construct(CStrRef name, CStrRef value = null_string, CStrRef namespaceuri = null_string);
  public: String t_getattribute(CStrRef name);
  public: Variant t_getattributenode(CStrRef name);
  public: Object t_getattributenodens(CStrRef namespaceuri, CStrRef localname);
  public: String t_getattributens(CStrRef namespaceuri, CStrRef localname);
  public: Object t_getelementsbytagname(CStrRef name);
  public: Object t_getelementsbytagnamens(CStrRef namespaceuri, CStrRef localname);
  public: bool t_hasattribute(CStrRef name);
  public: bool t_hasattributens(CStrRef namespaceuri, CStrRef localname);
  public: bool t_removeattribute(CStrRef name);
  public: Variant t_removeattributenode(CObjRef oldattr);
  public: Variant t_removeattributens(CStrRef namespaceuri, CStrRef localname);
  public: Variant t_setattribute(CStrRef name, CStrRef value);
  public: Variant t_setattributenode(CObjRef newattr);
  public: Variant t_setattributenodens(CObjRef newattr);
  public: Variant t_setattributens(CStrRef namespaceuri, CStrRef name, CStrRef value);
  public: Variant t_setidattribute(CStrRef name, bool isid);
  public: Variant t_setidattributenode(CObjRef idattr, bool isid);
  public: Variant t_setidattributens(CStrRef namespaceuri, CStrRef localname, bool isid);
  public: Variant t___get(Variant name);
  public: Variant t___set(Variant name, Variant value);
  public: bool t___isset(Variant name);



};

///////////////////////////////////////////////////////////////////////////////
// class DOMEntity

FORWARD_DECLARE_CLASS_BUILTIN(DOMEntity);
class c_DOMEntity : public c_DOMNode {
 public:
  DECLARE_CLASS(DOMEntity, DOMEntity, DOMNode)

  // need to implement
  public: c_DOMEntity(Class* cls = c_DOMEntity::s_cls);
  public: ~c_DOMEntity();
  public: void t___construct();
  public: Variant t___get(Variant name);
  public: Variant t___set(Variant name, Variant value);
  public: bool t___isset(Variant name);



};

///////////////////////////////////////////////////////////////////////////////
// class DOMEntityReference

FORWARD_DECLARE_CLASS_BUILTIN(DOMEntityReference);
class c_DOMEntityReference : public c_DOMNode {
 public:
  DECLARE_CLASS(DOMEntityReference, DOMEntityReference, DOMNode)

  // need to implement
  public: c_DOMEntityReference(Class* cls = c_DOMEntityReference::s_cls);
  public: ~c_DOMEntityReference();
  public: void t___construct(CStrRef name);



};

///////////////////////////////////////////////////////////////////////////////
// class DOMNotation

FORWARD_DECLARE_CLASS_BUILTIN(DOMNotation);
class c_DOMNotation : public c_DOMNode {
 public:
  DECLARE_CLASS(DOMNotation, DOMNotation, DOMNode)

  // need to implement
  public: c_DOMNotation(Class* cls = c_DOMNotation::s_cls);
  public: ~c_DOMNotation();
  public: void t___construct();
  public: Variant t___get(Variant name);
  public: Variant t___set(Variant name, Variant value);
  public: bool t___isset(Variant name);



};

///////////////////////////////////////////////////////////////////////////////
// class DOMProcessingInstruction

FORWARD_DECLARE_CLASS_BUILTIN(DOMProcessingInstruction);
class c_DOMProcessingInstruction : public c_DOMNode {
 public:
  DECLARE_CLASS(DOMProcessingInstruction, DOMProcessingInstruction, DOMNode)

  // need to implement
  public: c_DOMProcessingInstruction(Class* cls = c_DOMProcessingInstruction::s_cls);
  public: ~c_DOMProcessingInstruction();
  public: void t___construct(CStrRef name, CStrRef value = null_string);
  public: Variant t___get(Variant name);
  public: Variant t___set(Variant name, Variant value);
  public: bool t___isset(Variant name);



};

///////////////////////////////////////////////////////////////////////////////
// class DOMNodeIterator

FORWARD_DECLARE_CLASS_BUILTIN(DOMNodeIterator);
class c_DOMNodeIterator : public ExtObjectData, public Sweepable {
 public:
  DECLARE_CLASS(DOMNodeIterator, DOMNodeIterator, ObjectData)

  // need to implement
  public: c_DOMNodeIterator(Class* cls = c_DOMNodeIterator::s_cls);
  public: ~c_DOMNodeIterator();
  public: void t___construct();
  public: Variant t_current();
  public: Variant t_key();
  public: Variant t_next();
  public: Variant t_rewind();
  public: Variant t_valid();



public:
  void reset_iterator();
  void set_iterator(ObjectData* o, dom_iterable *objmap);

  Object m_o;
  dom_iterable *m_objmap;
  ArrayIter *m_iter;
  int m_index;
  Object m_curobj;
};

///////////////////////////////////////////////////////////////////////////////
// class DOMNamedNodeMap

FORWARD_DECLARE_CLASS_BUILTIN(DOMNamedNodeMap);
class c_DOMNamedNodeMap : public ExtObjectDataFlags<ObjectData::UseGet|ObjectData::UseSet|ObjectData::UseIsset>, public dom_iterable {
 public:
  DECLARE_CLASS(DOMNamedNodeMap, DOMNamedNodeMap, ObjectData)

  // need to implement
  public: c_DOMNamedNodeMap(Class* cls = c_DOMNamedNodeMap::s_cls);
  public: ~c_DOMNamedNodeMap();
  public: void t___construct();
  public: Variant t_getnameditem(CStrRef name);
  public: Variant t_getnameditemns(CStrRef namespaceuri, CStrRef localname);
  public: Variant t_item(int64_t index);
  public: Variant t___get(Variant name);
  public: Variant t___set(Variant name, Variant value);
  public: bool t___isset(Variant name);
  public: Variant t_getiterator();



};

///////////////////////////////////////////////////////////////////////////////
// class DOMNodeList

FORWARD_DECLARE_CLASS_BUILTIN(DOMNodeList);
class c_DOMNodeList : public ExtObjectDataFlags<ObjectData::UseGet|ObjectData::UseSet|ObjectData::UseIsset>, public dom_iterable {
 public:
  DECLARE_CLASS(DOMNodeList, DOMNodeList, ObjectData)

  // need to implement
  public: c_DOMNodeList(Class* cls = c_DOMNodeList::s_cls);
  public: ~c_DOMNodeList();
  public: void t___construct();
  public: Variant t_item(int64_t index);
  public: Variant t___get(Variant name);
  public: Variant t___set(Variant name, Variant value);
  public: bool t___isset(Variant name);
  public: Variant t_getiterator();



};

///////////////////////////////////////////////////////////////////////////////
// class DOMImplementation

FORWARD_DECLARE_CLASS_BUILTIN(DOMImplementation);
class c_DOMImplementation : public ExtObjectData {
 public:
  DECLARE_CLASS(DOMImplementation, DOMImplementation, ObjectData)

  // need to implement
  public: c_DOMImplementation(Class* cls = c_DOMImplementation::s_cls);
  public: ~c_DOMImplementation();
  public: void t___construct();
  public: Variant t_createdocument(CStrRef namespaceuri = null_string, CStrRef qualifiedname = null_string, CObjRef doctypeobj = null_object);
  public: Variant t_createdocumenttype(CStrRef qualifiedname = null_string, CStrRef publicid = null_string, CStrRef systemid = null_string);
  public: bool t_hasfeature(CStrRef feature, CStrRef version);



};

///////////////////////////////////////////////////////////////////////////////
// class DOMXPath

FORWARD_DECLARE_CLASS_BUILTIN(DOMXPath);
class c_DOMXPath : public ExtObjectDataFlags<ObjectData::UseGet|ObjectData::UseSet|ObjectData::UseIsset>, public Sweepable {
 public:
  DECLARE_CLASS(DOMXPath, DOMXPath, ObjectData)

  // need to implement
  public: c_DOMXPath(Class* cls = c_DOMXPath::s_cls);
  public: ~c_DOMXPath();
  public: void t___construct(CVarRef doc);
  public: Variant t_evaluate(CStrRef expr, CObjRef context = null_object);
  public: Variant t_query(CStrRef expr, CObjRef context = null_object);
  public: bool t_registernamespace(CStrRef prefix, CStrRef uri);
  public: Variant t_registerphpfunctions(CVarRef funcs = uninit_null());
  public: Variant t___get(Variant name);
  public: Variant t___set(Variant name, Variant value);
  public: bool t___isset(Variant name);



 public:
  xmlNodePtr m_node;
  p_DOMDocument m_doc;
  Array m_node_list;
  int m_registerPhpFunctions;
  Array m_registered_phpfunctions;
};

///////////////////////////////////////////////////////////////////////////////
}

#endif // incl_HPHP_EXT_DOMDOCUMENT_H_
