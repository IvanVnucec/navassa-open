
void FUN_01007a00(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 extraout_r1_05;
  undefined4 extraout_r1_06;
  undefined4 extraout_r1_07;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  iVar4 = DAT_01007fa8;
  iVar3 = DAT_01007fa0;
  iVar7 = DAT_01007f98;
  iVar2 = DAT_01007f90;
  iVar6 = *(int *)(DAT_01007f6c + param_2 * 4);
  uVar1 = *param_1;
  switch(uVar1) {
  case 0:
    if (param_2 == 0) {
      FUN_01007bf0(uVar1,1,param_1[3]);
      FUN_01007be8();
      FUN_01007b56(DAT_01007f94,extraout_r1,param_1[1]);
      FUN_01007b4c();
      iVar7 = iVar2;
      uVar5 = extraout_r1_00;
    }
    else {
      FUN_01007bf0(uVar1,1,param_1[3]);
      FUN_01007be8();
      FUN_01007b56(DAT_01007f9c,extraout_r1_01,param_1[1]);
      FUN_01007b4c();
      uVar5 = extraout_r1_02;
    }
    break;
  case 1:
    if (param_2 == 0) {
      FUN_01007bf0(uVar1,1,param_1[3]);
      FUN_01007be8();
      FUN_01007b56(DAT_01007fa4,extraout_r1_03,param_1[1]);
      FUN_01007b4c();
      iVar7 = iVar3;
      uVar5 = extraout_r1_04;
    }
    else {
      FUN_01007bf0(uVar1,1,param_1[3]);
      FUN_01007be8();
      FUN_01007b56(DAT_01007fac,extraout_r1_05,param_1[1]);
      FUN_01007b4c();
      iVar7 = iVar4;
      uVar5 = extraout_r1_06;
    }
    break;
  case 2:
    FUN_01007bd6(uVar1,param_2,param_1[3]);
    uVar8 = FUN_01007b60();
    uVar8 = FUN_01007b5e((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),param_1[4]);
    FUN_01007b4e((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),param_1[1]);
    FUN_01007b60();
    uVar5 = 2;
    iVar7 = iVar6 + 0x11;
    break;
  case 3:
    iVar7 = iVar6 + 0xf;
    FUN_01007bd6(uVar1,param_2,param_1[3]);
    uVar5 = FUN_01007bf0();
    uVar8 = FUN_01007bf0(uVar5,1,param_1[4]);
    FUN_01007b4e((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),param_1[1]);
    goto LAB_01007b00;
  case 4:
  case 5:
    iVar7 = iVar6 + 9;
    FUN_01007b4e(uVar1,param_2,param_1[3]);
    uVar5 = FUN_01007bf0();
    uVar8 = FUN_01007bf0(uVar5,1,param_1[4]);
    FUN_01007bd6((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),param_1[1]);
LAB_01007b00:
    FUN_01007bf0();
    uVar5 = 2;
    break;
  case 6:
    uVar8 = FUN_01007b60(uVar1,0x80,((uint)(byte)param_1[3] << 0x1f) >> 0x18);
    FUN_01007be0((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),param_1[4]);
    uVar5 = FUN_01007b60();
    uVar8 = FUN_01007b60(uVar5,0x40,((uint)(byte)param_1[1] << 0x1e) >> 0x18);
    FUN_01007028((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),param_1[2]);
    iVar7 = iVar6 + 0x11;
    uVar5 = extraout_r1_07;
    break;
  default:
    return;
  }
  pin_update(iVar7,uVar5);
  return;
}

