// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_IDMapOfPaveBlockIMapOfInteger_HeaderFile
#define _BOPTools_IDMapOfPaveBlockIMapOfInteger_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_BOPTools_IndexedDataMapNodeOfIDMapOfPaveBlockIMapOfInteger_HeaderFile
#include <Handle_BOPTools_IndexedDataMapNodeOfIDMapOfPaveBlockIMapOfInteger.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_OutOfRange;
class Standard_NoSuchObject;
class BOPTools_PaveBlock;
class TColStd_IndexedMapOfInteger;
class BOPTools_PaveBlockMapHasher;
class BOPTools_IndexedDataMapNodeOfIDMapOfPaveBlockIMapOfInteger;



class BOPTools_IDMapOfPaveBlockIMapOfInteger  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   BOPTools_IDMapOfPaveBlockIMapOfInteger(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     BOPTools_IDMapOfPaveBlockIMapOfInteger& Assign(const BOPTools_IDMapOfPaveBlockIMapOfInteger& Other) ;
    BOPTools_IDMapOfPaveBlockIMapOfInteger& operator =(const BOPTools_IDMapOfPaveBlockIMapOfInteger& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~BOPTools_IDMapOfPaveBlockIMapOfInteger()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Integer Add(const BOPTools_PaveBlock& K,const TColStd_IndexedMapOfInteger& I) ;
  
  Standard_EXPORT     void Substitute(const Standard_Integer I,const BOPTools_PaveBlock& K,const TColStd_IndexedMapOfInteger& T) ;
  
  Standard_EXPORT     void RemoveLast() ;
  
  Standard_EXPORT     Standard_Boolean Contains(const BOPTools_PaveBlock& K) const;
  
  Standard_EXPORT    const BOPTools_PaveBlock& FindKey(const Standard_Integer I) const;
  
  Standard_EXPORT    const TColStd_IndexedMapOfInteger& FindFromIndex(const Standard_Integer I) const;
   const TColStd_IndexedMapOfInteger& operator ()(const Standard_Integer I) const
{
  return FindFromIndex(I);
}
  
  Standard_EXPORT     TColStd_IndexedMapOfInteger& ChangeFromIndex(const Standard_Integer I) ;
    TColStd_IndexedMapOfInteger& operator ()(const Standard_Integer I) 
{
  return ChangeFromIndex(I);
}
  
  Standard_EXPORT     Standard_Integer FindIndex(const BOPTools_PaveBlock& K) const;
  
  Standard_EXPORT    const TColStd_IndexedMapOfInteger& FindFromKey(const BOPTools_PaveBlock& K) const;
  
  Standard_EXPORT     TColStd_IndexedMapOfInteger& ChangeFromKey(const BOPTools_PaveBlock& K) ;





protected:





private:

  
  Standard_EXPORT   BOPTools_IDMapOfPaveBlockIMapOfInteger(const BOPTools_IDMapOfPaveBlockIMapOfInteger& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
