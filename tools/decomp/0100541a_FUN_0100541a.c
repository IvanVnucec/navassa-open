
void FUN_0100541a(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  cVar1 = *(char *)(DAT_01005510 + 0x77d);
  bVar3 = cVar1 != '\x01';
  if (bVar3) {
    cVar1 = *(char *)(DAT_0100550c + 0x20);
  }
  if (!bVar3 || cVar1 == '\x01') {
    puVar2 = (undefined4 *)(DAT_01005520 + param_1 * 4);
    *puVar2 = puVar2[2];
    puVar2[2] = puVar2[4];
  }
  return;
}

