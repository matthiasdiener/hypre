/*
 * File:          bHYPRE_StructVectorView_jniStub.c
 * Symbol:        bHYPRE.StructVectorView-v1.0.0
 * Symbol Type:   interface
 * Babel Version: 1.0.4
 * Description:   Client-side JNI glue code for bHYPRE.StructVectorView
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 */

#include "sidl_Java.h"
#include "sidl_Loader.h"
#include "sidl_String.h"
#include "bHYPRE_StructVectorView_IOR.h"
#include "babel_config.h"
/*
 * Includes for all method dependencies.
 */

#ifndef included_bHYPRE_MPICommunicator_jniStub_h
#include "bHYPRE_MPICommunicator_jniStub.h"
#endif
#ifndef included_bHYPRE_MatrixVectorView_jniStub_h
#include "bHYPRE_MatrixVectorView_jniStub.h"
#endif
#ifndef included_bHYPRE_ProblemDefinition_jniStub_h
#include "bHYPRE_ProblemDefinition_jniStub.h"
#endif
#ifndef included_bHYPRE_StructGrid_jniStub_h
#include "bHYPRE_StructGrid_jniStub.h"
#endif
#ifndef included_bHYPRE_StructVectorView_jniStub_h
#include "bHYPRE_StructVectorView_jniStub.h"
#endif
#ifndef included_sidl_BaseInterface_jniStub_h
#include "sidl_BaseInterface_jniStub.h"
#endif
#ifndef included_sidl_ClassInfo_jniStub_h
#include "sidl_ClassInfo_jniStub.h"
#endif
#ifndef included_sidl_RuntimeException_jniStub_h
#include "sidl_RuntimeException_jniStub.h"
#endif

/*
 * Convert between jlong and void* pointers.
 */

#if (SIZEOF_VOID_P == 8)
#define JLONG_TO_POINTER(x) ((void*)(x))
#define POINTER_TO_JLONG(x) ((jlong)(x))
#else
#define JLONG_TO_POINTER(x) ((void*)(int32_t)(x))
#define POINTER_TO_JLONG(x) ((jlong)(int32_t)(x))
#endif

#ifndef NULL
#define NULL 0
#endif


#define LANG_SPECIFIC_INIT()

/*
 * connect_loaded is a boolean value showing if the IHConnect for this object has been loaded into the connectRegistry
 */

static int connect_loaded = 0;

#include <stdlib.h>
#include <string.h>
#ifndef included_sidl_BaseClass_h
#include "sidl_BaseClass.h"
#endif
#ifndef included_sidl_ClassInfo_h
#include "sidl_ClassInfo.h"
#endif
#ifndef included_sidl_rmi_ProtocolFactory_h
#include "sidl_rmi_ProtocolFactory.h"
#endif
#ifndef included_sidl_rmi_InstanceRegistry_h
#include "sidl_rmi_InstanceRegistry.h"
#endif
#ifndef included_sidl_rmi_InstanceHandle_h
#include "sidl_rmi_InstanceHandle.h"
#endif
#ifndef included_sidl_rmi_Invocation_h
#include "sidl_rmi_Invocation.h"
#endif
#ifndef included_sidl_rmi_Response_h
#include "sidl_rmi_Response.h"
#endif
#ifndef included_sidl_rmi_ServerRegistry_h
#include "sidl_rmi_ServerRegistry.h"
#endif
#ifndef included_sidl_rmi_ConnectRegistry_h
#include "sidl_rmi_ConnectRegistry.h"
#endif
#ifndef included_sidl_io_Serializable_h
#include "sidl_io_Serializable.h"
#endif
#include "sidl_Exception.h"

#ifndef NULL
#define NULL 0
#endif

#include "sidl_thread.h"
#ifdef HAVE_PTHREAD
static struct sidl_recursive_mutex_t bHYPRE__StructVectorView__mutex= SIDL_RECURSIVE_MUTEX_INITIALIZER;
#define LOCK_STATIC_GLOBALS sidl_recursive_mutex_lock( &bHYPRE__StructVectorView__mutex )
#define UNLOCK_STATIC_GLOBALS sidl_recursive_mutex_unlock( &bHYPRE__StructVectorView__mutex )
/* #define HAVE_LOCKED_STATIC_GLOBALS (sidl_recursive_mutex_trylock( &bHYPRE__StructVectorView__mutex )==EDEADLOCK) */
#else
#define LOCK_STATIC_GLOBALS
#define UNLOCK_STATIC_GLOBALS
/* #define HAVE_LOCKED_STATIC_GLOBALS (1) */
#endif

/* Static variables to hold version of IOR */
static const int32_t s_IOR_MAJOR_VERSION = 1;
static const int32_t s_IOR_MINOR_VERSION = 0;

/* Static variables for managing EPV initialization. */
static int s_remote_initialized = 0;

static struct bHYPRE__StructVectorView__epv s_rem_epv__bhypre__structvectorview;

static struct bHYPRE_MatrixVectorView__epv s_rem_epv__bhypre_matrixvectorview;

static struct bHYPRE_ProblemDefinition__epv s_rem_epv__bhypre_problemdefinition;

static struct bHYPRE_StructVectorView__epv s_rem_epv__bhypre_structvectorview;

static struct sidl_BaseInterface__epv s_rem_epv__sidl_baseinterface;


