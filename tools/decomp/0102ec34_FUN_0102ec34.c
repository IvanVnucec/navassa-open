
int FUN_0102ec34(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  byte bVar1;
  int extraout_r1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined2 uVar5;
  int local_20;
  
  uVar2 = param_3;
  iVar4 = param_1;
  local_20 = param_4;
  FUN_0102eccc();
  uVar5 = 0x1f;
  iVar4 = uVar2 + extraout_r1 * iVar4 + (short)param_2 * 0x16;
  if (param_4 != 1) {
    FUN_0102ee02(param_2,param_1,1);
    uVar5 = 1;
  }
  FUN_0102edf2(param_2,param_1,3);
  if (param_4 == 1) {
    if (DAT_0102f250 <= param_3) {
      piVar3 = &DAT_0102f288;
LAB_0102eca2:
      local_20 = *piVar3;
      goto LAB_0102eca6;
    }
    piVar3 = &DAT_0102f284;
  }
  else {
    if (DAT_0102f254 <= param_3) {
      piVar3 = &DAT_0102f290;
      goto LAB_0102eca2;
    }
    piVar3 = &DAT_0102f28c;
  }
  local_20 = *piVar3;
LAB_0102eca6:
  bVar1 = *(byte *)((int)&local_20 + (uint)*(byte *)(iVar4 + 0x15));
  FUN_0102ee38(param_2,param_1,bVar1);
  FUN_0102ee14(param_2,param_1,3);
  *(undefined2 *)(iVar4 + 0xc) = uVar5;
  *(undefined2 *)(iVar4 + 0xe) = 3;
  *(ushort *)(iVar4 + 0x10) = (ushort)bVar1;
  *(undefined2 *)(iVar4 + 0x12) = 3;
  return local_20;
}

