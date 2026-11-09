
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0102bc58(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  undefined1 *puVar5;
  uint *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  undefined4 auStack_110 [4];
  undefined4 uStack_100;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar12 = DAT_0102be2c;
  puVar5 = DAT_0102be28;
  uStack_2c = param_12;
  uStack_30 = param_11;
  uStack_34 = param_10;
  uStack_38 = param_9;
  uStack_50 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uStack_50 = isIRQinterruptsEnabled();
  }
  uStack_4c = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uStack_4c = isFIQinterruptsEnabled();
  }
  uStack_48 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uStack_48 = getBasePriority();
  }
  cVar3 = isThreadModePrivileged();
  cVar4 = isUsingMainStack();
  uStack_40 = getMainStackPointer();
  uStack_3c = (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar1 = getCurrentExceptionNumber();
    uStack_3c = uStack_3c | uVar1 & 0x1f;
  }
  uStack_44 = (uint)(byte)((cVar4 != '\x01') << 1 | cVar3 != '\x01');
  uStack_54 = (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar1 = getCurrentExceptionNumber();
    uStack_54 = uStack_54 | uVar1 & 0x1f;
  }
  uStack_58 = *(undefined4 *)(DAT_0102be54 + 0x28);
  uStack_5c = *(undefined4 *)(DAT_0102be54 + 0x24);
  uStack_60 = *(undefined4 *)(DAT_0102be54 + 0x20);
  uStack_64 = *(undefined4 *)(DAT_0102be54 + 0x1c);
  uStack_68 = *(undefined4 *)(DAT_0102be54 + 0x18);
  uStack_6c = *(undefined4 *)(DAT_0102be54 + 0x14);
  uStack_70 = *(undefined4 *)(DAT_0102be54 + 0x10);
  uStack_74 = *(undefined4 *)(DAT_0102be54 + 0xc);
  uStack_78 = *(undefined4 *)(DAT_0102be54 + 8);
  uStack_98 = param_8;
  uStack_94 = param_7;
  uStack_90 = param_6;
  uStack_8c = param_5;
  uStack_88 = param_4;
  uStack_84 = param_3;
  uStack_80 = param_2;
  uStack_7c = param_1;
  uStack_100 = *(undefined4 *)(DAT_0102be58 + 0xf3c);
  auStack_110[3] = *(undefined4 *)(DAT_0102be58 + 0xf38);
  auStack_110[2] = *(undefined4 *)(DAT_0102be58 + 0xf34);
  puVar10 = auStack_110 + 1;
  auStack_110[1] = *(undefined4 *)(DAT_0102be58 + 0xd88);
  puVar9 = DAT_0102be5c;
  do {
    puVar20 = puVar9 + 1;
    puVar10 = puVar10 + -1;
    *puVar10 = *puVar9;
    puVar9 = puVar20;
  } while (puVar20 < DAT_0102be5c + 8);
  puVar9 = DAT_0102be60;
  do {
    puVar20 = puVar9 + 1;
    puVar10 = puVar10 + -1;
    *puVar10 = *puVar9;
    puVar9 = puVar20;
  } while (puVar20 < DAT_0102be60 + 8);
  puVar9 = DAT_0102be64;
  do {
    puVar19 = puVar10;
    puVar20 = puVar9 + 1;
    puVar19[-1] = *puVar9;
    puVar9 = puVar20;
    puVar10 = puVar19 + -1;
  } while (puVar20 < DAT_0102be64 + 0x3c);
  uVar11 = *(undefined4 *)(DAT_0102be58 + 0x10);
  uVar13 = *(undefined4 *)(DAT_0102be58 + 0x14);
  puVar19[-2] = *(undefined4 *)(DAT_0102be58 + 0x18);
  puVar19[-3] = uVar13;
  puVar10 = puVar19 + -4;
  *puVar10 = uVar11;
  *DAT_0102be28 = (char)DAT_0102be2c;
  puVar5[1] = (char)((uint)uVar12 >> 8);
  puVar5[2] = (char)((uint)uVar12 >> 0x10);
  puVar5[3] = (char)((uint)uVar12 >> 0x18);
  puVar5[4] = (char)puVar10;
  puVar5[5] = (char)((uint)puVar10 >> 8);
  puVar5[6] = (char)((uint)puVar10 >> 0x10);
  puVar5[7] = (char)((uint)puVar10 >> 0x18);
  *DAT_0102be18 = *DAT_0102be18 & 0xbf;
  *DAT_0102be1c = *DAT_0102be1c | 2;
  *(undefined4 *)(DAT_0102be44 + 0x3c) = *DAT_0102be48;
  *DAT_0102be20 = *DAT_0102be20 | 2;
  *DAT_0102be1c = *DAT_0102be1c & 0xfd;
  puVar6 = DAT_0102be50;
  *DAT_0102be4c = *DAT_0102be4c | 0x1000000;
  *puVar6 = *puVar6 | 1;
  *(undefined4 *)(DAT_0102be40 + 4) = *DAT_0102be48;
  *DAT_0102be30 = DAT_0102be34;
  iVar7 = DAT_0102be58;
  disableIRQinterrupts();
  uVar12 = *puVar10;
  puVar20 = puVar19 + -1;
  *(undefined4 *)(DAT_0102be58 + 0x14) = puVar19[-3];
  *(undefined4 *)(iVar7 + 0x10) = uVar12;
  puVar9 = DAT_0102be64;
  puVar10 = DAT_0102be64 + 0x3c;
  do {
    uVar12 = *puVar20;
    puVar20 = puVar20 + 1;
    puVar10 = puVar10 + -1;
    *puVar10 = uVar12;
    puVar8 = DAT_0102be60;
  } while (puVar9 < puVar10);
  puVar10 = DAT_0102be60 + 8;
  do {
    uVar12 = *puVar20;
    puVar20 = puVar20 + 1;
    puVar10 = puVar10 + -1;
    *puVar10 = uVar12;
    puVar9 = DAT_0102be5c;
  } while (puVar8 < puVar10);
  puVar10 = DAT_0102be5c + 8;
  do {
    puVar21 = puVar20;
    puVar10 = puVar10 + -1;
    *puVar10 = *puVar21;
    iVar7 = DAT_0102be58;
    puVar20 = puVar21 + 1;
  } while (puVar9 < puVar10);
  uVar12 = puVar21[2];
  uVar11 = puVar21[3];
  uVar13 = puVar21[4];
  *(undefined4 *)(DAT_0102be58 + 0xd88) = puVar21[1];
  *(undefined4 *)(iVar7 + 0xf34) = uVar12;
  *(undefined4 *)(iVar7 + 0xf38) = uVar11;
  *(undefined4 *)(iVar7 + 0xf3c) = uVar13;
  iVar7 = DAT_0102be54;
  uVar12 = puVar21[0x27];
  uVar11 = puVar21[0x28];
  uVar13 = puVar21[0x29];
  uVar14 = puVar21[0x2a];
  uVar15 = puVar21[0x2b];
  uVar16 = puVar21[0x2c];
  uVar17 = puVar21[0x2d];
  uVar18 = puVar21[0x2e];
  *(undefined4 *)(DAT_0102be54 + 8) = puVar21[0x26];
  *(undefined4 *)(iVar7 + 0xc) = uVar12;
  *(undefined4 *)(iVar7 + 0x10) = uVar11;
  *(undefined4 *)(iVar7 + 0x14) = uVar13;
  *(undefined4 *)(iVar7 + 0x18) = uVar14;
  *(undefined4 *)(iVar7 + 0x1c) = uVar15;
  *(undefined4 *)(iVar7 + 0x20) = uVar16;
  *(undefined4 *)(iVar7 + 0x24) = uVar17;
  *(undefined4 *)(iVar7 + 0x28) = uVar18;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(puVar21[0x32]);
  }
  isThreadModePrivileged();
  cVar3 = isUsingMainStack();
  if (cVar3 == '\x01') {
    uVar12 = getMainStackPointer();
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setProcessStackPointer(uVar12);
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setMainStackPointer(puVar21[0x34]);
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setThreadModePrivileged((puVar21[0x33] & 1) == 0);
      bVar2 = (bool)isThreadMode();
      if (bVar2) {
        cVar3 = isUsingMainStack();
        setStackMode(cVar3 == '\x01');
      }
    }
  }
  InstructionSynchronizationBarrier(0xf);
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    enableIRQinterrupts((puVar21[0x30] & 1) == 1);
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    enableFIQinterrupts((puVar21[0x31] & 1) == 1);
  }
  return *(undefined8 *)(puVar21 + 0x36);
}

