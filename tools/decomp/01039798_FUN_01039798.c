
longlong FUN_01039798(void)

{
  undefined1 *puVar1;
  uint uVar2;
  uint local_20;
  uint uStack_1c;
  
  puVar1 = DAT_0103a204;
  local_20 = *DAT_0103a200;
  uStack_1c = DAT_0103a200[1];
  *DAT_0103a204 = 0x10;
  puVar1[1] = 10;
  puVar1[2] = 4;
  puVar1[0x18] = 1;
  *(undefined4 *)(puVar1 + 0x10) = 0x1f1f1f1f;
  *(undefined4 *)(puVar1 + 0x14) = 0x1f1f1f1f;
  FUN_0101204c(puVar1 + 3,&local_20,7);
  FUN_0103d754(0);
  for (uVar2 = 0; uVar2 < 2; uVar2 = uVar2 + 1) {
    *(int *)(DAT_0103a208 + uVar2 * 4) = 1 << ((byte)puVar1[2] + 10 & 0xff);
  }
  *DAT_0103a20c = 0;
  return (ulonglong)local_20 << 0x20;
}

