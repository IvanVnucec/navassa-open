
undefined8 FUN_010330dc(undefined4 param_1,int param_2,ushort *param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  ushort local_18;
  undefined2 uStack_16;
  undefined4 uStack_14;
  
  local_18 = (ushort)param_3;
  uStack_16 = (undefined2)((uint)param_3 >> 0x10);
  uStack_14 = param_4;
  if ((*(char *)((short)param_2 * 0x5c + DAT_010335bc + 0x358) == '\0') &&
     (iVar1 = FUN_010371a0(param_2), iVar1 == 0)) {
    param_3[2] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    return CONCAT44(uStack_14,CONCAT22(uStack_16,local_18));
  }
  FUN_01033248(param_2,&local_18);
  if (local_18 == 100) {
    uVar2 = 0;
    param_3[2] = 0;
    param_3[1] = 0;
  }
  else {
    uVar2 = (ushort)(1 << (local_18 & 0xff));
    if (DAT_01033ee4 <= *(uint *)(DAT_01033844 + param_2 * 0xbc + 0x24)) {
      uVar2 = uVar2 | 0x8000;
    }
    param_3[2] = uVar2;
    param_3[1] = 0;
  }
  *param_3 = uVar2;
  return CONCAT44(uStack_14,CONCAT22(uStack_16,local_18));
}

