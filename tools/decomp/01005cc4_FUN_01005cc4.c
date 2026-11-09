
undefined8 FUN_01005cc4(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  FUN_01005a50(param_2);
  uVar6 = 0;
  iVar9 = 1;
  do {
    iVar4 = DAT_01005e54;
    if ((int)((*param_2 >> (uVar6 & 0xff)) << 0x1f) < 0) {
      iVar8 = DAT_01005e50 + uVar6 * 0x2a0;
      switch(param_2[6]) {
      case 0:
        iVar5 = *(int *)(DAT_01005e58 + uVar6 * 4);
        *(undefined1 *)(iVar8 + 0x29d) = *(undefined1 *)(iVar5 + 0x2f);
        uVar7 = 0;
        if ((*(char *)(iVar4 + 0x20) != '\0') && (*(char *)(iVar5 + 0x2f) == '\x01')) {
          uVar7 = 3;
        }
        uVar2 = 0;
        break;
      case 1:
        uVar7 = 1;
        *(undefined1 *)(iVar8 + 0x125d) = 0;
        uVar2 = 1;
        iVar8 = iVar8 + 0xfc0;
        break;
      case 2:
        uVar7 = 2;
        *(undefined1 *)(iVar8 + 0x7dd) = 0;
        uVar2 = 2;
        iVar8 = iVar8 + 0x540;
        break;
      case 3:
        uVar7 = 3;
        *(undefined1 *)(iVar8 + 0xd1d) = 0;
        uVar2 = 3;
        iVar8 = iVar8 + 0xa80;
        break;
      default:
        iVar9 = 0;
        goto LAB_01005e20;
      }
      cVar1 = FUN_010116f2(uVar6,uVar2);
      if (iVar9 != 0) {
        if ((*(char *)(iVar8 + param_2[8] + 10) == '\x01') ||
           (*(char *)(DAT_01005e4c + 0x7a3) != '\0')) {
          iVar4 = 0;
          if (*(char *)(iVar8 + 0x29c) != '\0') {
            iVar4 = 6;
          }
          iVar4 = iVar8 + iVar4 + param_2[8] * 2;
          FUN_01011bec(param_2[6],uVar6 & 0xff,*(undefined1 *)(iVar4 + 0x290),
                       *(undefined1 *)(iVar4 + 0x291),param_2,iVar9,param_4);
        }
        if ((*(char *)((uint)*(byte *)(iVar8 + 0x29d) + iVar8 + 8) == '\x01') ||
           (*(char *)(DAT_01005e4c + 0x7a3) != '\0')) {
          iVar4 = FUN_01011616(uVar6);
          iVar5 = 1;
          if (iVar4 != 0) {
            FUN_01011668();
            iVar3 = (short)(ushort)*(byte *)(iVar8 + 0x29d) * 0x138 + iVar8;
            if (*(int *)(iVar3 + 0xec) == 0) {
              iVar5 = FUN_01011648(iVar4,0,iVar3 + 0xf0);
            }
            iVar4 = FUN_01011648(iVar4,iVar8 + 0x20 +
                                       (short)(ushort)*(byte *)(iVar8 + 0x29d) * 0x138,0);
            if (iVar5 != 0 && iVar4 != 0) {
              if (cVar1 == '\0') {
                uVar2 = 2;
              }
              else {
                uVar2 = 3;
              }
              FUN_01011690(uVar6,uVar2,uVar7);
              goto LAB_01005e20;
            }
          }
          uVar2 = 0x3007;
          goto LAB_01005e2a;
        }
      }
    }
LAB_01005e20:
    uVar6 = uVar6 + 1;
    if (1 < (int)uVar6) {
      uVar2 = 0;
LAB_01005e2a:
      return CONCAT44(param_2,uVar2);
    }
  } while( true );
}

