
void FUN_01037634(uint param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int in_r12;
  
  iVar4 = DAT_01037888;
  iVar3 = DAT_01037884;
  uVar8 = 0;
  do {
    if ((int)((param_1 >> (uVar8 & 0xff)) << 0x1f) < 0) {
      iVar9 = *(int *)(iVar4 + uVar8 * 4);
      iVar7 = DAT_0103788c + uVar8 * 0x14;
      if (*(char *)(*(int *)(iVar3 + uVar8 * 4) + 0xea) < '\0') {
        if ((*(byte *)(iVar9 + 0x4a) & 3) == 0) {
          in_r12 = ((uint)*(byte *)(iVar9 + 0x6b) +
                   (uint)*(byte *)(iVar9 + 0x6c) * 0x100 +
                   (*(byte *)(iVar9 + 0x6d) & 0x3f) * 0x10000) * 2;
          uVar5 = 0;
          bVar2 = (bool)isCurrentModePrivileged();
          if (bVar2) {
            uVar5 = isIRQinterruptsEnabled();
          }
          disableIRQinterrupts();
          *(byte *)(iVar9 + 0x4b) = *(byte *)(iVar9 + 0x4b) | 2;
          bVar2 = (bool)isCurrentModePrivileged();
          if (bVar2) {
            enableIRQinterrupts((uVar5 & 1) == 1);
          }
        }
        else {
          in_r12 = 0x7fe;
        }
      }
      else {
        *(undefined1 *)(iVar7 + 4) = 1;
        *(undefined1 *)(iVar7 + 5) = 0;
      }
      cVar1 = *(char *)(DAT_01037890 + uVar8 * 0x80 + 0x2d8);
      iVar9 = uVar8 * 0x14 + DAT_01037894;
      if (cVar1 == '\0') {
        uVar6 = 0x20;
      }
      else {
        if (cVar1 != '\x01' && cVar1 != '\x02') goto LAB_010376e2;
        uVar6 = 0x80;
      }
      *(undefined4 *)(iVar9 + 8) = uVar6;
      *(undefined4 *)(iVar9 + 0xc) = 1;
      *(undefined4 *)(iVar7 + 8) = 1;
      *(int *)(iVar7 + 0xc) = in_r12;
    }
LAB_010376e2:
    uVar8 = uVar8 + 1;
    if (1 < uVar8) {
      return;
    }
  } while( true );
}

