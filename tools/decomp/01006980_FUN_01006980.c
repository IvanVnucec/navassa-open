
undefined8 FUN_01006980(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *unaff_r5;
  
  iVar4 = DAT_010071b0 + (uint)*(byte *)(DAT_010071ac + param_1) * 4;
  if (param_1 < 2) {
    iVar4 = *(int *)(iVar4 + 0x2c);
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x34);
  }
  if (param_1 < 4) {
    iVar3 = DAT_01007608;
    iVar1 = DAT_01007484;
    if (param_3 == 0) {
      iVar3 = DAT_01007480;
      iVar1 = DAT_0100747c;
    }
    unaff_r5 = (int *)((short)param_1 * 0x28 + iVar1 + iVar4 * 0x14);
    FUN_0100b698(unaff_r5,param_2,iVar3 + param_1 * 0x40 + iVar4 * 0x20,8);
  }
  iVar1 = FUN_010067ec(iVar4,param_1,param_3,unaff_r5);
  if (iVar1 == 0) {
    if (param_4 != 0) {
      iVar1 = FUN_010068e4(iVar4,param_1,param_3,unaff_r5);
      goto LAB_01006a00;
    }
  }
  else {
LAB_01006a00:
    if (iVar1 != 0) goto LAB_01006a20;
  }
  uVar2 = unaff_r5[2];
  if (uVar2 != 0) {
    uVar2 = 1;
  }
  nmi_signal_helper(uVar2 & 0xff);
  *(uint *)(*unaff_r5 + (unaff_r5[2] + -1) * 4) =
       *(uint *)(*unaff_r5 + (unaff_r5[2] + -1) * 4) | 0x20000000;
LAB_01006a20:
  return CONCAT44(param_4,iVar1);
}

