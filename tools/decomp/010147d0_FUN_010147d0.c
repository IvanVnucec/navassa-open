
/* WARNING: Removing unreachable block (ram,0x010148ba) */

void FUN_010147d0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  iVar3 = DAT_01015428;
  iVar2 = DAT_01015424;
  iVar9 = DAT_01015420;
  *DAT_01015394 = 0;
  uVar11 = 0;
  do {
    iVar6 = DAT_01015398 + uVar11 * 0x60;
    *(undefined1 *)(iVar6 + 0x11) = 0;
    *(undefined1 *)(iVar6 + 0x10) = 0;
    *(undefined1 *)(iVar3 + uVar11 + 0x18) = 0;
    *(undefined1 *)(iVar2 + uVar11 + 0xc2) = 1;
    uVar7 = (uint)*(byte *)(iVar9 + 0x77d);
    if (uVar7 == 1) {
      uVar7 = FUN_010020bc();
      uVar10 = uVar7;
      if (uVar7 != 0) {
        uVar10 = 1;
      }
    }
    else {
      uVar10 = 0;
    }
    if (uVar11 == 0) {
      uVar8 = DAT_0101542c;
      if (*(char *)(iVar9 + 0x12) == '\x0f' && uVar10 == 0) {
LAB_01014846:
        pin_update(uVar8,8,8);
      }
    }
    else {
      if (uVar11 == 1) {
        uVar7 = (uint)*(byte *)(iVar9 + 0x12);
      }
      if ((uVar11 == 1 && uVar7 == 0) && (uVar8 = DAT_01015430, uVar10 == 0)) goto LAB_01014846;
    }
    puVar5 = DAT_01015438;
    puVar4 = DAT_01015434;
    puVar1 = DAT_0101528c;
    uVar11 = uVar11 + 1;
    if (1 < uVar11) {
      uVar11 = 0;
      do {
        if (((uint)*puVar5 & 1 << (uVar11 & 0xff)) != 0) {
          iVar9 = (**(code **)(*(int *)(*(int *)(DAT_01015280 + uVar11 * 4 + 0x9c) + 0x48) + 4))();
          if (iVar9 != 0) {
            *puVar1 = s_ctrl_task_c_010154d8;
            *puVar4 = 0x148;
            boot_msg(0,0xe708,2);
          }
          *(undefined1 *)(iVar3 + uVar11 + 0x14) = 1;
          thunk_EXT_FUN_20034e0c(uVar11 & 0xff,1);
          thunk_EXT_FUN_20034e0c(uVar11 & 0xff,0);
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < 4);
      thunk_EXT_FUN_200348e4(1);
      thunk_EXT_FUN_200348e4(0);
      FUN_010153b8(2,0,*(undefined4 *)(DAT_0101543c + 0x28));
      return;
    }
  } while( true );
}

