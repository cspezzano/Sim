#ifndef TRAJECTORY_H
#define TRAJECTORY_H

#include "TObject.h"
#include "Riostream.h"
#include "TMath.h"

//***************************************************************************************************************************************
//* (Description)*
//*              *
//*              *
//*              *
//*              *
//*              *
//*              *
//****************************************************************************************************************************************

class Trajectory : public TObject 
{
public:
  Trajectory();                                           //Def constructor. All data members initialized to 0
  Trajectory(double,double,double,double,double,int);     //Std constructor. Origin point, direction theta, phi
  virtual ~Trajectory();                                  //Destructor

  unsigned int  GetID(){return fID;} 
  void GetDirection(double*);                             //It takes a pointer to double array and it modiphy
  void GetOrigin(double*);                                //It takes a pointer to double array and it modiphy
  void GetParametricPointEvaluation(double,double*);      //It takes a real number and pointer to array. It makes a parametric evaluation of the trajectory in a point.

  void SetNewOrigin(double);                              //It assignes new values to position's data members (x,y,z)
  void SetNewDirection(double,double);                    //It assignes new values to direction's data members (th,ph)

  void SetNewOriginPoint(double,double,double);
  void PrintStatus();

private:

  unsigned int fID;
  double fX;       				         //coordinata x nel sistema del riferimento del laboratorio
  double fY;                                             //coordinata y nel sistema del riferimento del laboratorio
  double fZ;                                             //coordinata z nel sistema del riferimento del laboratorio
  
  double fTh;                                            //angolo rispetto all'asse del sistema di cilindri coassiali che corrisponde a z
  double fPh;                                            //angolo polare                                              

ClassDef(Trajectory,1)
};

#endif

