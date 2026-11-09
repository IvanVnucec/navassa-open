
void FUN_01018e3c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  
  iVar2 = DAT_010190c4;
  iVar3 = (short)param_1 * 0x54 + DAT_010190c4;
  if (*(byte *)(iVar3 + 0x80) - 2 < 3) {
    cVar7 = (*(byte *)(iVar3 + 0x80) - 2) * '\x10';
  }
  else {
    cVar7 = '0';
  }
  uVar5 = DAT_01019554;
  if (param_1 != 0) {
    uVar5 = DAT_01019558;
  }
  pin_update(uVar5,0x30,cVar7);
  iVar8 = *(int *)(DAT_010190bc + param_1 * 4);
  if (*(short *)(iVar3 + 0x82) == 1) {
    pin_update(iVar8 + 0x2f,0x20,0);
  }
  else {
    pin_update(iVar8 + 0x2f,0x20,0x20);
    pin_update(iVar8 + 0x30,7,*(ushort *)(iVar3 + 0x82) - 1 >> 8 & 7);
    *(char *)(iVar8 + 0x31) = (char)*(undefined2 *)(iVar3 + 0x82) + -1;
  }
  if (*(char *)(iVar3 + 0x86) == '\x01') {
    pin_update(iVar8 + 0x37,1,1);
  }
  else {
    FUN_01019472(iVar8 + 0x37);
    *(char *)(iVar8 + 0x35) = (char)(*(ushort *)(iVar3 + 0x84) - 1 >> 8);
    *(char *)(iVar8 + 0x36) = (char)*(undefined2 *)(iVar3 + 0x84) + -1;
  }
  cVar7 = *(char *)(iVar3 + 0x7b);
  if (cVar7 != '\0') {
    cVar7 = '\x01';
  }
  iVar4 = *(int *)(DAT_0101955c + param_1 * 4);
  if (*(char *)(iVar3 + 0x7a) == '\x01') {
    pin_update(iVar4 + 299);
    *(char *)(iVar8 + 0x19) = (char)*(undefined2 *)(iVar3 + 0x78);
    *(char *)(iVar8 + 0x1a) = (char)((ushort)*(undefined2 *)(iVar3 + 0x78) >> 8);
  }
  else {
    *(char *)(iVar4 + 0x11f) = (char)*(undefined2 *)(iVar3 + 0x7e) + -1;
    uVar6 = *(ushort *)(iVar3 + 0x7e) - 1;
    *(char *)(iVar4 + 0x120) = (char)(uVar6 >> 8);
    FUN_01019474(iVar4 + 0x127,uVar6 >> 8,cVar7);
    *(char *)(iVar8 + 0x1e) = (char)*(undefined2 *)(iVar3 + 0x78) + -1;
    *(char *)(iVar8 + 0x1f) = (char)(*(ushort *)(iVar3 + 0x78) - 1 >> 8);
  }
  if (param_1 == 0) {
    uVar1 = *(undefined1 *)(iVar2 + 0x70);
    uVar5 = DAT_01019560;
  }
  else {
    uVar1 = *(undefined1 *)(iVar3 + 0x70);
    uVar5 = DAT_01019564;
  }
  pin_update(uVar5,0x1f,uVar1);
  return;
}

