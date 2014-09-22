/* dcomErr.h -- DCOM API error codes (subset of win32 error codes) */

/* Copyright (c) 1998 Wind River Systems, Inc. */

#ifndef __INC_dcomErr_h
#define __INC_dcomErr_h

/* facility codes */

#define FACILITY_WINDOWS                 8
#define FACILITY_STORAGE                 3
#define FACILITY_RPC                     1
#define FACILITY_SSPI                    9
#define FACILITY_WIN32                   7
#define FACILITY_CONTROL                 10
#define FACILITY_NULL                    0
#define FACILITY_INTERNET                12
#define FACILITY_ITF                     4
#define FACILITY_DISPATCH                2
#define FACILITY_CERT                    11


#define NO_ERROR 0L

/* DCOM / RPC error codes */

#define RPC_S_INVALID_STRING_BINDING     1700L
#define RPC_S_WRONG_KIND_OF_BINDING      1701L
#define RPC_S_INVALID_BINDING            1702L
#define RPC_S_PROTSEQ_NOT_SUPPORTED      1703L
#define RPC_S_INVALID_RPC_PROTSEQ        1704L
#define RPC_S_INVALID_STRING_UUID        1705L
#define RPC_S_INVALID_ENDPOINT_FORMAT    1706L
#define RPC_S_INVALID_NET_ADDR           1707L
#define RPC_S_NO_ENDPOINT_FOUND          1708L
#define RPC_S_INVALID_TIMEOUT            1709L
#define RPC_S_OBJECT_NOT_FOUND           1710L
#define RPC_S_ALREADY_REGISTERED         1711L
#define RPC_S_TYPE_ALREADY_REGISTERED    1712L
#define RPC_S_ALREADY_LISTENING          1713L
#define RPC_S_NO_PROTSEQS_REGISTERED     1714L
#define RPC_S_NOT_LISTENING              1715L
#define RPC_S_UNKNOWN_MGR_TYPE           1716L
#define RPC_S_UNKNOWN_IF                 1717L
#define RPC_S_NO_BINDINGS                1718L
#define RPC_S_NO_PROTSEQS                1719L
#define RPC_S_CANT_CREATE_ENDPOINT       1720L
#define RPC_S_OUT_OF_RESOURCES           1721L
#define RPC_S_SERVER_UNAVAILABLE         1722L
#define RPC_S_SERVER_TOO_BUSY            1723L
#define RPC_S_INVALID_NETWORK_OPTIONS    1724L
#define RPC_S_NO_CALL_ACTIVE             1725L
#define RPC_S_CALL_FAILED                1726L
#define RPC_S_CALL_FAILED_DNE            1727L
#define RPC_S_PROTOCOL_ERROR             1728L
#define RPC_S_UNSUPPORTED_TRANS_SYN      1730L
#define RPC_S_UNSUPPORTED_TYPE           1732L
#define RPC_S_INVALID_TAG                1733L
#define RPC_S_INVALID_BOUND              1734L
#define RPC_S_NO_ENTRY_NAME              1735L
#define RPC_S_INVALID_NAME_SYNTAX        1736L
#define RPC_S_UNSUPPORTED_NAME_SYNTAX    1737L
#define RPC_S_UUID_NO_ADDRESS            1739L
#define RPC_S_DUPLICATE_ENDPOINT         1740L
#define RPC_S_UNKNOWN_AUTHN_TYPE         1741L
#define RPC_S_MAX_CALLS_TOO_SMALL        1742L
#define RPC_S_STRING_TOO_LONG            1743L
#define RPC_S_PROTSEQ_NOT_FOUND          1744L
#define RPC_S_PROCNUM_OUT_OF_RANGE       1745L
#define RPC_S_BINDING_HAS_NO_AUTH        1746L
#define RPC_S_UNKNOWN_AUTHN_SERVICE      1747L
#define RPC_S_UNKNOWN_AUTHN_LEVEL        1748L
#define RPC_S_INVALID_AUTH_IDENTITY      1749L
#define RPC_S_UNKNOWN_AUTHZ_SERVICE      1750L
#define EPT_S_INVALID_ENTRY              1751L
#define EPT_S_CANT_PERFORM_OP            1752L
#define EPT_S_NOT_REGISTERED             1753L
#define RPC_S_NOTHING_TO_EXPORT          1754L
#define RPC_S_INCOMPLETE_NAME            1755L
#define RPC_S_INVALID_VERS_OPTION        1756L
#define RPC_S_NO_MORE_MEMBERS            1757L
#define RPC_S_NOT_ALL_OBJS_UNEXPORTED    1758L
#define RPC_S_INTERFACE_NOT_FOUND        1759L
#define RPC_S_ENTRY_ALREADY_EXISTS       1760L
#define RPC_S_ENTRY_NOT_FOUND            1761L
#define RPC_S_NAME_SERVICE_UNAVAILABLE   1762L
#define RPC_S_INVALID_NAF_ID             1763L
#define RPC_S_CANNOT_SUPPORT             1764L
#define RPC_S_NO_CONTEXT_AVAILABLE       1765L
#define RPC_S_INTERNAL_ERROR             1766L
#define RPC_S_ZERO_DIVIDE                1767L
#define RPC_S_ADDRESS_ERROR              1768L
#define RPC_S_FP_DIV_ZERO                1769L
#define RPC_S_FP_UNDERFLOW               1770L
#define RPC_S_FP_OVERFLOW                1771L
#define RPC_X_NO_MORE_ENTRIES            1772L
#define RPC_X_SS_CHAR_TRANS_OPEN_FAIL    1773L
#define RPC_X_SS_CHAR_TRANS_SHORT_FILE   1774L
#define RPC_X_SS_IN_NULL_CONTEXT         1775L
#define RPC_X_SS_CONTEXT_DAMAGED         1777L
#define RPC_X_SS_HANDLES_MISMATCH        1778L
#define RPC_X_SS_CANNOT_GET_CALL_HANDLE  1779L
#define RPC_X_NULL_REF_POINTER           1780L
#define RPC_X_ENUM_VALUE_OUT_OF_RANGE    1781L
#define RPC_X_BYTE_COUNT_TOO_SMALL       1782L
#define RPC_X_BAD_STUB_DATA              1783L
#define ERROR_INVALID_USER_BUFFER        1784L
#define ERROR_UNRECOGNIZED_MEDIA         1785L
#define ERROR_NO_TRUST_LSA_SECRET        1786L
#define ERROR_NO_TRUST_SAM_ACCOUNT       1787L
#define ERROR_TRUSTED_DOMAIN_FAILURE     1788L
#define ERROR_TRUSTED_RELATIONSHIP_FAILURE 1789L
#define ERROR_TRUST_FAILURE              1790L
#define RPC_S_CALL_IN_PROGRESS           1791L
#define ERROR_NETLOGON_NOT_STARTED       1792L
#define ERROR_ACCOUNT_EXPIRED            1793L
#define ERROR_REDIRECTOR_HAS_OPEN_HANDLES 1794L
#define ERROR_PRINTER_DRIVER_ALREADY_INSTALLED 1795L
#define ERROR_UNKNOWN_PORT               1796L
#define ERROR_UNKNOWN_PRINTER_DRIVER     1797L
#define ERROR_UNKNOWN_PRINTPROCESSOR     1798L
#define ERROR_INVALID_SEPARATOR_FILE     1799L
#define ERROR_INVALID_PRIORITY           1800L
#define ERROR_INVALID_PRINTER_NAME       1801L
#define ERROR_PRINTER_ALREADY_EXISTS     1802L
#define ERROR_INVALID_PRINTER_COMMAND    1803L
#define ERROR_INVALID_DATATYPE           1804L
#define ERROR_INVALID_ENVIRONMENT        1805L
#define RPC_S_NO_MORE_BINDINGS           1806L
#define ERROR_NOLOGON_INTERDOMAIN_TRUST_ACCOUNT 1807L
#define ERROR_NOLOGON_WORKSTATION_TRUST_ACCOUNT 1808L
#define ERROR_NOLOGON_SERVER_TRUST_ACCOUNT 1809L
#define ERROR_DOMAIN_TRUST_INCONSISTENT  1810L
#define ERROR_SERVER_HAS_OPEN_HANDLES    1811L
#define ERROR_RESOURCE_DATA_NOT_FOUND    1812L
#define ERROR_RESOURCE_TYPE_NOT_FOUND    1813L
#define ERROR_RESOURCE_NAME_NOT_FOUND    1814L
#define ERROR_RESOURCE_LANG_NOT_FOUND    1815L
#define ERROR_NOT_ENOUGH_QUOTA           1816L
#define RPC_S_NO_INTERFACES              1817L
#define RPC_S_CALL_CANCELLED             1818L
#define RPC_S_BINDING_INCOMPLETE         1819L
#define RPC_S_COMM_FAILURE               1820L
#define RPC_S_UNSUPPORTED_AUTHN_LEVEL    1821L
#define RPC_S_NO_PRINC_NAME              1822L
#define RPC_S_NOT_RPC_ERROR              1823L
#define RPC_S_UUID_LOCAL_ONLY            1824L
#define RPC_S_SEC_PKG_ERROR              1825L
#define RPC_S_NOT_CANCELLED              1826L
#define RPC_X_INVALID_ES_ACTION          1827L
#define RPC_X_WRONG_ES_VERSION           1828L
#define RPC_X_WRONG_STUB_VERSION         1829L
#define RPC_X_INVALID_PIPE_OBJECT        1830L
#define RPC_X_INVALID_PIPE_OPERATION     1831L
#define RPC_X_WRONG_PIPE_VERSION         1832L
#define RPC_S_GROUP_MEMBER_NOT_FOUND     1898L
#define EPT_S_CANT_CREATE                1899L
#define RPC_S_INVALID_OBJECT             1900L

