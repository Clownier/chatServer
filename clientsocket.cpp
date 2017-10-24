#include "clientsocket.h"

ClientSocket::ClientSocket(SOCKET socket,sockaddr_in addr):
    clientSocket(socket),
    clientAddr(addr)
{

}

ClientSocket::~ClientSocket(){

}

void ClientSocket::carry(){
    string login =recv();
    while(login.length() == 0)
        login = recv();
    int index = login.find("#*#*2461538790*#*#");
    if (index != string::npos) {//接收密码
                string username = login.substr(0,index);
                string password = login.substr(index + 18);
                if (password.length() > 0 && username.length() > 0)
                    qDebug() << "username = " << username.c_str() << ",password = " << password.c_str();
                    //printf("username = %s,password = %s", username.c_str(), password);
                sprintf(sendBuf,"#*#*2461538790*#*#id:7654321\0");
                send();
//                char ip[] = "#*#*2461538790*#*#id:7654321\0";
//                if (SOCKET_ERROR == (nRC = send(*connectList_itor, ip, strlen(ip), 0)))
//                    conErrList.insert(conErrList.end(), *connectList_itor);
//                continue;
            }
}

int ClientSocket::send(string sendbuf){
    if (::send(clientSocket, sendbuf.c_str(), sendbuf.length() + 1, 0) == SOCKET_ERROR) {
        sprintf(error,"send error!\tcode:%d\n",WSAGetLastError());
        qDebug()<<error;
        return -1;
    }else
        return 1;
}
int ClientSocket::send(){
    qDebug()<<sendBuf;
    return send(sendBuf);
}

string ClientSocket::recv(){
    memset(recvBuf,'\0',BUFLEN);
    int nRC = ::recv(clientSocket, recvBuf, BUFLEN, 0);
    if(nRC == SOCKET_ERROR)
        return string("");
    recvBuf[nRC] = '\0';
    qDebug()<<"recvBuf = "<<recvBuf<<"\n";
    string res(recvBuf);
    return res;
}