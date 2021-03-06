// ======================================================================
// \title  IpCfg.hpp
// \author mstarch
// \brief  hpp file for SocketIpDriver component implementation class
//
// \copyright
// Copyright 2009-2015, by the California Institute of Technology.
// ALL RIGHTS RESERVED.  United States Government Sponsorship
// acknowledged.
//
// ======================================================================

#ifndef REF_IPCFG_HPP
#define REF_IPCFG_HPP

enum IpCfg {
    SOCKET_SEND_TIMEOUT_SECONDS = 1,       // Seconds component of timeout
    SOCKET_SEND_TIMEOUT_MICROSECONDS = 0,  // Milliseconds component of timeout
    SOCKET_IP_SEND_FLAGS = 0,                 // send, sendto FLAGS argument
    SOCKET_IP_RECV_FLAGS = 0,                 // recv FLAGS argument
    SOCKET_MAX_ITERATIONS = 0xFFFF,        // Maximum retry iterations
    SOCKET_MAX_RECV_BUFFER_SIZE = 2048,    // Maximum and allocation size of the send buffer
    SOCKET_RETRY_INTERVAL_MS = 1000,       // Interval between connection retries before main recv thread starts
    SOCKET_MAX_HOSTNAME_SIZE = 256         // Maximum stored hostname
};



#endif //REF_IPCFG_HPP