/* DCOM object exporter error codes */

#define OR_INVALID_OXID                  1910L
#define OR_INVALID_OID                   1911L
#define OR_INVALID_SET                   1912L

/* HRESULT SEVERITY values required for DCOM */

#define SEVERITY_SUCCESS    0
#define SEVERITY_ERROR      1


/* SUCCEEDED / FAILED macros for testing returned HRESULTs */
#define SUCCEEDED(hr)		((HRESULT) (hr) >= 0)
#define FAILED(hr)		((HRESULT) (hr) < 0)
#define HRESULT_CODE(hr)	((hr) & 0xFFFF)
#define HRESULT_FACILITY(hr)	(((hr) >> 16) & 0x1FFF)
#define HRESULT_SEVERITY(hr)	(((hr) >> 31) & 0x01)

/* How to make your own HRESULT */
#define MAKE_HRESULT(sev,fac,code)		\
    ((HRESULT) (((unsigned long)(sev)<<31) |	\
		((unsigned long)(fac)<<16) |	\
		((unsigned long)(code))) )

#define DEFINE_HRESULT(_sc) ((HRESULT)_sc)

/* Standard COM/DCOM HRESULT values */


#define NOERROR             		 0
#define S_OK                             ((HRESULT)0x00000000L)
#define S_FALSE                          ((HRESULT)0x00000001L)

