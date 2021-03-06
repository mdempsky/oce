// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepElement_CurveElementFreedom_HeaderFile
#define _StepElement_CurveElementFreedom_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _StepData_SelectType_HeaderFile
#include <StepData_SelectType.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_StepData_SelectMember_HeaderFile
#include <Handle_StepData_SelectMember.hxx>
#endif
#ifndef _StepElement_EnumeratedCurveElementFreedom_HeaderFile
#include <StepElement_EnumeratedCurveElementFreedom.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class Standard_Transient;
class StepData_SelectMember;
class TCollection_HAsciiString;


//! Representation of STEP SELECT type CurveElementFreedom <br>
class StepElement_CurveElementFreedom  : public StepData_SelectType {
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

  //! Empty constructor <br>
  Standard_EXPORT   StepElement_CurveElementFreedom();
  //! Recognizes a kind of CurveElementFreedom select type <br>
//!          return 0 <br>
  Standard_EXPORT     Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! Recognizes a items of select member CurveElementFreedomMember <br>
//!          1 -> EnumeratedCurveElementFreedom <br>
//!          2 -> ApplicationDefinedDegreeOfFreedom <br>
//!          0 else <br>
  Standard_EXPORT   virtual  Standard_Integer CaseMem(const Handle(StepData_SelectMember)& ent) const;
  //! Returns a new select member the type CurveElementFreedomMember <br>
  Standard_EXPORT   virtual  Handle_StepData_SelectMember NewMember() const;
  //! Set Value for EnumeratedCurveElementFreedom <br>
  Standard_EXPORT     void SetEnumeratedCurveElementFreedom(const StepElement_EnumeratedCurveElementFreedom aVal) ;
  //! Returns Value as EnumeratedCurveElementFreedom (or Null if another type) <br>
  Standard_EXPORT     StepElement_EnumeratedCurveElementFreedom EnumeratedCurveElementFreedom() const;
  //! Set Value for ApplicationDefinedDegreeOfFreedom <br>
  Standard_EXPORT     void SetApplicationDefinedDegreeOfFreedom(const Handle(TCollection_HAsciiString)& aVal) ;
  //! Returns Value as ApplicationDefinedDegreeOfFreedom (or Null if another type) <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString ApplicationDefinedDegreeOfFreedom() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
