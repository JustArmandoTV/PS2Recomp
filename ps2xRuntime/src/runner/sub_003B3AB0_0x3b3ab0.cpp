#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B3AB0
// Address: 0x3b3ab0 - 0x3b3cf0
void sub_003B3AB0_0x3b3ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3AB0_0x3b3ab0");
#endif

    ctx->pc = 0x3b3ab0u;

    // 0x3b3ab0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x3b3ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b3ab4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3b3ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3b3ab8: 0x2cc10006  sltiu       $at, $a2, 0x6
    ctx->pc = 0x3b3ab8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3b3abc: 0x1020008a  beqz        $at, . + 4 + (0x8A << 2)
    ctx->pc = 0x3B3ABCu;
    {
        const bool branch_taken_0x3b3abc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3ABCu;
            // 0x3b3ac0: 0x8c678a08  lw          $a3, -0x75F8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3abc) {
            ctx->pc = 0x3B3CE8u;
            goto label_3b3ce8;
        }
    }
    ctx->pc = 0x3B3AC4u;
    // 0x3b3ac4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3b3ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3b3ac8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3b3ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3b3acc: 0x24a58090  addiu       $a1, $a1, -0x7F70
    ctx->pc = 0x3b3accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934672));
    // 0x3b3ad0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3b3ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3b3ad4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b3ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b3ad8: 0x600008  jr          $v1
    ctx->pc = 0x3B3AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B3AE0u: goto label_3b3ae0;
            case 0x3B3AE8u: goto label_3b3ae8;
            case 0x3B3B18u: goto label_3b3b18;
            case 0x3B3BCCu: goto label_3b3bcc;
            case 0x3B3C98u: goto label_3b3c98;
            case 0x3B3CE8u: goto label_3b3ce8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3B3AE0u;
label_3b3ae0:
    // 0x3b3ae0: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x3b3ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3b3ae4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3b3ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3b3ae8:
    // 0x3b3ae8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3b3ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b3aec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b3aecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3af0: 0x0  nop
    ctx->pc = 0x3b3af0u;
    // NOP
    // 0x3b3af4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3b3af4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b3af8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3B3AF8u;
    {
        const bool branch_taken_0x3b3af8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b3af8) {
            ctx->pc = 0x3B3AFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3AF8u;
            // 0x3b3afc: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B3B10u;
            goto label_3b3b10;
        }
    }
    ctx->pc = 0x3B3B00u;
    // 0x3b3b00: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x3b3b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b3b04: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3b3b04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b3b08: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x3B3B08u;
    {
        const bool branch_taken_0x3b3b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3B08u;
            // 0x3b3b0c: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3b08) {
            ctx->pc = 0x3B3CE8u;
            goto label_3b3ce8;
        }
    }
    ctx->pc = 0x3B3B10u;
label_3b3b10:
    // 0x3b3b10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b3b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b3b14: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3b3b14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3b3b18:
    // 0x3b3b18: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x3b3b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x3b3b1c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3b3b1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b3b20: 0x9083000f  lbu         $v1, 0xF($a0)
    ctx->pc = 0x3b3b20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
    // 0x3b3b24: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B3B24u;
    {
        const bool branch_taken_0x3b3b24 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3B3B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3B24u;
            // 0x3b3b28: 0xc4e30018  lwc1        $f3, 0x18($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3b24) {
            ctx->pc = 0x3B3B38u;
            goto label_3b3b38;
        }
    }
    ctx->pc = 0x3B3B2Cu;
    // 0x3b3b2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b3b2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3b30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B3B30u;
    {
        const bool branch_taken_0x3b3b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3B30u;
            // 0x3b3b34: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3b30) {
            ctx->pc = 0x3B3B54u;
            goto label_3b3b54;
        }
    }
    ctx->pc = 0x3B3B38u;
