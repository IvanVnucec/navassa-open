
undefined8 thunk_FUN_010383e8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  undefined4 uVar6;
  bool bVar7;
  
  puVar2 = DAT_0103851c;
  puVar1 = DAT_010384f8;
  uVar3 = (uint)(ushort)DAT_010384f8[4];
  DAT_0103851c[1] =
       (ushort)DAT_010384f8[5] | *(ushort *)((int)DAT_010384f8 + 0x12) | (ushort)DAT_010384f8[3] |
       (ushort)DAT_010384f8[4];
  uVar6 = 0;
  bVar7 = *(int *)(param_2 + 0x4d4) == -1;
  if (bVar7) {
    uVar3 = *(uint *)(param_2 + 0x14);
  }
  if (!bVar7 || uVar3 != 0xffffffff) {
    FUN_0103c382(param_1,param_2);
  }
  iVar4 = heap_block_probe();
  puVar1[1] = iVar4 + 200;
  uVar3 = heap_block_probe();
  if ((-1 < (int)((uint)*(ushort *)(param_1 + 4) << 0x16)) &&
     (*puVar1 < uVar3 && uVar3 - *puVar1 < 0x80000000)) {
    FUN_0103c680(param_2);
  }
  if ((short)puVar1[4] == 1) {
    iVar4 = FUN_01023d26(*DAT_01038518,0xffffffff);
LAB_01038492:
    if (-1 < (int)((uint)*puVar2 << 0x11)) {
      if (iVar4 != 0) {
        if (iVar4 == 2 || iVar4 == 5) {
          uVar6 = 0x4802;
        }
        else if ((iVar4 == 3) || (iVar4 != 4)) {
          uVar6 = 0x4803;
        }
        else {
          uVar6 = 0x4804;
        }
      }
      goto LAB_010384c8;
    }
    *puVar2 = *puVar2 & 0xbfff;
  }
  else {
    if (uVar3 <= puVar1[1] || 0x7fffffff < uVar3 - puVar1[1]) {
      iVar4 = 0;
      goto LAB_01038492;
    }
    uVar3 = puVar1[2];
    bVar7 = uVar3 < 0x7fff;
    if (bVar7) {
      uVar3 = uVar3 + 1;
    }
    if (bVar7) {
      puVar1[2] = uVar3;
    }
    *(short *)(puVar1 + 3) = (0x20 - (short)LZCOUNT(puVar1[2])) * 0x10;
  }
  uVar6 = 0x4805;
LAB_010384c8:
  uVar5 = (short)puVar1[4] + 1;
  *(ushort *)(puVar1 + 4) = uVar5;
  puVar2[1] = uVar5 | (ushort)puVar1[5] | *(ushort *)((int)puVar1 + 0x12) | (ushort)puVar1[3];
  return CONCAT44(param_4,uVar6);
}

