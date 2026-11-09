
undefined4 FUN_0101026a(int param_1,int param_2,byte *param_3)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  
  if (1 < param_1) {
    return 0xc400;
  }
  pbVar3 = DAT_0101066c;
  iVar1 = DAT_01010668;
  if (param_1 != 0) {
    pbVar3 = DAT_01010674;
    iVar1 = DAT_01010670;
  }
  if (param_2 == 0 || param_2 == 4) {
    bVar2 = *(byte *)(iVar1 + 0x4c);
  }
  else if (param_2 == 1) {
    bVar2 = *(byte *)(iVar1 + 0x5d);
  }
  else if (param_2 == 3) {
    bVar2 = *(byte *)(iVar1 + 0x5f);
  }
  else {
    if (param_2 != 2) {
      return 0xc400;
    }
    bVar2 = *pbVar3 & 7;
  }
  *param_3 = bVar2;
  return 0;
}