label_3b3b38:
    // 0x3b3b38: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x3b3b38u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3b3b3c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3b3b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3b3b40: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3b3b40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3b3b44: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3b3b44u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3b48: 0x0  nop
    ctx->pc = 0x3b3b48u;
    // NOP
    // 0x3b3b4c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3b3b4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3b3b50: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3b3b50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3b3b54:
    // 0x3b3b54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b3b54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3b58: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3b3b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3b3b5c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3b3b5cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3b3b60: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x3b3b60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3b3b64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b3b64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3b68: 0x0  nop
    ctx->pc = 0x3b3b68u;
    // NOP
    // 0x3b3b6c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b3b6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b3b70: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3B3B70u;
    {
        const bool branch_taken_0x3b3b70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b3b70) {
            ctx->pc = 0x3B3B74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3B70u;
            // 0x3b3b74: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B3B88u;
            goto label_3b3b88;
        }
    }
    ctx->pc = 0x3B3B78u;
    // 0x3b3b78: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b3b78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3b3b7c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3b3b7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3b3b80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B3B80u;
    {
        const bool branch_taken_0x3b3b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3B80u;
            // 0x3b3b84: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3b80) {
            ctx->pc = 0x3B3BA0u;
            goto label_3b3ba0;
        }
    }
    ctx->pc = 0x3B3B88u;
label_3b3b88:
    // 0x3b3b88: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3b3b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3b3b8c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b3b8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3b3b90: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3b3b90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3b3b94: 0x0  nop
    ctx->pc = 0x3b3b94u;
    // NOP
    // 0x3b3b98: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3b3b98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3b3b9c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3b3b9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3b3ba0:
    // 0x3b3ba0: 0xa085000f  sb          $a1, 0xF($a0)
    ctx->pc = 0x3b3ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 5));
    // 0x3b3ba4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3b3ba4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3b3ba8: 0x9083000f  lbu         $v1, 0xF($a0)
    ctx->pc = 0x3b3ba8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
    // 0x3b3bac: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x3b3bacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b3bb0: 0x1020004d  beqz        $at, . + 4 + (0x4D << 2)
    ctx->pc = 0x3B3BB0u;
    {
        const bool branch_taken_0x3b3bb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3bb0) {
            ctx->pc = 0x3B3CE8u;
            goto label_3b3ce8;
        }
    }
    ctx->pc = 0x3B3BB8u;
    // 0x3b3bb8: 0xa085000f  sb          $a1, 0xF($a0)
    ctx->pc = 0x3b3bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 5));
    // 0x3b3bbc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3b3bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b3bc0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b3bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b3bc4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x3B3BC4u;
    {
        const bool branch_taken_0x3b3bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3BC4u;
            // 0x3b3bc8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3bc4) {
            ctx->pc = 0x3B3CE8u;
            goto label_3b3ce8;
        }
    }
    ctx->pc = 0x3B3BCCu;
