
int FUN_01038858(int *param_1,int *param_2,int param_3,int param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  lVar3 = (longlong)param_3 * (longlong)*param_2 - (longlong)param_4 * (longlong)param_2[1];
  uVar2 = (longlong)param_3 * (longlong)param_2[1];
  lVar1 = (longlong)param_4 * (longlong)*param_2 +
          ((longlong)(int)(uVar2 >> 0x20) << 0x20 | uVar2 & 0xffffffff);
  iVar5 = *param_1;
  iVar6 = param_1[1];
  uVar4 = (uint)lVar3 >> 0x17 | (int)((ulonglong)lVar3 >> 0x20) * 0x200;
  uVar7 = (uint)lVar1 >> 0x17 | (int)((ulonglong)lVar1 >> 0x20) << 9;
  *param_1 = uVar4 + iVar5;
  param_1[1] = uVar7 + iVar6;
  *param_2 = iVar5 - uVar4;
  param_2[1] = iVar6 - uVar7;
  return param_4;
}

