// File:      LDOMBasicString.hxx
// Created:   26.06.01 16:41:14
// Author:    Alexander GRIGORIEV
// Copyright: OpenCascade 2001


#ifndef LDOMBasicString_HeaderFile
#define LDOMBasicString_HeaderFile

#include <Standard_Type.hxx>
#include <Standard_Macro.hxx>
#include <TCollection_AsciiString.hxx>
#include <TCollection_ExtendedString.hxx>

class Handle(LDOM_MemManager);
class LDOM_NullPtr;
class TCollection_AsciiString;
class TCollection_ExtendedString;

//  Block of comments describing class LDOMBasicString
//

class LDOMBasicString 
{
  friend class LDOM_MemManager;
  friend class LDOM_Node;
 public:
  enum StringType {
    LDOM_NULL = 0,
    LDOM_Integer,
//    LDOM_Real,
    LDOM_AsciiFree,             // String not connected to any container
    LDOM_AsciiDoc,              // String connected to LDOM_Document (container)
    LDOM_AsciiDocClear,         // --"--"--, consists of only XML-valid chars
    LDOM_AsciiHashed            // String connected to hash table
  };

  Standard_EXPORT ~LDOMBasicString ();

  StringType Type       () const              { return myType; }

  Standard_EXPORT Standard_Boolean
        GetInteger      (Standard_Integer& aResult) const;
  //    Conversion to Integer (only for LDOM_Integer)

  const char *
        GetString       () const        { return myType == LDOM_Integer ||
                                                 myType == LDOM_NULL ?
                                            "" : (const char *) myVal.ptr; }
  //    Conversion to char * (only for LDOM_Ascii*)

  Standard_EXPORT Standard_Boolean
        equals          (const LDOMBasicString& anOther) const;
  //    Compare two strings by content

  Standard_EXPORT LDOMBasicString&
        operator =      (const LDOM_NullPtr *);

  Standard_EXPORT LDOMBasicString&
        operator =      (const LDOMBasicString& anOther);

  Standard_Boolean
        operator ==     (const LDOM_NullPtr *) const
                                                { return myType==LDOM_NULL; }
  Standard_Boolean
        operator !=     (const LDOM_NullPtr *) const
                                                { return myType!=LDOM_NULL; }

  Standard_Boolean
        operator ==     (const LDOMBasicString& anOther) const
        {
          return myType==anOther.myType && myVal.i==anOther.myVal.i;
        }

  Standard_Boolean
        operator !=     (const LDOMBasicString& anOther) const
        {
          return myType!=anOther.myType || myVal.i!=anOther.myVal.i;
        }

//      AGV auxiliary API
  Standard_EXPORT operator TCollection_AsciiString      () const;

  Standard_EXPORT operator TCollection_ExtendedString   () const;

  LDOMBasicString                 ()
    : myType (LDOM_NULL)             { myVal.ptr = NULL; }
  // Empty constructor

  Standard_EXPORT LDOMBasicString (const LDOMBasicString& anOther);
  // Copy constructor

  LDOMBasicString                 (const Standard_Integer aValue)
    : myType (LDOM_Integer)             { myVal.i = aValue; }

  Standard_EXPORT LDOMBasicString (const char           * aValue);
  //    Create LDOM_AsciiFree

  Standard_EXPORT LDOMBasicString (const char           * aValue,
                                   const Handle(LDOM_MemManager)& aDoc);
  //    Create LDOM_AsciiDoc

  Standard_EXPORT LDOMBasicString (const char             * aValue,
                                   const Standard_Integer aLen,
                                   const Handle(LDOM_MemManager)&   aDoc);
  //    Create LDOM_AsciiDoc

 protected:
  // ---------- PROTECTED METHODS ----------
  void            SetDirect       (const StringType aType, const char * aValue)
    { myType = aType; myVal.ptr = (void *) aValue; }
    

 protected:
  // ---------- PROTECTED FIELDS ----------

  StringType            myType;
  union {
    int         i;
    void        * ptr;
  }                     myVal;
  friend char * db_pretty_print (const LDOMBasicString *, int, char *);
};

#endif
