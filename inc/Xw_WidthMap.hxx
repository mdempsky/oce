// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Xw_WidthMap_HeaderFile
#define _Xw_WidthMap_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Xw_WidthMap_HeaderFile
#include <Handle_Xw_WidthMap.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Transient_HeaderFile
#include <Standard_Transient.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_Aspect_WidthMap_HeaderFile
#include <Handle_Aspect_WidthMap.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Aspect_WidthMapDefinitionError;
class Aspect_BadAccess;
class Xw_GraphicDevice;
class Aspect_WidthMapEntry;
class Aspect_WidthMap;


//! This class defines a WidthMap object. <br>
class Xw_WidthMap : public Standard_Transient {

public:

  //! Creates a WidthMap with unallocated WidthMapEntry. <br>
//!  Warning: Raises if WidthMap creation failed according <br>
//!	    to the supported hardware <br>
  Standard_EXPORT   Xw_WidthMap(const Standard_CString Connexion);
  //! Modifies an entry already defined  or Add the Entry <br>
//!	    in the type map <me> if it don't exist. <br>
//!  Warning: Raises if WidthMap size is exceeded, <br>
//!	   or WidthMap is not defined properly, <br>
//!	   or WidthMapEntry Index is out of range according <br>
//!	   to the supported hardware <br>
  Standard_EXPORT   virtual  void SetEntry(const Aspect_WidthMapEntry& Entry) ;
  //! Modifies all entries from the New Widthmap <br>
//!  Warning: Raises if WidthMap size is exceeded, <br>
//!         or WidthMap is not defined properly, <br>
//!         or One of new WidthMapEntry Index is out of range according <br>
//!         to the supported hardware <br>
  Standard_EXPORT   virtual  void SetEntries(const Handle(Aspect_WidthMap)& Widthmap) ;
  //! Destroies the Widthmap <br>
  Standard_EXPORT   virtual  void Destroy() ;
~Xw_WidthMap()
{
  Destroy();
}
  //! Returns the Number of Free Widths in the Widthmap <br>
//!	    depending of the HardWare <br>
//!  Warning: Raises if WidthMap is not defined properly <br>
  Standard_EXPORT     Standard_Integer FreeWidths() const;

friend class Xw_GraphicDevice;


  DEFINE_STANDARD_RTTI(Xw_WidthMap)

protected:

  
  Standard_EXPORT   Xw_WidthMap();
  //! Returns extended data typemap structure pointer. <br>
  Standard_EXPORT     Standard_Address ExtendedWidthMap() const;



private: 


Standard_Address MyExtendedDisplay;
Standard_Address MyExtendedWidthMap;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
