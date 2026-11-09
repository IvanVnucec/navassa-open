
undefined8 FUN_01035cbc(int param_1,undefined4 param_2,short param_3,int param_4,byte param_5)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = FUN_01035cac();
  if (iVar2 == 0) {
    uVar5 = (uint)param_5;
    if (uVar5 < 0x19) {
      uVar6 = 0;
      do {
        if (uVar6 < uVar5) {
          uVar3 = *(ushort *)(param_4 + ((uVar5 - 1) - uVar6) * 2);
        }
        else {
          uVar3 = 0;
        }
        if (uVar6 + 1 < uVar5) {
          iVar4 = (int)*(short *)(param_4 + ((uVar5 - 1) - uVar6) * 2 + -2);
        }
        else {
          iVar4 = 0;
        }
        iVar1 = uVar6 * 2;
        uVar6 = uVar6 + 2;
        *(uint *)((short)param_2 * 0x30 + param_3 * 0x90 + *(int *)(DAT_01035d50 + param_1 * 4 + -8)
                  + iVar1 + 0x80) = iVar4 * 0x10000 + (uint)uVar3;
      } while (uVar6 < 0x18);
    }
    else {
      iVar2 = 0xc201;
    }
  }
  return CONCAT44(param_2,iVar2);
}