#define E_UNEXPECTED                     DEFINE_HRESULT(0x8000FFFFL)
#define E_NOTIMPL                        DEFINE_HRESULT(0x80004001L)
#define E_OUTOFMEMORY                    DEFINE_HRESULT(0x8007000EL)
#define E_INVALIDARG                     DEFINE_HRESULT(0x80070057L)
#define E_NOINTERFACE                    DEFINE_HRESULT(0x80004002L)
#define E_POINTER                        DEFINE_HRESULT(0x80004003L)
#define E_HANDLE                         DEFINE_HRESULT(0x80070006L)
#define E_ABORT                          DEFINE_HRESULT(0x80004004L)
#define E_FAIL                           DEFINE_HRESULT(0x80004005L)
#define E_ACCESSDENIED                   DEFINE_HRESULT(0x80070005L)
#define E_PENDING                        DEFINE_HRESULT(0x8000000AL)
#define CO_E_INIT_TLS                    DEFINE_HRESULT(0x80004006L)
#define CO_E_INIT_SHARED_ALLOCATOR       DEFINE_HRESULT(0x80004007L)
#define CO_E_INIT_MEMORY_ALLOCATOR       DEFINE_HRESULT(0x80004008L)
#define CO_E_INIT_CLASS_CACHE            DEFINE_HRESULT(0x80004009L)
#define CO_E_INIT_RPC_CHANNEL            DEFINE_HRESULT(0x8000400AL)
#define CO_E_INIT_TLS_SET_CHANNEL_CONTROL DEFINE_HRESULT(0x8000400BL)
#define CO_E_INIT_TLS_CHANNEL_CONTROL    DEFINE_HRESULT(0x8000400CL)
#define CO_E_INIT_UNACCEPTED_USER_ALLOCATOR DEFINE_HRESULT(0x8000400DL)
#define CO_E_INIT_SCM_MUTEX_EXISTS       DEFINE_HRESULT(0x8000400EL)
#define CO_E_INIT_SCM_FILE_MAPPING_EXISTS DEFINE_HRESULT(0x8000400FL)
#define CO_E_INIT_SCM_MAP_VIEW_OF_FILE   DEFINE_HRESULT(0x80004010L)
#define CO_E_INIT_SCM_EXEC_FAILURE       DEFINE_HRESULT(0x80004011L)
#define CO_E_INIT_ONLY_SINGLE_THREADED   DEFINE_HRESULT(0x80004012L)
#define CO_E_CANT_REMOTE                 DEFINE_HRESULT(0x80004013L)
#define CO_E_BAD_SERVER_NAME             DEFINE_HRESULT(0x80004014L)
#define CO_E_WRONG_SERVER_IDENTITY       DEFINE_HRESULT(0x80004015L)
#define CO_E_OLE1DDE_DISABLED            DEFINE_HRESULT(0x80004016L)
#define CO_E_RUNAS_SYNTAX                DEFINE_HRESULT(0x80004017L)
#define CO_E_CREATEPROCESS_FAILURE       DEFINE_HRESULT(0x80004018L)
#define CO_E_RUNAS_CREATEPROCESS_FAILURE DEFINE_HRESULT(0x80004019L)
#define CO_E_RUNAS_LOGON_FAILURE         DEFINE_HRESULT(0x8000401AL)
#define CO_E_LAUNCH_PERMSSION_DENIED     DEFINE_HRESULT(0x8000401BL)
#define CO_E_START_SERVICE_FAILURE       DEFINE_HRESULT(0x8000401CL)
#define CO_E_REMOTE_COMMUNICATION_FAILURE DEFINE_HRESULT(0x8000401DL)
#define CO_E_SERVER_START_TIMEOUT        DEFINE_HRESULT(0x8000401EL)
#define CO_E_CLSREG_INCONSISTENT         DEFINE_HRESULT(0x8000401FL)
#define CO_E_IIDREG_INCONSISTENT         DEFINE_HRESULT(0x80004020L)
#define CO_E_NOT_SUPPORTED               DEFINE_HRESULT(0x80004021L)

