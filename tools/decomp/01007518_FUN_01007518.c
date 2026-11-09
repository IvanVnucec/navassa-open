
undefined8 FUN_01007518(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  undefined3 uVar1;
  int iVar2;
  undefined1 extraout_r1;
  undefined1 extraout_r1_00;
  undefined1 extraout_r1_01;
  int iVar3;
  undefined1 uVar4;
  uint unaff_r7;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  int local_1c;
  
  iVar2 = DAT_01007f74;
  iVar3 = DAT_01007f74 + param_3 * 4;
  local_28._1_3_ = (undefined3)((uint)param_3 >> 8);
  local_1c._1_3_ = (undefined3)(param_4 >> 8);
  uVar1 = local_1c._1_3_;
  local_24 = param_4;
  switch(param_2) {
  case 0:
  case 4:
    *(undefined4 *)(iVar3 + 0x4c) = param_1;
    break;
  case 1:
    *(undefined4 *)(iVar3 + 0x54) = param_1;
    param_2 = 1;
    break;
  case 2:
    *(undefined4 *)(iVar3 + 0x5c) = param_1;
    local_1c = iVar2;
    iVar2 = DAT_01007f74 + param_3 * 4;
    uVar5 = *(uint *)(iVar2 + 0x5c);
    local_28 = CONCAT31(local_28._1_3_,3);
    uVar4 = 3;
    bVar7 = 1 < uVar5;
    bVar6 = uVar5 == 2;
    local_20 = param_4;
    FUN_010076a4(iVar2,1);
    local_20 = CONCAT13(extraout_r1_00,(undefined3)local_20);
    local_1c = CONCAT31(local_1c._1_3_,uVar4);
    if (!bVar7 || bVar6) {
      if (bVar6 == false) {
        FUN_010076b2();
        local_24 = CONCAT31(uVar1,extraout_r1_01);
        uVar4 = extraout_r1_01;
      }
      else {
        uVar8 = FUN_01007728(2,param_3,1);
        uVar8 = FUN_010076c6((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1);
        FUN_010076d2((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(param_4 & 0x7f) << 1);
        FUN_01007696(1);
        uVar4 = 2;
      }
      local_20 = CONCAT31(local_20._1_3_,uVar4);
      FUN_01007bf6(&local_20,param_3);
      FUN_0100760c();
    }
    if (uVar5 == 2) {
      FUN_010076be();
    }
    return CONCAT44(local_24,local_28);
  case 3:
    *(undefined4 *)(iVar3 + 100) = param_1;
    param_2 = 3;
    break;
  default:
    return CONCAT44(param_4,param_4);
  }
  local_28 = CONCAT31(local_28._1_3_,2);
  local_1c = CONCAT31(local_1c._1_3_,3);
  uVar4 = 1;
  local_20 = param_2;
  uVar8 = FUN_010076a4(DAT_01007cd4);
  iVar3 = (int)((ulonglong)uVar8 >> 0x20);
  local_20 = CONCAT13(uVar4,(undefined3)local_20);
  iVar2 = (int)uVar8 + iVar3 * 4;
  if (param_2 == 0) {
    unaff_r7 = *(uint *)(iVar2 + 0x4c);
  }
  else if (param_2 == 1) {
    unaff_r7 = *(uint *)(iVar2 + 0x54);
  }
  else if (param_2 == 3) {
    unaff_r7 = *(uint *)(iVar2 + 100);
  }
  if (unaff_r7 < 3) {
    if (unaff_r7 == 2) {
      uVar8 = FUN_01007728(2,iVar3,1);
      FUN_010076c6((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),param_4);
      FUN_010076d0();
      FUN_01007696(1,2);
      local_20 = CONCAT31(local_20._1_3_,extraout_r1);
    }
    else {
      FUN_010076b2();
      local_24 = CONCAT31(uVar1,uVar4);
      local_20 = CONCAT31(local_20._1_3_,(char)param_2);
    }
    FUN_01007bf6(&local_20,param_3);
    FUN_0100760c();
    if (unaff_r7 == 2) {
      FUN_010076be();
    }
  }
  return CONCAT44(local_24,local_28);
}

