
int xPortGetFreeHeapSize(int param_1)

{
  int iVar1;
  
  iVar1 = heap_block_probe();
  return iVar1 - param_1;
}

