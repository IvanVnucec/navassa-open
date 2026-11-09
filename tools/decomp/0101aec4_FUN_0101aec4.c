
undefined8 FUN_0101aec4(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int local_28 [4];
  
  puVar1 = DAT_0101af38;
  local_28[3] = param_4;
  iVar3 = (int)*(short *)(param_1 * 6 + 0x101af40 + param_2 * 2);
  local_28[0] = param_1;
  local_28[1] = param_2;
  local_28[2] = param_3;
  if (param_1 == 0) {
    uVar2 = 0x20000 << (param_2 & 0xff);
    *DAT_0101af38 = *DAT_0101af38 | uVar2;
    local_28[0] = DAT_0101af60;
    local_28[1] = DAT_0101af64;
    local_28[2] = DAT_0101af68;
    *(uint *)local_28[param_2] = uVar2;
    puVar1[3] = puVar1[3] | uVar2;
    puVar1[4] = puVar1[4] & ~uVar2;
  }
  FUN_01002880(iVar3);
  FUN_010028fc(iVar3,param_3);
  FUN_01002896(iVar3);
  return CONCAT44(local_28[1],local_28[0]);
}