/* REMOTE CAST: dynamic type casting for remote objects. */
static void* remote_bHYPRE__StructVectorView__cast(
  struct bHYPRE__StructVectorView__object* self,
  const char* name, sidl_BaseInterface* _ex)
{
  int
    cmp0,
    cmp1,
    cmp2;
  void* cast = NULL;
  *_ex = NULL; /* default to no exception */
  cmp0 = strcmp(name, "bHYPRE.StructVectorView");
  if (!cmp0) {
    (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
    cast = &((*self).d_bhypre_structvectorview);
    return cast;
  }
  else if (cmp0 < 0) {
    cmp1 = strcmp(name, "bHYPRE.ProblemDefinition");
    if (!cmp1) {
      (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
      cast = &((*self).d_bhypre_problemdefinition);
      return cast;
    }
    else if (cmp1 < 0) {
      cmp2 = strcmp(name, "bHYPRE.MatrixVectorView");
      if (!cmp2) {
        (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
        cast = &((*self).d_bhypre_matrixvectorview);
        return cast;
      }
    }
  }
  else if (cmp0 > 0) {
    cmp1 = strcmp(name, "sidl.BaseInterface");
    if (!cmp1) {
      (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
      cast = &((*self).d_sidl_baseinterface);
      return cast;
    }
    else if (cmp1 < 0) {
      cmp2 = strcmp(name, "bHYPRE._StructVectorView");
      if (!cmp2) {
        (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
        cast = ((struct bHYPRE__StructVectorView__object*)self);
        return cast;
      }
    }
  }
  if ((*self->d_epv->f_isType)(self,name, _ex)) {
    void* (*func)(struct sidl_rmi_InstanceHandle__object*, struct 
      sidl_BaseInterface__object**) = 
      (void* (*)(struct sidl_rmi_InstanceHandle__object*, struct 
        sidl_BaseInterface__object**)) 
      sidl_rmi_ConnectRegistry_getConnect(name, _ex);SIDL_CHECK(*_ex);
    cast =  (*func)(((struct 
      bHYPRE__StructVectorView__remote*)self->d_data)->d_ih, _ex);
  }

  return cast;
  EXIT:
  return NULL;
}

/* REMOTE DELETE: call the remote destructor for the object. */
static void remote_bHYPRE__StructVectorView__delete(
  struct bHYPRE__StructVectorView__object* self,
  sidl_BaseInterface* _ex)
{
  *_ex = NULL;
  free((void*) self);
}

/* REMOTE GETURL: call the getURL function for the object. */
static char* remote_bHYPRE__StructVectorView__getURL(
  struct bHYPRE__StructVectorView__object* self, sidl_BaseInterface* _ex)
{
  struct sidl_rmi_InstanceHandle__object *conn = ((struct 
    bHYPRE__StructVectorView__remote*)self->d_data)->d_ih;
  *_ex = NULL;
  if(conn != NULL) {
    return sidl_rmi_InstanceHandle_getObjectURL(conn, _ex);
  }
  return NULL;
}

/* REMOTE ADDREF: For internal babel use only! Remote addRef. */
static void remote_bHYPRE__StructVectorView__raddRef(
  struct bHYPRE__StructVectorView__object* self,sidl_BaseInterface* _ex)
{
  sidl_BaseException netex = NULL;
  /* initialize a new invocation */
  sidl_BaseInterface _throwaway = NULL;
  struct sidl_rmi_InstanceHandle__object *_conn = ((struct 
    bHYPRE__StructVectorView__remote*)self->d_data)->d_ih;
  sidl_rmi_Response _rsvp = NULL;
  sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
    "addRef", _ex ); SIDL_CHECK(*_ex);
  /* send actual RMI request */
  _rsvp = sidl_rmi_Invocation_invokeMethod(_inv,_ex);SIDL_CHECK(*_ex);
  /* Check for exceptions */
  netex = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);
  if(netex != NULL) {
    sidl_BaseInterface throwaway_exception = NULL;
    *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(netex,
      &throwaway_exception);
    return;
  }

  /* cleanup and return */
  EXIT:
  if(_inv) { sidl_rmi_Invocation_deleteRef(_inv,&_throwaway); }
  if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp,&_throwaway); }
  return;
}

/* REMOTE ISREMOTE: returns true if this object is Remote (it is). */
static sidl_bool
remote_bHYPRE__StructVectorView__isRemote(
    struct bHYPRE__StructVectorView__object* self, 
    sidl_BaseInterface *_ex) {
  *_ex = NULL;
  return TRUE;
}

/* REMOTE METHOD STUB:_set_hooks */
static void
remote_bHYPRE__StructVectorView__set_hooks(
  /* in */ struct bHYPRE__StructVectorView__object* self ,
  /* in */ sidl_bool on,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      bHYPRE__StructVectorView__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "_set_hooks", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packBool( _inv, "on", on, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE._StructVectorView._set_hooks.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE EXEC: call the exec function for the object. */
static void remote_bHYPRE__StructVectorView__exec(
  struct bHYPRE__StructVectorView__object* self,const char* methodName,
  sidl_rmi_Call inArgs,
  sidl_rmi_Return outArgs,
  sidl_BaseInterface* _ex)
{
  *_ex = NULL;
}

/* REMOTE METHOD STUB:SetGrid */
static int32_t
remote_bHYPRE__StructVectorView_SetGrid(
  /* in */ struct bHYPRE__StructVectorView__object* self ,
  /* in */ struct bHYPRE_StructGrid__object* grid,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    int32_t _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      bHYPRE__StructVectorView__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "SetGrid", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    if(grid){
      char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)grid, 
        _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packString( _inv, "grid", _url, _ex);SIDL_CHECK(*_ex);
      free((void*)_url);
    } else {
      sidl_rmi_Invocation_packString( _inv, "grid", NULL, _ex);SIDL_CHECK(*_ex);
    }

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE._StructVectorView.SetGrid.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:SetNumGhost */
static int32_t
remote_bHYPRE__StructVectorView_SetNumGhost(
  /* in */ struct bHYPRE__StructVectorView__object* self ,
  /* in rarray[dim2] */ struct sidl_int__array* num_ghost,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    int32_t _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      bHYPRE__StructVectorView__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "SetNumGhost", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packIntArray( _inv, "num_ghost", num_ghost,
      sidl_column_major_order,1,0, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE._StructVectorView.SetNumGhost.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:SetValue */
static int32_t
remote_bHYPRE__StructVectorView_SetValue(
  /* in */ struct bHYPRE__StructVectorView__object* self ,
  /* in rarray[dim] */ struct sidl_int__array* grid_index,
  /* in */ double value,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    int32_t _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      bHYPRE__StructVectorView__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "SetValue", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packIntArray( _inv, "grid_index", grid_index,
      sidl_column_major_order,1,0, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packDouble( _inv, "value", value, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE._StructVectorView.SetValue.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:SetBoxValues */
static int32_t
remote_bHYPRE__StructVectorView_SetBoxValues(
  /* in */ struct bHYPRE__StructVectorView__object* self ,
  /* in rarray[dim] */ struct sidl_int__array* ilower,
  /* in rarray[dim] */ struct sidl_int__array* iupper,
  /* in rarray[nvalues] */ struct sidl_double__array* values,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    int32_t _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      bHYPRE__StructVectorView__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "SetBoxValues", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packIntArray( _inv, "ilower", ilower,
      sidl_column_major_order,1,0, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packIntArray( _inv, "iupper", iupper,
      sidl_column_major_order,1,0, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packDoubleArray( _inv, "values", values,
      sidl_column_major_order,1,0, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE._StructVectorView.SetBoxValues.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:SetCommunicator */
static int32_t
remote_bHYPRE__StructVectorView_SetCommunicator(
  /* in */ struct bHYPRE__StructVectorView__object* self ,
  /* in */ struct bHYPRE_MPICommunicator__object* mpi_comm,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    int32_t _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      bHYPRE__StructVectorView__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "SetCommunicator", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    if(mpi_comm){
      char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)mpi_comm, 
        _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packString( _inv, "mpi_comm", _url, _ex);SIDL_CHECK(
        *_ex);
      free((void*)_url);
    } else {
      sidl_rmi_Invocation_packString( _inv, "mpi_comm", NULL, _ex);SIDL_CHECK(
        *_ex);
    }

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE._StructVectorView.SetCommunicator.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:Destroy */
static void
remote_bHYPRE__StructVectorView_Destroy(
  /* in */ struct bHYPRE__StructVectorView__object* self ,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      bHYPRE__StructVectorView__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "Destroy", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE._StructVectorView.Destroy.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:Initialize */
static int32_t
remote_bHYPRE__StructVectorView_Initialize(
  /* in */ struct bHYPRE__StructVectorView__object* self ,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    int32_t _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      bHYPRE__StructVectorView__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "Initialize", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE._StructVectorView.Initialize.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:Assemble */
static int32_t
remote_bHYPRE__StructVectorView_Assemble(
  /* in */ struct bHYPRE__StructVectorView__object* self ,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    int32_t _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      bHYPRE__StructVectorView__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "Assemble", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE._StructVectorView.Assemble.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:addRef */
static void
remote_bHYPRE__StructVectorView_addRef(
  /* in */ struct bHYPRE__StructVectorView__object* self ,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    struct bHYPRE__StructVectorView__remote* r_obj = (struct 
      bHYPRE__StructVectorView__remote*)self->d_data;
    LOCK_STATIC_GLOBALS;
    r_obj->d_refcount++;
    UNLOCK_STATIC_GLOBALS;
  }
}

/* REMOTE METHOD STUB:deleteRef */
static void
remote_bHYPRE__StructVectorView_deleteRef(
  /* in */ struct bHYPRE__StructVectorView__object* self ,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    struct bHYPRE__StructVectorView__remote* r_obj = (struct 
      bHYPRE__StructVectorView__remote*)self->d_data;
    LOCK_STATIC_GLOBALS;
    r_obj->d_refcount--;
    if(r_obj->d_refcount == 0) {
      sidl_rmi_InstanceHandle_deleteRef(r_obj->d_ih, _ex);
      free(r_obj);
      free(self);
    }
    UNLOCK_STATIC_GLOBALS;
  }
}

/* REMOTE METHOD STUB:isSame */
static sidl_bool
remote_bHYPRE__StructVectorView_isSame(
  /* in */ struct bHYPRE__StructVectorView__object* self ,
  /* in */ struct sidl_BaseInterface__object* iobj,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    sidl_bool _retval = FALSE;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      bHYPRE__StructVectorView__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "isSame", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    if(iobj){
      char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)iobj, 
        _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packString( _inv, "iobj", _url, _ex);SIDL_CHECK(*_ex);
      free((void*)_url);
    } else {
      sidl_rmi_Invocation_packString( _inv, "iobj", NULL, _ex);SIDL_CHECK(*_ex);
    }

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE._StructVectorView.isSame.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackBool( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:isType */
static sidl_bool
remote_bHYPRE__StructVectorView_isType(
  /* in */ struct bHYPRE__StructVectorView__object* self ,
  /* in */ const char* name,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    sidl_bool _retval = FALSE;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      bHYPRE__StructVectorView__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "isType", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "name", name, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE._StructVectorView.isType.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackBool( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:getClassInfo */
static struct sidl_ClassInfo__object*
remote_bHYPRE__StructVectorView_getClassInfo(
  /* in */ struct bHYPRE__StructVectorView__object* self ,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    char*_retval_str = NULL;
    struct sidl_ClassInfo__object* _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      bHYPRE__StructVectorView__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getClassInfo", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE._StructVectorView.getClassInfo.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackString( _rsvp, "_retval", &_retval_str, 
      _ex);SIDL_CHECK(*_ex);
    _retval = sidl_ClassInfo__connectI(_retval_str, FALSE, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE EPV: create remote entry point vectors (EPVs). */
static void bHYPRE__StructVectorView__init_remote_epv(void)
{
  /* assert( HAVE_LOCKED_STATIC_GLOBALS ); */
  struct bHYPRE__StructVectorView__epv* epv = 
    &s_rem_epv__bhypre__structvectorview;
  struct bHYPRE_MatrixVectorView__epv*  e0  = 
    &s_rem_epv__bhypre_matrixvectorview;
  struct bHYPRE_ProblemDefinition__epv* e1  = 
    &s_rem_epv__bhypre_problemdefinition;
  struct bHYPRE_StructVectorView__epv*  e2  = 
    &s_rem_epv__bhypre_structvectorview;
  struct sidl_BaseInterface__epv*       e3  = &s_rem_epv__sidl_baseinterface;

  epv->f__cast                = remote_bHYPRE__StructVectorView__cast;
  epv->f__delete              = remote_bHYPRE__StructVectorView__delete;
  epv->f__exec                = remote_bHYPRE__StructVectorView__exec;
  epv->f__getURL              = remote_bHYPRE__StructVectorView__getURL;
  epv->f__raddRef             = remote_bHYPRE__StructVectorView__raddRef;
  epv->f__isRemote            = remote_bHYPRE__StructVectorView__isRemote;
  epv->f__set_hooks           = remote_bHYPRE__StructVectorView__set_hooks;
  epv->f__ctor                = NULL;
  epv->f__ctor2               = NULL;
  epv->f__dtor                = NULL;
  epv->f_SetGrid              = remote_bHYPRE__StructVectorView_SetGrid;
  epv->f_SetNumGhost          = remote_bHYPRE__StructVectorView_SetNumGhost;
  epv->f_SetValue             = remote_bHYPRE__StructVectorView_SetValue;
  epv->f_SetBoxValues         = remote_bHYPRE__StructVectorView_SetBoxValues;
  epv->f_SetCommunicator      = remote_bHYPRE__StructVectorView_SetCommunicator;
  epv->f_Destroy              = remote_bHYPRE__StructVectorView_Destroy;
  epv->f_Initialize           = remote_bHYPRE__StructVectorView_Initialize;
  epv->f_Assemble             = remote_bHYPRE__StructVectorView_Assemble;
  epv->f_addRef               = remote_bHYPRE__StructVectorView_addRef;
  epv->f_deleteRef            = remote_bHYPRE__StructVectorView_deleteRef;
  epv->f_isSame               = remote_bHYPRE__StructVectorView_isSame;
  epv->f_isType               = remote_bHYPRE__StructVectorView_isType;
  epv->f_getClassInfo         = remote_bHYPRE__StructVectorView_getClassInfo;

  e0->f__cast           = (void* (*)(void*,const char*,sidl_BaseInterface*)) 
    epv->f__cast;
  e0->f__delete         = (void (*)(void*,sidl_BaseInterface*)) epv->f__delete;
  e0->f__getURL         = (char* (*)(void*,sidl_BaseInterface*)) epv->f__getURL;
  e0->f__raddRef        = (void (*)(void*,sidl_BaseInterface*)) epv->f__raddRef;
  e0->f__isRemote       = (sidl_bool (*)(void*,sidl_BaseInterface*)) 
    epv->f__isRemote;
  e0->f__set_hooks      = (void (*)(void*,int32_t, sidl_BaseInterface*)) 
    epv->f__set_hooks;
  e0->f__exec           = (void (*)(void*,const char*,struct 
    sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
    sidl_BaseInterface__object **)) epv->f__exec;
  e0->f_SetCommunicator = (int32_t (*)(void*,struct 
    bHYPRE_MPICommunicator__object*,struct sidl_BaseInterface__object **)) 
    epv->f_SetCommunicator;
  e0->f_Destroy         = (void (*)(void*,struct sidl_BaseInterface__object 
    **)) epv->f_Destroy;
  e0->f_Initialize      = (int32_t (*)(void*,struct sidl_BaseInterface__object 
    **)) epv->f_Initialize;
  e0->f_Assemble        = (int32_t (*)(void*,struct sidl_BaseInterface__object 
    **)) epv->f_Assemble;
  e0->f_addRef          = (void (*)(void*,struct sidl_BaseInterface__object 
    **)) epv->f_addRef;
  e0->f_deleteRef       = (void (*)(void*,struct sidl_BaseInterface__object 
    **)) epv->f_deleteRef;
  e0->f_isSame          = (sidl_bool (*)(void*,struct 
    sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
    epv->f_isSame;
  e0->f_isType          = (sidl_bool (*)(void*,const char*,struct 
    sidl_BaseInterface__object **)) epv->f_isType;
  e0->f_getClassInfo    = (struct sidl_ClassInfo__object* (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_getClassInfo;

  e1->f__cast           = (void* (*)(void*,const char*,sidl_BaseInterface*)) 
    epv->f__cast;
  e1->f__delete         = (void (*)(void*,sidl_BaseInterface*)) epv->f__delete;
  e1->f__getURL         = (char* (*)(void*,sidl_BaseInterface*)) epv->f__getURL;
  e1->f__raddRef        = (void (*)(void*,sidl_BaseInterface*)) epv->f__raddRef;
  e1->f__isRemote       = (sidl_bool (*)(void*,sidl_BaseInterface*)) 
    epv->f__isRemote;
  e1->f__set_hooks      = (void (*)(void*,int32_t, sidl_BaseInterface*)) 
    epv->f__set_hooks;
  e1->f__exec           = (void (*)(void*,const char*,struct 
    sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
    sidl_BaseInterface__object **)) epv->f__exec;
  e1->f_SetCommunicator = (int32_t (*)(void*,struct 
    bHYPRE_MPICommunicator__object*,struct sidl_BaseInterface__object **)) 
    epv->f_SetCommunicator;
  e1->f_Destroy         = (void (*)(void*,struct sidl_BaseInterface__object 
    **)) epv->f_Destroy;
  e1->f_Initialize      = (int32_t (*)(void*,struct sidl_BaseInterface__object 
    **)) epv->f_Initialize;
  e1->f_Assemble        = (int32_t (*)(void*,struct sidl_BaseInterface__object 
    **)) epv->f_Assemble;
  e1->f_addRef          = (void (*)(void*,struct sidl_BaseInterface__object 
    **)) epv->f_addRef;
  e1->f_deleteRef       = (void (*)(void*,struct sidl_BaseInterface__object 
    **)) epv->f_deleteRef;
  e1->f_isSame          = (sidl_bool (*)(void*,struct 
    sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
    epv->f_isSame;
  e1->f_isType          = (sidl_bool (*)(void*,const char*,struct 
    sidl_BaseInterface__object **)) epv->f_isType;
  e1->f_getClassInfo    = (struct sidl_ClassInfo__object* (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_getClassInfo;

  e2->f__cast           = (void* (*)(void*,const char*,sidl_BaseInterface*)) 
    epv->f__cast;
  e2->f__delete         = (void (*)(void*,sidl_BaseInterface*)) epv->f__delete;
  e2->f__getURL         = (char* (*)(void*,sidl_BaseInterface*)) epv->f__getURL;
  e2->f__raddRef        = (void (*)(void*,sidl_BaseInterface*)) epv->f__raddRef;
  e2->f__isRemote       = (sidl_bool (*)(void*,sidl_BaseInterface*)) 
    epv->f__isRemote;
  e2->f__set_hooks      = (void (*)(void*,int32_t, sidl_BaseInterface*)) 
    epv->f__set_hooks;
  e2->f__exec           = (void (*)(void*,const char*,struct 
    sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
    sidl_BaseInterface__object **)) epv->f__exec;
  e2->f_SetGrid         = (int32_t (*)(void*,struct bHYPRE_StructGrid__object*,
    struct sidl_BaseInterface__object **)) epv->f_SetGrid;
  e2->f_SetNumGhost     = (int32_t (*)(void*,struct sidl_int__array*,struct 
    sidl_BaseInterface__object **)) epv->f_SetNumGhost;
  e2->f_SetValue        = (int32_t (*)(void*,struct sidl_int__array*,double,
    struct sidl_BaseInterface__object **)) epv->f_SetValue;
  e2->f_SetBoxValues    = (int32_t (*)(void*,struct sidl_int__array*,struct 
    sidl_int__array*,struct sidl_double__array*,struct 
    sidl_BaseInterface__object **)) epv->f_SetBoxValues;
  e2->f_SetCommunicator = (int32_t (*)(void*,struct 
    bHYPRE_MPICommunicator__object*,struct sidl_BaseInterface__object **)) 
    epv->f_SetCommunicator;
  e2->f_Destroy         = (void (*)(void*,struct sidl_BaseInterface__object 
    **)) epv->f_Destroy;
  e2->f_Initialize      = (int32_t (*)(void*,struct sidl_BaseInterface__object 
    **)) epv->f_Initialize;
  e2->f_Assemble        = (int32_t (*)(void*,struct sidl_BaseInterface__object 
    **)) epv->f_Assemble;
  e2->f_addRef          = (void (*)(void*,struct sidl_BaseInterface__object 
    **)) epv->f_addRef;
  e2->f_deleteRef       = (void (*)(void*,struct sidl_BaseInterface__object 
    **)) epv->f_deleteRef;
  e2->f_isSame          = (sidl_bool (*)(void*,struct 
    sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
    epv->f_isSame;
  e2->f_isType          = (sidl_bool (*)(void*,const char*,struct 
    sidl_BaseInterface__object **)) epv->f_isType;
  e2->f_getClassInfo    = (struct sidl_ClassInfo__object* (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_getClassInfo;

  e3->f__cast        = (void* (*)(void*,const char*,sidl_BaseInterface*)) 
    epv->f__cast;
  e3->f__delete      = (void (*)(void*,sidl_BaseInterface*)) epv->f__delete;
  e3->f__getURL      = (char* (*)(void*,sidl_BaseInterface*)) epv->f__getURL;
  e3->f__raddRef     = (void (*)(void*,sidl_BaseInterface*)) epv->f__raddRef;
  e3->f__isRemote    = (sidl_bool (*)(void*,sidl_BaseInterface*)) 
    epv->f__isRemote;
  e3->f__set_hooks   = (void (*)(void*,int32_t, sidl_BaseInterface*)) 
    epv->f__set_hooks;
  e3->f__exec        = (void (*)(void*,const char*,struct 
    sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
    sidl_BaseInterface__object **)) epv->f__exec;
  e3->f_addRef       = (void (*)(void*,struct sidl_BaseInterface__object **)) 
    epv->f_addRef;
  e3->f_deleteRef    = (void (*)(void*,struct sidl_BaseInterface__object **)) 
    epv->f_deleteRef;
  e3->f_isSame       = (sidl_bool (*)(void*,struct sidl_BaseInterface__object*,
    struct sidl_BaseInterface__object **)) epv->f_isSame;
  e3->f_isType       = (sidl_bool (*)(void*,const char*,struct 
    sidl_BaseInterface__object **)) epv->f_isType;
  e3->f_getClassInfo = (struct sidl_ClassInfo__object* (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_getClassInfo;

  s_remote_initialized = 1;
}

/* Create an instance that connects to an existing remote object. */
static struct bHYPRE_StructVectorView__object*
bHYPRE_StructVectorView__remoteConnect(const char *url, sidl_bool ar, 
  sidl_BaseInterface *_ex)
{
  struct bHYPRE__StructVectorView__object* self;

  struct bHYPRE__StructVectorView__object* s0;

  struct bHYPRE__StructVectorView__remote* r_obj;
  sidl_rmi_InstanceHandle instance = NULL;
  char* objectID = NULL;
  objectID = sidl_rmi_ServerRegistry_isLocalObject(url, _ex);
  if(objectID) {
    sidl_BaseInterface bi = (
      sidl_BaseInterface)sidl_rmi_InstanceRegistry_getInstanceByString(objectID,
      _ex);
    if(ar) {
      sidl_BaseInterface_addRef(bi, _ex);
    }
    return bHYPRE_StructVectorView__rmicast(bi, _ex);
  }
  instance = sidl_rmi_ProtocolFactory_connectInstance(url, ar, _ex );
  if ( instance == NULL) { return NULL; }
  self =
    (struct bHYPRE__StructVectorView__object*) malloc(
      sizeof(struct bHYPRE__StructVectorView__object));

  r_obj =
    (struct bHYPRE__StructVectorView__remote*) malloc(
      sizeof(struct bHYPRE__StructVectorView__remote));

  r_obj->d_refcount = 1;
  r_obj->d_ih = instance;
  s0 =                                    self;

  LOCK_STATIC_GLOBALS;
  if (!s_remote_initialized) {
    bHYPRE__StructVectorView__init_remote_epv();
  }
  UNLOCK_STATIC_GLOBALS;

  s0->d_bhypre_matrixvectorview.d_epv    = &s_rem_epv__bhypre_matrixvectorview;
  s0->d_bhypre_matrixvectorview.d_object = (void*) self;

  s0->d_bhypre_problemdefinition.d_epv    = 
    &s_rem_epv__bhypre_problemdefinition;
  s0->d_bhypre_problemdefinition.d_object = (void*) self;

  s0->d_bhypre_structvectorview.d_epv    = &s_rem_epv__bhypre_structvectorview;
  s0->d_bhypre_structvectorview.d_object = (void*) self;

  s0->d_sidl_baseinterface.d_epv    = &s_rem_epv__sidl_baseinterface;
  s0->d_sidl_baseinterface.d_object = (void*) self;

  s0->d_data = (void*) r_obj;
  s0->d_epv  = &s_rem_epv__bhypre__structvectorview;

  self->d_data = (void*) r_obj;

  return bHYPRE_StructVectorView__rmicast(self, _ex);
}
/* Create an instance that uses an already existing  */
/* InstanceHandel to connect to an existing remote object. */
static struct bHYPRE_StructVectorView__object*
bHYPRE_StructVectorView__IHConnect(sidl_rmi_InstanceHandle instance, 
  sidl_BaseInterface *_ex)
{
  struct bHYPRE__StructVectorView__object* self;

  struct bHYPRE__StructVectorView__object* s0;

  struct bHYPRE__StructVectorView__remote* r_obj;
  self =
    (struct bHYPRE__StructVectorView__object*) malloc(
      sizeof(struct bHYPRE__StructVectorView__object));

  r_obj =
    (struct bHYPRE__StructVectorView__remote*) malloc(
      sizeof(struct bHYPRE__StructVectorView__remote));

  r_obj->d_refcount = 1;
  r_obj->d_ih = instance;
  s0 =                                    self;

  LOCK_STATIC_GLOBALS;
  if (!s_remote_initialized) {
    bHYPRE__StructVectorView__init_remote_epv();
  }
  UNLOCK_STATIC_GLOBALS;

  s0->d_bhypre_matrixvectorview.d_epv    = &s_rem_epv__bhypre_matrixvectorview;
  s0->d_bhypre_matrixvectorview.d_object = (void*) self;

  s0->d_bhypre_problemdefinition.d_epv    = 
    &s_rem_epv__bhypre_problemdefinition;
  s0->d_bhypre_problemdefinition.d_object = (void*) self;

  s0->d_bhypre_structvectorview.d_epv    = &s_rem_epv__bhypre_structvectorview;
  s0->d_bhypre_structvectorview.d_object = (void*) self;

  s0->d_sidl_baseinterface.d_epv    = &s_rem_epv__sidl_baseinterface;
  s0->d_sidl_baseinterface.d_object = (void*) self;

  s0->d_data = (void*) r_obj;
  s0->d_epv  = &s_rem_epv__bhypre__structvectorview;

  self->d_data = (void*) r_obj;

  sidl_rmi_InstanceHandle_addRef(instance, _ex);
  return bHYPRE_StructVectorView__rmicast(self, _ex);
}
/*
 * Cast method for interface and class type conversions.
 */

struct bHYPRE_StructVectorView__object*
bHYPRE_StructVectorView__rmicast(
  void* obj,
  sidl_BaseInterface* _ex)
{
  struct bHYPRE_StructVectorView__object* cast = NULL;

  *_ex = NULL;
  if(!connect_loaded) {
    sidl_rmi_ConnectRegistry_registerConnect("bHYPRE.StructVectorView", (
      void*)bHYPRE_StructVectorView__IHConnect, _ex);
    connect_loaded = 1;
  }
  if (obj != NULL) {
    struct sidl_BaseInterface__object* base = (struct 
      sidl_BaseInterface__object*) obj;
    cast = (struct bHYPRE_StructVectorView__object*) (*base->d_epv->f__cast)(
      base->d_object,
      "bHYPRE.StructVectorView", _ex); SIDL_CHECK(*_ex);
  }

  return cast;
  EXIT:
  return NULL;
}

/*
 * RMI connector function for the class.
 */

struct bHYPRE_StructVectorView__object*
bHYPRE_StructVectorView__connectI(const char* url, sidl_bool ar, struct 
  sidl_BaseInterface__object **_ex)
{
  return bHYPRE_StructVectorView__remoteConnect(url, ar, _ex);
}

/*
 * Function to extract IOR reference from the Java object.
 */

static struct bHYPRE_StructVectorView__object* _get_ior(
  JNIEnv* env,
  jobject obj)
{
  void* ptr = NULL;
  static jmethodID mid = (jmethodID) NULL;

  if (mid == (jmethodID) NULL) {
    jclass cls = (*env)->GetObjectClass(env, obj);
    mid = (*env)->GetMethodID(env, cls, "_get_ior", "()J");
    (*env)->DeleteLocalRef(env, cls);
  }

  ptr = JLONG_TO_POINTER((*env)->CallLongMethod(env, obj, mid));
  return (struct bHYPRE_StructVectorView__object*) ptr;
}

/*
 * Connect to a remote object instance and return reference.
 */

static jlong jni__connect_remote_ior(
  JNIEnv* env,
  jclass  cls,
  jstring url)
{
  (void) env;
  (void) cls;
  struct sidl_BaseInterface__object *_ex = NULL;
  jlong _res = 0;
  char* _tmp_url = sidl_Java_J2I_string(env, url);
  _res = POINTER_TO_JLONG(bHYPRE_StructVectorView__remoteConnect(_tmp_url, 1, 
    &_ex));
  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);

    return _res;
  }
  return _res;

}

/*
 *  Set the grid on which vectors are defined. 
 */

static jint
jni_SetGrid(
  JNIEnv* env,
  jobject obj,
  jobject _arg_grid)
{
  /*
   * Declare return and temporary variables.
   */

  struct bHYPRE_StructVectorView__object* _ior = NULL;
  struct bHYPRE_StructGrid__object* _tmp_grid = (struct 
    bHYPRE_StructGrid__object*) NULL;
  int32_t _ior_res = 0;
  jint _res = 0;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_grid = (struct bHYPRE_StructGrid__object*) sidl_Java_J2I_cls(env, 
    _arg_grid, FALSE);JAVA_CHECK(env);

  /*
   * Call the IOR method through the EPV.
   */

  _ior_res = (*(_ior->d_epv->f_SetGrid))(
    _ior->d_object,
    _tmp_grid,
    &_ex);

  /*
   * Postprocess OUT, INOUT, returns, and exceptions.
   */

  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);

    return _res;
  }
  _res = (jint) _ior_res;

  return _res;
  JAVA_EXIT:

  return _res;
}

/*
 *  Set the number of ghost zones, separately on the lower and upper sides
 * for each dimension.
 * "num_ghost" is an array of size "dim2", twice the number of dimensions. 
 */

static jint
jni_SetNumGhost(
  JNIEnv* env,
  jobject obj,
  jobject _arg_num_ghost)
{
  /*
   * Declare return and temporary variables.
   */

  struct bHYPRE_StructVectorView__object* _ior = NULL;
  struct sidl_int__array* _tmp_num_ghost = (struct sidl_int__array*) NULL;
  int32_t _ior_res = 0;
  jint _res = 0;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_num_ghost = (struct sidl_int__array*) sidl_Java_J2I_borrow_array(env, 
    _arg_num_ghost);

  /*
   * Call the IOR method through the EPV.
   */

  _ior_res = (*(_ior->d_epv->f_SetNumGhost))(
    _ior->d_object,
    _tmp_num_ghost,
    &_ex);

  /*
   * Postprocess OUT, INOUT, returns, and exceptions.
   */

  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);

    return _res;
  }
  _res = (jint) _ior_res;

  return _res;
}

/*
 *  Set the value of a single vector coefficient, given by "grid_index".
 * "grid_index" is an array of size "dim", where dim is the number
 * of dimensions. 
 */

static jint
jni_SetValue(
  JNIEnv* env,
  jobject obj,
  jobject _arg_grid_index,
  jdouble _arg_value)
{
  /*
   * Declare return and temporary variables.
   */

  struct bHYPRE_StructVectorView__object* _ior = NULL;
  struct sidl_int__array* _tmp_grid_index = (struct sidl_int__array*) NULL;
  double _tmp_value = 0.0;
  int32_t _ior_res = 0;
  jint _res = 0;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_grid_index = (struct sidl_int__array*) sidl_Java_J2I_borrow_array(env, 
    _arg_grid_index);
  _tmp_value = (double) _arg_value;

  /*
   * Call the IOR method through the EPV.
   */

  _ior_res = (*(_ior->d_epv->f_SetValue))(
    _ior->d_object,
    _tmp_grid_index,
    _tmp_value,
    &_ex);

  /*
   * Postprocess OUT, INOUT, returns, and exceptions.
   */

  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);

    return _res;
  }
  _res = (jint) _ior_res;

  return _res;
}

/*
 *  Set the values of all vector coefficient for grid points in a box.
 * The box is defined by its lower and upper corners in the grid.
 * "ilower" and "iupper" are arrays of size "dim", where dim is the
 * number of dimensions.  The "values" array has size "nvalues", which
 * is the number of grid points in the box. 
 */

static jint
jni_SetBoxValues(
  JNIEnv* env,
  jobject obj,
  jobject _arg_ilower,
  jobject _arg_iupper,
  jobject _arg_values)
{
  /*
   * Declare return and temporary variables.
   */

  struct bHYPRE_StructVectorView__object* _ior = NULL;
  struct sidl_int__array* _tmp_ilower = (struct sidl_int__array*) NULL;
  struct sidl_int__array* _tmp_iupper = (struct sidl_int__array*) NULL;
  struct sidl_double__array* _tmp_values = (struct sidl_double__array*) NULL;
  int32_t _ior_res = 0;
  jint _res = 0;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_ilower = (struct sidl_int__array*) sidl_Java_J2I_borrow_array(env, 
    _arg_ilower);
  _tmp_iupper = (struct sidl_int__array*) sidl_Java_J2I_borrow_array(env, 
    _arg_iupper);
  _tmp_values = (struct sidl_double__array*) sidl_Java_J2I_borrow_array(env, 
    _arg_values);

  /*
   * Call the IOR method through the EPV.
   */

  _ior_res = (*(_ior->d_epv->f_SetBoxValues))(
    _ior->d_object,
    _tmp_ilower,
    _tmp_iupper,
    _tmp_values,
    &_ex);

  /*
   * Postprocess OUT, INOUT, returns, and exceptions.
   */

  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);

    return _res;
  }
  _res = (jint) _ior_res;

  return _res;
}

/*
 * Set the MPI Communicator.  DEPRECATED, Use Create()
 */

static jint
jni_SetCommunicator(
  JNIEnv* env,
  jobject obj,
  jobject _arg_mpi_comm)
{
  /*
   * Declare return and temporary variables.
   */

  struct bHYPRE_StructVectorView__object* _ior = NULL;
  struct bHYPRE_MPICommunicator__object* _tmp_mpi_comm = (struct 
    bHYPRE_MPICommunicator__object*) NULL;
  int32_t _ior_res = 0;
  jint _res = 0;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_mpi_comm = (struct bHYPRE_MPICommunicator__object*) sidl_Java_J2I_cls(
    env, _arg_mpi_comm, FALSE);JAVA_CHECK(env);

  /*
   * Call the IOR method through the EPV.
   */

  _ior_res = (*(_ior->d_epv->f_SetCommunicator))(
    _ior->d_object,
    _tmp_mpi_comm,
    &_ex);

  /*
   * Postprocess OUT, INOUT, returns, and exceptions.
   */

  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);

    return _res;
  }
  _res = (jint) _ior_res;

  return _res;
  JAVA_EXIT:

  return _res;
}

/*
 * The Destroy function doesn't necessarily destroy anything.
 * It is just another name for deleteRef.  Thus it decrements the
 * object's reference count.  The Babel memory management system will
 * destroy the object if the reference count goes to zero.
 */

static void
jni_Destroy(
  JNIEnv* env,
  jobject obj)
{
  /*
   * Declare return and temporary variables.
   */

  struct bHYPRE_StructVectorView__object* _ior = NULL;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);

  /*
   * Call the IOR method through the EPV.
   */

  (*(_ior->d_epv->f_Destroy))(
    _ior->d_object,
    &_ex);

  /*
   * Postprocess OUT, INOUT, returns, and exceptions.
   */

  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);
    return;
  }
}

/*
 * Prepare an object for setting coefficient values, whether for
 * the first time or subsequently.
 */

static jint
jni_Initialize(
  JNIEnv* env,
  jobject obj)
{
  /*
   * Declare return and temporary variables.
   */

  struct bHYPRE_StructVectorView__object* _ior = NULL;
  int32_t _ior_res = 0;
  jint _res = 0;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);

  /*
   * Call the IOR method through the EPV.
   */

  _ior_res = (*(_ior->d_epv->f_Initialize))(
    _ior->d_object,
    &_ex);

  /*
   * Postprocess OUT, INOUT, returns, and exceptions.
   */

  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);

    return _res;
  }
  _res = (jint) _ior_res;

  return _res;
}

/*
 * Finalize the construction of an object before using, either
 * for the first time or on subsequent uses. {\tt Initialize}
 * and {\tt Assemble} always appear in a matched set, with
 * Initialize preceding Assemble. Values can only be set in
 * between a call to Initialize and Assemble.
 */

static jint
jni_Assemble(
  JNIEnv* env,
  jobject obj)
{
  /*
   * Declare return and temporary variables.
   */

  struct bHYPRE_StructVectorView__object* _ior = NULL;
  int32_t _ior_res = 0;
  jint _res = 0;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);

  /*
   * Call the IOR method through the EPV.
   */

  _ior_res = (*(_ior->d_epv->f_Assemble))(
    _ior->d_object,
    &_ex);

  /*
   * Postprocess OUT, INOUT, returns, and exceptions.
   */

  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);

    return _res;
  }
  _res = (jint) _ior_res;

  return _res;
}

/*
 * <p>
 * Add one to the intrinsic reference count in the underlying object.
 * Object in <code>sidl</code> have an intrinsic reference count.
 * Objects continue to exist as long as the reference count is
 * positive. Clients should call this method whenever they
 * create another ongoing reference to an object or interface.
 * </p>
 * <p>
 * This does not have a return value because there is no language
 * independent type that can refer to an interface or a
 * class.
 * </p>
 */

static void
jni_addRef(
  JNIEnv* env,
  jobject obj)
{
  /*
   * Declare return and temporary variables.
   */

  struct bHYPRE_StructVectorView__object* _ior = NULL;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);

  /*
   * Call the IOR method through the EPV.
   */

  (*(_ior->d_epv->f_addRef))(
    _ior->d_object,
    &_ex);

  /*
   * Postprocess OUT, INOUT, returns, and exceptions.
   */

  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);
    return;
  }
}

/*
 * Decrease by one the intrinsic reference count in the underlying
 * object, and delete the object if the reference is non-positive.
 * Objects in <code>sidl</code> have an intrinsic reference count.
 * Clients should call this method whenever they remove a
 * reference to an object or interface.
 */

static void
jni_deleteRef(
  JNIEnv* env,
  jobject obj)
{
  /*
   * Declare return and temporary variables.
   */

  struct bHYPRE_StructVectorView__object* _ior = NULL;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);

  /*
   * Call the IOR method through the EPV.
   */

  (*(_ior->d_epv->f_deleteRef))(
    _ior->d_object,
    &_ex);

  /*
   * Postprocess OUT, INOUT, returns, and exceptions.
   */

  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);
    return;
  }
}

/*
 * Return true if and only if <code>obj</code> refers to the same
 * object as this object.
 */

static jboolean
jni_isSame(
  JNIEnv* env,
  jobject obj,
  jobject _arg_iobj)
{
  /*
   * Declare return and temporary variables.
   */

  struct bHYPRE_StructVectorView__object* _ior = NULL;
  struct sidl_BaseInterface__object* _tmp_iobj = (struct 
    sidl_BaseInterface__object*) NULL;
  sidl_bool _ior_res = FALSE;
  jboolean _res = JNI_FALSE;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_iobj = (struct sidl_BaseInterface__object*) sidl_Java_J2I_ifc(env, 
    _arg_iobj, "sidl.BaseInterface", FALSE);JAVA_CHECK(env);

  /*
   * Call the IOR method through the EPV.
   */

  _ior_res = (*(_ior->d_epv->f_isSame))(
    _ior->d_object,
    _tmp_iobj,
    &_ex);

  /*
   * Postprocess OUT, INOUT, returns, and exceptions.
   */

  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);

    return _res;
  }
  _res = (jboolean) _ior_res;

  return _res;
  JAVA_EXIT:

  return _res;
}

/*
 * Return whether this object is an instance of the specified type.
 * The string name must be the <code>sidl</code> type name.  This
 * routine will return <code>true</code> if and only if a cast to
 * the string type name would succeed.
 */

static jboolean
jni_isType(
  JNIEnv* env,
  jobject obj,
  jstring _arg_name)
{
  /*
   * Declare return and temporary variables.
   */

  struct bHYPRE_StructVectorView__object* _ior = NULL;
  char* _tmp_name = (char*) NULL;
  sidl_bool _ior_res = FALSE;
  jboolean _res = JNI_FALSE;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_name = sidl_Java_J2I_string(env, _arg_name);

  /*
   * Call the IOR method through the EPV.
   */

  _ior_res = (*(_ior->d_epv->f_isType))(
    _ior->d_object,
    _tmp_name,
    &_ex);

  /*
   * Postprocess OUT, INOUT, returns, and exceptions.
   */

  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);

    return _res;
  }
  sidl_String_free(_tmp_name);
  _res = (jboolean) _ior_res;

  return _res;
}

