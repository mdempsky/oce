// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Adaptor3d_Surface_HeaderFile
#define _Adaptor3d_Surface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Adaptor3d_HSurface_HeaderFile
#include <Handle_Adaptor3d_HSurface.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _GeomAbs_SurfaceType_HeaderFile
#include <GeomAbs_SurfaceType.hxx>
#endif
#ifndef _Handle_Geom_BezierSurface_HeaderFile
#include <Handle_Geom_BezierSurface.hxx>
#endif
#ifndef _Handle_Geom_BSplineSurface_HeaderFile
#include <Handle_Geom_BSplineSurface.hxx>
#endif
#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
#endif
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Standard_DomainError;
class TColStd_Array1OfReal;
class Adaptor3d_HSurface;
class gp_Pnt;
class gp_Vec;
class gp_Pln;
class gp_Cylinder;
class gp_Cone;
class gp_Sphere;
class gp_Torus;
class Geom_BezierSurface;
class Geom_BSplineSurface;
class gp_Ax1;
class gp_Dir;
class Adaptor3d_HCurve;


//! Root class for surfaces on which geometric algorithms work. <br>
//! An adapted surface is an interface between the <br>
//! services provided by a surface and those required of <br>
//! the surface by algorithms which use it. <br>
//! A derived concrete class is provided: <br>
//! GeomAdaptor_Surface for a surface from the Geom package. <br>
//! The  Surface class describes  the standard behaviour <br>
//!          of a surface for generic algorithms. <br>
//! <br>
//!          The Surface can  be decomposed in intervals of any <br>
//!          continuity    in  U    and    V using  the  method <br>
//!          NbIntervals.  A current interval can be set.  Most <br>
//!          of the methods apply to the current interval. <br>
//!  Warning: All the methods are virtual and implemented with a <br>
//!          raise to allow to redefined only the methods realy <br>
//!          used. <br>
class Adaptor3d_Surface  {
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

  
  Standard_EXPORT   virtual  void Delete() ;
Standard_EXPORT virtual ~Adaptor3d_Surface(){Delete();}
  
  Standard_EXPORT   virtual  Standard_Real FirstUParameter() const;
  
  Standard_EXPORT   virtual  Standard_Real LastUParameter() const;
  
  Standard_EXPORT   virtual  Standard_Real FirstVParameter() const;
  
  Standard_EXPORT   virtual  Standard_Real LastVParameter() const;
  
  Standard_EXPORT   virtual  GeomAbs_Shape UContinuity() const;
  
  Standard_EXPORT   virtual  GeomAbs_Shape VContinuity() const;
  //! Returns the number of U intervals for  continuity <br>
//!          <S>. May be one if UContinuity(me) >= <S> <br>
  Standard_EXPORT   virtual  Standard_Integer NbUIntervals(const GeomAbs_Shape S) const;
  //! Returns the number of V intervals for  continuity <br>
//!          <S>. May be one if VContinuity(me) >= <S> <br>
  Standard_EXPORT   virtual  Standard_Integer NbVIntervals(const GeomAbs_Shape S) const;
  //! Returns the  intervals with the requested continuity <br>
//!          in the U direction. <br>
  Standard_EXPORT   virtual  void UIntervals(TColStd_Array1OfReal& T,const GeomAbs_Shape S) const;
  //! Returns the  intervals with the requested continuity <br>
//!          in the V direction. <br>
  Standard_EXPORT   virtual  void VIntervals(TColStd_Array1OfReal& T,const GeomAbs_Shape S) const;
  //! Returns    a  surface trimmed in the U direction <br>
//!           equivalent   of  <me>  between <br>
//!          parameters <First>  and <Last>. <Tol>  is used  to <br>
//!          test for 3d points confusion. <br>//! If <First> >= <Last> <br>
  Standard_EXPORT   virtual  Handle_Adaptor3d_HSurface UTrim(const Standard_Real First,const Standard_Real Last,const Standard_Real Tol) const;
  //! Returns    a  surface trimmed in the V direction  between <br>
//!          parameters <First>  and <Last>. <Tol>  is used  to <br>
//!          test for 3d points confusion. <br>//! If <First> >= <Last> <br>
  Standard_EXPORT   virtual  Handle_Adaptor3d_HSurface VTrim(const Standard_Real First,const Standard_Real Last,const Standard_Real Tol) const;
  
  Standard_EXPORT   virtual  Standard_Boolean IsUClosed() const;
  
  Standard_EXPORT   virtual  Standard_Boolean IsVClosed() const;
  
  Standard_EXPORT   virtual  Standard_Boolean IsUPeriodic() const;
  
  Standard_EXPORT   virtual  Standard_Real UPeriod() const;
  
  Standard_EXPORT   virtual  Standard_Boolean IsVPeriodic() const;
  
