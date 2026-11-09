
int sched_ss_helper1(int param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  iVar7 = 0;
  *param_2 = 0;
  iVar4 = DAT_01028d18;
  iVar3 = DAT_01028d14;
  iVar2 = DAT_01028d10;
  iVar1 = DAT_01028d0c;
  uVar6 = *(uint *)(param_1 + 0x60);
  iVar8 = 0;
  if ((int)((0xeU >> (*(uint *)(param_1 + 0x68) & 0xff)) << 0x1f) < 0) {
    uVar9 = 0;
    do {
      if (((int)((*(uint *)(param_1 + 0x14) >> (uVar9 + 2 & 0xff)) << 0x1f) < 0) && (iVar8 == 0)) {
        iVar8 = *(int *)(param_1 + 0x68);
        bVar10 = *(char *)(iVar4 + 0x77d) == '\x01';
        if (*(char *)(param_1 + 0x6c) == '\0') {
          if (bVar10) {
            iVar7 = *(int *)(iVar3 + uVar9 * 0x200 + ((uint)((iVar8 + -2) * 0x1000000) >> 0x10) +
                             (uint)*(byte *)(*(int *)(iVar2 + (uint)*(byte *)(iVar1 + uVar9 + 2) * 4
                                                     ) + 0x2c) * 4 + 0x210);
          }
          else {
            iVar7 = *(int *)(*(int *)(DAT_01028d04 + iVar8 * 8 + uVar9 * 4) + 0xc);
          }
        }
        iVar8 = stream_event_dispatcher
                          (*(undefined4 *)(DAT_01028d00 + (uVar9 & 0xff) * 4),iVar8,iVar7,1,1,1,
                           (byte)(uVar6 >> 7) & 1 ^ 1,0,bVar10);
        if ((iVar7 != 0) && (iVar5 = FUN_0103619a(DAT_01028d08 + uVar9 * 0x1c), iVar5 == 0)) {
          *param_2 = 1;
        }
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < 2);
  }
  return iVar8;
}

