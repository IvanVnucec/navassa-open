
void FUN_01029d64(char *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0102a820;
  *DAT_0102a820 = param_1 + 4;
  *(bool *)(puVar1 + 2) = *param_1 != '\x05';
  return;
}

