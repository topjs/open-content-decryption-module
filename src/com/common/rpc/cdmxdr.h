/*
* Copyright (C) 2014, Fraunhofer Institute for Open Communication Systems FOKUS
*/

/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _CDMXDR_H_RPCGEN
#define _CDMXDR_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

// TODO(sph): think of better names for rpc structs
struct session {
  char *type;
  struct {
    u_int pbInitData_len;
    uint8_t *pbInitData_val;
  } pbInitData;
  struct {
    u_int pbCDMData_len;
    uint8_t *pbCDMData_val;
  } pbCDMData;
};
typedef struct session session;

struct data {
  struct {
    u_int pbIv_len;
    uint8_t *pbIv_val;
  } pbIv;
  struct {
    u_int pbData_len;
    uint8_t *pbData_val;
  } pbData;
  struct {
    u_int session_id_len;
    uint16_t *session_id_val;
  } session_id;
  struct {
    u_int subsampleData_len;
    uint32_t *subsampleData_val;
  } subsampleData;
};
typedef struct data data;

struct decrypted_data {
  int32_t return_val;
  struct {
    u_int pbData_len;
    uint8_t *pbData_val;
  } pbData;
  struct {
    u_int subsampleData_len;
    uint32_t *subsampleData_val;
  } subsampleData;
};
typedef struct decrypted_data decrypted_data;

struct me_data {
  struct {
    u_int sampleProtectionCert_len;
    uint8_t *sampleProtectionCert_val;
  } sampleProtectionCert;
  struct {
    u_int session_id_len;
    uint16_t *session_id_val;
  } session_id;
  int32_t idXchngShMem;
  int32_t idXchngSem;
};
typedef struct me_data me_data;

struct mes_data {
  struct {
    u_int mes_sid_len;
    uint16_t *mes_sid_val;
  } mes_sid;
};
typedef struct mes_data mes_data;

struct mes_response {
  int32_t return_val;
  struct {
    u_int encryptedSessionKey_len;
    uint8_t *encryptedSessionKey_val;
  } encryptedSessionKey;
};
typedef struct mes_response mes_response;

struct type_request {
  struct {
    u_int keysys_len;
    uint16_t *keysys_val;
  } keysys;
  struct {
    u_int type_len;
    uint16_t *type_val;
  } type;
};
typedef struct type_request type_request;

struct session_response {
  int32_t return_val;
  struct {
    u_int session_id_len;
    uint16_t *session_id_val;
  } session_id;
};
typedef struct session_response session_response;

struct params_run {
  struct {
    u_int session_id_len;
    uint16_t *session_id_val;
  } session_id;
};
typedef struct params_run params_run;

struct params_update {
  struct {
    u_int session_id_len;
    uint16_t *session_id_val;
  } session_id;
  struct {
    u_int challenge_response_len;
    uint8_t *challenge_response_val;
  } challenge_response;
};
typedef struct params_update params_update;

struct params_close {
  struct {
    u_int session_id_len;
    uint16_t *session_id_val;
  } session_id;
};
typedef struct params_close params_close;

#define CDM_PROG 0x31234567
#define CDM_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define CDM_MEDIAKEYS_RPC 1
extern  int * cdm_mediakeys_rpc_1(char **, CLIENT *);
extern  int * cdm_mediakeys_rpc_1_svc(char **, struct svc_req *);
#define CDM_ISTYPESUPPORTED_RPC 2
extern  int * cdm_istypesupported_rpc_1(type_request *, CLIENT *);
extern  int * cdm_istypesupported_rpc_1_svc(type_request *, struct svc_req *);
#define CREATESESSION_RPC 3
extern  session_response * createsession_rpc_1(session *, CLIENT *);
extern  session_response * createsession_rpc_1_svc(session *, struct svc_req *);
#define RUN_RPC 4
extern  int * run_rpc_1(params_run *, CLIENT *);
extern  int * run_rpc_1_svc(params_run *, struct svc_req *);
#define UPDATE_RPC 5
extern  int * update_rpc_1(params_update *, CLIENT *);
extern  int * update_rpc_1_svc(params_update *, struct svc_req *);
#define CLOSE_RPC 6
extern  int * close_rpc_1(params_close *, CLIENT *);
extern  int * close_rpc_1_svc(params_close *, struct svc_req *);
#define CDM_MEDIAENGINESESSION_RPC 7
extern  mes_response * cdm_mediaenginesession_rpc_1(me_data *, CLIENT *);
extern  mes_response * cdm_mediaenginesession_rpc_1_svc(me_data *, struct svc_req *);
#define DECRYPT 8
extern  decrypted_data * decrypt_1(data *, CLIENT *);
extern  decrypted_data * decrypt_1_svc(data *, struct svc_req *);
#define async 9
extern  int * async_1(u_long *, CLIENT *);
extern  int * async_1_svc(u_long *, struct svc_req *);
extern int cdm_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define CDM_MEDIAKEYS_RPC 1
extern  int * cdm_mediakeys_rpc_1();
extern  int * cdm_mediakeys_rpc_1_svc();
#define CDM_ISTYPESUPPORTED_RPC 2
extern  int * cdm_istypesupported_rpc_1();
extern  int * cdm_istypesupported_rpc_1_svc();
#define CREATESESSION_RPC 3
extern  session_response * createsession_rpc_1();
extern  session_response * createsession_rpc_1_svc();
#define RUN_RPC 4
extern  int * run_rpc_1();
extern  int * run_rpc_1_svc();
#define UPDATE_RPC 5
extern  int * update_rpc_1();
extern  int * update_rpc_1_svc();
#define CLOSE_RPC 6
extern  int * close_rpc_1();
extern  int * close_rpc_1_svc();
#define CDM_MEDIAENGINESESSION_RPC 7
extern  mes_response * cdm_mediaenginesession_rpc_1();
extern  mes_response * cdm_mediaenginesession_rpc_1_svc();
#define DECRYPT 8
extern  decrypted_data * decrypt_1();
extern  decrypted_data * decrypt_1_svc();
#define async 9
extern  int * async_1();
extern  int * async_1_svc();
extern int cdm_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_session (XDR *, session*);
extern  bool_t xdr_data (XDR *, data*);
extern  bool_t xdr_decrypted_data (XDR *, decrypted_data*);
extern  bool_t xdr_me_data (XDR *, me_data*);
extern  bool_t xdr_mes_data (XDR *, mes_data*);
extern  bool_t xdr_mes_response (XDR *, mes_response*);
extern  bool_t xdr_type_request (XDR *, type_request*);
extern  bool_t xdr_session_response (XDR *, session_response*);
extern  bool_t xdr_params_run (XDR *, params_run*);
extern  bool_t xdr_params_update (XDR *, params_update*);
extern  bool_t xdr_params_close (XDR *, params_close*);

#else /* K&R C */
extern bool_t xdr_session ();
extern bool_t xdr_data ();
extern bool_t xdr_decrypted_data ();
extern bool_t xdr_me_data ();
extern bool_t xdr_mes_data ();
extern bool_t xdr_mes_response ();
extern bool_t xdr_type_request ();
extern bool_t xdr_session_response ();
extern bool_t xdr_params_run ();
extern bool_t xdr_params_update ();
extern bool_t xdr_params_close ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_CDMXDR_H_RPCGEN */