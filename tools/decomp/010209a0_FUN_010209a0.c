
void FUN_010209a0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint in_fpscr;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  iVar3 = DAT_01020f58;
  iVar2 = DAT_01020f54;
  iVar1 = DAT_01020f48;
  local_34 = 1;
  local_32 = 1;
  local_33 = 1;
  local_31 = 0;
  local_2c = 0;
  local_30 = 0x3f800000;
  uVar6 = 0;
  uStack_28 = param_4;
  do {
    if ((int)((param_1 >> (uVar6 & 0xff)) << 0x1f) < 0) {
      fVar7 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(uVar6 * 0xb + iVar3 + 6),
                                (byte)(in_fpscr >> 0x15) & 3);
      uVar8 = FUN_01012c10((fVar7 / DAT_01020c0c) * DAT_01020c10);
      uVar8 = FUN_0101f250((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_01020f5c,DAT_01020f60);
      uVar9 = FUN_0102025c(*(undefined4 *)(uVar6 * 0xbc + iVar1 + 0x1a0));
      FUN_0101f250((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar8,
                   (int)((ulonglong)uVar8 >> 0x20));
      local_38 = FUN_01035c84();
      if (local_38 < 3) {
        local_38 = 3;
      }
      *(uint *)(iVar2 + 0x20 + uVar6 * 4) = local_38;
      FUN_01020862(uVar6 & 0xff,&local_38);
      iVar4 = uVar6 * 0xd0 + DAT_01020f64;
      puVar5 = (undefined4 *)(iVar2 + uVar6 * 0x10);
      *(undefined1 *)(iVar4 + 0xc9) = 0;
      *(undefined1 *)(iVar4 + 200) = 0;
      *(undefined4 *)(iVar4 + 0xcc) = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      FUN_01020e90(uVar6 & 0xff,1);
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 2);
  return;
}