#define CLASS_E_NOAGGREGATION            DEFINE_HRESULT(0x80040110L)
#define CLASS_E_CLASSNOTAVAILABLE        DEFINE_HRESULT(0x80040111L)

#define REGDB_E_READREGDB                DEFINE_HRESULT(0x80040150L)
#define REGDB_E_WRITEREGDB               DEFINE_HRESULT(0x80040151L)
#define REGDB_E_KEYMISSING               DEFINE_HRESULT(0x80040152L)
#define REGDB_E_INVALIDVALUE             DEFINE_HRESULT(0x80040153L)
#define REGDB_E_CLASSNOTREG              DEFINE_HRESULT(0x80040154L)
#define REGDB_E_IIDNOTREG                DEFINE_HRESULT(0x80040155L)

#define CO_E_NOTINITIALIZED              DEFINE_HRESULT(0x800401F0L)
#define CO_E_ALREADYINITIALIZED          DEFINE_HRESULT(0x800401F1L)
#define CO_E_CANTDETERMINECLASS          DEFINE_HRESULT(0x800401F2L)
#define CO_E_CLASSSTRING                 DEFINE_HRESULT(0x800401F3L)
#define CO_E_IIDSTRING                   DEFINE_HRESULT(0x800401F4L)
#define CO_E_APPNOTFOUND                 DEFINE_HRESULT(0x800401F5L)
#define CO_E_APPSINGLEUSE                DEFINE_HRESULT(0x800401F6L)
#define CO_E_ERRORINAPP                  DEFINE_HRESULT(0x800401F7L)
#define CO_E_DLLNOTFOUND                 DEFINE_HRESULT(0x800401F8L)
#define CO_E_ERRORINDLL                  DEFINE_HRESULT(0x800401F9L)
#define CO_E_WRONGOSFORAPP               DEFINE_HRESULT(0x800401FAL)
#define CO_E_OBJNOTREG                   DEFINE_HRESULT(0x800401FBL)
#define CO_E_OBJISREG                    DEFINE_HRESULT(0x800401FCL)
#define CO_E_OBJNOTCONNECTED             DEFINE_HRESULT(0x800401FDL)
#define CO_E_APPDIDNTREG                 DEFINE_HRESULT(0x800401FEL)
#define CO_E_RELEASED                    DEFINE_HRESULT(0x800401FFL)

