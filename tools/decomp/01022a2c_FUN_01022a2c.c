
int FUN_01022a2c(uint param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  
  bVar1 = FUN_0100d7b8(param_4,4);
  iVar3 = 0;
  bVar4 = (param_1 & 3) != 0;
  if (bVar4) {
    param_3 = param_1 & 3;
  }
  if (!bVar4 || param_3 == 3) {
    iVar3 = 0xcc03;
  }
  if ((int)(param_1 << 0x1f) < 0) {
    bVar1 = 0;
  }
  else if ((int)(param_1 << 0x1e) < 0) {
    bVar1 = 1;
  }
  if (iVar3 == 0) {
    uVar2 = FUN_01012c10(*(float *)(DAT_01022adc + (uint)bVar1 * 0x1c + 0xc) * DAT_01022ad8);
    uVar5 = FUN_010205a4(uVar2);
    uVar2 = FUN_01035c84((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    *param_4 = uVar2;
  }
  return iVar3;
}

