
void FUN_01039054(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = VectorFloatToUnsigned
                    (*(float *)(param_1 + 0x30) * *(float *)(DAT_01039254 + 0x10) * DAT_0103919c +
                     0.5,3);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}

