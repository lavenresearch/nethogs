# NETHOGS

Fork of http://nethogs.sf.net. 

## New Features 

- Line mode (`sudo nethogs -t`) works again
- Output can be filtered by process command line (`sudo nethogs -f sshd -f netcat`) 

## INTRODUCTION

NetHogs is a small 'net top' tool. Instead of breaking the traffic down per protocol or per subnet, like most tools do, it groups bandwidth by process. NetHogs does not rely on a special kernel module to be loaded. If there's suddenly a lot of network traffic, you can fire up NetHogs and immediately see which PID is causing this. This makes it easy to indentify programs that have gone wild and are suddenly taking up your bandwidth.

Since NetHogs heavily relies on /proc, it currently runs on Linux only. 

## Installation

Dependencies:
- libpcap-dev 
- libncurses5-dev

```
make clean && make
sudo make install
```

## STATUS

* Only IPv4 TCP is currently supported
* Sort the output by other values than network usage
* Monitor specific processes
* Make it work correctly on machines with multiple IP addresses
* Integrate into another tool?? 

## LICENSE

GPL
