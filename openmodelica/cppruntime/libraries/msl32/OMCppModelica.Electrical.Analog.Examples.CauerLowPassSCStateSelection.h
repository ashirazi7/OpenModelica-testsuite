#pragma once
#include "OMCppModelica.Electrical.Analog.Examples.CauerLowPassSC.h"

/*****************************************************************************
*
* Simulation code to initialize the Modelica system
*
*****************************************************************************/
class CauerLowPassSCStateSelection: virtual public  CauerLowPassSC
{
public:
  CauerLowPassSCStateSelection(IGlobalSettings* globalSettings, boost::shared_ptr<IAlgLoopSolverFactory> nonlinsolverfactory, boost::shared_ptr<ISimData> sim_data, boost::shared_ptr<ISimVars> sim_vars);
  virtual ~CauerLowPassSCStateSelection();
  int getDimStateSets() const;
  int getDimStates(unsigned int index) const;
  int getDimCanditates(unsigned int index) const ;
  int getDimDummyStates(unsigned int index) const ;
  void getStates(unsigned int index,double* z);
  void setStates(unsigned int index,const double* z);
  void getStateCanditates(unsigned int index,double* z);
  bool getAMatrix(unsigned int index, DynArrayDim2<int>& A);
  void setAMatrix(unsigned int index, DynArrayDim2<int>& A);
  bool getAMatrix(unsigned int index, DynArrayDim1<int>& A);
  void setAMatrix(unsigned int index, DynArrayDim1<int>& A);
  
protected:
  void initialize();
};