#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029A9A0
// Address: 0x29a9a0 - 0x29ab30
void sub_0029A9A0_0x29a9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A9A0_0x29a9a0");
#endif

    switch (ctx->pc) {
        case 0x29a9f8u: goto label_29a9f8;
        default: break;
    }

    ctx->pc = 0x29a9a0u;

    // 0x29a9a0: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x29a9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x29a9a4: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x29a9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
    // 0x29a9a8: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x29a9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x29a9ac: 0x3463ffee  ori         $v1, $v1, 0xFFEE
    ctx->pc = 0x29a9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65518);
    // 0x29a9b0: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x29a9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x29a9b4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x29a9b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29a9b8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x29a9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x29a9bc: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x29a9bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x29a9c0: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x29a9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x29a9c4: 0x46006207  neg.s       $f8, $f12
    ctx->pc = 0x29a9c4u;
    ctx->f[8] = FPU_NEG_S(ctx->f[12]);
    // 0x29a9c8: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x29a9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x29a9cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29a9ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a9d0: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x29a9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x29a9d4: 0x460062c6  mov.s       $f11, $f12
    ctx->pc = 0x29a9d4u;
    ctx->f[11] = FPU_MOV_S(ctx->f[12]);
    // 0x29a9d8: 0x46006286  mov.s       $f10, $f12
    ctx->pc = 0x29a9d8u;
    ctx->f[10] = FPU_MOV_S(ctx->f[12]);
    // 0x29a9dc: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x29a9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x29a9e0: 0x46006246  mov.s       $f9, $f12
    ctx->pc = 0x29a9e0u;
    ctx->f[9] = FPU_MOV_S(ctx->f[12]);
    // 0x29a9e4: 0x460041c6  mov.s       $f7, $f8
    ctx->pc = 0x29a9e4u;
    ctx->f[7] = FPU_MOV_S(ctx->f[8]);
    // 0x29a9e8: 0x46004186  mov.s       $f6, $f8
    ctx->pc = 0x29a9e8u;
    ctx->f[6] = FPU_MOV_S(ctx->f[8]);
    // 0x29a9ec: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x29A9ECu;
    {
        const bool branch_taken_0x29a9ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A9ECu;
            // 0x29a9f0: 0x46004146  mov.s       $f5, $f8 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a9ec) {
            ctx->pc = 0x29AAC0u;
            goto label_29aac0;
        }
    }
    ctx->pc = 0x29A9F4u;
    // 0x29a9f4: 0x0  nop
    ctx->pc = 0x29a9f4u;
    // NOP
label_29a9f8:
    // 0x29a9f8: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x29a9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29a9fc: 0x460c1834  c.lt.s      $f3, $f12
    ctx->pc = 0x29a9fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aa00: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x29AA00u;
    {
        const bool branch_taken_0x29aa00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aa00) {
            ctx->pc = 0x29AA0Cu;
            goto label_29aa0c;
        }
    }
    ctx->pc = 0x29AA08u;
    // 0x29aa08: 0x46001b06  mov.s       $f12, $f3
    ctx->pc = 0x29aa08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[3]);
label_29aa0c:
    // 0x29aa0c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x29aa0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29aa10: 0x460b1034  c.lt.s      $f2, $f11
    ctx->pc = 0x29aa10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aa14: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x29AA14u;
    {
        const bool branch_taken_0x29aa14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aa14) {
            ctx->pc = 0x29AA20u;
            goto label_29aa20;
        }
    }
    ctx->pc = 0x29AA1Cu;
    // 0x29aa1c: 0x460012c6  mov.s       $f11, $f2
    ctx->pc = 0x29aa1cu;
    ctx->f[11] = FPU_MOV_S(ctx->f[2]);
