
undefined8 FUN_01013516(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  pbVar1 = DAT_0101363c;
  uVar9 = 0;
  if ((*(byte *)(param_1 + 2) - 3 < 3) && (*(byte *)(param_1 + 4) < 5)) {
    *DAT_0101363c = *(byte *)(param_1 + 2);
    bVar6 = *(byte *)(param_1 + 3);
    if (bVar6 != 0) {
      bVar6 = 1;
    }
    pbVar1[5] = bVar6;
    puVar2 = DAT_01013640;
    pbVar1[0x14] = *(byte *)(param_1 + 4);
    *(undefined4 *)(pbVar1 + 8) = *puVar2;
    iVar4 = puVar2[1];
    *(int *)(pbVar1 + 0x10) = iVar4;
    if (iVar4 == 0) {
      pbVar1[0x1a] = 0;
      pbVar1[5] = 0;
    }
    else {
      pbVar1[0x1a] = 1;
      iVar4 = thunk_EXT_FUN_20036204(0xb);
      if (iVar4 != 0) {
        return CONCAT44(param_4,0xd20b);
      }
    }
    iVar4 = puVar2[2];
    *(int *)(pbVar1 + 0xc) = iVar4;
    if (pbVar1[5] != 0) {
      pbVar1[5] = 0;
      *(int *)(pbVar1 + 8) = *(int *)(pbVar1 + 0x10) + *(int *)(pbVar1 + 8);
    }
    bVar6 = *(byte *)(puVar2 + 3);
    if (bVar6 != 0) {
      bVar6 = 1;
    }
    pbVar1[0x16] = bVar6;
    bVar6 = *(byte *)((int)puVar2 + 0xd);
    if (bVar6 != 0) {
      bVar6 = 1;
    }
    pbVar1[0x17] = bVar6;
    if (iVar4 == 0) {
      uVar9 = 0xea01;
    }
    else {
      FUN_01029d64(pbVar1);
      iVar4 = DAT_01013644;
      FUN_01029d7a(DAT_01013644,pbVar1);
      *(undefined2 *)(iVar4 + 4) = 0;
      FUN_0102a4a6();
      FUN_0102a4fa();
      uVar3 = DAT_0101364c;
      uVar5 = 0;
      uVar7 = 0;
      do {
        if ((int)((0xcU >> *(sbyte *)(*(int *)(DAT_01013648 + uVar7 * 4) + 0x10)) << 0x1f) < 0) {
          uVar5 = uVar5 | 1 << (uVar7 & 0xff);
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < 4);
      if ((uVar5 & 0xff) == 0) {
        uVar8 = 1;
      }
      else {
        if (*(char *)(iVar4 + 10) == '\x1c') {
          uVar9 = 0xea00;
          goto LAB_010135fe;
        }
        pin_update(DAT_01013650,0xf);
        uVar8 = 0;
      }
      pin_update(uVar3,1,uVar8);
    }
  }
  else {
    uVar9 = 0xe500;
  }
LAB_010135fe:
  return CONCAT44(param_4,uVar9);
}