  Standard_EXPORT   virtual  Standard_Real VPeriod() const;
  //! Computes the point of parameters U,V on the surface. <br>
  Standard_EXPORT   virtual  gp_Pnt Value(const Standard_Real U,const Standard_Real V) const;
  //! Computes the point of parameters U,V on the surface. <br>
  Standard_EXPORT   virtual  void D0(const Standard_Real U,const Standard_Real V,gp_Pnt& P) const;
  //! Computes the point  and the first derivatives on <br>
//!  the surface. <br>//! Raised   if  the continuity  of   the  current <br>
//!  intervals is not C1. <br>
  Standard_EXPORT   virtual  void D1(const Standard_Real U,const Standard_Real V,gp_Pnt& P,gp_Vec& D1U,gp_Vec& D1V) const;
  //!  Computes   the point,  the  first  and  second <br>
//!  derivatives on the surface. <br>//! Raised  if   the   continuity   of the current <br>
//!  intervals is not C2. <br>
  Standard_EXPORT   virtual  void D2(const Standard_Real U,const Standard_Real V,gp_Pnt& P,gp_Vec& D1U,gp_Vec& D1V,gp_Vec& D2U,gp_Vec& D2V,gp_Vec& D2UV) const;
  //! Computes the point,  the first, second and third <br>
//!  derivatives on the surface. <br>//! Raised  if   the   continuity   of the current <br>
//!  intervals is not C3. <br>
  Standard_EXPORT   virtual  void D3(const Standard_Real U,const Standard_Real V,gp_Pnt& P,gp_Vec& D1U,gp_Vec& D1V,gp_Vec& D2U,gp_Vec& D2V,gp_Vec& D2UV,gp_Vec& D3U,gp_Vec& D3V,gp_Vec& D3UUV,gp_Vec& D3UVV) const;
  //!  Computes the derivative of order Nu in the direction U and Nv <br>
//!  in the direction V at the point P(U, V). <br>//! Raised if the current U  interval is not not CNu <br>
//!  and the current V interval is not CNv. <br>//! Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0. <br>
  Standard_EXPORT   virtual  gp_Vec DN(const Standard_Real U,const Standard_Real V,const Standard_Integer Nu,const Standard_Integer Nv) const;
  //!  Returns the parametric U  resolution corresponding <br>
//!         to the real space resolution <R3d>. <br>
  Standard_EXPORT   virtual  Standard_Real UResolution(const Standard_Real R3d) const;
  //!  Returns the parametric V  resolution corresponding <br>
//!         to the real space resolution <R3d>. <br>
  Standard_EXPORT   virtual  Standard_Real VResolution(const Standard_Real R3d) const;
  //! Returns the type of the surface : Plane, Cylinder, <br>
//!          Cone,      Sphere,        Torus,    BezierSurface, <br>
//!          BSplineSurface,               SurfaceOfRevolution, <br>
//!          SurfaceOfExtrusion, OtherSurface <br>
  Standard_EXPORT   virtual  GeomAbs_SurfaceType GetType() const;
  
  Standard_EXPORT   virtual  gp_Pln Plane() const;
  
  Standard_EXPORT   virtual  gp_Cylinder Cylinder() const;
  
  Standard_EXPORT   virtual  gp_Cone Cone() const;
  
  Standard_EXPORT   virtual  gp_Sphere Sphere() const;
  
  Standard_EXPORT   virtual  gp_Torus Torus() const;
  
  Standard_EXPORT   virtual  Standard_Integer UDegree() const;
  
  Standard_EXPORT   virtual  Standard_Integer NbUPoles() const;
  
  Standard_EXPORT   virtual  Standard_Integer VDegree() const;
  
  Standard_EXPORT   virtual  Standard_Integer NbVPoles() const;
  
  Standard_EXPORT   virtual  Standard_Integer NbUKnots() const;
  
  Standard_EXPORT   virtual  Standard_Integer NbVKnots() const;
  
  Standard_EXPORT   virtual  Standard_Boolean IsURational() const;
  
  Standard_EXPORT   virtual  Standard_Boolean IsVRational() const;
  
  Standard_EXPORT   virtual  Handle_Geom_BezierSurface Bezier() const;
  
  Standard_EXPORT   virtual  Handle_Geom_BSplineSurface BSpline() const;
  
  Standard_EXPORT   virtual  gp_Ax1 AxeOfRevolution() const;
  
  Standard_EXPORT   virtual  gp_Dir Direction() const;
  
  Standard_EXPORT   virtual  Handle_Adaptor3d_HCurve BasisCurve() const;
  
  Standard_EXPORT   virtual  Handle_Adaptor3d_HSurface BasisSurface() const;
  
  Standard_EXPORT   virtual  Standard_Real OffsetValue() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