label_29aa20:
    // 0x29aa20: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x29aa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29aa24: 0x460a0834  c.lt.s      $f1, $f10
    ctx->pc = 0x29aa24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aa28: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x29AA28u;
    {
        const bool branch_taken_0x29aa28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aa28) {
            ctx->pc = 0x29AA34u;
            goto label_29aa34;
        }
    }
    ctx->pc = 0x29AA30u;
    // 0x29aa30: 0x46000a86  mov.s       $f10, $f1
    ctx->pc = 0x29aa30u;
    ctx->f[10] = FPU_MOV_S(ctx->f[1]);
label_29aa34:
    // 0x29aa34: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x29aa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29aa38: 0x46090034  c.lt.s      $f0, $f9
    ctx->pc = 0x29aa38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aa3c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x29AA3Cu;
    {
        const bool branch_taken_0x29aa3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aa3c) {
            ctx->pc = 0x29AA48u;
            goto label_29aa48;
        }
    }
    ctx->pc = 0x29AA44u;
    // 0x29aa44: 0x46000246  mov.s       $f9, $f0
    ctx->pc = 0x29aa44u;
    ctx->f[9] = FPU_MOV_S(ctx->f[0]);
label_29aa48:
    // 0x29aa48: 0x46081836  c.le.s      $f3, $f8
    ctx->pc = 0x29aa48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aa4c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x29AA4Cu;
    {
        const bool branch_taken_0x29aa4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aa4c) {
            ctx->pc = 0x29AA5Cu;
            goto label_29aa5c;
        }
    }
    ctx->pc = 0x29AA54u;
    // 0x29aa54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29AA54u;
    {
        const bool branch_taken_0x29aa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29aa54) {
            ctx->pc = 0x29AA60u;
            goto label_29aa60;
        }
    }
    ctx->pc = 0x29AA5Cu;
label_29aa5c:
    // 0x29aa5c: 0x460040c6  mov.s       $f3, $f8
    ctx->pc = 0x29aa5cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[8]);
label_29aa60:
    // 0x29aa60: 0x46071036  c.le.s      $f2, $f7
    ctx->pc = 0x29aa60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aa64: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x29AA64u;
    {
        const bool branch_taken_0x29aa64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29AA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AA64u;
            // 0x29aa68: 0x46001a06  mov.s       $f8, $f3 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa64) {
            ctx->pc = 0x29AA74u;
            goto label_29aa74;
        }
    }
    ctx->pc = 0x29AA6Cu;
    // 0x29aa6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29AA6Cu;
    {
        const bool branch_taken_0x29aa6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29aa6c) {
            ctx->pc = 0x29AA78u;
            goto label_29aa78;
        }
    }
    ctx->pc = 0x29AA74u;
label_29aa74:
    // 0x29aa74: 0x46003886  mov.s       $f2, $f7
    ctx->pc = 0x29aa74u;
    ctx->f[2] = FPU_MOV_S(ctx->f[7]);
label_29aa78:
    // 0x29aa78: 0x46060836  c.le.s      $f1, $f6
    ctx->pc = 0x29aa78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aa7c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x29AA7Cu;
    {
        const bool branch_taken_0x29aa7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29AA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AA7Cu;
            // 0x29aa80: 0x460011c6  mov.s       $f7, $f2 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa7c) {
            ctx->pc = 0x29AA8Cu;
            goto label_29aa8c;
        }
    }
    ctx->pc = 0x29AA84u;
    // 0x29aa84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29AA84u;
    {
        const bool branch_taken_0x29aa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29aa84) {
            ctx->pc = 0x29AA90u;
            goto label_29aa90;
        }
    }
    ctx->pc = 0x29AA8Cu;
label_29aa8c:
    // 0x29aa8c: 0x46003046  mov.s       $f1, $f6
    ctx->pc = 0x29aa8cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[6]);
