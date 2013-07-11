//
// File generated by rootcint at Fri Jan 30 14:29:17 2004.
// Do NOT change. Changes will be lost next time file is generated
//

#include "RConfig.h"
#if !defined(R__ACCESS_IN_SYMBOL)
//Break the privacy of classes -- Disabled for the moment
#define private public
#define protected public
#endif

#include "StTabdict.h"
#include "TClass.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

#include "RtypesImp.h"

#include "TVectorProxy.h"

namespace ROOT {
   namespace Shadow {
      #if !(defined(R__ACCESS_IN_SYMBOL) || defined(R__USE_SHADOW_CLASS))
      typedef ::Tab_st Tab_st;
      #else
      class Tab_st  {
         public:
         //friend XX;
         float pt; //
         int gid; //
      };
      #endif

   } // Of namespace ROOT::Shadow
} // Of namespace ROOT

namespace ROOT {
   void Tab_st_ShowMembers(void *obj, TMemberInspector &R__insp, char *R__parent);
   void Tab_st_Dictionary();
   TClass *Tab_st_IsA(const void*);
   void *new_Tab_st(void *p = 0);
   void *newArray_Tab_st(Long_t size);
   void delete_Tab_st(void *p);
   void deleteArray_Tab_st(void *p);
   void destruct_Tab_st(void *p);

