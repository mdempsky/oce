// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Dico_DictionaryOfTransient_HeaderFile
#define _Dico_DictionaryOfTransient_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Dico_DictionaryOfTransient_HeaderFile
#include <Handle_Dico_DictionaryOfTransient.hxx>
#endif

#ifndef _Standard_Character_HeaderFile
#include <Standard_Character.hxx>
#endif
#ifndef _Handle_Dico_DictionaryOfTransient_HeaderFile
#include <Handle_Dico_DictionaryOfTransient.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Dico_StackItemOfDictionaryOfTransient_HeaderFile
#include <Handle_Dico_StackItemOfDictionaryOfTransient.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_Transient;
class Standard_NoSuchObject;
class Dico_IteratorOfDictionaryOfTransient;
class Dico_StackItemOfDictionaryOfTransient;
class TCollection_AsciiString;



class Dico_DictionaryOfTransient : public MMgt_TShared {

public:

  
  Standard_EXPORT   Dico_DictionaryOfTransient();
  
  Standard_EXPORT     Standard_Boolean HasItem(const Standard_CString name,const Standard_Boolean exact = Standard_False) const;
  
  Standard_EXPORT     Standard_Boolean HasItem(const TCollection_AsciiString& name,const Standard_Boolean exact = Standard_True) const;
  
  Standard_EXPORT    const Handle_Standard_Transient& Item(const Standard_CString name,const Standard_Boolean exact = Standard_True) const;
  
  Standard_EXPORT    const Handle_Standard_Transient& Item(const TCollection_AsciiString& name,const Standard_Boolean exact = Standard_True) const;
  
  Standard_EXPORT     Standard_Boolean GetItem(const Standard_CString name,Handle(Standard_Transient)& anitem,const Standard_Boolean exact = Standard_True) const;
  
  Standard_EXPORT     Standard_Boolean GetItem(const TCollection_AsciiString& name,Handle(Standard_Transient)& anitem,const Standard_Boolean exact = Standard_True) const;
  
  Standard_EXPORT     void SetItem(const Standard_CString name,const Handle(Standard_Transient)& anitem,const Standard_Boolean exact = Standard_True) ;
  
  Standard_EXPORT     void SetItem(const TCollection_AsciiString& name,const Handle(Standard_Transient)& anitem,const Standard_Boolean exact = Standard_True) ;
  
  Standard_EXPORT     Handle_Standard_Transient& NewItem(const Standard_CString name,Standard_Boolean& isvalued,const Standard_Boolean exact = Standard_True) ;
  
  Standard_EXPORT     Handle_Standard_Transient& NewItem(const TCollection_AsciiString& name,Standard_Boolean& isvalued,const Standard_Boolean exact = Standard_True) ;
  
  Standard_EXPORT     Standard_Boolean RemoveItem(const Standard_CString name,const Standard_Boolean cln = Standard_True,const Standard_Boolean exact = Standard_True) ;
  
  Standard_EXPORT     Standard_Boolean RemoveItem(const TCollection_AsciiString& name,const Standard_Boolean cln = Standard_True,const Standard_Boolean exact = Standard_True) ;
  
  Standard_EXPORT     void Clean() ;
  
  Standard_EXPORT     Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     Handle_Dico_DictionaryOfTransient Copy() const;
  
  Standard_EXPORT     Standard_Boolean Complete(Handle(Dico_DictionaryOfTransient)& acell) const;


friend class Dico_IteratorOfDictionaryOfTransient;


  DEFINE_STANDARD_RTTI(Dico_DictionaryOfTransient)

protected:




private: 

  
  Standard_EXPORT     void SetChar(const Standard_Character car) ;
  
  Standard_EXPORT     Standard_Boolean HasSub() const;
  
  Standard_EXPORT     Handle_Dico_DictionaryOfTransient Sub() const;
  
  Standard_EXPORT     Standard_Boolean HasNext() const;
  
  Standard_EXPORT     Handle_Dico_DictionaryOfTransient Next() const;
  
  Standard_EXPORT     void SetSub(const Handle(Dico_DictionaryOfTransient)& acell) ;
  
  Standard_EXPORT     void SetNext(const Handle(Dico_DictionaryOfTransient)& acell) ;
  
  Standard_EXPORT     void SearchCell(const Standard_CString name,const Standard_Integer lmax,const Standard_Character car,const Standard_Integer level,Handle(Dico_DictionaryOfTransient)& acell,Standard_Integer& reslev,Standard_Integer& stat) const;
  
  Standard_EXPORT     void NewCell(const Standard_CString name,const Standard_Integer namlen,Handle(Dico_DictionaryOfTransient)& acell,const Standard_Integer reslev,const Standard_Integer stat) ;
  
  Standard_EXPORT     Standard_Boolean HasIt() const;
  
  Standard_EXPORT    const Handle_Standard_Transient& It() const;
  
  Standard_EXPORT     Handle_Standard_Transient& ItAdr() ;
  
  Standard_EXPORT     void SetIt(const Handle(Standard_Transient)& anitem) ;
  
  Standard_EXPORT     void DeclIt() ;
  
  Standard_EXPORT     void RemoveIt() ;
  
  Standard_EXPORT     Standard_Character CellChar() const;
  
  Standard_EXPORT     void GetCopied(const Handle(Dico_DictionaryOfTransient)& fromcell) ;

Standard_Character thecars[4];
Handle_Dico_DictionaryOfTransient thesub;
Handle_Dico_DictionaryOfTransient thenext;
Handle_Standard_Transient theitem;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
