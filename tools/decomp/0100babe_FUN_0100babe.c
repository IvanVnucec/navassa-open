
undefined8 FUN_0100babe(int param_1,short *param_2,int param_3,int *param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  sVar1 = *param_2;
  sVar2 = param_2[1];
  iVar6 = *(int *)(DAT_0100bcd4 + param_1 * 4);
  if (param_3 == 0) {
    iVar5 = 2;
  }
  else {
    iVar5 = 0;
  }
  iVar3 = FUN_0100bb52(param_1,iVar6 + 0x1db,(uint)((int)sVar1 << 0x10) >> 0x18);
  if (iVar3 == 0) {
    iVar3 = FUN_0100bb52(0,iVar6 + 0x1da,(char)sVar1);
  }
  if ((((iVar3 == 0) &&
       (uVar4 = (int)sVar2 << 0x10, iVar3 = FUN_0100bb52(uVar4,iVar6 + 0x1df,uVar4 >> 0x18),
       iVar3 == 0)) && (iVar3 = FUN_0100b782(param_4,iVar5 + iVar6 + 0x1de,(char)sVar2), iVar3 == 0)
      ) && (iVar3 = FUN_0100b782(param_4,iVar6 + 0x1e2,1), iVar3 == 0)) {
    uVar4 = param_4[2];
    if (uVar4 != 0) {
      uVar4 = 1;
    }
    nmi_signal_helper(uVar4 & 0xff);
    *(uint *)(*param_4 + (param_4[2] + -1) * 4) =
         *(uint *)(*param_4 + (param_4[2] + -1) * 4) | 0x20000000;
  }
  return CONCAT44(param_4,iVar3);
}

