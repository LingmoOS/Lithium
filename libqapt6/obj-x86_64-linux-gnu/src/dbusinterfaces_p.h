#ifndef QAPT_DBUSINTERFACES_P_H
#define QAPT_DBUSINTERFACES_P_H

#include "transactioninterface_p.h"
#include "workerinterface_p.h"

// Unlike other approaches this one will always explode when a define does not
// actually make it into the compiler (e.g. because the CMake var was renamed).
// e.g. QString() would compile fine if the define is missing,
// char[]=; on the other hand won't.
static const char s_workerVersion[] = "6";
static const char s_workerReverseDomainName[] = "org.kubuntu.qaptworker6";

// This will fail regardless of whether the var is present or not as this is
// hard typed anyway.
typedef OrgKubuntuQaptworker6Interface WorkerInterface;
typedef OrgKubuntuQaptworker6TransactionInterface TransactionInterface;

#endif // QAPT_DBUSINTERFACES_P_H
