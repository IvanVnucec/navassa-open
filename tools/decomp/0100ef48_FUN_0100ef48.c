
uint FUN_0100ef48(int param_1,int param_2,undefined4 param_3,uint param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *local_38;
  undefined4 local_34;
  short local_30;
  
  iVar1 = DAT_0100f0bc;
  iVar3 = (short)param_1 * 0x24c;
  iVar2 = DAT_0100f0b4 + iVar3;
  if (*(char *)(DAT_0100f0bc + 0x77d) == '\0') {
    if (*(short *)(DAT_0100f0b4 + iVar3) == 0) {
      return param_4;
    }
    iVar3 = (int)*(short *)(iVar2 + param_2 * 2 + 0xc2);
    uVar4 = *(undefined4 *)(iVar2 + param_2 * 4 + 0x144);
  }
  else {
    if (*(char *)(DAT_0100f0bc + 0x77d) != '\x01') {
      return param_4;
    }
    if (param_5 == 1) {
      local_38 = &local_34;
      FUN_0100e9a0(param_1,param_4 & 0xff,param_3,param_2);
      iVar3 = (int)local_30;
      uVar4 = local_34;
    }
    else {
      iVar3 = (int)*(short *)(DAT_0100f0c0 + param_1 * 8 + 4);
      uVar4 = *(undefined4 *)(DAT_0100f0c0 + param_1 * 8);
    }
  }
  local_38 = (undefined4 *)CONCAT13(local_38._3_1_,0x70000);
  local_38 = (undefined4 *)CONCAT22(local_38._2_2_,0x400);
  if (*(char *)(iVar1 + 0x77d) == '\0') {
    FUN_010241e8(param_1,&local_38,1,param_6);
  }
  FUN_010241c4(param_1,iVar3,param_6);
  FUN_010242b2(uVar4,param_1,param_6);
  if (*(char *)(iVar1 + 0x77d) == '\0') {
    *(char *)(iVar2 + 0x248) = (char)param_2;
    *(char *)(iVar2 + 0x249) = (char)param_2;
  }
  return param_4;
}

