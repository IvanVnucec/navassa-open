
undefined8
FUN_01022c68(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5,
            uint param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar1;
  int unaff_r4;
  undefined4 in_lr;
  undefined8 uVar2;
  int iVar3;
  
  FUN_01022c2e(param_1,param_3,param_5,param_6);
  if (param_2 == 0) {
    FUN_01022cb8();
    iVar3 = unaff_r4;
    uVar2 = FUN_01022be0();
    uVar1 = (param_6 & 1) << 0xf;
    uVar2 = FUN_01022bea((int)uVar2,0x8ff8,
                         uVar1 | ((uint)((ulonglong)uVar2 >> 0x20) & 1) << 0xb | param_5 << 3,uVar1,
                         iVar3,in_lr);
    FUN_01022be8((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x1000000);
    uVar2 = FUN_0102598c(unaff_r4 + 0x44,0x2000000,0);
    return uVar2;
  }
  if (param_2 != 2) {
    if (1 < param_2) {
      return CONCAT44(param_4,param_9);
    }
    FUN_01022cb8();
    iVar3 = unaff_r4;
    FUN_01022be0();
    uVar2 = FUN_0102598c(unaff_r4 + 0x20,0x7fd,param_6 & 1 | (extraout_r1 & 1) << 10 | param_5 << 2,
                         param_6 & 1,iVar3,in_lr);
    FUN_01022be8((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x4000000);
    uVar2 = FUN_0102598c(unaff_r4 + 0x44,0x8000000,0);
    return uVar2;
  }
  FUN_01022cb8();
  iVar3 = unaff_r4;
  FUN_01022be0();
  uVar1 = (param_6 & 1) << 0xb;
  uVar2 = FUN_0102598c(unaff_r4 + 0x20,DAT_01022db8,
                       uVar1 | (extraout_r1_00 & 1) << 0x15 | param_5 << 0xd,uVar1,iVar3,in_lr);
  FUN_01022be8((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x10000000);
  uVar2 = FUN_0102598c(unaff_r4 + 0x44,0x20000000,0);
  return uVar2;
}