/*
 * Return the meta-data about the class implementing this interface.
 */

static jobject
jni_getClassInfo(
  JNIEnv* env,
  jobject obj)
{
  /*
   * Declare return and temporary variables.
   */

  struct bHYPRE_StructVectorView__object* _ior = NULL;
  struct sidl_ClassInfo__object* _ior_res = (struct sidl_ClassInfo__object*) 
    NULL;
  jobject _res = (jobject) NULL;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);

  /*
   * Call the IOR method through the EPV.
   */

  _ior_res = (*(_ior->d_epv->f_getClassInfo))(
    _ior->d_object,
    &_ex);

  /*
   * Postprocess OUT, INOUT, returns, and exceptions.
   */

  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);

    return _res;
  }
  _res = sidl_Java_I2J_ifc(env, _ior_res, "sidl.ClassInfo", FALSE);JAVA_CHECK(
    env);

  return _res;
  JAVA_EXIT:

  return _res;
}

/*
 * Select and execute a method by name
 */

static void
jni__exec(
  JNIEnv* env,
  jobject obj,
  jstring _arg_methodName,
  jobject _arg_inArgs,
  jobject _arg_outArgs)
{
  /*
   * Declare return and temporary variables.
   */

  struct bHYPRE_StructVectorView__object* _ior = NULL;
  char* _tmp_methodName = (char*) NULL;
  struct sidl_rmi_Call__object* _tmp_inArgs = (struct sidl_rmi_Call__object*) 
    NULL;
  struct sidl_rmi_Return__object* _tmp_outArgs = (struct 
    sidl_rmi_Return__object*) NULL;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_methodName = sidl_Java_J2I_string(env, _arg_methodName);
  _tmp_inArgs = (struct sidl_rmi_Call__object*) sidl_Java_J2I_ifc(env, 
    _arg_inArgs, "sidl.rmi.Call", FALSE);JAVA_CHECK(env);
  _tmp_outArgs = (struct sidl_rmi_Return__object*) sidl_Java_J2I_ifc(env, 
    _arg_outArgs, "sidl.rmi.Return", FALSE);JAVA_CHECK(env);

  /*
   * Call the IOR method through the EPV.
   */

  (*(_ior->d_epv->f__exec))(
    _ior->d_object,
    _tmp_methodName,
    _tmp_inArgs,
    _tmp_outArgs,
    &_ex);

  /*
   * Postprocess OUT, INOUT, returns, and exceptions.
   */

  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);
    return;
  }
  sidl_String_free(_tmp_methodName);
  JAVA_EXIT:
  return;
}
/*
 * Method to set whether or not method hooks should be invoked.
 */

