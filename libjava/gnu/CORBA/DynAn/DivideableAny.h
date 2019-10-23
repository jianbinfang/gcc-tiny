
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_DynAn_DivideableAny__
#define __gnu_CORBA_DynAn_DivideableAny__

#pragma interface

#include <gnu/CORBA/DynAn/AbstractAny.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
      namespace DynAn
      {
          class DivideableAny;
          class gnuDynAnyFactory;
      }
    }
  }
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class ORB;
          class Object;
          class TypeCode;
      }
      namespace DynamicAny
      {
          class DynAny;
      }
    }
  }
}

class gnu::CORBA::DynAn::DivideableAny : public ::gnu::CORBA::DynAn::AbstractAny
{

public:
  DivideableAny(::org::omg::CORBA::TypeCode *, ::org::omg::CORBA::TypeCode *, ::gnu::CORBA::DynAn::gnuDynAnyFactory *, ::org::omg::CORBA::ORB *);
  virtual jboolean next();
  virtual void rewind();
  virtual jboolean seek(jint);
public: // actually protected
  virtual ::org::omg::DynamicAny::DynAny * focused();
public:
  virtual jint component_count();
  virtual ::org::omg::CORBA::Any * get_any();
  virtual jboolean get_boolean();
  virtual jchar get_char();
  virtual jdouble get_double();
  virtual jfloat get_float();
  virtual jint get_long();
  virtual jlong get_longlong();
  virtual jbyte get_octet();
  virtual ::org::omg::CORBA::Object * get_reference();
  virtual jshort get_short();
  virtual ::java::lang::String * get_string();
  virtual ::org::omg::CORBA::TypeCode * get_typecode();
  virtual jint get_ulong();
  virtual jlong get_ulonglong();
  virtual jshort get_ushort();
  virtual ::java::io::Serializable * get_val();
  virtual jchar get_wchar();
  virtual ::java::lang::String * get_wstring();
  virtual void insert_any(::org::omg::CORBA::Any *);
  virtual void insert_boolean(jboolean);
  virtual void insert_char(jchar);
  virtual void insert_double(jdouble);
  virtual void insert_float(jfloat);
  virtual void insert_long(jint);
  virtual void insert_longlong(jlong);
  virtual void insert_octet(jbyte);
  virtual void insert_reference(::org::omg::CORBA::Object *);
  virtual void insert_short(jshort);
  virtual void insert_string(::java::lang::String *);
  virtual void insert_typecode(::org::omg::CORBA::TypeCode *);
  virtual void insert_ulong(jint);
  virtual void insert_ulonglong(jlong);
  virtual void insert_ushort(jshort);
  virtual void insert_val(::java::io::Serializable *);
  virtual void insert_wchar(jchar);
  virtual void insert_wstring(::java::lang::String *);
  virtual ::org::omg::DynamicAny::DynAny * get_dyn_any();
  virtual void insert_dyn_any(::org::omg::DynamicAny::DynAny *);
  virtual ::org::omg::DynamicAny::DynAny * current_component();
  virtual void destroy();
  virtual ::org::omg::CORBA::Any * to_any() = 0;
  virtual jboolean equal(::org::omg::DynamicAny::DynAny *);
private:
  static const jlong serialVersionUID = 1LL;
public: // actually protected
  JArray< ::org::omg::DynamicAny::DynAny * > * __attribute__((aligned(__alignof__( ::gnu::CORBA::DynAn::AbstractAny)))) array;
  jint pos;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_DynAn_DivideableAny__
