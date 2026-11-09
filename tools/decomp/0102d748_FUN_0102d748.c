
void FUN_0102d748(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = DAT_0102da68 + (short)param_1 * 0xb;
  bVar2 = *(byte *)(iVar7 + 5);
  cVar3 = *(char *)(iVar7 + 5);
  cVar4 = *(char *)(iVar7 + 4);
  iVar8 = *(int *)(DAT_0102da58 + param_1 * 4);
  pin_update(iVar8 + 0x15b,0xf0,(bVar2 & 0xf) << 4);
  pin_update(iVar8 + 0x13,0x20,0);
  *(byte *)(iVar7 + 4) = bVar2;
  pin_update(iVar8 + 0x1c1,1,1);
  pbVar1 = (byte *)(*(int *)(DAT_0102da64 + param_1 * 4) + 0xd3);
  uVar5 = *pbVar1 & 0x1f;
  uVar6 = DAT_0102da64;
  switch(cVar3 - cVar4) {
  default:
    return;
  case '\x01':
    if (uVar5 < 0x14) {
      uVar6 = uVar5 + 2;
    }
    break;
  case '\x02':
    if (uVar5 < 0x12) {
      uVar6 = uVar5 + 4;
    }
    break;
  case '\x03':
    if (uVar5 < 0x10) {
      uVar6 = uVar5 + 6;
    }
    break;
  case -3:
    if (5 < uVar5) {
      uVar6 = uVar5 - 6;
    }
    break;
  case -2:
    if (3 < uVar5) {
      uVar6 = uVar5 - 4;
    }
    break;
  case -1:
    if (1 < uVar5) {
      uVar6 = uVar5 - 2;
    }
  }
  pin_update(pbVar1,0x1f,uVar6 & 0xff);
  return;
}

