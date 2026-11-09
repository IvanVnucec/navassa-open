
void FUN_0102e1fc(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  
  iVar3 = DAT_0102e510;
  bVar1 = *(byte *)(param_1 + 1);
  uVar6 = (uint)bVar1;
  if (*(byte *)(DAT_0102e510 + uVar6) < 2) {
    *DAT_0102e500 = *DAT_0102e500 & ~(byte)(1 << (uint)*(byte *)(param_1 + 2));
    FUN_010142d8();
  }
  *(undefined1 *)(param_1 + 0x24) = 0;
  if (uVar6 == 0) {
    FUN_0103b582();
  }
  else {
    FUN_0103b588();
  }
  if (*(char *)(param_1 + 0x2c) == '\0') {
    FUN_01009daa(*(undefined1 *)(param_1 + 2),0,
                 *(undefined4 *)(DAT_0102e540 + (uint)*(byte *)(param_1 + 1) * 4),0);
  }
  if (*(char *)(DAT_0102e548 + (short)(ushort)bVar1 * 0xb) == '\0') {
    FUN_0102d81a(uVar6);
  }
  iVar4 = DAT_0102e520;
  if (*(char *)(param_1 + 0x2d) == '\0') {
    iVar7 = *(int *)(DAT_0102e50c + 0x2c + uVar6 * 4);
    if ((*(char *)(DAT_0102e50c + 2 + iVar7) == '\0') &&
       (cVar2 = *(char *)(iVar3 + uVar6), (cVar2 == '\x02' || cVar2 == '\x04') || cVar2 == '\x05'))
    {
      FUN_0100b260(DAT_0102e520 + (uint)*(byte *)(param_1 + 2) * 0x14);
      uVar5 = FUN_0100b1da();
      FUN_01009a04(iVar7,uVar5,iVar4 + (uint)*(byte *)(param_1 + 2) * 0x14);
    }
    FUN_0103ae90(param_1,2);
    if (*(char *)(DAT_0102e530 + 0x1b) != '\0') {
      FUN_0102ccba(4,5);
    }
    FUN_0102dcf4(param_1);
    return;
  }
  *(undefined1 *)(param_1 + 0x10) = 2;
  FUN_010016a2(*(undefined1 *)(param_1 + 1),
               *(uint *)(*(int *)(DAT_0102e544 +
                                 (uint)*(byte *)(DAT_0102e514 + (uint)*(byte *)(param_1 + 2)) * 4) +
                        0x1c) >> (uint)*(byte *)(param_1 + 2) & 1,1);
  return;
}

