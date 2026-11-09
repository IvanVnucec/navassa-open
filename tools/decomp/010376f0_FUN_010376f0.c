
void FUN_010376f0(void)

{
  ushort *puVar1;
  
  puVar1 = DAT_01037898;
  DAT_01037898[1] = DAT_01037898[1] | 0x800;
  puVar1[2] = puVar1[2] | 0x800;
  puVar1[3] = puVar1[3] | 0x800;
  *puVar1 = *puVar1 | 0x800;
  return;
}

