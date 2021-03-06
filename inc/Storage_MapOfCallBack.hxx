// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Storage_MapOfCallBack_HeaderFile
#define _Storage_MapOfCallBack_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_Storage_TypedCallBack_HeaderFile
#include <Handle_Storage_TypedCallBack.hxx>
#endif
#ifndef _Handle_Storage_DataMapNodeOfMapOfCallBack_HeaderFile
#include <Handle_Storage_DataMapNodeOfMapOfCallBack.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class TCollection_AsciiString;
class Storage_TypedCallBack;
class Storage_DataMapNodeOfMapOfCallBack;
class Storage_DataMapIteratorOfMapOfCallBack;



class Storage_MapOfCallBack  : public TCollection_BasicMap {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   Storage_MapOfCallBack(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     Storage_MapOfCallBack& Assign(const Storage_MapOfCallBack& Other) ;
    Storage_MapOfCallBack& operator =(const Storage_MapOfCallBack& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~Storage_MapOfCallBack()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const TCollection_AsciiString& K,const Handle(Storage_TypedCallBack)& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const TCollection_AsciiString& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const TCollection_AsciiString& K) ;
  
  Standard_EXPORT    const Handle_Storage_TypedCallBack& Find(const TCollection_AsciiString& K) const;
   const Handle_Storage_TypedCallBack& operator()(const TCollection_AsciiString& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     Handle_Storage_TypedCallBack& ChangeFind(const TCollection_AsciiString& K) ;
    Handle_Storage_TypedCallBack& operator()(const TCollection_AsciiString& K) 
{
  return ChangeFind(K);
}





protected:





private:

  
  Standard_EXPORT   Storage_MapOfCallBack(const Storage_MapOfCallBack& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
