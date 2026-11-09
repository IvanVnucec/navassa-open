
int FUN_0102db80(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  uVar1 = (&DAT_0102dcd0)[param_1];
  iVar7 = (short)param_1 * 0xb4;
  iVar4 = (short)param_1 * 0x24;
  iVar3 = (short)param_2 * 0x14;
  iVar5 = iVar7 + DAT_0102dcc0 + iVar3;
  iVar3 = DAT_0102dcc4 + iVar7 + iVar3;
  iVar2 = *(int *)(DAT_0102dcc8 + iVar4 + param_2 * 4);
  iVar7 = 0;
  iVar4 = *(int *)(DAT_0102dccc + iVar4 + param_2 * 4);
  uVar6 = *(undefined4 *)(&DAT_0102dcd4 + param_1 * 4);
  if (iVar2 != 0 && iVar4 != 0) {
    FUN_0100b698(iVar3,uVar1,iVar2,1);
    FUN_0100b698(iVar5,uVar1,iVar4,10);
    iVar7 = FUN_0100b6a8(iVar3,iVar5,1 < param_1,1);
    if (iVar7 == 0) {
      iVar7 = FUN_0100b782(iVar5,uVar6,7);
    }
    if (iVar7 == 0) {
      FUN_0100b594(iVar5);
    }
  }
  return iVar7;
}

