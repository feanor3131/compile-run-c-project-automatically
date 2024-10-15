// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME LinkDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "tree.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *Data__Dictionary();
   static void Data__TClassManip(TClass*);
   static void *new_Data_(void *p = 0);
   static void *newArray_Data_(Long_t size, void *p);
   static void delete_Data_(void *p);
   static void deleteArray_Data_(void *p);
   static void destruct_Data_(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Data_*)
   {
      ::Data_ *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Data_));
      static ::ROOT::TGenericClassInfo 
         instance("Data_", "tree.h", 13,
                  typeid(::Data_), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &Data__Dictionary, isa_proxy, 4,
                  sizeof(::Data_) );
      instance.SetNew(&new_Data_);
      instance.SetNewArray(&newArray_Data_);
      instance.SetDelete(&delete_Data_);
      instance.SetDeleteArray(&deleteArray_Data_);
      instance.SetDestructor(&destruct_Data_);

      ::ROOT::AddClassAlternate("Data_","Data");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Data_*)
   {
      return GenerateInitInstanceLocal((::Data_*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Data_*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Data__Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Data_*)0x0)->GetClass();
      Data__TClassManip(theClass);
   return theClass;
   }

   static void Data__TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *Energy__Dictionary();
   static void Energy__TClassManip(TClass*);
   static void *new_Energy_(void *p = 0);
   static void *newArray_Energy_(Long_t size, void *p);
   static void delete_Energy_(void *p);
   static void deleteArray_Energy_(void *p);
   static void destruct_Energy_(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Energy_*)
   {
      ::Energy_ *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Energy_));
      static ::ROOT::TGenericClassInfo 
         instance("Energy_", "tree.h", 23,
                  typeid(::Energy_), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &Energy__Dictionary, isa_proxy, 0,
                  sizeof(::Energy_) );
      instance.SetNew(&new_Energy_);
      instance.SetNewArray(&newArray_Energy_);
      instance.SetDelete(&delete_Energy_);
      instance.SetDeleteArray(&deleteArray_Energy_);
      instance.SetDestructor(&destruct_Energy_);

      ::ROOT::AddClassAlternate("Energy_","Energy");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Energy_*)
   {
      return GenerateInitInstanceLocal((::Energy_*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Energy_*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Energy__Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Energy_*)0x0)->GetClass();
      Energy__TClassManip(theClass);
   return theClass;
   }

   static void Energy__TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_Data_(void *p) {
      return  p ? new(p) ::Data_ : new ::Data_;
   }
   static void *newArray_Data_(Long_t nElements, void *p) {
      return p ? new(p) ::Data_[nElements] : new ::Data_[nElements];
   }
   // Wrapper around operator delete
   static void delete_Data_(void *p) {
      delete ((::Data_*)p);
   }
   static void deleteArray_Data_(void *p) {
      delete [] ((::Data_*)p);
   }
   static void destruct_Data_(void *p) {
      typedef ::Data_ current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Data_

namespace ROOT {
   // Wrappers around operator new
   static void *new_Energy_(void *p) {
      return  p ? new(p) ::Energy_ : new ::Energy_;
   }
   static void *newArray_Energy_(Long_t nElements, void *p) {
      return p ? new(p) ::Energy_[nElements] : new ::Energy_[nElements];
   }
   // Wrapper around operator delete
   static void delete_Energy_(void *p) {
      delete ((::Energy_*)p);
   }
   static void deleteArray_Energy_(void *p) {
      delete [] ((::Energy_*)p);
   }
   static void destruct_Energy_(void *p) {
      typedef ::Energy_ current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Energy_

namespace ROOT {
   static TClass *vectorlELong64_tgR_Dictionary();
   static void vectorlELong64_tgR_TClassManip(TClass*);
   static void *new_vectorlELong64_tgR(void *p = 0);
   static void *newArray_vectorlELong64_tgR(Long_t size, void *p);
   static void delete_vectorlELong64_tgR(void *p);
   static void deleteArray_vectorlELong64_tgR(void *p);
   static void destruct_vectorlELong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<Long64_t>*)
   {
      vector<Long64_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<Long64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<Long64_t>", -2, "vector", 210,
                  typeid(vector<Long64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlELong64_tgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<Long64_t>) );
      instance.SetNew(&new_vectorlELong64_tgR);
      instance.SetNewArray(&newArray_vectorlELong64_tgR);
      instance.SetDelete(&delete_vectorlELong64_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlELong64_tgR);
      instance.SetDestructor(&destruct_vectorlELong64_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<Long64_t> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<Long64_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlELong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<Long64_t>*)0x0)->GetClass();
      vectorlELong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlELong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlELong64_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Long64_t> : new vector<Long64_t>;
   }
   static void *newArray_vectorlELong64_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Long64_t>[nElements] : new vector<Long64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlELong64_tgR(void *p) {
      delete ((vector<Long64_t>*)p);
   }
   static void deleteArray_vectorlELong64_tgR(void *p) {
      delete [] ((vector<Long64_t>*)p);
   }
   static void destruct_vectorlELong64_tgR(void *p) {
      typedef vector<Long64_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<Long64_t>

namespace ROOT {
   static TClass *vectorlEEnergy_gR_Dictionary();
   static void vectorlEEnergy_gR_TClassManip(TClass*);
   static void *new_vectorlEEnergy_gR(void *p = 0);
   static void *newArray_vectorlEEnergy_gR(Long_t size, void *p);
   static void delete_vectorlEEnergy_gR(void *p);
   static void deleteArray_vectorlEEnergy_gR(void *p);
   static void destruct_vectorlEEnergy_gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<Energy_>*)
   {
      vector<Energy_> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<Energy_>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<Energy_>", -2, "vector", 210,
                  typeid(vector<Energy_>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEEnergy_gR_Dictionary, isa_proxy, 4,
                  sizeof(vector<Energy_>) );
      instance.SetNew(&new_vectorlEEnergy_gR);
      instance.SetNewArray(&newArray_vectorlEEnergy_gR);
      instance.SetDelete(&delete_vectorlEEnergy_gR);
      instance.SetDeleteArray(&deleteArray_vectorlEEnergy_gR);
      instance.SetDestructor(&destruct_vectorlEEnergy_gR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<Energy_> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<Energy_>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEEnergy_gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<Energy_>*)0x0)->GetClass();
      vectorlEEnergy_gR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEEnergy_gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEEnergy_gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Energy_> : new vector<Energy_>;
   }
   static void *newArray_vectorlEEnergy_gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Energy_>[nElements] : new vector<Energy_>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEEnergy_gR(void *p) {
      delete ((vector<Energy_>*)p);
   }
   static void deleteArray_vectorlEEnergy_gR(void *p) {
      delete [] ((vector<Energy_>*)p);
   }
   static void destruct_vectorlEEnergy_gR(void *p) {
      typedef vector<Energy_> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<Energy_>

namespace ROOT {
   static TClass *vectorlEData_gR_Dictionary();
   static void vectorlEData_gR_TClassManip(TClass*);
   static void *new_vectorlEData_gR(void *p = 0);
   static void *newArray_vectorlEData_gR(Long_t size, void *p);
   static void delete_vectorlEData_gR(void *p);
   static void deleteArray_vectorlEData_gR(void *p);
   static void destruct_vectorlEData_gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<Data_>*)
   {
      vector<Data_> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<Data_>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<Data_>", -2, "vector", 210,
                  typeid(vector<Data_>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEData_gR_Dictionary, isa_proxy, 4,
                  sizeof(vector<Data_>) );
      instance.SetNew(&new_vectorlEData_gR);
      instance.SetNewArray(&newArray_vectorlEData_gR);
      instance.SetDelete(&delete_vectorlEData_gR);
      instance.SetDeleteArray(&deleteArray_vectorlEData_gR);
      instance.SetDestructor(&destruct_vectorlEData_gR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<Data_> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<Data_>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEData_gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<Data_>*)0x0)->GetClass();
      vectorlEData_gR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEData_gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEData_gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Data_> : new vector<Data_>;
   }
   static void *newArray_vectorlEData_gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Data_>[nElements] : new vector<Data_>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEData_gR(void *p) {
      delete ((vector<Data_>*)p);
   }
   static void deleteArray_vectorlEData_gR(void *p) {
      delete [] ((vector<Data_>*)p);
   }
   static void destruct_vectorlEData_gR(void *p) {
      typedef vector<Data_> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<Data_>

namespace {
  void TriggerDictionaryInitialization_LinkDict_Impl() {
    static const char* headers[] = {
"tree.h",
0
    };
    static const char* includePaths[] = {
"/usr/local/root-v6.16/include/root",
"/home/yuyb/58Ni96Ru/151Tm_Check/inbeam_event_reconstruct/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "LinkDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
struct __attribute__((annotate("$clingAutoload$tree.h")))  Energy_;
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
struct __attribute__((annotate("$clingAutoload$tree.h")))  Data_;
typedef struct Data_ Data __attribute__((annotate("$clingAutoload$tree.h"))) ;
typedef struct Energy_ Energy __attribute__((annotate("$clingAutoload$tree.h"))) ;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "LinkDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "tree.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Data", payloadCode, "@",
"Data_", payloadCode, "@",
"Energy", payloadCode, "@",
"Energy_", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("LinkDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_LinkDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_LinkDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_LinkDict() {
  TriggerDictionaryInitialization_LinkDict_Impl();
}
