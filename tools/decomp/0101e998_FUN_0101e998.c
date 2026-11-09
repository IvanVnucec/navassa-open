
undefined8 FUN_0101e998(undefined4 param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar3 = DAT_0101eda8;
  bVar1 = *DAT_0101eda0;
  *(undefined1 *)(DAT_0101eda4 + (uint)bVar1 * 2 + param_4) = 0;
  iVar3 = iVar3 + (short)(ushort)bVar1 * 0x14;
  iVar4 = (short)param_4 * 10;
  iVar5 = iVar3 + iVar4;
  iVar2 = FUN_0101ebe4((uint)bVar1,param_4,iVar5,0);
  local_28 = param_3;
  local_24 = param_4;
  if (iVar2 == 0) {
    FUN_0101e9f2(param_4,*(undefined2 *)(iVar3 + iVar4),*(undefined2 *)(iVar5 + 2),param_1);
    local_28 = param_2;
    local_24 = param_3;
  }
  return CONCAT44(local_24,local_28);
}

