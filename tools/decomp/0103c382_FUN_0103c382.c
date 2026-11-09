
undefined8 FUN_0103c382(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int local_28;
  ushort local_24 [2];
  undefined4 uStack_20;
  
  local_24[0] = (ushort)param_3;
  local_24[1] = (ushort)((uint)param_3 >> 0x10);
  uStack_20 = param_4;
  FUN_0100ae0a(0x31,1);
  local_28 = param_2;
  if (((((((*(int *)(param_2 + 4) != 0 || *(int *)(param_2 + 0xc) != 0) ||
          *(int *)(param_2 + 0x4c4) != 0) || *(int *)(param_2 + 0x4cc) != 0) ||
        *(int *)(param_2 + 8) != 0) || *(int *)(param_2 + 0x10) != 0) ||
      *(int *)(param_2 + 0x4c8) != 0) || *(int *)(param_2 + 0x4d0) != 0) {
    local_28 = 0;
    while( true ) {
      if ((*(int *)(param_2 + 0x4d4) == -1) || (*(int *)(param_2 + 0x14) != -1)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      iVar4 = 0;
      do {
        iVar5 = param_2 + local_28 * 4 + iVar4 * 0x4c0;
        local_24[iVar4] =
             (ushort)LZCOUNT(*(uint *)(param_2 + 0x14 + iVar4 * 0x4c0) &
                             (*(uint *)(iVar5 + 0xc) | *(uint *)(iVar5 + 4)));
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
      uVar3 = uVar3 | -(uint)(local_24[1] < local_24[0]) >> 0x1f;
      iVar4 = param_2 + (short)uVar3 * 0x4c0;
      uVar1 = local_24[uVar3];
      if ((*(uint *)(iVar4 + local_28 * 4 + 4) & 0x80000000U >> (uVar1 & 0xff)) != 0) break;
      bVar6 = local_28 != 0;
      local_28 = param_2;
      if (bVar6) goto LAB_0103c48c;
      local_28 = 1;
    }
    FUN_0103c4ac(local_28 * 0xb + iVar4 + (uint)uVar1 * 0x16 + 0x330,param_1,iVar4,(char)uVar1);
    if (*(int *)(iVar4 + 0x14) != -1) {
      *(undefined4 *)(iVar4 + 0x14) = 0xffffffff;
      uVar2 = FUN_0103c7f4(iVar4);
      FUN_0103d500(uVar3,uVar2,param_1);
      *(int *)(DAT_0103cd88 + 0x10 + uVar3 * 0x14) =
           *(int *)(DAT_0103cd88 + 0x10 + uVar3 * 0x14) + 1;
    }
  }
LAB_0103c48c:
  FUN_0100ae0a(0x31,0);
  return CONCAT26(local_24[1],CONCAT24(local_24[0],local_28));
}

