#ifndef NETWORK_INFILTRATION_H
#define NETWORK_INFILTRATION_H
#include <iostream>
static int layer = 1;
int infiltrateNetworkLayer( int bypassKeyA, int bypassKeyB);
int bypassFirewall(int firewallLevelA, int firewallLevelB);
int bypassEncryption(int encryptionLevelA, int encryptionLevelB);
int gcd(int a, int b);
int accessMainframe();
void setLayer(int l);
#endif // NETWORK_INFILTRATION_H
