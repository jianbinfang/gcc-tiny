
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_pipeline_LinkFilter__
#define __gnu_xml_pipeline_LinkFilter__

#pragma interface

#include <gnu/xml/pipeline/EventFilter.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace pipeline
      {
          class EventConsumer;
          class LinkFilter;
      }
    }
  }
  namespace org
  {
    namespace xml
    {
      namespace sax
      {
          class Attributes;
      }
    }
  }
}

class gnu::xml::pipeline::LinkFilter : public ::gnu::xml::pipeline::EventFilter
{

public:
  LinkFilter();
  LinkFilter(::gnu::xml::pipeline::EventConsumer *);
  virtual ::java::util::Enumeration * getLinks();
  virtual void removeAllLinks();
  virtual void startElement(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::org::xml::sax::Attributes *);
private:
  ::java::lang::String * maybeAddLink(::java::lang::String *);
public:
  virtual void startDocument();
  virtual void endDocument();
private:
  ::java::util::Vector * __attribute__((aligned(__alignof__( ::gnu::xml::pipeline::EventFilter)))) vector;
  ::java::lang::String * baseURI;
  jboolean siteRestricted;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_pipeline_LinkFilter__
