
void FUN_01037024(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined4 uVar10;
  
  pbVar4 = DAT_01037180;
  puVar3 = DAT_0103717c;
  puVar2 = DAT_01037178;
  puVar1 = DAT_01037174;
  uVar10 = *DAT_01037170;
  do {
    do {
      uVar5 = FUN_01025c92(*(undefined4 *)(param_1 + 0xc),0x3b,1,0,0xffffffff);
      if ((*(uint *)(param_1 + 0x14) & (uint)*pbVar4) == 0) {
        uVar5 = 1;
      }
      if ((int)(uVar5 << 0x1f) < 0) {
        FUN_01037188();
        iVar6 = FUN_0101bbf6(*(undefined4 *)(param_1 + 8),3,0,0,10);
        if (iVar6 == 0) {
          *puVar3 = s_tracking_cals_c_01037190;
          *puVar2 = 0x252;
          boot_msg(1,0xe405,2);
        }
        FUN_01025d74(*(undefined4 *)(param_1 + 0xc),8);
        uVar5 = uVar5 & 0xfffffff7;
      }
      if ((int)(uVar5 << 0x1e) < 0) {
        FUN_0103718a(uVar5 << 0x1e,2);
        FUN_0102b510(*(undefined1 *)(param_1 + 4));
        if (*(int *)(param_1 + 0x2c) == 0) {
          FUN_01025d9c(*(undefined4 *)(param_1 + 0xc),8);
        }
        else {
          FUN_0101bbf6(*(undefined4 *)(param_1 + 8),4,*(int *)(param_1 + 0x2c),0,1);
        }
      }
    } while (-1 < (int)(uVar5 << 0x1c));
    uVar7 = heap_block_probe();
    FUN_01023dac(uVar10);
    if (*DAT_01037184 == -0x10) {
      for (uVar5 = 0; uVar5 <= *puVar1; uVar5 = uVar5 + 1) {
      }
    }
    else {
      pcVar9 = *(code **)(*(int *)(DAT_0103716c + (uint)*(byte *)(param_1 + 4) * 0x2c + 0x20) + 8);
      if (pcVar9 != (code *)0x0) {
        uVar8 = (*pcVar9)(param_1,0);
        *puVar3 = s_tracking_cals_c_01037190;
        *puVar2 = 0x2a4;
        boot_msg(2,uVar8,1);
      }
    }
    FUN_01023e16(uVar10);
    if ((*(uint *)(param_1 + 0x14) & (uint)*pbVar4) == 0) {
      FUN_01037188();
    }
    else {
      uVar5 = xPortGetFreeHeapSize(uVar7);
      FUN_0102b510(*(undefined1 *)(param_1 + 4));
      if (uVar5 < *(uint *)(param_1 + 0x2c)) {
        FUN_0101bbf6(*(undefined4 *)(param_1 + 8),4,*(uint *)(param_1 + 0x2c) - uVar5,0,1);
      }
      else {
        FUN_01025d9c(*(undefined4 *)(param_1 + 0xc),8);
      }
    }
  } while( true );
}

