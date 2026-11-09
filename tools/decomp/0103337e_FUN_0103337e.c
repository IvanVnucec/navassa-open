
void FUN_0103337e(undefined4 *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  *param_1 = 0x10000;
  param_1[1] = param_2;
  iVar5 = 2;
  do {
    uVar1 = (longlong)param_2 * (longlong)param_3;
    uVar4 = param_1[iVar5 + -1];
    lVar2 = (ulonglong)uVar4 * (uVar1 & 0xffffffff);
    uVar3 = FUN_010333be((int)lVar2,
                         ((int)uVar4 >> 0x1f) * (int)uVar1 +
                         uVar4 * (int)(uVar1 >> 0x20) + (int)((ulonglong)lVar2 >> 0x20));
    param_1[iVar5] = uVar3;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
  return;
}

