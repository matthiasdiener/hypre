/*BHEADER**********************************************************************
 * (c) 1996   The Regents of the University of California
 *
 * See the file COPYRIGHT_and_DISCLAIMER for a complete copyright
 * notice, contact person, and disclaimer.
 *
 * $Revision$
 *********************************************************************EHEADER*/

#ifndef _AMG_DATA_HEADER
#define _AMG_DATA_HEADER


/*--------------------------------------------------------------------------
 * AMGData
 *--------------------------------------------------------------------------*/

typedef struct
{
   /* setup params */
   int      levmax;
   int      ncg;
   double   ecg;
   int      nwt;
   double   ewt;
   int      nstr;

   /* solve params */
   int      ncyc;
   int     *mu;
   int     *ntrlx;
   int     *iprlx;
   int     *ierlx;
   int     *iurlx;

   /* output params */
   int      ioutdat;
   int      ioutgrd;
   int      ioutmat;
   int      ioutres;
   int      ioutsol;

   /* log file name */
   char     log_file_name[256];

   /* problem data */
   Matrix  *A;             
   int      num_variables; 
   int      num_unknowns;  
   int      num_points;    
   int     *iu;            
   int     *ip;            
   int     *iv;            
   double  *xp;            
   double  *yp;            
   double  *zp;            

   /* data generated by the setup phase */
   int      num_levels;
   int      ndimu;
   int      ndimp;
   int      ndima;
   int      ndimb;
   Matrix  *P;                 /* this is temporary */
   int     *icdep;
   int     *imin;
   int     *imax;
   int     *ipmn;
   int     *ipmx;
   int     *icg;
   int     *ifg;
   Matrix **A_array;
   Matrix **P_array;
   int     *leva;
   int     *levb;
   int     *levv;
   int     *levp;
   int     *levpi;
   int     *levi;
   int     *numa;
   int     *numb;
   int     *numv;
   int     *nump;

} AMGData;

/*--------------------------------------------------------------------------
 * Accessor functions for the AMGData structure
 *--------------------------------------------------------------------------*/

/* setup params */
#define AMGDataLevMax(amg_data)       ((amg_data) -> levmax)
#define AMGDataNCG(amg_data)          ((amg_data) -> ncg)
#define AMGDataECG(amg_data)          ((amg_data) -> ecg)
#define AMGDataNWT(amg_data)          ((amg_data) -> nwt)
#define AMGDataEWT(amg_data)          ((amg_data) -> ewt)
#define AMGDataNSTR(amg_data)         ((amg_data) -> nstr)
		  		      
/* solve params */
#define AMGDataNCyc(amg_data)         ((amg_data) -> ncyc)
#define AMGDataMU(amg_data)           ((amg_data) -> mu)
#define AMGDataNTRLX(amg_data)        ((amg_data) -> ntrlx)
#define AMGDataIPRLX(amg_data)        ((amg_data) -> iprlx)
#define AMGDataIERLX(amg_data)        ((amg_data) -> ierlx)
#define AMGDataIURLX(amg_data)        ((amg_data) -> iurlx)
		  		      
/* output params */
#define AMGDataIOutDat(amg_data)      ((amg_data) -> ioutdat)
#define AMGDataIOutGrd(amg_data)      ((amg_data) -> ioutgrd)
#define AMGDataIOutMat(amg_data)      ((amg_data) -> ioutmat)
#define AMGDataIOutRes(amg_data)      ((amg_data) -> ioutres)
#define AMGDataIOutSol(amg_data)      ((amg_data) -> ioutsol)
				      
/* log file name */
#define AMGDataLogFileName(amg_data)  ((amg_data) -> log_file_name)

/* problem data */
#define AMGDataA(amg_data)            ((amg_data) -> A)
#define AMGDataNumVariables(amg_data) ((amg_data) -> num_variables)
#define AMGDataNumUnknowns(amg_data)  ((amg_data) -> num_unknowns)
#define AMGDataNumPoints(amg_data)    ((amg_data) -> num_points)
#define AMGDataIU(amg_data)           ((amg_data) -> iu)
#define AMGDataIP(amg_data)           ((amg_data) -> ip)
#define AMGDataIV(amg_data)           ((amg_data) -> iv)
#define AMGDataXP(amg_data)           ((amg_data) -> xp)
#define AMGDataYP(amg_data)           ((amg_data) -> yp)
#define AMGDataZP(amg_data)           ((amg_data) -> zp)
				      
/* data generated by the setup phase */
#define AMGDataP(amg_data)            ((amg_data) -> P)
#define AMGDataNumLevels(amg_data)    ((amg_data) -> num_levels)
#define AMGDataNDIMU(amg_data)        ((amg_data) -> ndimu)
#define AMGDataNDIMP(amg_data)        ((amg_data) -> ndimp)
#define AMGDataNDIMA(amg_data)        ((amg_data) -> ndima)
#define AMGDataNDIMB(amg_data)        ((amg_data) -> ndimb)
#define AMGDataICDep(amg_data)        ((amg_data) -> icdep)
#define AMGDataIMin(amg_data)         ((amg_data) -> imin)
#define AMGDataIMax(amg_data)         ((amg_data) -> imax)
#define AMGDataIPMN(amg_data)         ((amg_data) -> ipmn)
#define AMGDataIPMX(amg_data)         ((amg_data) -> ipmx)
#define AMGDataICG(amg_data)          ((amg_data) -> icg)
#define AMGDataIFG(amg_data)          ((amg_data) -> ifg)
#define AMGDataAArray(amg_data)       ((amg_data) -> A_array)
#define AMGDataPArray(amg_data)       ((amg_data) -> P_array)
#define AMGDataLevA(amg_data)         ((amg_data) -> leva)
#define AMGDataLevB(amg_data)         ((amg_data) -> levb)
#define AMGDataLevV(amg_data)         ((amg_data) -> levv)
#define AMGDataLevP(amg_data)         ((amg_data) -> levp)
#define AMGDataLevPI(amg_data)        ((amg_data) -> levpi)
#define AMGDataLevI(amg_data)         ((amg_data) -> levi)
#define AMGDataNumA(amg_data)         ((amg_data) -> numa)
#define AMGDataNumB(amg_data)         ((amg_data) -> numb)
#define AMGDataNumV(amg_data)         ((amg_data) -> numv)
#define AMGDataNumP(amg_data)         ((amg_data) -> nump)
				      

#endif