#define CO_E_CLASS_CREATE_FAILED         DEFINE_HRESULT(0x80080001L)
#define CO_E_SCM_ERROR                   DEFINE_HRESULT(0x80080002L)
#define CO_E_SCM_RPC_FAILURE             DEFINE_HRESULT(0x80080003L)
#define CO_E_BAD_PATH                    DEFINE_HRESULT(0x80080004L)
#define CO_E_SERVER_EXEC_FAILURE         DEFINE_HRESULT(0x80080005L)
#define CO_E_OBJSRV_RPC_FAILURE          DEFINE_HRESULT(0x80080006L)

#define CO_E_SERVER_STOPPING             DEFINE_HRESULT(0x80080008L)
#define CO_S_NOTALLINTERFACES            DEFINE_HRESULT(0x00080012L)

#define DISP_E_UNKNOWNINTERFACE          DEFINE_HRESULT(0x80020001L)
#define DISP_E_MEMBERNOTFOUND            DEFINE_HRESULT(0x80020003L)
#define DISP_E_PARAMNOTFOUND             DEFINE_HRESULT(0x80020004L)
#define DISP_E_TYPEMISMATCH              DEFINE_HRESULT(0x80020005L)
#define DISP_E_UNKNOWNNAME               DEFINE_HRESULT(0x80020006L)
#define DISP_E_NONAMEDARGS               DEFINE_HRESULT(0x80020007L)
#define DISP_E_BADVARTYPE                DEFINE_HRESULT(0x80020008L)
#define DISP_E_EXCEPTION                 DEFINE_HRESULT(0x80020009L)
#define DISP_E_OVERFLOW                  DEFINE_HRESULT(0x8002000AL)
#define DISP_E_BADINDEX                  DEFINE_HRESULT(0x8002000BL)
#define DISP_E_UNKNOWNLCID               DEFINE_HRESULT(0x8002000CL)
#define DISP_E_ARRAYISLOCKED             DEFINE_HRESULT(0x8002000DL)
#define DISP_E_BADPARAMCOUNT             DEFINE_HRESULT(0x8002000EL)
#define DISP_E_PARAMNOTOPTIONAL          DEFINE_HRESULT(0x8002000FL)
#define DISP_E_BADCALLEE                 DEFINE_HRESULT(0x80020010L)
#define DISP_E_NOTACOLLECTION            DEFINE_HRESULT(0x80020011L)
#define TYPE_E_BUFFERTOOSMALL            DEFINE_HRESULT(0x80028016L)
#define TYPE_E_INVDATAREAD               DEFINE_HRESULT(0x80028018L)
#define TYPE_E_UNSUPFORMAT               DEFINE_HRESULT(0x80028019L)
#define TYPE_E_REGISTRYACCESS            DEFINE_HRESULT(0x8002801CL)
#define TYPE_E_LIBNOTREGISTERED          DEFINE_HRESULT(0x8002801DL)
#define TYPE_E_UNDEFINEDTYPE             DEFINE_HRESULT(0x80028027L)
#define TYPE_E_QUALIFIEDNAMEDISALLOWED   DEFINE_HRESULT(0x80028028L)
#define TYPE_E_INVALIDSTATE              DEFINE_HRESULT(0x80028029L)
#define TYPE_E_WRONGTYPEKIND             DEFINE_HRESULT(0x8002802AL)
#define TYPE_E_ELEMENTNOTFOUND           DEFINE_HRESULT(0x8002802BL)
#define TYPE_E_AMBIGUOUSNAME             DEFINE_HRESULT(0x8002802CL)
#define TYPE_E_NAMECONFLICT              DEFINE_HRESULT(0x8002802DL)
#define TYPE_E_UNKNOWNLCID               DEFINE_HRESULT(0x8002802EL)
#define TYPE_E_DLLFUNCTIONNOTFOUND       DEFINE_HRESULT(0x8002802FL)
#define TYPE_E_BADMODULEKIND             DEFINE_HRESULT(0x800288BDL)
#define TYPE_E_SIZETOOBIG                DEFINE_HRESULT(0x800288C5L)
#define TYPE_E_DUPLICATEID               DEFINE_HRESULT(0x800288C6L)
#define TYPE_E_INVALIDID                 DEFINE_HRESULT(0x800288CFL)
#define TYPE_E_TYPEMISMATCH              DEFINE_HRESULT(0x80028CA0L)
#define TYPE_E_OUTOFBOUNDS               DEFINE_HRESULT(0x80028CA1L)
#define TYPE_E_IOERROR                   DEFINE_HRESULT(0x80028CA2L)
#define TYPE_E_CANTCREATETMPFILE         DEFINE_HRESULT(0x80028CA3L)
#define TYPE_E_CANTLOADLIBRARY           DEFINE_HRESULT(0x80029C4AL)
#define TYPE_E_INCONSISTENTPROPFUNCS     DEFINE_HRESULT(0x80029C83L)
#define TYPE_E_CIRCULARTYPE              DEFINE_HRESULT(0x80029C84L)

