
undefined8 FUN_0103b042(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = FUN_0103af86(param_2,param_1);
  iVar2 = FUN_0103af94();
  uVar4 = 0;
  if (iVar2 == 1) {
    iVar2 = FUN_0103afb6(iVar1);
    if (iVar2 == 2) {
      if (param_2 < 2 || param_2 == 4) {
        uVar4 = 0x2c02;
      }
      else {
        uVar4 = 0x2302;
      }
    }
    else {
      iVar5 = DAT_0103b4b8 + iVar1 * 0x30;
      pbVar3 = (byte *)(iVar5 + iVar2 * 0x18);
      if (pbVar3[0x10] == 1) {
        FUN_0103dee0(iVar1,*pbVar3 >> 4,*pbVar3 & 0xf);
        *(undefined1 *)(iVar5 + 0x11) = 0;
        *(undefined1 *)(iVar5 + 0x29) = 0;
        pbVar3[0x11] = 1;
      }
    }
  }
  return CONCAT44(param_4,uVar4);
}

