
int FUN_010362b0(undefined1 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iStack_20;
  
  uVar6 = (uint)*(byte *)(*(int *)(param_1 + 0x10) + 1);
  iVar7 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  iVar5 = 0;
  iStack_20 = param_2;
  if (param_2 != 2) {
    iVar5 = FUN_0103624a(*(undefined4 *)(param_1 + 0x18),2);
  }
  iVar2 = FUN_0103619a(param_1);
  if (iVar2 != 0) {
    return iVar5;
  }
switchD_01036302_default:
  iVar2 = FUN_010361a8(param_1,&iStack_20);
  if ((iVar2 == 0) || (iVar5 != 0)) {
    iVar7 = FUN_0103619a(param_1);
    if (iVar7 == 0) {
      return iVar5;
    }
    uVar3 = FUN_0100a7dc();
    puVar1 = DAT_01036500;
    iVar7 = *(int *)(param_1 + 4);
    if (iVar7 == 0) {
      return iVar5;
    }
    if (iVar7 == 0x7f || iVar7 == 0x83) {
      FUN_01028a98(*(undefined4 *)(param_1 + 0x10));
      return iVar5;
    }
    if (iVar7 != 0xf5) {
      *DAT_010364fc = s_lb_pll_nco_mgr_c_01036508;
      *puVar1 = 0x208;
      boot_msg(1,0xff42,1,puVar1,uVar3);
      return iVar5;
    }
    stream_flag_tail(*DAT_01036504,*(undefined4 *)(param_1 + 0x14));
    return iVar5;
  }
  switch(*param_1) {
  case 0:
    thunk_EXT_FUN_200348e4(0);
    FUN_01006e2e(2,0);
    *param_1 = 1;
    **(undefined1 **)(param_1 + 0x18) = 1;
    iVar2 = FUN_0103c092();
    if (iVar2 == 0) {
      FUN_01015e2c(200);
      goto LAB_010362e0;
    }
    uVar4 = 200;
    uVar3 = DAT_010364ec;
    break;
  case 1:
LAB_010362e0:
    *param_1 = 2;
    **(undefined1 **)(param_1 + 0x18) = 2;
    goto switchD_01036302_default;
  case 2:
    iVar5 = FUN_01009cf0(2,0,*(undefined1 *)
                              (DAT_010364d0 + (uint)*(byte *)(*(int *)(param_1 + 0x10) + 2) + 0xb8),
                         *(undefined1 *)(DAT_010364d0 + 0xc1));
    FUN_0103645c(param_1,iVar7);
    *param_1 = 3;
    iVar2 = FUN_0103c092();
    if (iVar2 == 0) {
      *param_1 = 4;
      goto switchD_01036302_default;
    }
    uVar4 = *(undefined2 *)(DAT_010364d4 + 0x782);
    uVar3 = DAT_010364f0;
    break;
  case 3:
    *param_1 = 4;
    goto switchD_01036302_default;
  case 4:
    FUN_01022446(uVar6,3,*(int *)(DAT_010364f4 + iVar7 * 8 + uVar6 * 4) + 0x50);
    *param_1 = 5;
    goto switchD_01036302_default;
  case 5:
    iVar8 = DAT_010364f8 + iVar7 * 8;
    FUN_0100bbfe(uVar6,*(undefined4 *)(*(int *)(iVar8 + uVar6 * 4) + 0xc));
    iVar2 = FUN_0103c092();
    if (iVar2 != 0) {
      FUN_0101d884(uVar6);
    }
    FUN_01022500(uVar6,3,10);
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x28) =
         *(undefined4 *)(*(int *)(iVar8 + uVar6 * 4) + 0xc);
    iVar2 = FUN_0103c092();
    if (iVar2 == 0) {
      FUN_01015e2c(0x2ee);
      *param_1 = 7;
    }
    else {
      *param_1 = 6;
    }
    goto switchD_01036302_default;
  case 6:
    *param_1 = 7;
  default:
    goto switchD_01036302_default;
  }
  FUN_01036286(uVar3,uVar4);
  goto switchD_01036302_default;
}

