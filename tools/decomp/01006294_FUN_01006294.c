
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01006294(void)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  puVar3 = DAT_0100637c;
  *DAT_0100637c = _DAT_49000000 & 0x1e;
  iVar5 = 0;
  *(char *)(puVar3 + 1) = (char)_DAT_49000004;
  iVar7 = 0;
  *(char *)((int)puVar3 + 5) = (char)((uint)_DAT_49000004 >> 8);
  *(char *)((int)puVar3 + 6) = (char)((uint)_DAT_49000004 >> 0x10);
  *(char *)((int)puVar3 + 7) = (char)((uint)_DAT_49000004 >> 0x18);
  *(char *)(puVar3 + 2) = (char)_DAT_49000008;
  puVar4 = DAT_010063a8;
  if (*puVar3 != 0x10) {
    if ((code *)puVar3[3] != (code *)0x0) {
      (*(code *)puVar3[3])(puVar3);
    }
    _DAT_49000000 = 0;
    return;
  }
  switch(*DAT_010063a0) {
  case 0:
    uVar2 = puVar3[1];
    cVar1 = *(char *)(DAT_010063a4 + 1);
    uVar6 = *DAT_010063a4;
    if ((int)((uint)(byte)uVar2 << 0x1f) < 0) {
      *DAT_010063a8 = uVar6;
      if (cVar1 == '\0') {
        *(undefined1 *)(puVar4 + 1) = 1;
      }
      else {
        FUN_01013166(0,0,0);
      }
    }
    puVar4 = DAT_010063a8;
    if ((int)((uint)(byte)uVar2 << 0x1e) < 0) {
      DAT_010063a8[3] = uVar6;
      if (cVar1 == '\0') {
        *(undefined1 *)(puVar4 + 4) = 1;
      }
      else {
        FUN_01013166(1,0,0);
      }
    }
    goto LAB_01006336;
  case 1:
  case 4:
    break;
  case 2:
    iVar5 = thunk_EXT_FUN_20034c5e(puVar3 + 1);
    break;
  case 3:
    iVar5 = FUN_01013516(puVar3 + 1);
    break;
  case 5:
    iVar5 = FUN_01006194(puVar3 + 1);
    break;
  case 6:
    iVar5 = FUN_01002400(puVar3 + 1);
    break;
  default:
    iVar7 = 2;
    goto LAB_01006336;
  }
  if (iVar5 != 0) {
    _DAT_49000014 = _DAT_49000014 & 0xffff | iVar5 << 0x10;
    iVar7 = 7;
  }
LAB_01006336:
  _DAT_49000010 = _DAT_49000010 & 0xfffffff0 | iVar7 << 1;
  _DAT_49000000 = 0;
  return;
}

