
void FUN_0100c28c(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = DAT_0100cac4;
  iVar7 = DAT_0100cac0;
  sVar1 = (short)param_1;
  puVar4 = (undefined1 *)(sVar1 * 0x110 + DAT_0100cac4);
  iVar8 = DAT_0100cac0 + sVar1 * 200 + 0x1950;
  *puVar4 = (char)param_1;
  *(undefined4 *)(puVar4 + 4) = param_2;
  *(int *)(puVar4 + 0xc) = iVar8;
  uVar3 = FUN_0101ed76(puVar4[0x6e],param_1);
  puVar4[100] = uVar3;
  if (*(char *)(iVar7 + 0xc) != '\0') {
    uVar5 = 0;
    do {
      uVar6 = 0;
      do {
        iVar7 = uVar5 * 0xc00 + sVar1 * 0x1800 + iVar2 + uVar6 * 0x30;
        *(undefined1 *)(iVar7 + 0x248) = 0;
        uVar6 = uVar6 + 1;
        *(undefined1 *)(iVar7 + 0x220) = 0x3f;
        *(undefined1 *)(iVar7 + 0x230) = 0;
      } while (uVar6 < 6);
      uVar5 = uVar5 + 1;
    } while (uVar5 < 2);
  }
  if (*DAT_0100cf54 != '\x02') {
    FUN_0100c256(param_1,iVar8);
    return;
  }
  return;
}

