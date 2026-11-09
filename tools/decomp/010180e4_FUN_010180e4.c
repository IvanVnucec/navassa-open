
undefined8 FUN_010180e4(uint param_1,undefined4 param_2,undefined4 param_3,byte *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  byte *local_18;
  
  iVar1 = DAT_010181d4;
  bVar5 = *param_4;
  uVar2 = 0;
  bVar6 = bVar5 < 4;
  if (bVar6) {
    bVar5 = param_4[2];
  }
  if (bVar6 && bVar5 < 0x20) {
    bVar5 = 0;
    local_18 = param_4;
    do {
      if ((int)((param_1 >> (uint)bVar5) << 0x1f) < 0) {
        iVar3 = FUN_01014702(bVar5,&local_18);
        iVar4 = *(int *)(iVar1 + (uint)bVar5 * 4);
        if ((iVar3 == 0) && (((uint)local_18 & 0xff) < 2)) {
          *(byte *)(iVar4 + 0x1e5) = *param_4;
          *(byte *)(iVar4 + 0x1de) = param_4[1];
          *(byte *)(iVar4 + 0x1dd) = param_4[2];
          uVar2 = 0;
        }
        else {
          uVar2 = 0xe704;
        }
      }
      bVar5 = bVar5 + 1;
    } while (bVar5 < 2);
    return CONCAT44(local_18,uVar2);
  }
  return CONCAT44(param_4,0xe502);
}