   // Function generating the singleton type initializer
   TGenericClassInfo *GenerateInitInstance(const Tab_st*)
   {
      // Make sure the shadow class has the right sizeof
      Assert(sizeof(::Tab_st) == sizeof(ROOT::Shadow::Tab_st));
      Tab_st *ptr = 0;
      static ROOT::TGenericClassInfo 
         instance("Tab_st", "StTab.h", 5,
                  typeid(Tab_st), DefineBehavior(ptr, ptr),
                  (void*)&Tab_st_ShowMembers, &Tab_st_Dictionary, &Tab_st_IsA, 4,
                  sizeof(Tab_st) );
      instance.SetNew(&new_Tab_st);
      instance.SetNewArray(&newArray_Tab_st);
      instance.SetDelete(&delete_Tab_st);
      instance.SetDeleteArray(&deleteArray_Tab_st);
      instance.SetDestructor(&destruct_Tab_st);
      return &instance;
   }
   // Static variable to force the class initialization
   static ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance((const Tab_st*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   void Tab_st_Dictionary() {
      ROOT::GenerateInitInstance((const Tab_st*)0x0)->GetClass();
   }

}

namespace ROOT {
   void StTab_ShowMembers(void *obj, TMemberInspector &R__insp, char *R__parent);
   TClass *StTab_IsA(const void*);
   void *new_StTab(void *p = 0);
   void *newArray_StTab(Long_t size);
   void delete_StTab(void *p);
   void deleteArray_StTab(void *p);
   void destruct_StTab(void *p);

   // Function generating the singleton type initializer
   TGenericClassInfo *GenerateInitInstance(const StTab*)
   {
      StTab *ptr = 0;
      static ROOT::TGenericClassInfo 
         instance("StTab", StTab::Class_Version(), "StTab.h", 12,
                  typeid(StTab), DefineBehavior(ptr, ptr),
                  &::StTab::Dictionary, &StTab_IsA, 1,
                  sizeof(StTab) );
      instance.SetNew(&new_StTab);
      instance.SetNewArray(&newArray_StTab);
      instance.SetDelete(&delete_StTab);
      instance.SetDeleteArray(&deleteArray_StTab);
      instance.SetDestructor(&destruct_StTab);
      return &instance;
   }
   // Static variable to force the class initialization
   static ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance((const StTab*)0x0); R__UseDummy(_R__UNIQUE_(Init));
}

//______________________________________________________________________________
TClass *StTab::fgIsA = 0;  // static to hold class pointer

//______________________________________________________________________________
const char *StTab::Class_Name()
{
   return "StTab";
}

//______________________________________________________________________________
const char *StTab::ImplFileName()
{
   return ROOT::GenerateInitInstance((const StTab*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int StTab::ImplFileLine()
{
   return ROOT::GenerateInitInstance((const StTab*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
void StTab::Dictionary()
{
   fgIsA = ROOT::GenerateInitInstance((const StTab*)0x0)->GetClass();
}

//______________________________________________________________________________
TClass *StTab::Class()
{
   if (!fgIsA) fgIsA = ROOT::GenerateInitInstance((const StTab*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
void StTab::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
      // Inspect the data members of an object of class StTab.

      TClass *R__cl = StTab::IsA();
      Int_t R__ncp = strlen(R__parent);
      if (R__ncp || R__cl || R__insp.IsA()) { }
      TTable::ShowMembers(R__insp, R__parent);
}

namespace ROOT {
   // Return the actual TClass for the object argument
   TClass *StTab_IsA(const void *obj) {
      return ((::StTab*)obj)->IsA();
   }
   // Wrappers around operator new
   void *new_StTab(void *p) {
      return  p ? new(p) ::StTab : new ::StTab;
   }
   void *newArray_StTab(Long_t size) {
      return new ::StTab[size];
   }
   // Wrapper around operator delete
   void delete_StTab(void *p) {
      delete ((::StTab*)p);
   }
   void deleteArray_StTab(void *p) {
      delete [] ((::StTab*)p);
   }
   void destruct_StTab(void *p) {
      typedef ::StTab current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::StTab

//______________________________________________________________________________
namespace ROOT {
   void Tab_st_ShowMembers(void *obj, TMemberInspector &R__insp, char *R__parent)
   {
      // Inspect the data members of an object of class Tab_st.

      typedef ROOT::Shadow::Tab_st ShadowClass;
      ShadowClass *sobj = (ShadowClass*)obj;
      if (sobj) { } // Dummy usage just in case there is no datamember.

      TClass *R__cl  = ROOT::GenerateInitInstance((const Tab_st*)0x0)->GetClass();
      Int_t R__ncp = strlen(R__parent);
      if (R__ncp || R__cl || R__insp.IsA()) { }
      R__insp.Inspect(R__cl, R__parent, "pt", &sobj->pt);
      R__insp.Inspect(R__cl, R__parent, "gid", &sobj->gid);
   }

}

namespace ROOT {
   // Return the actual TClass for the object argument
   TClass *Tab_st_IsA(const void *obj) {
      return GetROOT()->GetClass(typeid(*(::Tab_st*)obj));
   }
   // Wrappers around operator new
   void *new_Tab_st(void *p) {
      return  p ? ::new((ROOT::TOperatorNewHelper*)p) ::Tab_st : new ::Tab_st;
   }
   void *newArray_Tab_st(Long_t size) {
      return new ::Tab_st[size];
   }
   // Wrapper around operator delete
   void delete_Tab_st(void *p) {
      delete ((::Tab_st*)p);
   }
   void deleteArray_Tab_st(void *p) {
      delete [] ((::Tab_st*)p);
   }
   void destruct_Tab_st(void *p) {
      typedef ::Tab_st current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Tab_st

/********************************************************
* StTabdict.cxx
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#undef free
#endif

extern "C" void G__cpp_reset_tagtableStTabdict();

extern "C" void G__set_cpp_environmentStTabdict() {
  G__add_compiledheader("TROOT.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("StTab.h");
  G__cpp_reset_tagtableStTabdict();
}
class G__StTabdictdOcxx_tag {};

void* operator new(size_t size,G__StTabdictdOcxx_tag* p) {
  if(p && G__PVOID!=G__getgvp()) return((void*)p);
#ifndef G__ROOT
  return(malloc(size));
#else
  return(::operator new(size));
#endif
}

/* dummy, for exception */
#ifdef G__EH_DUMMY_DELETE
void operator delete(void *p,G__StTabdictdOcxx_tag* x) {
  if((long)p==G__getgvp() && G__PVOID!=G__getgvp()) return;
#ifndef G__ROOT
  free(p);
#else
  ::operator delete(p);
#endif
}
#endif

static void G__operator_delete(void *p) {
  if((long)p==G__getgvp() && G__PVOID!=G__getgvp()) return;
#ifndef G__ROOT
  free(p);
#else
  ::operator delete(p);
#endif
}

void G__DELDMY_StTabdictdOcxx() { G__operator_delete(0); }

extern "C" int G__cpp_dllrevStTabdict() { return(30051515); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* Tab_st */
// automatic default constructor
static int G__StTabdict_121_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   Tab_st *p;
   if(G__getaryconstruct()) p=new Tab_st[G__getaryconstruct()];
   else p=::new((G__StTabdictdOcxx_tag*)G__getgvp()) Tab_st;
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__StTabdictLN_Tab_st);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__StTabdict_121_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   Tab_st *p;
   void *xtmp = (void*)G__int(libp->para[0]);
   p=new Tab_st(*(Tab_st*)xtmp);
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__StTabdictLN_Tab_st);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
typedef Tab_st G__TTab_st;
static int G__StTabdict_121_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(0==G__getstructoffset()) return(1);
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (Tab_st *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         ((Tab_st *)((G__getstructoffset())+sizeof(Tab_st)*i))->~G__TTab_st();
   else {
     long G__Xtmp=G__getgvp();
     G__setgvp(G__PVOID);
     ((Tab_st *)(G__getstructoffset()))->~G__TTab_st();
     G__setgvp(G__Xtmp);
     G__operator_delete((void*)G__getstructoffset());
   }
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* StTab */
static int G__StTabdict_176_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   G__letint(result7,67,(long)StTab::TableDictionary());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTabdict_176_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   StTab *p=NULL;
   if(G__getaryconstruct()) p=new StTab[G__getaryconstruct()];
   else                    p=new StTab;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__StTabdictLN_StTab);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTabdict_176_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   StTab *p=NULL;
      p = new StTab((const Text_t*)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__StTabdictLN_StTab);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTabdict_176_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   StTab *p=NULL;
      p = new StTab((Int_t)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__StTabdictLN_StTab);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTabdict_176_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   StTab *p=NULL;
      p = new StTab((const Text_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__StTabdictLN_StTab);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTabdict_176_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
   G__letint(result7,85,(long)((const StTab*)(G__getstructoffset()))->GetTable((Int_t)G__int(libp->para[0])));
      break;
   case 0:
   G__letint(result7,85,(long)((const StTab*)(G__getstructoffset()))->GetTable());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTabdict_176_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        const Tab_st& obj=((StTab*)(G__getstructoffset()))->operator[]((Int_t)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTabdict_176_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        const Tab_st& obj=((const StTab*)(G__getstructoffset()))->operator[]((Int_t)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTabdict_176_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   G__letint(result7,85,(long)((const StTab*)(G__getstructoffset()))->begin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTabdict_176_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   G__letint(result7,85,(long)((const StTab*)(G__getstructoffset()))->end());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTabdict_176_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   G__letint(result7,85,(long)StTab::Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTabdict_176_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   G__letint(result7,67,(long)StTab::Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTabdict_176_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)StTab::Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTabdict_176_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      StTab::Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTabdict_176_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   G__letint(result7,85,(long)((const StTab*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTabdict_176_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((StTab*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTabdict_176_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((StTab*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTabdict_176_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((StTab*)(G__getstructoffset()))->StreamerNVirtual(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTabdict_176_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   G__letint(result7,67,(long)StTab::DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTabdict_176_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)StTab::ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTabdict_176_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   G__letint(result7,67,(long)StTab::ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTabdict_176_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)StTab::DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__StTabdict_176_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   StTab *p;
   void *xtmp = (void*)G__int(libp->para[0]);
   p=new StTab(*(StTab*)xtmp);
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__StTabdictLN_StTab);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
typedef StTab G__TStTab;
static int G__StTabdict_176_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(0==G__getstructoffset()) return(1);
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (StTab *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (StTab *)((G__getstructoffset())+sizeof(StTab)*i);
   else  delete (StTab *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* Tab_st */

/* StTab */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncStTabdict {
 public:
  G__Sizep2memfuncStTabdict() {p=&G__Sizep2memfuncStTabdict::sizep2memfunc;}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncStTabdict::*p)();
};

size_t G__get_sizep2memfuncStTabdict()
{
  G__Sizep2memfuncStTabdict a;
  G__setsizep2memfunc((int)a.sizep2memfunc());
  return((size_t)a.sizep2memfunc());
}


/*********************************************************
* virtual base class offset calculation interface
*********************************************************/

   /* Setting up class inheritance */

/*********************************************************
* Inheritance information setup/
*********************************************************/
extern "C" void G__cpp_setup_inheritanceStTabdict() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__StTabdictLN_StTab))) {
     StTab *G__Lderived;
     G__Lderived=(StTab*)0x1000;
     {
       TTable *G__Lpbase=(TTable*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__StTabdictLN_StTab),G__get_linked_tagnum(&G__StTabdictLN_TTable),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TDataSet *G__Lpbase=(TDataSet*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__StTabdictLN_StTab),G__get_linked_tagnum(&G__StTabdictLN_TDataSet),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__StTabdictLN_StTab),G__get_linked_tagnum(&G__StTabdictLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__StTabdictLN_StTab),G__get_linked_tagnum(&G__StTabdictLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableStTabdict() {

   /* Setting up typedef entry */
   G__search_typename2("Int_t",105,-1,0,
-1);
   G__setnewtype(-1,"Signed integer 4 bytes (int)",0);
   G__search_typename2("Text_t",99,-1,0,
-1);
   G__setnewtype(-1,"General string (char)",0);
   G__search_typename2("Version_t",115,-1,0,
-1);
   G__setnewtype(-1,"Class version identifier (short)",0);
   G__search_typename2("vector<Long_t>",117,G__get_linked_tagnum(&G__StTabdictLN_vectorlElongcOallocatorlElonggRsPgR),0,-1);
   G__setnewtype(-1,"// @(#)root/base:$Name:  $:$Id: StTabdict.cxx,v 1.1 2004/10/06 16:46:29 fisyak Exp $",0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__StTabdictLN_reverse_iteratorlEvectorlElongcOallocatorlElonggRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__StTabdictLN_vectorlElongcOallocatorlElonggRsPgR));
   G__setnewtype(-1,"// @(#)root/base:$Name:  $:$Id: StTabdict.cxx,v 1.1 2004/10/06 16:46:29 fisyak Exp $",0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__StTabdictLN_reverse_iteratorlEvectorlElongcOallocatorlElonggRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__StTabdictLN_vectorlElongcOallocatorlElonggRsPgR));
   G__setnewtype(-1,"// @(#)root/base:$Name:  $:$Id: StTabdict.cxx,v 1.1 2004/10/06 16:46:29 fisyak Exp $",0);
   G__search_typename2("vector<long>",117,G__get_linked_tagnum(&G__StTabdictLN_vectorlElongcOallocatorlElonggRsPgR),0,-1);
   G__setnewtype(-1,"// @(#)root/base:$Name:  $:$Id: StTabdict.cxx,v 1.1 2004/10/06 16:46:29 fisyak Exp $",0);
   G__search_typename2("iterator",85,G__get_linked_tagnum(&G__StTabdictLN_Tab_st),0,G__get_linked_tagnum(&G__StTabdictLN_StTab));
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* Tab_st */
static void G__setup_memvarTab_st(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__StTabdictLN_Tab_st));
   { Tab_st *p; p=(Tab_st*)0x1000; if (p) { }
   G__memvar_setup((void*)((long)(&p->pt)-(long)(p)),102,0,0,-1,-1,-1,1,"pt=",0,(char*)NULL);
   G__memvar_setup((void*)((long)(&p->gid)-(long)(p)),105,0,0,-1,-1,-1,1,"gid=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* StTab */
static void G__setup_memvarStTab(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__StTabdictLN_StTab));
   { StTab *p; p=(StTab*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__StTabdictLN_TTableDescriptor),-1,-2,2,"fgColDescriptors=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__StTabdictLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarStTabdict() {
}
/***********************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
***********************************************************/

/*********************************************************
* Member function information setup for each class
*********************************************************/
static void G__setup_memfuncTab_st(void) {
   /* Tab_st */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__StTabdictLN_Tab_st));
   // automatic default constructor
   G__memfunc_setup("Tab_st",605,G__StTabdict_121_0_0,(int)('i'),G__get_linked_tagnum(&G__StTabdictLN_Tab_st),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("Tab_st",605,G__StTabdict_121_1_0,(int)('i'),G__get_linked_tagnum(&G__StTabdictLN_Tab_st),-1,0,1,1,1,0,"u 'Tab_st' - 11 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~Tab_st",731,G__StTabdict_121_2_0,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncStTab(void) {
   /* StTab */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__StTabdictLN_StTab));
   G__memfunc_setup("TableDictionary",1534,G__StTabdict_176_0_0,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDescriptorPointer",2080,(G__InterfaceMethod)NULL,85,G__get_linked_tagnum(&G__StTabdictLN_TTableDescriptor),-1,0,0,1,2,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDescriptorPointer",2092,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"U 'TTableDescriptor' - 0 - list",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("StTab",478,G__StTabdict_176_3_0,105,G__get_linked_tagnum(&G__StTabdictLN_StTab),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("StTab",478,G__StTabdict_176_4_0,105,G__get_linked_tagnum(&G__StTabdictLN_StTab),-1,0,1,1,1,0,"C - 'Text_t' 10 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("StTab",478,G__StTabdict_176_5_0,105,G__get_linked_tagnum(&G__StTabdictLN_StTab),-1,0,1,1,1,0,"i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("StTab",478,G__StTabdict_176_6_0,105,G__get_linked_tagnum(&G__StTabdictLN_StTab),-1,0,2,1,1,0,
"C - 'Text_t' 10 - name i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTable",776,G__StTabdict_176_7_0,85,G__get_linked_tagnum(&G__StTabdictLN_Tab_st),-1,0,1,1,1,8,"i - 'Int_t' 0 0 i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator[]",1060,G__StTabdict_176_8_0,117,G__get_linked_tagnum(&G__StTabdictLN_Tab_st),-1,1,1,1,1,0,"i - 'Int_t' 0 - i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator[]",1060,G__StTabdict_176_9_0,117,G__get_linked_tagnum(&G__StTabdictLN_Tab_st),-1,1,1,1,1,9,"i - 'Int_t' 0 - i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("begin",517,G__StTabdict_176_0_1,85,G__get_linked_tagnum(&G__StTabdictLN_Tab_st),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("end",311,G__StTabdict_176_1_1,85,G__get_linked_tagnum(&G__StTabdictLN_Tab_st),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__StTabdict_176_2_1,85,G__get_linked_tagnum(&G__StTabdictLN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__StTabdict_176_3_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__StTabdict_176_4_1,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__StTabdict_176_5_1,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__StTabdict_176_6_1,85,G__get_linked_tagnum(&G__StTabdictLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__StTabdict_176_7_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__StTabdict_176_8_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("StreamerNVirtual",1656,G__StTabdict_176_9_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__StTabdict_176_0_2,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__StTabdict_176_1_2,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__StTabdict_176_2_2,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__StTabdict_176_3_2,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("StTab",478,G__StTabdict_176_4_2,(int)('i'),G__get_linked_tagnum(&G__StTabdictLN_StTab),-1,0,1,1,1,0,"u 'StTab' - 11 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~StTab",604,G__StTabdict_176_5_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncStTabdict() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
static void G__cpp_setup_global0() {

   /* Setting up global variables */
   G__resetplocal();

}

static void G__cpp_setup_global1() {
}

static void G__cpp_setup_global2() {

   G__resetglobalenv();
}
extern "C" void G__cpp_setup_globalStTabdict() {
  G__cpp_setup_global0();
  G__cpp_setup_global1();
  G__cpp_setup_global2();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
static void G__cpp_setup_func0() {
   G__lastifuncposition();

}

static void G__cpp_setup_func1() {
}

static void G__cpp_setup_func2() {
}

static void G__cpp_setup_func3() {

   G__resetifuncposition();
}

extern "C" void G__cpp_setup_funcStTabdict() {
  G__cpp_setup_func0();
  G__cpp_setup_func1();
  G__cpp_setup_func2();
  G__cpp_setup_func3();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__StTabdictLN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__StTabdictLN_TBuffer = { "TBuffer" , 99 , -1 };
G__linked_taginfo G__StTabdictLN_TMemberInspector = { "TMemberInspector" , 99 , -1 };
G__linked_taginfo G__StTabdictLN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__StTabdictLN_TNamed = { "TNamed" , 99 , -1 };
G__linked_taginfo G__StTabdictLN_Tab_st = { "Tab_st" , 115 , -1 };
G__linked_taginfo G__StTabdictLN_TTable = { "TTable" , 99 , -1 };
G__linked_taginfo G__StTabdictLN_TDataSet = { "TDataSet" , 99 , -1 };
G__linked_taginfo G__StTabdictLN_TTableDescriptor = { "TTableDescriptor" , 99 , -1 };
G__linked_taginfo G__StTabdictLN_vectorlElongcOallocatorlElonggRsPgR = { "vector<long,allocator<long> >" , 99 , -1 };
G__linked_taginfo G__StTabdictLN_reverse_iteratorlEvectorlElongcOallocatorlElonggRsPgRcLcLiteratorgR = { "reverse_iterator<vector<long,allocator<long> >::iterator>" , 99 , -1 };
G__linked_taginfo G__StTabdictLN_StTab = { "StTab" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableStTabdict() {
  G__StTabdictLN_TClass.tagnum = -1 ;
  G__StTabdictLN_TBuffer.tagnum = -1 ;
  G__StTabdictLN_TMemberInspector.tagnum = -1 ;
  G__StTabdictLN_TObject.tagnum = -1 ;
  G__StTabdictLN_TNamed.tagnum = -1 ;
  G__StTabdictLN_Tab_st.tagnum = -1 ;
  G__StTabdictLN_TTable.tagnum = -1 ;
  G__StTabdictLN_TDataSet.tagnum = -1 ;
  G__StTabdictLN_TTableDescriptor.tagnum = -1 ;
  G__StTabdictLN_vectorlElongcOallocatorlElonggRsPgR.tagnum = -1 ;
  G__StTabdictLN_reverse_iteratorlEvectorlElongcOallocatorlElonggRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__StTabdictLN_StTab.tagnum = -1 ;
}


extern "C" void G__cpp_setup_tagtableStTabdict() {

   /* Setting up class,struct,union tag entry */
   G__get_linked_tagnum(&G__StTabdictLN_TClass);
   G__get_linked_tagnum(&G__StTabdictLN_TBuffer);
   G__get_linked_tagnum(&G__StTabdictLN_TMemberInspector);
   G__get_linked_tagnum(&G__StTabdictLN_TObject);
   G__get_linked_tagnum(&G__StTabdictLN_TNamed);
   G__tagtable_setup(G__get_linked_tagnum(&G__StTabdictLN_Tab_st),sizeof(Tab_st),-1,262144,(char*)NULL,G__setup_memvarTab_st,G__setup_memfuncTab_st);
   G__get_linked_tagnum(&G__StTabdictLN_TTable);
   G__get_linked_tagnum(&G__StTabdictLN_TDataSet);
   G__get_linked_tagnum(&G__StTabdictLN_TTableDescriptor);
   G__get_linked_tagnum(&G__StTabdictLN_vectorlElongcOallocatorlElonggRsPgR);
   G__get_linked_tagnum(&G__StTabdictLN_reverse_iteratorlEvectorlElongcOallocatorlElonggRsPgRcLcLiteratorgR);
   G__tagtable_setup(G__get_linked_tagnum(&G__StTabdictLN_StTab),sizeof(StTab),-1,127232,"Particles or cells table for jet finder   ",G__setup_memvarStTab,G__setup_memfuncStTab);
}
extern "C" void G__cpp_setupStTabdict(void) {
  G__check_setup_version(30051515,"G__cpp_setupStTabdict()");
  G__set_cpp_environmentStTabdict();
  G__cpp_setup_tagtableStTabdict();

  G__cpp_setup_inheritanceStTabdict();

  G__cpp_setup_typetableStTabdict();

  G__cpp_setup_memvarStTabdict();

  G__cpp_setup_memfuncStTabdict();
  G__cpp_setup_globalStTabdict();
  G__cpp_setup_funcStTabdict();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncStTabdict();
  return;
}
class G__cpp_setup_initStTabdict {
  public:
    G__cpp_setup_initStTabdict() { G__add_setup_func("StTabdict",(G__incsetup)(&G__cpp_setupStTabdict)); G__call_setup_funcs(); }
   ~G__cpp_setup_initStTabdict() { G__remove_setup_func("StTabdict"); }
};
G__cpp_setup_initStTabdict G__cpp_setup_initializerStTabdict;
