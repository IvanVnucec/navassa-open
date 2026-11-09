
undefined8 FUN_0102fc48(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = DAT_0102fd2c;
  iVar3 = FUN_01002c90(0,0,DAT_0102fd2c,param_4,param_2,param_3,param_4);
  if ((((iVar3 == 0) && (iVar3 = FUN_01002c90(0,1,iVar1 + 0x204), iVar3 == 0)) &&
      (iVar3 = FUN_01002c90(0,2,iVar1 + 0x408), iVar3 == 0)) &&
     (iVar3 = FUN_01002c90(0,3,iVar1 + 0x60c), iVar2 = DAT_0102fd30, iVar3 == 0)) {
    uVar4 = 0;
    do {
      if ((int)(((*(byte *)(iVar2 + 0x22) & 3) >> (uVar4 & 0xff)) << 0x1f) < 0) {
        iVar3 = iVar1 + uVar4 * 0x204;
        param_2 = iVar3 + 0x1024;
        param_4 = CONCAT31(CONCAT12((char)((uint)param_4 >> 0x18),*(undefined2 *)(iVar3 + 0x1022)),
                           *(undefined1 *)(iVar3 + 0x1021));
        iVar3 = FUN_0103b910(uVar4 & 0xff,param_2,*(undefined1 *)(iVar3 + 0x1020),param_4);
        if (iVar3 != 0) goto LAB_0102fd28;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 2);
    if (((-1 < (int)((uint)*(ushort *)(iVar2 + 0x22) << 0x1d)) ||
        ((iVar3 = FUN_01002cec(2,1,0,iVar1 + 0x810), iVar3 == 0 &&
         (iVar3 = FUN_01002cec(2,2,1,iVar1 + 0xa14), iVar3 == 0)))) &&
       ((-1 < (int)((uint)(*(ushort *)(iVar2 + 0x22) >> 2) << 0x1e) ||
        ((iVar3 = FUN_01002cec(3,1,2,iVar1 + 0xc18), iVar3 == 0 &&
         (iVar3 = FUN_01002cec(3,2,3,iVar1 + 0xe1c), iVar3 == 0)))))) {
      iVar3 = 0;
    }
  }
LAB_0102fd28:
  return CONCAT44(param_2,iVar3);
}

