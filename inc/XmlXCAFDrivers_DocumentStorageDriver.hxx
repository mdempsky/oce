// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlXCAFDrivers_DocumentStorageDriver_HeaderFile
#define _XmlXCAFDrivers_DocumentStorageDriver_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_XmlXCAFDrivers_DocumentStorageDriver_HeaderFile
#include <Handle_XmlXCAFDrivers_DocumentStorageDriver.hxx>
#endif

#ifndef _XmlDrivers_DocumentStorageDriver_HeaderFile
#include <XmlDrivers_DocumentStorageDriver.hxx>
#endif
#ifndef _Handle_XmlMDF_ADriverTable_HeaderFile
#include <Handle_XmlMDF_ADriverTable.hxx>
#endif
#ifndef _Handle_CDM_MessageDriver_HeaderFile
#include <Handle_CDM_MessageDriver.hxx>
#endif
class TCollection_ExtendedString;
class XmlMDF_ADriverTable;
class CDM_MessageDriver;


//! storage driver of a  XS document <br>
class XmlXCAFDrivers_DocumentStorageDriver : public XmlDrivers_DocumentStorageDriver {

public:

  
  Standard_EXPORT   XmlXCAFDrivers_DocumentStorageDriver(const TCollection_ExtendedString& theCopyright);
  
  Standard_EXPORT   virtual  Handle_XmlMDF_ADriverTable AttributeDrivers(const Handle(CDM_MessageDriver)& theMsgDriver) ;




  DEFINE_STANDARD_RTTI(XmlXCAFDrivers_DocumentStorageDriver)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
