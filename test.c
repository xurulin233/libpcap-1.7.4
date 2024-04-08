//demo:查找当前系统的可用网络设备
#include <stdio.h>
#include <pcap.h>

int main(int argc, char *argv[])
{
    char *dev,errbuf[1024];
   
    dev=pcap_lookupdev(errbuf);//函数用来查找网络设备

    if(dev==NULL){
        printf("%s\n",errbuf);
        return 0;
    }

    printf("Device: %s\n", dev);
    return 0;
}
