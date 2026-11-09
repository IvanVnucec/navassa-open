
void dma_prep_step2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  
  puVar2 = (undefined1 *)((short)param_1 * 0xb + DAT_0102da68);
  puVar2[1] = 1;
  *puVar2 = 1;
  puVar2[2] = 0;
  puVar2[6] = 0xff;
  pcVar1 = DAT_0102da90;
  puVar2[7] = 10;
  if (*pcVar1 == '\0') {
    puVar2[3] = 3;
    puVar2[4] = 3;
    puVar2[5] = 3;
  }
  iVar3 = *(int *)(DAT_0102da58 + param_1 * 4);
  pin_update(iVar3 + 0x15c,3,3);
  pin_update(iVar3 + 0xab,0x30,0);
  FUN_0102d748(param_1,param_4);
  return;
}