label_29aa90:
    // 0x29aa90: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x29aa90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aa94: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x29AA94u;
    {
        const bool branch_taken_0x29aa94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29AA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AA94u;
            // 0x29aa98: 0x46000986  mov.s       $f6, $f1 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa94) {
            ctx->pc = 0x29AAA4u;
            goto label_29aaa4;
        }
    }
    ctx->pc = 0x29AA9Cu;
    // 0x29aa9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29AA9Cu;
    {
        const bool branch_taken_0x29aa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AA9Cu;
            // 0x29aaa0: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa9c) {
            ctx->pc = 0x29AAACu;
            goto label_29aaac;
        }
    }
    ctx->pc = 0x29AAA4u;
label_29aaa4:
    // 0x29aaa4: 0x46002806  mov.s       $f0, $f5
    ctx->pc = 0x29aaa4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[5]);
    // 0x29aaa8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x29aaa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_29aaac:
    // 0x29aaac: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x29aaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x29aab0: 0x105182a  slt         $v1, $t0, $a1
    ctx->pc = 0x29aab0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x29aab4: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x29AAB4u;
    {
        const bool branch_taken_0x29aab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AAB4u;
            // 0x29aab8: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aab4) {
            ctx->pc = 0x29A9F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29a9f8;
        }
    }
    ctx->pc = 0x29AABCu;
    // 0x29aabc: 0x0  nop
    ctx->pc = 0x29aabcu;
    // NOP
label_29aac0:
    // 0x29aac0: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x29AAC0u;
    {
        const bool branch_taken_0x29aac0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AAC0u;
            // 0x29aac4: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aac0) {
            ctx->pc = 0x29AB20u;
            goto label_29ab20;
        }
    }
    ctx->pc = 0x29AAC8u;
    // 0x29aac8: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x29aac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x29aacc: 0x460c40c1  sub.s       $f3, $f8, $f12
    ctx->pc = 0x29aaccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[8], ctx->f[12]);
    // 0x29aad0: 0x460c201a  mula.s      $f4, $f12
    ctx->pc = 0x29aad0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[12]);
    // 0x29aad4: 0x4608201c  madd.s      $f0, $f4, $f8
    ctx->pc = 0x29aad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[8]));
    // 0x29aad8: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x29aad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x29aadc: 0x460b201a  mula.s      $f4, $f11
    ctx->pc = 0x29aadcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[11]);
    // 0x29aae0: 0x4607201c  madd.s      $f0, $f4, $f7
    ctx->pc = 0x29aae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[7]));
    // 0x29aae4: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x29aae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x29aae8: 0x460a201a  mula.s      $f4, $f10
    ctx->pc = 0x29aae8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[10]);
    // 0x29aaec: 0x4606201c  madd.s      $f0, $f4, $f6
    ctx->pc = 0x29aaecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x29aaf0: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x29aaf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x29aaf4: 0x4609201a  mula.s      $f4, $f9
    ctx->pc = 0x29aaf4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x29aaf8: 0x4605201c  madd.s      $f0, $f4, $f5
    ctx->pc = 0x29aaf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x29aafc: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x29aafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x29ab00: 0x460b3881  sub.s       $f2, $f7, $f11
    ctx->pc = 0x29ab00u;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[11]);
    // 0x29ab04: 0xe4e30000  swc1        $f3, 0x0($a3)
    ctx->pc = 0x29ab04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x29ab08: 0x460a3041  sub.s       $f1, $f6, $f10
    ctx->pc = 0x29ab08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[10]);
    // 0x29ab0c: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x29ab0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x29ab10: 0x46092801  sub.s       $f0, $f5, $f9
    ctx->pc = 0x29ab10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[9]);
    // 0x29ab14: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x29ab14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x29ab18: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x29ab18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x29ab1c: 0x0  nop
    ctx->pc = 0x29ab1cu;
    // NOP
label_29ab20:
    // 0x29ab20: 0x3e00008  jr          $ra
    ctx->pc = 0x29AB20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29AB28u;
    // 0x29ab28: 0x0  nop
    ctx->pc = 0x29ab28u;
    // NOP
    // 0x29ab2c: 0x0  nop
    ctx->pc = 0x29ab2cu;
    // NOP
}