static void
jni__set_hooks(
  JNIEnv* env,
  jobject obj,
  jboolean _arg_on)
{
  /*
   * Declare return and temporary variables.
   */

  struct bHYPRE_StructVectorView__object* _ior = NULL;
  sidl_bool _tmp_on = FALSE;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_on = (sidl_bool) _arg_on;

  /*
   * Call the IOR method through the EPV.
   */

  (*(_ior->d_epv->f__set_hooks))(
    _ior->d_object,
    _tmp_on,
    &_ex);

  /*
   * Postprocess OUT, INOUT, returns, and exceptions.
   */

  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);
    return;
  }
}

/*
 * Register JNI methods with the Java JVM.
 */

void bHYPRE_StructVectorView__register(JNIEnv* env)
{
  JNINativeMethod methods[16];
  jclass cls;

  methods[0].name      = "_connect_remote_ior";
  methods[0].signature = "(Ljava/lang/String;)J";
  methods[0].fnPtr     = (void *)jni__connect_remote_ior;
  methods[1].name      = "_exec";
  methods[1].signature = "(Ljava/lang/String;Lsidl/rmi/Call;Lsidl/rmi/Return;)V";
  methods[1].fnPtr     = (void *)jni__exec;
  methods[2].name      = "_set_hooks";
  methods[2].signature = "(Z)V";
  methods[2].fnPtr     = (void *)jni__set_hooks;
  methods[3].name      = "SetGrid";
  methods[3].signature = "(LbHYPRE/StructGrid;)I";
  methods[3].fnPtr     = (void *)jni_SetGrid;
  methods[4].name      = "SetNumGhost";
  methods[4].signature = "(Lsidl/Integer$Array1;)I";
  methods[4].fnPtr     = (void *)jni_SetNumGhost;
  methods[5].name      = "SetValue";
  methods[5].signature = "(Lsidl/Integer$Array1;D)I";
  methods[5].fnPtr     = (void *)jni_SetValue;
  methods[6].name      = "SetBoxValues";
  methods[6].signature = "(Lsidl/Integer$Array1;Lsidl/Integer$Array1;Lsidl/Double$Array1;)I";
  methods[6].fnPtr     = (void *)jni_SetBoxValues;
  methods[7].name      = "SetCommunicator";
  methods[7].signature = "(LbHYPRE/MPICommunicator;)I";
  methods[7].fnPtr     = (void *)jni_SetCommunicator;
  methods[8].name      = "Destroy";
  methods[8].signature = "()V";
  methods[8].fnPtr     = (void *)jni_Destroy;
  methods[9].name      = "Initialize";
  methods[9].signature = "()I";
  methods[9].fnPtr     = (void *)jni_Initialize;
  methods[10].name      = "Assemble";
  methods[10].signature = "()I";
  methods[10].fnPtr     = (void *)jni_Assemble;
  methods[11].name      = "addRef";
  methods[11].signature = "()V";
  methods[11].fnPtr     = (void *)jni_addRef;
  methods[12].name      = "deleteRef";
  methods[12].signature = "()V";
  methods[12].fnPtr     = (void *)jni_deleteRef;
  methods[13].name      = "isSame";
  methods[13].signature = "(Lsidl/BaseInterface;)Z";
  methods[13].fnPtr     = (void *)jni_isSame;
  methods[14].name      = "isType";
  methods[14].signature = "(Ljava/lang/String;)Z";
  methods[14].fnPtr     = (void *)jni_isType;
  methods[15].name      = "getClassInfo";
  methods[15].signature = "()Lsidl/ClassInfo;";
  methods[15].fnPtr     = (void *)jni_getClassInfo;


  cls = (*env)->FindClass(env, "bHYPRE/StructVectorView$Wrapper");
  if (cls) {
    (*env)->RegisterNatives(env, cls, methods, 16);
    (*env)->DeleteLocalRef(env, cls);
  }
}