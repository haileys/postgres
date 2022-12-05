#ifndef PGLITE_H
#define PGLITE_H

#include <utils/elog.h>
#include <utils/palloc.h>

void pglite_abort() pg_attribute_noreturn();
void pglite_exit_thread(int code) pg_attribute_noreturn();
void pglite_atexit(void(*function)(void));

void pglite_log(ErrorData* edata, const char* backend);

#define pglite_log_raw(msg, len) pglite_log_raw_((msg), (len), __FILE__, __LINE__, __FUNCTION__)
void pglite_log_raw_(const char* msg, size_t len, const char* filename, int lineno, const char* funcname);

void pglite_tls_init_access_common_reloptions(void);
void pglite_tls_init_access_transam_multixacct(void);
void pglite_tls_init_access_transam_parallel(void);
void pglite_tls_init_access_transam_xact(void);
void pglite_tls_init_access_transam_xloginsert(void);
void pglite_tls_init_lib_rbtree(void);
void pglite_tls_init_postmaster_autovacuum(void);
void pglite_tls_init_postmaster_postmaster(void);
void pglite_tls_init_replication_logical_worker(void);
void pglite_tls_init_storage_ipc_dsm(void);
void pglite_tls_init_storage_lmgr_lock(void);
void pglite_tls_init_utils_activity_pgstat(void);
void pglite_tls_init_utils_activity_wait_event(void);
void pglite_tls_init_utils_cache_plancache(void);
void pglite_tls_init_utils_misc_guc(void);

// supplementary headers:
#include "pglite/fs.h"

#endif
