// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TCollection_BaseSequence_HeaderFile
#define _TCollection_BaseSequence_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;


//! Definition of a base class for all instanciations <br>
//!          of sequence. <br>
//! <br>
//!          The methods : Clear, Remove accepts a pointer to a <br>
//!          function  to use  to delete the  nodes. This allow <br>
//!          proper    call of  the  destructor  on  the Items. <br>
//!          Without adding a  virtual function pointer to each <br>
//!          node or each sequence. <br>
class TCollection_BaseSequence  {
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

  //! returns True if the sequence <me> contains no elements. <br>
        Standard_Boolean IsEmpty() const;
  //! Returns  the  number  of element(s) in the <br>
//! sequence.  Returns zero if the sequence is empty. <br>
        Standard_Integer Length() const;
  //! Reverses the order of items on <me>. <br>
//!  Example: <br>
//! before <br>
//!   me = (A B C) <br>
//! after <br>
//!   me = (C B A) <br>
  Standard_EXPORT     void Reverse() ;
  //! Swaps  elements  which    are  located  at <br>
//! positions <I> and <J> in <me>. <br>
//! Raises an exception if I or J is out of bound. <br>
//!  Example: <br>
//! before <br>
//!   me = (A B C), I = 1, J = 3 <br>
//! after <br>
//!   me = (C B A) <br>
  Standard_EXPORT     void Exchange(const Standard_Integer I,const Standard_Integer J) ;





protected:

  //! Creation of an empty sequence. <br>
  Standard_EXPORT   TCollection_BaseSequence();
  
  Standard_EXPORT     void Clear(const Standard_Address DelNode) ;
  
  Standard_EXPORT     void PAppend(const Standard_Address Node) ;
  //! Concatenates <S> at the end of <me>. <br>
//! <S> is cleared. <br>
//!  Example: <br>
//! before <br>
//!   me = (A B C) <br>
//!   S  = (D E F) <br>
//! after <br>
//!   me = (A B C D E F) <br>
//!   S  = () <br>
  Standard_EXPORT     void PAppend(TCollection_BaseSequence& S) ;
  
  Standard_EXPORT     void PPrepend(const Standard_Address Node) ;
  //! Concatenates <S> at the beginning of <me>. <br>
//! <S> is cleared. <br>
//!  Example: <br>
//! before <br>
//! me = (A B C) S =  (D E F) <br>
//! after me = (D E F A B C) <br>
//! S = () <br>
  Standard_EXPORT     void PPrepend(TCollection_BaseSequence& S) ;
  
  Standard_EXPORT     void PInsertAfter(const Standard_Integer Index,const Standard_Address Node) ;
  //! Inserts the sequence <S> in <me> after the <br>
//! position <Index>. <S> is cleared. <br>
//! Raises an exception if the index is out of bound. <br>
//!  Example: <br>
//! before <br>
//!   me = (A B C), Index = 3, S = (D E F) <br>
//! after <br>
//!   me = (A B C D E F) <br>
//!   S  = () <br>
  Standard_EXPORT     void PInsertAfter(const Standard_Integer Index,TCollection_BaseSequence& S) ;
  //! Keeps in <me> the items 1 to <Index>-1 and <br>
//! puts  in  <Sub> the  items <Index>  to the end. <br>
//!  Example: <br>
//! before <br>
//!   me = (A B C D) ,Index = 3 <br>
//! after <br>
//!   me  = (A B) <br>
//!   Sub = (C D) <br>
  Standard_EXPORT     void PSplit(const Standard_Integer Index,TCollection_BaseSequence& Sub) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer Index,const Standard_Address DelNode) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex,const Standard_Address DelNode) ;
  //! Returns the node at position <index>. <br>
  Standard_EXPORT     Standard_Address Find(const Standard_Integer Index) const;


Standard_Address FirstItem;
Standard_Address LastItem;
Standard_Address CurrentItem;
Standard_Integer CurrentIndex;
Standard_Integer Size;


private:

  //! Creation by copy of existing Sequence. <br>
//!  Warning: This constructor prints a warning message. <br>
//! We recommand to use the operator =. <br>
  Standard_EXPORT   TCollection_BaseSequence(const TCollection_BaseSequence& Other);
  //! Clear all fields. <br>
//! <br>
  Standard_EXPORT     void Nullify() ;




};


#include <TCollection_BaseSequence.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
