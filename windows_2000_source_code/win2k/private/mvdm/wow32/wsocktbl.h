/*++ BUILD Version: 0001
 *
 *  WOW v1.0
 *
 *  Copyright (c) 1991, Microsoft Corporation
 *
 *  WSOCKTBL.H
 *  WOW32 16-bit Winsock API tables
 *
 *  History:
 *  Created 02-Oct-1992 by David Treadwell (davidtr)
--*/



/* Winsock dispatch table
 */
extern W32 aw32Winsock[];


#ifdef DEBUG_OR_WOWPROFILE
extern INT iWinsockMax;
#endif

ULONG FASTCALL WWS32accept(PVDMFRAME pFrame);
ULONG FASTCALL WWS32bind(PVDMFRAME pFrame);
ULONG FASTCALL WWS32closesocket(PVDMFRAME pFrame);
ULONG FASTCALL WWS32connect(PVDMFRAME pFrame);
ULONG FASTCALL WWS32getpeername(PVDMFRAME pFrame);
ULONG FASTCALL WWS32getsockname(PVDMFRAME pFrame);
ULONG FASTCALL WWS32getsockopt(PVDMFRAME pFrame);
ULONG FASTCALL WWS32htonl(PVDMFRAME pFrame);
ULONG FASTCALL WWS32htons(PVDMFRAME pFrame);
ULONG FASTCALL WWS32inet_addr(PVDMFRAME pFrame);
ULONG FASTCALL WWS32inet_ntoa(PVDMFRAME pFrame);
ULONG FASTCALL WWS32ioctlsocket(PVDMFRAME pFrame);
ULONG FASTCALL WWS32listen(PVDMFRAME pFrame);
ULONG FASTCALL WWS32ntohl(PVDMFRAME pFrame);
ULONG FASTCALL WWS32ntohs(PVDMFRAME pFrame);
ULONG FASTCALL WWS32recv(PVDMFRAME pFrame);
ULONG FASTCALL WWS32recvfrom(PVDMFRAME pFrame);
ULONG FASTCALL WWS32select(PVDMFRAME pFrame);
ULONG FASTCALL WWS32send(PVDMFRAME pFrame);
ULONG FASTCALL WWS32sendto(PVDMFRAME pFrame);
ULONG FASTCALL WWS32setsockopt(PVDMFRAME pFrame);
ULONG FASTCALL WWS32shutdown(PVDMFRAME pFrame);
ULONG FASTCALL WWS32socket(PVDMFRAME pFrame);
ULONG FASTCALL WWS32gethostbyaddr(PVDMFRAME pFrame);
ULONG FASTCALL WWS32gethostbyname(PVDMFRAME pFrame);
ULONG FASTCALL WWS32getprotobyname(PVDMFRAME pFrame);
ULONG FASTCALL WWS32getprotobynumber(PVDMFRAME pFrame);
ULONG FASTCALL WWS32getservbyname(PVDMFRAME pFrame);
ULONG FASTCALL WWS32getservbyport(PVDMFRAME pFrame);
ULONG FASTCALL WWS32gethostname(PVDMFRAME pFrame);
ULONG FASTCALL WWS32WSAAsyncSelect(PVDMFRAME pFrame);
ULONG FASTCALL WWS32WSAAsyncGetHostByAddr(PVDMFRAME pFrame);
ULONG FASTCALL WWS32WSAAsyncGetHostByName(PVDMFRAME pFrame);
ULONG FASTCALL WWS32WSAAsyncGetProtoByNumber(PVDMFRAME pFrame);
ULONG FASTCALL WWS32WSAAsyncGetProtoByName(PVDMFRAME pFrame);
ULONG FASTCALL WWS32WSAAsyncGetServByPort(PVDMFRAME pFrame);
ULONG FASTCALL WWS32WSAAsyncGetServByName(PVDMFRAME pFrame);
ULONG FASTCALL WWS32WSACancelAsyncRequest(PVDMFRAME pFrame);
ULONG FASTCALL WWS32WSASetBlockingHook(PVDMFRAME pFrame);
ULONG FASTCALL WWS32WSAUnhookBlockingHook(PVDMFRAME pFrame);
ULONG FASTCALL WWS32WSAGetLastError(PVDMFRAME pFrame);
ULONG FASTCALL WWS32WSASetLastError(PVDMFRAME pFrame);
ULONG FASTCALL WWS32WSACancelBlockingCall(PVDMFRAME pFrame);
ULONG FASTCALL WWS32WSAIsBlocking(PVDMFRAME pFrame);
ULONG FASTCALL WWS32WSAStartup(PVDMFRAME pFrame);
ULONG FASTCALL WWS32WSACleanup(PVDMFRAME pFrame);
ULONG FASTCALL WWS32__WSAFDIsSet(PVDMFRAME pFrame);
