
undefined8 FUN_010078f8(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 uVar3;
  int extraout_r1_01;
  int extraout_r1_02;
  uint uStack_18;
  undefined1 local_14;
  undefined1 uStack_13;
  undefined1 local_12;
  undefined1 uStack_11;
  undefined4 uStack_10;
  
  local_14 = (undefined1)param_3;
  uVar1 = local_14;
  uStack_13 = (undefined1)((uint)param_3 >> 8);
  local_12 = (undefined1)((uint)param_3 >> 0x10);
  uStack_11 = (undefined1)((uint)param_3 >> 0x18);
  uStack_18 = param_2;
  if (1 < param_1) goto LAB_0100793e;
  uStack_10 = param_4;
  if (param_2 < 2) {
    local_12 = local_14;
    local_14 = 1;
    iVar2 = FUN_0100796c();
    if (iVar2 == 0) {
      FUN_0100797a();
      iVar2 = extraout_r1_01;
    }
    else {
      FUN_01007990();
      iVar2 = extraout_r1_02;
    }
    if (iVar2 != 0) goto LAB_0100792e;
LAB_01007960:
    FUN_01007b66(&uStack_18,0);
    uVar3 = 0;
  }
  else {
    if (1 < param_2 - 2) goto LAB_0100793e;
    local_14 = 0;
    local_12 = uVar1;
    iVar2 = FUN_0100796c();
    if (iVar2 == 0) {
      FUN_0100797a();
      iVar2 = extraout_r1;
    }
    else {
      FUN_01007990();
      iVar2 = extraout_r1_00;
    }
    if (iVar2 == 2) goto LAB_01007960;
LAB_0100792e:
    FUN_01007b66(&uStack_18,1);
    uVar3 = 1;
  }
  FUN_01007a00(&local_14,uVar3);
LAB_0100793e:
  return CONCAT17(uStack_11,CONCAT16(local_12,CONCAT15(uStack_13,CONCAT14(local_14,uStack_18))));
}

