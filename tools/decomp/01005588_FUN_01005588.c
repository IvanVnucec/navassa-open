
int FUN_01005588(undefined4 param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  byte bVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  uint *local_494 [279];
  undefined2 local_38 [10];
  
  bVar6 = 0;
  if (param_2[7] == 0) {
    local_494[0] = param_2;
    FUN_010056fa();
    FUN_0100f12c();
    FUN_010056ee();
    FUN_0100f232();
    iVar3 = DAT_01005e4c;
    iVar2 = 0;
    do {
      local_38[iVar2] = *(undefined2 *)(&DAT_01005eb4)[iVar2];
      iVar2 = iVar2 + 1;
    } while (iVar2 < 9);
    iVar2 = 0;
    do {
      if ((int)((*param_2 >> (uint)bVar6) << 0x1f) < 0) {
        bVar9 = true;
        iVar7 = DAT_01005e50 + (short)(ushort)bVar6 * 0x2a0;
        uVar4 = param_2[6];
        if (*(char *)((short)(ushort)bVar6 * 0xbc + iVar3 + 0x3c) == '\x02') {
          if (uVar4 != 2) {
            if (uVar4 != 3) goto switchD_01005682_switchD;
            bVar9 = false;
            goto LAB_0100561e;
          }
          bVar9 = false;
LAB_01005612:
          iVar7 = iVar7 + 0x540;
          goto LAB_01005622;
        }
switchD_01005682_switchD:
        switch(uVar4) {
        case 0:
          uVar5 = *(undefined1 *)(*(int *)(DAT_01005e58 + (uint)bVar6 * 4) + 0x2f);
          goto LAB_01005624;
        case 1:
          iVar7 = iVar7 + 0xfc0;
          break;
        case 2:
          goto LAB_01005612;
        case 3:
LAB_0100561e:
          iVar7 = iVar7 + 0xa80;
          break;
        default:
          goto switchD_01005682_default;
        }
LAB_01005622:
        uVar5 = 0;
LAB_01005624:
        *(undefined1 *)(iVar7 + 0x29d) = uVar5;
        cVar1 = *(char *)(iVar3 + 0x77d);
        bVar8 = cVar1 != '\0';
        if (bVar8) {
          cVar1 = *(char *)(iVar7 + 8 + (uint)*(byte *)(iVar7 + 0x29d));
        }
        if (bVar8 && cVar1 != '\0') {
          cVar1 = *(char *)(param_2[8] + iVar7 + 10);
          bVar8 = cVar1 != '\0';
          if (bVar8) {
            cVar1 = (char)param_2[5];
          }
          if (bVar8 && cVar1 != '\0') {
            bVar9 = false;
          }
        }
        if ((*(char *)(DAT_01005e54 + 0x20) == '\0') || (uVar4 != 0)) {
          if (bVar9) goto LAB_010056a4;
        }
        else {
          cVar1 = *(char *)(iVar7 + 8);
          bVar9 = cVar1 != '\0';
          if (bVar9) {
            cVar1 = *(char *)(iVar7 + 9);
          }
          if (((!bVar9 || cVar1 == '\0') || (*(char *)(param_2[8] + iVar7 + 10) == '\0')) ||
             ((char)param_2[5] == '\0')) {
LAB_010056a4:
            iVar2 = FUN_01005760(param_1,param_2,bVar6,local_494);
          }
        }
        if (iVar2 != 0) break;
      }
      bVar6 = bVar6 + 1;
    } while (bVar6 < 2);
    FUN_010056ee();
    FUN_0100f26e();
    FUN_010056fa();
    FUN_0100f1b6();
    iVar3 = 0;
    do {
      *(undefined2 *)(&DAT_01005eb4)[iVar3] = local_38[iVar3];
      iVar3 = iVar3 + 1;
    } while (iVar3 < 9);
  }
  else {
    iVar2 = 0;
  }
switchD_01005682_default:
  return iVar2;
}

