#ifndef CONNECTSOCKET_H
#define CONNECTSOCKET_H

#include "Socket.h"

using namespace std;

/******************************************
This is a socket to connect origin server
******************************************/

class ConnectSocket : public Socket {
  
 public:
  ConnectSocket(){
    memset(&host_info, 0, sizeof(host_info));
    host_info.ai_family   = AF_UNSPEC;
    host_info.ai_socktype = SOCK_STREAM;
  }
  
  void connectTarget(){
    status = connect(fd, host_info_list->ai_addr, host_info_list->ai_addrlen);
    if (status == -1) {
      throw std::exception();
    } //if connect fails
    //return 0;
  }

  int getFd(){
    return fd;
  }
};

#endif
