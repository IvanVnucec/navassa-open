
int FUN_01032600(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                int param_6)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar3 = DAT_01032778;
  bVar1 = *(byte *)(DAT_010327c0 + param_1);
  uVar2 = *(undefined1 *)(DAT_01032754 + param_1);
  iVar10 = (short)param_1 * 0x14;
  iVar4 = DAT_01032778 + iVar10;
  FUN_0100b698(iVar4,uVar2,DAT_010327d0 + (short)(ushort)bVar1 * 0x6c,0x1b);
  iVar8 = DAT_01032788 + iVar10;
  FUN_0100b698(iVar8,uVar2,DAT_010327d4 + (uint)bVar1 * 0x10,4);
  iVar9 = DAT_0103277c + iVar10;
  FUN_0100b698(iVar9,uVar2,DAT_010327d8 + param_1 * 0x10,4);
  iVar5 = DAT_01032780 + iVar10;
  FUN_0100b698(iVar5,uVar2,DAT_010327dc + param_1 * 8,2);
  FUN_0100b698(DAT_01032784 + iVar10,uVar2,DAT_010327e0 + (short)param_1 * 0x30,0xc);
  iVar6 = FUN_01009cf0(param_2,0,*(undefined1 *)(DAT_01032744 + param_1 + 0xb8),
                       *(undefined1 *)(DAT_01032744 + param_2 + 0xbf));
  if (iVar6 == 0) {
    iVar6 = FUN_010097ac(param_3,param_4,param_2,param_5,iVar4,iVar8);
  }
  if (iVar6 == 0) {
    if (param_6 == 1) {
      iVar6 = FUN_0100b26a(iVar4);
      *(uint *)(*(int *)(iVar3 + iVar10) + iVar6 * 4) =
           *(uint *)(*(int *)(iVar3 + iVar10) + iVar6 * 4) & 0xdfffffff;
      uVar7 = FUN_0100b280(*(undefined4 *)(param_2 * 0x60 + DAT_01032750 + 0x28));
      iVar6 = FUN_0100b2c4(param_2,uVar7,iVar4);
      FUN_0100b594(iVar4);
    }
    FUN_0100b704(iVar5,*(int *)(DAT_010327e4 + param_2 * 4) + 0x33,1,1);
    FUN_0100b594(iVar5);
    if (iVar6 == 0) {
      *(undefined4 *)(iVar9 + 8) = 0;
      *(undefined1 *)(iVar9 + 0xc) = 0;
      *(undefined4 *)(iVar9 + 0x10) = 0;
      uVar7 = FUN_0100b1da();
      FUN_01009a04(param_2,uVar7,iVar9);
    }
  }
  return iVar6;
}

