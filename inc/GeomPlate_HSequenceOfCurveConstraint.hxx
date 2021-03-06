// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomPlate_HSequenceOfCurveConstraint_HeaderFile
#define _GeomPlate_HSequenceOfCurveConstraint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_GeomPlate_HSequenceOfCurveConstraint_HeaderFile
#include <Handle_GeomPlate_HSequenceOfCurveConstraint.hxx>
#endif

#ifndef _GeomPlate_SequenceOfCurveConstraint_HeaderFile
#include <GeomPlate_SequenceOfCurveConstraint.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_GeomPlate_CurveConstraint_HeaderFile
#include <Handle_GeomPlate_CurveConstraint.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class GeomPlate_CurveConstraint;
class GeomPlate_SequenceOfCurveConstraint;



class GeomPlate_HSequenceOfCurveConstraint : public MMgt_TShared {

public:

  
      GeomPlate_HSequenceOfCurveConstraint();
  
        Standard_Boolean IsEmpty() const;
  
        Standard_Integer Length() const;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void Append(const Handle(GeomPlate_CurveConstraint)& anItem) ;
  
  Standard_EXPORT     void Append(const Handle(GeomPlate_HSequenceOfCurveConstraint)& aSequence) ;
  
  Standard_EXPORT     void Prepend(const Handle(GeomPlate_CurveConstraint)& anItem) ;
  
  Standard_EXPORT     void Prepend(const Handle(GeomPlate_HSequenceOfCurveConstraint)& aSequence) ;
  
  Standard_EXPORT     void Reverse() ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(GeomPlate_CurveConstraint)& anItem) ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(GeomPlate_HSequenceOfCurveConstraint)& aSequence) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(GeomPlate_CurveConstraint)& anItem) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(GeomPlate_HSequenceOfCurveConstraint)& aSequence) ;
  
  Standard_EXPORT     void Exchange(const Standard_Integer anIndex,const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT     Handle_GeomPlate_HSequenceOfCurveConstraint Split(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void SetValue(const Standard_Integer anIndex,const Handle(GeomPlate_CurveConstraint)& anItem) ;
  
  Standard_EXPORT    const Handle_GeomPlate_CurveConstraint& Value(const Standard_Integer anIndex) const;
  
  Standard_EXPORT     Handle_GeomPlate_CurveConstraint& ChangeValue(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer fromIndex,const Standard_Integer toIndex) ;
  
       const GeomPlate_SequenceOfCurveConstraint& Sequence() const;
  
        GeomPlate_SequenceOfCurveConstraint& ChangeSequence() ;
  
  Standard_EXPORT     Handle_GeomPlate_HSequenceOfCurveConstraint ShallowCopy() const;




  DEFINE_STANDARD_RTTI(GeomPlate_HSequenceOfCurveConstraint)

protected:




private: 


GeomPlate_SequenceOfCurveConstraint mySequence;


};

#define Item Handle_GeomPlate_CurveConstraint
#define Item_hxx <GeomPlate_CurveConstraint.hxx>
#define TheSequence GeomPlate_SequenceOfCurveConstraint
#define TheSequence_hxx <GeomPlate_SequenceOfCurveConstraint.hxx>
#define TCollection_HSequence GeomPlate_HSequenceOfCurveConstraint
#define TCollection_HSequence_hxx <GeomPlate_HSequenceOfCurveConstraint.hxx>
#define Handle_TCollection_HSequence Handle_GeomPlate_HSequenceOfCurveConstraint
#define TCollection_HSequence_Type_() GeomPlate_HSequenceOfCurveConstraint_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


// other Inline functions and methods (like "C++: function call" methods)
inline Handle_GeomPlate_HSequenceOfCurveConstraint ShallowCopy(const Handle_GeomPlate_HSequenceOfCurveConstraint& me) {
 return me->ShallowCopy();
}



#endif
