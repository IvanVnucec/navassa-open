
undefined4 FUN_01019c40(uint param_1,ushort *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  undefined1 uVar5;
  uint uVar7;
  uint uVar6;
  
  iVar1 = DAT_0101a554;
  uVar3 = (uint)*(ushort *)(DAT_0101a554 + 0x22);
  *param_2 = *(ushort *)(DAT_0101a554 + 0x22);
  param_1 = param_1 & uVar3 & 0x3f;
  uVar2 = 0;
  if ((param_1 | uVar3) != uVar3) {
    uVar2 = 0xe701;
  }
  *(byte *)((int)param_2 + 3) = (byte)((param_1 << 0x1c) >> 0x1e);
  *(char *)((int)param_2 + 5) = (char)(param_1 >> 4);
  *(byte *)(param_2 + 1) = (byte)param_1;
  *(byte *)(param_2 + 2) = (byte)param_1 & 3;
  uVar3 = 0;
  *(byte *)(param_2 + 3) = *(byte *)((int)param_2 + 3) & (byte)(*(ushort *)(iVar1 + 0x22) >> 6) & 3;
  *(byte *)((int)param_2 + 7) =
       *(byte *)((int)param_2 + 3) & (byte)((ushort)*(undefined2 *)(iVar1 + 0x22) >> 8) & 3;
  do {
    uVar7 = 1 << (uVar3 & 0xff);
    if (((*(byte *)((int)param_2 + 7) & uVar7) != 0) &&
       (*(char *)(uVar3 * 0xbc + iVar1 + 0x48) == '\0')) {
      *(byte *)((int)param_2 + 7) = *(byte *)((int)param_2 + 7) & ~(byte)uVar7;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 2);
  bVar4 = (byte)param_2[2] | *(byte *)((int)param_2 + 5) | (byte)param_2[3] |
          *(byte *)((int)param_2 + 7);
  *(byte *)(param_2 + 4) = bVar4;
  *(byte *)((int)param_2 + 9) = bVar4 | *(byte *)((int)param_2 + 3);
  param_2[10] = (ushort)param_1 | (ushort)(byte)param_2[3] << 6 |
                (ushort)*(byte *)((int)param_2 + 7) << 8;
  uVar3 = 0;
  do {
    uVar7 = 1 << (uVar3 & 0xff);
    uVar6 = uVar7 & (byte)param_2[2];
    uVar5 = (undefined1)uVar6;
    if (uVar6 != 0) {
      uVar5 = 1;
    }
    *(undefined1 *)((int)param_2 + uVar3 * 5 + 10) = uVar5;
    uVar6 = uVar7 & *(byte *)((int)param_2 + 5);
    uVar5 = (undefined1)uVar6;
    if (uVar6 != 0) {
      uVar5 = 1;
    }
    *(undefined1 *)((int)param_2 + uVar3 * 5 + 0xb) = uVar5;
    uVar6 = uVar7 & (byte)param_2[3];
    uVar5 = (undefined1)uVar6;
    if (uVar6 != 0) {
      uVar5 = 1;
    }
    *(undefined1 *)((int)param_2 + uVar3 * 5 + 0xc) = uVar5;
    uVar6 = uVar7 & *(byte *)((int)param_2 + 7);
    uVar5 = (undefined1)uVar6;
    if (uVar6 != 0) {
      uVar5 = 1;
    }
    *(undefined1 *)((int)param_2 + uVar3 * 5 + 0xd) = uVar5;
    uVar7 = (byte)param_2[2] & uVar7;
    uVar5 = (undefined1)uVar7;
    if (uVar7 != 0) {
      uVar5 = 1;
    }
    uVar7 = uVar3 + 1;
    *(undefined1 *)((int)param_2 + uVar3 * 5 + 0xe) = uVar5;
    uVar3 = uVar7;
  } while ((int)uVar7 < 2);
  return uVar2;
}