#define RPC_E_CALL_REJECTED              DEFINE_HRESULT(0x80010001L)
#define RPC_E_CALL_CANCELED              DEFINE_HRESULT(0x80010002L)
#define RPC_E_CANTPOST_INSENDCALL        DEFINE_HRESULT(0x80010003L)
#define RPC_E_CANTCALLOUT_INASYNCCALL    DEFINE_HRESULT(0x80010004L)
#define RPC_E_CANTCALLOUT_INEXTERNALCALL DEFINE_HRESULT(0x80010005L)
#define RPC_E_CONNECTION_TERMINATED      DEFINE_HRESULT(0x80010006L)
#define RPC_E_SERVER_DIED                DEFINE_HRESULT(0x80010007L)
#define RPC_E_CLIENT_DIED                DEFINE_HRESULT(0x80010008L)
#define RPC_E_INVALID_DATAPACKET         DEFINE_HRESULT(0x80010009L)
#define RPC_E_CANTTRANSMIT_CALL          DEFINE_HRESULT(0x8001000AL)
#define RPC_E_CLIENT_CANTMARSHAL_DATA    DEFINE_HRESULT(0x8001000BL)
#define RPC_E_CLIENT_CANTUNMARSHAL_DATA  DEFINE_HRESULT(0x8001000CL)
#define RPC_E_SERVER_CANTMARSHAL_DATA    DEFINE_HRESULT(0x8001000DL)
#define RPC_E_SERVER_CANTUNMARSHAL_DATA  DEFINE_HRESULT(0x8001000EL)
#define RPC_E_INVALID_DATA               DEFINE_HRESULT(0x8001000FL)
#define RPC_E_INVALID_PARAMETER          DEFINE_HRESULT(0x80010010L)
#define RPC_E_CANTCALLOUT_AGAIN          DEFINE_HRESULT(0x80010011L)
#define RPC_E_SERVER_DIED_DNE            DEFINE_HRESULT(0x80010012L)
#define RPC_E_SYS_CALL_FAILED            DEFINE_HRESULT(0x80010100L)
#define RPC_E_OUT_OF_RESOURCES           DEFINE_HRESULT(0x80010101L)
#define RPC_E_ATTEMPTED_MULTITHREAD      DEFINE_HRESULT(0x80010102L)
#define RPC_E_NOT_REGISTERED             DEFINE_HRESULT(0x80010103L)
#define RPC_E_FAULT                      DEFINE_HRESULT(0x80010104L)
#define RPC_E_SERVERFAULT                DEFINE_HRESULT(0x80010105L)
#define RPC_E_CHANGED_MODE               DEFINE_HRESULT(0x80010106L)
#define RPC_E_INVALIDMETHOD              DEFINE_HRESULT(0x80010107L)
#define RPC_E_DISCONNECTED               DEFINE_HRESULT(0x80010108L)
#define RPC_E_RETRY                      DEFINE_HRESULT(0x80010109L)
#define RPC_E_SERVERCALL_RETRYLATER      DEFINE_HRESULT(0x8001010AL)
#define RPC_E_SERVERCALL_REJECTED        DEFINE_HRESULT(0x8001010BL)
#define RPC_E_INVALID_CALLDATA           DEFINE_HRESULT(0x8001010CL)
#define RPC_E_CANTCALLOUT_ININPUTSYNCCALL DEFINE_HRESULT(0x8001010DL)
#define RPC_E_WRONG_THREAD               DEFINE_HRESULT(0x8001010EL)
#define RPC_E_THREAD_NOT_INIT            DEFINE_HRESULT(0x8001010FL)
#define RPC_E_VERSION_MISMATCH           DEFINE_HRESULT(0x80010110L)
#define RPC_E_INVALID_HEADER             DEFINE_HRESULT(0x80010111L)
#define RPC_E_INVALID_EXTENSION          DEFINE_HRESULT(0x80010112L)
#define RPC_E_INVALID_IPID               DEFINE_HRESULT(0x80010113L)
#define RPC_E_INVALID_OBJECT             DEFINE_HRESULT(0x80010114L)
#define RPC_S_CALLPENDING                DEFINE_HRESULT(0x80010115L)
#define RPC_S_WAITONTIMER                DEFINE_HRESULT(0x80010116L)
#define RPC_E_CALL_COMPLETE              DEFINE_HRESULT(0x80010117L)
#define RPC_E_UNSECURE_CALL              DEFINE_HRESULT(0x80010118L)
#define RPC_E_TOO_LATE                   DEFINE_HRESULT(0x80010119L)
#define RPC_E_NO_GOOD_SECURITY_PACKAGES  DEFINE_HRESULT(0x8001011AL)
#define RPC_E_ACCESS_DENIED              DEFINE_HRESULT(0x8001011BL)
#define RPC_E_REMOTE_DISABLED            DEFINE_HRESULT(0x8001011CL)
#define RPC_E_INVALID_OBJREF             DEFINE_HRESULT(0x8001011DL)
#define RPC_E_UNEXPECTED                 DEFINE_HRESULT(0x8001FFFFL)


#endif