label_3b3bcc:
    // 0x3b3bcc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3b3bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3b3bd0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3b3bd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b3bd4: 0x8083000c  lb          $v1, 0xC($a0)
    ctx->pc = 0x3b3bd4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3b3bd8: 0xc4e30018  lwc1        $f3, 0x18($a3)
    ctx->pc = 0x3b3bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b3bdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b3bdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3be0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b3be0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b3be4: 0x0  nop
    ctx->pc = 0x3b3be4u;
    // NOP
    // 0x3b3be8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3b3be8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3b3bec: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3b3becu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3b3bf0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x3b3bf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3b3bf4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b3bf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3b3bf8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3b3bf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3b3bfc: 0x0  nop
    ctx->pc = 0x3b3bfcu;
    // NOP
    // 0x3b3c00: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x3b3c00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b3c04: 0x8085000d  lb          $a1, 0xD($a0)
    ctx->pc = 0x3b3c04u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
    // 0x3b3c08: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x3b3c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x3b3c0c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3b3c0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x3b3c10: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x3b3c10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b3c14: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B3C14u;
    {
        const bool branch_taken_0x3b3c14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3C14u;
            // 0x3b3c18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3c14) {
            ctx->pc = 0x3B3C24u;
            goto label_3b3c24;
        }
    }
    ctx->pc = 0x3B3C1Cu;
    // 0x3b3c1c: 0xa085000c  sb          $a1, 0xC($a0)
    ctx->pc = 0x3b3c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 5));
    // 0x3b3c20: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3b3c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3b3c24:
    // 0x3b3c24: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x3b3c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x3b3c28: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3b3c28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b3c2c: 0x8083000e  lb          $v1, 0xE($a0)
    ctx->pc = 0x3b3c2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x3b3c30: 0xc4e30018  lwc1        $f3, 0x18($a3)
    ctx->pc = 0x3b3c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b3c34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b3c34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3c38: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b3c38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b3c3c: 0x0  nop
    ctx->pc = 0x3b3c3cu;
    // NOP
    // 0x3b3c40: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3b3c40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3b3c44: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3b3c44u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3b3c48: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x3b3c48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3b3c4c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b3c4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3b3c50: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3b3c50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3b3c54: 0x0  nop
    ctx->pc = 0x3b3c54u;
    // NOP
    // 0x3b3c58: 0xa083000e  sb          $v1, 0xE($a0)
    ctx->pc = 0x3b3c58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b3c5c: 0x9085000f  lbu         $a1, 0xF($a0)
    ctx->pc = 0x3b3c5cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
    // 0x3b3c60: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x3b3c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x3b3c64: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3b3c64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x3b3c68: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x3b3c68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b3c6c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B3C6Cu;
    {
        const bool branch_taken_0x3b3c6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3c6c) {
            ctx->pc = 0x3B3C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3C6Cu;
            // 0x3b3c70: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B3C80u;
            goto label_3b3c80;
        }
    }
    ctx->pc = 0x3B3C74u;
    // 0x3b3c74: 0xa085000e  sb          $a1, 0xE($a0)
    ctx->pc = 0x3b3c74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 5));
    // 0x3b3c78: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3b3c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3b3c7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b3c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b3c80:
    // 0x3b3c80: 0x14c30019  bne         $a2, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3B3C80u;
    {
        const bool branch_taken_0x3b3c80 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b3c80) {
            ctx->pc = 0x3B3CE8u;
            goto label_3b3ce8;
        }
    }
    ctx->pc = 0x3B3C88u;
    // 0x3b3c88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3b3c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b3c8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b3c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b3c90: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3B3C90u;
    {
        const bool branch_taken_0x3b3c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3C90u;
            // 0x3b3c94: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3c90) {
            ctx->pc = 0x3B3CE8u;
            goto label_3b3ce8;
        }
    }
    ctx->pc = 0x3B3C98u;
label_3b3c98:
    // 0x3b3c98: 0xc4e10018  lwc1        $f1, 0x18($a3)
    ctx->pc = 0x3b3c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b3c9c: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x3b3c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x3b3ca0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b3ca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3ca4: 0x90850011  lbu         $a1, 0x11($a0)
    ctx->pc = 0x3b3ca4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x3b3ca8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3b3ca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3b3cac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b3cacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3b3cb0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3b3cb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3b3cb4: 0x0  nop
    ctx->pc = 0x3b3cb4u;
    // NOP
    // 0x3b3cb8: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x3b3cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3b3cbc: 0x286100ff  slti        $at, $v1, 0xFF
    ctx->pc = 0x3b3cbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x3b3cc0: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B3CC0u;
    {
        const bool branch_taken_0x3b3cc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3cc0) {
            ctx->pc = 0x3B3CC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3CC0u;
            // 0x3b3cc4: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B3CD8u;
            goto label_3b3cd8;
        }
    }
    ctx->pc = 0x3B3CC8u;
    // 0x3b3cc8: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x3b3cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3b3ccc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3b3cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3b3cd0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B3CD0u;
    {
        const bool branch_taken_0x3b3cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3CD0u;
            // 0x3b3cd4: 0xa0830011  sb          $v1, 0x11($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3cd0) {
            ctx->pc = 0x3B3CE8u;
            goto label_3b3ce8;
        }
    }
    ctx->pc = 0x3B3CD8u;
label_3b3cd8:
    // 0x3b3cd8: 0xa0830011  sb          $v1, 0x11($a0)
    ctx->pc = 0x3b3cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b3cdc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3b3cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b3ce0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b3ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b3ce4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3b3ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3b3ce8:
    // 0x3b3ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B3CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B3CF0u;
}
