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

#ifndef incl_HPHP_EXT_SOAP_H_
#define incl_HPHP_EXT_SOAP_H_

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include "hphp/runtime/base/base-includes.h"
#include "hphp/runtime/ext/soap/soap.h"
namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

bool f_use_soap_error_handler(bool handler = true);
bool f_is_soap_fault(CVarRef fault);
int64_t f__soap_active_version();

///////////////////////////////////////////////////////////////////////////////
// class SoapServer

FORWARD_DECLARE_CLASS_BUILTIN(SoapServer);
class c_SoapServer : public ExtObjectData {
 public:
  DECLARE_CLASS(SoapServer, SoapServer, ObjectData)

  // need to implement
  public: c_SoapServer(Class* cls = c_SoapServer::s_cls);
  public: ~c_SoapServer();
  public: void t___construct(CVarRef wsdl, CArrRef options = null_array);
  public: void t_setclass(int _argc, CStrRef name, CArrRef _argv = null_array);
  public: void t_setobject(CObjRef obj);
  public: void t_addfunction(CVarRef func);
  public: Variant t_getfunctions();
  public: void t_handle(CStrRef request = null_string);
  public: void t_setpersistence(int64_t mode);
  public: void t_fault(CVarRef code, CStrRef fault, CStrRef actor = null_string, CVarRef detail = uninit_null(), CStrRef name = null_string);
  public: void t_addsoapheader(CObjRef fault);



  public: int                        m_type;
  public: soapFunctions              m_soap_functions;
  public: soapClass                  m_soap_class;
  public: Object                     m_soap_object;
  public: String                     m_actor;
  public: String                     m_uri;
  public: int                        m_version;
  public: sdl                       *m_sdl;
  public: xmlCharEncodingHandlerPtr  m_encoding;
  public: Array                      m_classmap;
  public: encodeMap                 *m_typemap;
  public: int                        m_features;
  public: Array                      m_soap_headers;
  public: int                        m_send_errors;
};

///////////////////////////////////////////////////////////////////////////////
// class SoapClient

FORWARD_DECLARE_CLASS_BUILTIN(SoapClient);
class c_SoapClient : public ExtObjectDataFlags<ObjectData::HasCall> {
 public:
  DECLARE_CLASS(SoapClient, SoapClient, ObjectData)

  // need to implement
  public: c_SoapClient(Class* cls = c_SoapClient::s_cls);
  public: ~c_SoapClient();
  public: void t___construct(CVarRef wsdl, CArrRef options = null_array);
  public: Variant t___call(Variant name, Variant args);
  public: Variant t___soapcall(CStrRef name, CArrRef args, CArrRef options = null_array, CVarRef input_headers = null_variant, VRefParam output_headers = uninit_null());
  public: Variant t___getlastrequest();
  public: Variant t___getlastresponse();
  public: Variant t___getlastrequestheaders();
  public: Variant t___getlastresponseheaders();
  public: Variant t___getfunctions();
  public: Variant t___gettypes();
  public: Variant t___dorequest(CStrRef buf, CStrRef location, CStrRef action, int64_t version, bool oneway = false);
  public: Variant t___setcookie(CStrRef name, CStrRef value = null_string);
  public: Variant t___setlocation(CStrRef new_location = null_string);
  public: bool t___setsoapheaders(CVarRef headers = null_variant);



  public: int                         m_soap_version;
  public: sdl                        *m_sdl;
  public: xmlCharEncodingHandlerPtr   m_encoding;
  public: encodeMap                  *m_typemap;
  public: Array                       m_classmap;
  public: int                         m_features;
  public: String                      m_uri;
  public: String                      m_location;
  public: int                         m_style;
  public: int                         m_use;
  public: String                      m_login;
  public: String                      m_password;
  public: int                         m_authentication;
  public: bool                        m_digest;
  public: String                      m_proxy_host;
  public: int                         m_proxy_port;
  public: String                      m_proxy_login;
  public: String                      m_proxy_password;
  public: int                         m_connection_timeout;
  public: int                         m_max_redirect;
  public: bool                        m_use11;
  public: String                      m_user_agent;
  public: bool                        m_compression;
  public: Variant                     m_default_headers;
  public: Variant                     m_cookies;
  public: bool                        m_exceptions;
  public: Variant                     m_soap_fault;
  public: bool                        m_trace;
  public: Variant                     m_last_request;
  public: Variant                     m_last_response;
  public: Variant                     m_last_request_headers;
  public: Variant                     m_last_response_headers;

  private: Array                      m_stream_context_options;
};

///////////////////////////////////////////////////////////////////////////////
// class SoapVar

FORWARD_DECLARE_CLASS_BUILTIN(SoapVar);
class c_SoapVar : public ExtObjectData {
 public:
  DECLARE_CLASS(SoapVar, SoapVar, ObjectData)

  // need to implement
  public: c_SoapVar(Class* cls = c_SoapVar::s_cls);
  public: ~c_SoapVar();
  public: void t___construct(CVarRef data, CVarRef type, CStrRef type_name = null_string, CStrRef type_namespace = null_string, CStrRef node_name = null_string, CStrRef node_namespace = null_string);



  public: Variant m_value;
  public: int64_t   m_type;
  public: String  m_stype;
  public: String  m_ns;
  public: String  m_name;
  public: String  m_namens;
};

///////////////////////////////////////////////////////////////////////////////
// class SoapParam

FORWARD_DECLARE_CLASS_BUILTIN(SoapParam);
class c_SoapParam : public ExtObjectData {
 public:
  DECLARE_CLASS(SoapParam, SoapParam, ObjectData)

  // need to implement
  public: c_SoapParam(Class* cls = c_SoapParam::s_cls);
  public: ~c_SoapParam();
  public: void t___construct(CVarRef data, CStrRef name);



  public: String  m_name;
  public: String  m_data;
};

///////////////////////////////////////////////////////////////////////////////
// class SoapHeader

FORWARD_DECLARE_CLASS_BUILTIN(SoapHeader);
class c_SoapHeader : public ExtObjectData {
 public:
  DECLARE_CLASS(SoapHeader, SoapHeader, ObjectData)

  // need to implement
  public: c_SoapHeader(Class* cls = c_SoapHeader::s_cls);
  public: ~c_SoapHeader();
  public: void t___construct(CStrRef ns, CStrRef name, CVarRef data = uninit_null(), bool mustunderstand = false, CVarRef actor = uninit_null());



  public: String  m_namespace;
  public: String  m_name;
  public: Variant m_data;
  public: bool    m_mustUnderstand;
  public: Variant m_actor;
};

///////////////////////////////////////////////////////////////////////////////
}

#endif // incl_HPHP_EXT_SOAP_H_
