
void FUN_0103d500(int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  ushort *puVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  uint local_28 [5];
  
  if (param_1 == 0) {
    iVar5 = 0;
    puVar7 = DAT_0103d614;
  }
  else {
    puVar7 = DAT_0103d614 + 5;
    iVar5 = 8;
  }
  iVar8 = 0;
  do {
    fVar10 = *(float *)(param_3 + 0xc);
    if (fVar10 == 0.0 || fVar10 < 0.0 != NAN(fVar10)) {
      bVar2 = *(byte *)(param_2 + iVar8);
      bVar1 = *(byte *)(param_2 + iVar8 + 5);
    }
    else {
      bVar2 = *(byte *)(param_2 + 4 + -iVar8);
      bVar1 = *(byte *)(-iVar8 + param_2 + 9);
    }
    local_28[iVar8] =
         (uint)bVar2 | (uint)bVar2 << 0x10 | (uint)bVar1 * -0x1000000 | (uint)bVar1 << 8;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 5);
  *(ushort *)(param_3 + 0x5e) =
       (ushort)*(byte *)(param_2 + 10) << iVar5 |
       *(ushort *)(param_3 + 0x5e) & ~(ushort)(7 << iVar5);
  if (-1 < (int)((uint)*(ushort *)(param_3 + 4) << 0x13)) {
    uVar6 = FUN_010232b8();
    puVar3 = DAT_0103d618;
    if (-1 < (int)((uint)*(ushort *)(param_3 + 4) << 0x12)) {
      if (param_1 == 0) {
        uVar4 = 0x800;
      }
      else {
        uVar4 = 8;
      }
      *DAT_0103d618 = uVar4 | *(ushort *)(param_3 + 0x5e);
    }
    uVar4 = 0;
    do {
      uVar9 = (uint)uVar4;
      uVar4 = uVar4 + 1;
      *puVar7 = local_28[uVar9];
      puVar7 = puVar7 + 1;
    } while (uVar4 < 5);
    if (-1 < (int)((uint)*(ushort *)(param_3 + 4) << 0x12)) {
      *puVar3 = *(ushort *)(param_3 + 0x5e);
    }
    *(ushort *)(DAT_0103d5f8 + 0x12) = *(ushort *)(DAT_0103d5f8 + 0x12) | 0x1000;
    restore_priority(uVar6);
  }
  return;
}

