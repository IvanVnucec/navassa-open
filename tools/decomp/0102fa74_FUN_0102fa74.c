
void FUN_0102fa74(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5
                 ,int param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ushort *unaff_r9;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  iVar4 = DAT_0102fbd0 + param_6 * 0x10;
  iVar5 = 0;
  uVar6 = (uint)*(byte *)(iVar4 + 2) + (uint)*(byte *)(iVar4 + 1) + (uint)*(byte *)(iVar4 + 3);
  if (param_6 != 9) {
    if (param_6 == 0x13) {
      param_3 = (uint)unaff_r9[1] << 7;
    }
    else {
      if (*(char *)(iVar4 + 1) != '\0') {
        uVar1 = (ulonglong)param_3;
        param_3 = (uint)(*unaff_r9 * uVar1);
        iVar5 = (int)(*unaff_r9 * uVar1 >> 0x20);
      }
      if (*(char *)(iVar4 + 2) != '\0') {
        lVar2 = (ulonglong)(uint)unaff_r9[1] * (ulonglong)param_3;
        param_3 = (uint)lVar2;
        iVar5 = (uint)unaff_r9[1] * iVar5 + (int)((ulonglong)lVar2 >> 0x20);
      }
      if (*(char *)(iVar4 + 3) != '\0') {
        uVar1 = (ulonglong)param_3;
        param_3 = (uint)(param_4 * uVar1);
        iVar5 = param_4 * iVar5 + (int)(param_4 * uVar1 >> 0x20);
      }
      if ((uVar6 & 0xff) != 0) {
        uVar3 = 1 << (uVar6 - 1 & 0xff);
        bVar7 = CARRY4(param_3,uVar3);
        param_3 = param_3 + uVar3;
        iVar5 = iVar5 + (uint)(param_6 == 9) + (uint)bVar7;
      }
    }
  }
  FUN_0101bb08(param_3,iVar5,uVar6);
  FUN_01016f7c();
  return;
}

