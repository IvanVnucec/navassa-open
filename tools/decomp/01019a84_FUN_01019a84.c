
undefined4 FUN_01019a84(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  iVar2 = 0;
  do {
    uVar3 = 0;
    do {
      uVar5 = FUN_01019ada(DAT_01019bb0 + iVar2 * 8,param_2,1,param_1);
      uVar5 = FUN_01019ada((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x10,param_1 << 4 & 0xff);
      param_2 = (undefined4)((ulonglong)uVar5 >> 0x20);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
    if (iVar2 == 0) {
      uVar4 = 0x3d;
    }
    else {
      uVar4 = 0x42;
    }
    uVar1 = FUN_01019adc((int)uVar5,uVar4,1,param_1);
    FUN_01019adc(uVar1,uVar4,0x10,param_1 << 4 & 0xff);
    iVar2 = iVar2 + 1;
    param_2 = extraout_r1;
  } while (iVar2 < 2);
  return param_4;
}

