
uint * FUN_0103a02c(undefined4 param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = 0xfffffffc;
  if ((-5 < (int)param_3) && (uVar1 = param_3, 4 < (int)param_3)) {
    uVar1 = 4;
  }
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar4 = FUN_010029e4(0xf,0,(param_2 & 0xff) << 2);
  uVar5 = FUN_010029e4(uVar1 + 4,(int)(uVar1 + 4) >> 0x1f,(param_2 & 0xff) << 2);
  *param_4 = (uint)uVar5 | uVar2 & ~(uint)uVar4;
  param_4[1] = (uint)((ulonglong)uVar5 >> 0x20) | uVar3 & ~(uint)((ulonglong)uVar4 >> 0x20);
  FUN_0103da6c(param_1,param_2,uVar1 & 0xf);
  return param_4;
}

