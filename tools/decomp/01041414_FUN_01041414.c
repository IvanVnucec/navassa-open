
void FUN_01041414(undefined4 param_1,uint *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  uVar3 = FUN_0100b782(param_1,param_3 + 0x38,(uVar2 << 8) >> 0x18,param_4,param_4);
  uVar1 = FUN_010414bc((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),uVar2 << 0x10);
  FUN_010414c0(uVar1,param_3 + 0x3a,uVar2 & 0xff);
  uVar1 = FUN_0100b704(param_1,param_3 + 0x3b,(char)param_2[3],7);
  uVar2 = param_2[2];
  uVar3 = FUN_010414c0(uVar1,param_3 + 0x3c,uVar2 >> 0x18);
  uVar1 = FUN_010414bc((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),uVar2 << 8);
  uVar1 = FUN_010414c0(uVar1,param_3 + 0x3e,(uVar2 << 0x10) >> 0x18);
  FUN_010414c0(uVar1,param_3 + 0x3f,uVar2 & 0xff);
  uVar1 = FUN_0100b704(param_1,param_3 + 0x40,(param_2[1] << 8) >> 0x18,0x7f);
  uVar2 = param_2[1];
  uVar3 = FUN_010414c0(uVar1,param_3 + 0x41,(uVar2 << 0x10) >> 0x18);
  FUN_010414be((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),uVar2 & 0xff);
  uVar2 = (uint)*(byte *)((int)param_2 + 0xe);
  if (uVar2 != 0) {
    uVar2 = 1;
  }
  FUN_0100b704(param_1,param_3 + 0x2e,uVar2 | (uint)(*(char *)((int)param_2 + 0xd) != '\0') << 1,3);
  return;
}

