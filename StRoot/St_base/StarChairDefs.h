#ifndef __StarChairDefs_h
#include <assert.h>
#include "TDatime.h"
#define __StarChairDefs_h
#define DEBUGTABLE(STRUCT)						\
  TDatime t[2];								\
  if (St_db_Maker::GetValidity(table,t) > 0) {				\
    Int_t Nrows = table->GetNRows();					\
    LOG_WARN << "St_" << # STRUCT << "C::instance found table " << table->GetName() \
	     << " with NRows = " << Nrows << " in db" << endm;		\
    LOG_WARN << "Validity:" << t[0].GetDate() << "/" << t[0].GetTime()	\
	     << " -----   " << t[1].GetDate() << "/" << t[1].GetTime() << endm;	\
    if (Nrows > 10) Nrows = 10;						\
    if (table->GetRowSize() < 256) table->Print(0,Nrows);		\
  }
#define MakeString(PATH) # PATH
#define MakeChairInstance(STRUCT,PATH)					\
ClassImp(St_ ## STRUCT ## C); \
St_ ## STRUCT ## C *St_ ## STRUCT ## C::fgInstance = 0; \
St_ ## STRUCT ## C *St_ ## STRUCT ## C::instance() { \
    if (fgInstance) return fgInstance;					\
    St_ ## STRUCT *table = (St_ ## STRUCT *) StMaker::GetChain()->GetDataBase(MakeString(PATH)); \
    if (! table) {							\
      LOG_WARN << "St_" << # STRUCT << "C::instance " << MakeString(PATH) << "\twas not found" << endm; \
      assert(table);							\
    }									\
    DEBUGTABLE(STRUCT);							\
    fgInstance = new St_ ## STRUCT ## C(table);				\
    return fgInstance;							\
  }
#define MakeChairOptionalInstance(STRUCT,PATH)			\
  ClassImp(St_ ## STRUCT ## C);						\
  St_ ## STRUCT ## C *St_ ## STRUCT ## C::fgInstance = 0;		\
  St_ ## STRUCT ## C *St_ ## STRUCT ## C::instance() {			\
    if (fgInstance) return fgInstance;					\
    St_ ## STRUCT *table = (St_ ## STRUCT *) StMaker::GetChain()->GetDataBase(MakeString(PATH)); \
    if (! table) {							\
      table = new St_ ## STRUCT(# STRUCT ,0);				\
      table->Mark();							\
      LOG_WARN << "St_" << # STRUCT << "C::instance create optional " << # STRUCT << " table" << endm; \
    }									\
    assert(table);	DEBUGTABLE(STRUCT);				\
    fgInstance = new St_ ## STRUCT ## C(table);				\
    return fgInstance;							\
  }
#define MakeChairInstance2(STRUCT,CLASS,PATH)			\
  ClassImp(CLASS);						\
  CLASS *CLASS::fgInstance = 0;						\
  CLASS *CLASS::instance() {						\
    if (fgInstance) return fgInstance;					\
    St_ ## STRUCT *table = (St_ ## STRUCT *) StMaker::GetChain()->GetDataBase(MakeString(PATH)); \
    assert(table);	  DEBUGTABLE(STRUCT);				\
    fgInstance = new CLASS(table);					\
    return fgInstance;							\
  }
#endif