
undefined8
FUN_0100dc92(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 local_28;
  
  local_28 = param_4;
  iVar4 = FUN_0100de44(*param_2,&local_28);
  iVar3 = DAT_0100e014;
  uVar9 = 0;
  if (iVar4 == 0) {
    uVar9 = 0x210b;
  }
  else {
    if (*DAT_0100e078 != '\x02') {
      spi_notify_thunk(DAT_0100e014 + 0x424,0x90);
    }
    iVar4 = DAT_0100e07c;
    puVar2 = DAT_0100e000;
    uVar11 = 0;
    do {
      if (*(char *)((int)&local_28 + uVar11) != '\0') {
        *(undefined1 *)(uVar11 * 0x110 + DAT_0100e020 + 0x6e) = *puVar2;
        FUN_0100c28c(uVar11 & 0xff,DAT_0100e080);
        FUN_0101d884(uVar11 & 0xff);
        FUN_0101d8a0(uVar11 & 0xff);
        if (*DAT_0100e010 != '\0') {
          *(undefined1 *)(iVar3 + uVar11 * 2) = 0;
          *(undefined1 *)(iVar3 + uVar11 * 2 + 1) = 0;
          iVar12 = DAT_0100e088;
          *(undefined2 *)(DAT_0100e084 + uVar11 * 2) = 0;
          *(undefined4 *)(iVar12 + uVar11 * 4) = 0;
          uVar5 = param_2[2];
          uVar8 = 3;
          if (uVar5 < 3) {
            uVar8 = uVar5;
          }
          uVar1 = UnsignedSaturate(uVar5,4);
          UnsignedDoesSaturate(uVar5,4);
          for (iVar12 = 0; iVar12 < (int)uVar8; iVar12 = iVar12 + 1) {
            puVar10 = (undefined4 *)(uVar11 * 0x30 + DAT_0100e018 + iVar12 * 8);
            puVar6 = (undefined4 *)
                     (iVar4 + 8 +
                     (param_2[3] + *(int *)((short)uVar1 * 0x18 + iVar3 + 0x34 + iVar12 * 4)) * 8);
            uVar7 = puVar6[1];
            *puVar10 = *puVar6;
            puVar10[1] = uVar7;
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < 2);
  }
  return CONCAT44(local_28,uVar9);
}

