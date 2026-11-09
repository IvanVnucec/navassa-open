
int FUN_010493f4(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  iVar3 = DAT_01049724;
  bVar1 = param_1[3];
  bVar2 = *param_1;
  iVar5 = 0;
  if (param_1[2] == 0) {
    uVar6 = 0;
    do {
      if ((int)(((bVar2 & 3) >> (uVar6 & 0xff)) << 0x1f) < 0) {
        if (bVar1 == 0) {
          if (iVar5 == 0) {
            iVar4 = *(int *)(iVar3 + (uVar6 & 0xff) * 4);
            iVar5 = *(int *)(iVar4 + 4);
            bVar7 = iVar5 == -1;
            if (bVar7) {
              iVar5 = *(int *)(iVar4 + 8);
            }
            if (bVar7 && iVar5 == -1) {
              iVar5 = 0;
            }
            iVar5 = thunk_FUN_0102f2e4(uVar6 & 0xff,iVar5);
          }
        }
        else if (iVar5 == 0) {
          iVar5 = thunk_FUN_0102f358(uVar6 & 0xff);
        }
      }
      if ((int)(((((uint)bVar2 << 0x1c) >> 0x1e) >> (uVar6 & 0xff)) << 0x1f) < 0) {
        if (bVar1 == 0) {
          if (iVar5 == 0) {
            iVar5 = thunk_FUN_0101a7ce(uVar6 + 2 & 0xff);
          }
        }
        else if (iVar5 == 0) {
          iVar5 = thunk_FUN_0101a7e4(uVar6 + 2 & 0xff);
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 2);
  }
  else {
    iVar5 = 0x8f00;
  }
  return iVar5;
}

