
void FUN_01003598(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)(DAT_01003a64 + (short)param_1 * 0xc);
  iVar3 = DAT_01003a68 + param_1 * 0x60;
  uVar1 = FUN_0100b8b4(iVar3,0,0);
  *puVar2 = uVar1;
  uVar1 = FUN_0100b8b4(iVar3 + 0x20,0,0);
  puVar2[1] = uVar1;
  uVar1 = FUN_0100b8b4(iVar3 + 0x40,0,0);
  puVar2[2] = uVar1;
  iVar3 = param_1 * 0x60 + DAT_01003a6c;
  uVar1 = FUN_0100b8b4(iVar3,0,0);
  puVar2[6] = uVar1;
  uVar1 = FUN_0100b8b4(iVar3 + 0x20,0,0);
  puVar2[7] = uVar1;
  uVar1 = FUN_0100b8b4(iVar3 + 0x40,0,0);
  puVar2[8] = uVar1;
  return;
}

