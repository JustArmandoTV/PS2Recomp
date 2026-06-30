#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026FC50
// Address: 0x26fc50 - 0x2701d0
void sub_0026FC50_0x26fc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FC50_0x26fc50");
#endif

    switch (ctx->pc) {
        case 0x26fca8u: goto label_26fca8;
        case 0x26fcd8u: goto label_26fcd8;
        case 0x26fcecu: goto label_26fcec;
        case 0x26fcf8u: goto label_26fcf8;
        case 0x26fd20u: goto label_26fd20;
        case 0x26fd2cu: goto label_26fd2c;
        case 0x26fd38u: goto label_26fd38;
        case 0x26fd44u: goto label_26fd44;
        case 0x26fd4cu: goto label_26fd4c;
        case 0x26fd54u: goto label_26fd54;
        case 0x26fd5cu: goto label_26fd5c;
        case 0x26fd68u: goto label_26fd68;
        case 0x26fd74u: goto label_26fd74;
        case 0x26fd80u: goto label_26fd80;
        case 0x26fd8cu: goto label_26fd8c;
        case 0x26fd94u: goto label_26fd94;
        case 0x26fd9cu: goto label_26fd9c;
        case 0x26fda4u: goto label_26fda4;
        case 0x26fee4u: goto label_26fee4;
        case 0x26fef4u: goto label_26fef4;
        case 0x26ff04u: goto label_26ff04;
        case 0x26ff10u: goto label_26ff10;
        case 0x26ff1cu: goto label_26ff1c;
        case 0x26ff28u: goto label_26ff28;
        case 0x26ff34u: goto label_26ff34;
        case 0x26ff50u: goto label_26ff50;
        case 0x26ff5cu: goto label_26ff5c;
        case 0x26ff6cu: goto label_26ff6c;
        case 0x26ff78u: goto label_26ff78;
        case 0x26fff4u: goto label_26fff4;
        case 0x270004u: goto label_270004;
        case 0x27001cu: goto label_27001c;
        case 0x270028u: goto label_270028;
        case 0x270034u: goto label_270034;
        case 0x270040u: goto label_270040;
        case 0x270054u: goto label_270054;
        case 0x270064u: goto label_270064;
        case 0x270070u: goto label_270070;
        case 0x270078u: goto label_270078;
        case 0x270084u: goto label_270084;
        case 0x27008cu: goto label_27008c;
        case 0x270168u: goto label_270168;
        default: break;
    }

    ctx->pc = 0x26fc50u;

    // 0x26fc50: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x26fc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x26fc54: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x26fc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x26fc58: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x26fc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x26fc5c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x26fc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x26fc60: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x26fc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x26fc64: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x26fc64u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fc68: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x26fc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x26fc6c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x26fc6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fc70: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x26fc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x26fc74: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x26fc74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fc78: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x26fc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x26fc7c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x26fc7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fc80: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x26fc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x26fc84: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26fc84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fc88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x26fc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x26fc8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x26fc8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fc90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26fc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26fc94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26fc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fc98: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x26fc98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26fc9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x26fc9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fca0: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x26FCA0u;
    {
        const bool branch_taken_0x26fca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FCA0u;
            // 0x26fca4: 0xafa700bc  sw          $a3, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fca0) {
            ctx->pc = 0x2700F8u;
            goto label_2700f8;
        }
    }
    ctx->pc = 0x26FCA8u;
label_26fca8:
    // 0x26fca8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x26fca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fcac: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x26fcacu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26fcb0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x26FCB0u;
    {
        const bool branch_taken_0x26fcb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26fcb0) {
            ctx->pc = 0x26FCD0u;
            goto label_26fcd0;
        }
    }
    ctx->pc = 0x26FCB8u;
    // 0x26fcb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26fcb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26fcbc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26fcbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fcc0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x26FCC0u;
    {
        const bool branch_taken_0x26fcc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26FCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FCC0u;
            // 0x26fcc4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fcc0) {
            ctx->pc = 0x26FCD0u;
            goto label_26fcd0;
        }
    }
    ctx->pc = 0x26FCC8u;
    // 0x26fcc8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x26fcc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x26fccc: 0x0  nop
    ctx->pc = 0x26fcccu;
    // NOP
label_26fcd0:
    // 0x26fcd0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x26fcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x26fcd4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26fcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_26fcd8:
    // 0x26fcd8: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x26fcd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26fcdc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x26FCDCu;
    {
        const bool branch_taken_0x26fcdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26fcdc) {
            ctx->pc = 0x26FCA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26fca8;
        }
    }
    ctx->pc = 0x26FCE4u;
    // 0x26fce4: 0xc049514  jal         func_125450
    ctx->pc = 0x26FCE4u;
    SET_GPR_U32(ctx, 31, 0x26FCECu);
    ctx->pc = 0x26FCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FCE4u;
            // 0x26fce8: 0xc60c0064  lwc1        $f12, 0x64($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FCECu; }
        if (ctx->pc != 0x26FCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FCECu; }
        if (ctx->pc != 0x26FCECu) { return; }
    }
    ctx->pc = 0x26FCECu;
label_26fcec:
    // 0x26fcec: 0xc60c0068  lwc1        $f12, 0x68($s0)
    ctx->pc = 0x26fcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26fcf0: 0xc049514  jal         func_125450
    ctx->pc = 0x26FCF0u;
    SET_GPR_U32(ctx, 31, 0x26FCF8u);
    ctx->pc = 0x26FCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FCF0u;
            // 0x26fcf4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FCF8u; }
        if (ctx->pc != 0x26FCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FCF8u; }
        if (ctx->pc != 0x26FCF8u) { return; }
    }
    ctx->pc = 0x26FCF8u;
label_26fcf8:
    // 0x26fcf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26fcf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fcfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fd00: 0x1682004f  bne         $s4, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x26FD00u;
    {
        const bool branch_taken_0x26fd00 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x26fd00) {
            ctx->pc = 0x26FE40u;
            goto label_26fe40;
        }
    }
    ctx->pc = 0x26FD08u;
    // 0x26fd08: 0x129880  sll         $s3, $s2, 2
    ctx->pc = 0x26fd08u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x26fd0c: 0x2761021  addu        $v0, $s3, $s6
    ctx->pc = 0x26fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x26fd10: 0x26d2003c  addiu       $s2, $s6, 0x3C
    ctx->pc = 0x26fd10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 60));
    // 0x26fd14: 0xc44c0030  lwc1        $f12, 0x30($v0)
    ctx->pc = 0x26fd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26fd18: 0xc049514  jal         func_125450
    ctx->pc = 0x26FD18u;
    SET_GPR_U32(ctx, 31, 0x26FD20u);
    ctx->pc = 0x26FD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FD18u;
            // 0x26fd1c: 0x24540030  addiu       $s4, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD20u; }
        if (ctx->pc != 0x26FD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD20u; }
        if (ctx->pc != 0x26FD20u) { return; }
    }
    ctx->pc = 0x26FD20u;
label_26fd20:
    // 0x26fd20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26fd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fd24: 0xc049622  jal         func_125888
    ctx->pc = 0x26FD24u;
    SET_GPR_U32(ctx, 31, 0x26FD2Cu);
    ctx->pc = 0x26FD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FD24u;
            // 0x26fd28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD2Cu; }
        if (ctx->pc != 0x26FD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD2Cu; }
        if (ctx->pc != 0x26FD2Cu) { return; }
    }
    ctx->pc = 0x26FD2Cu;
label_26fd2c:
    // 0x26fd2c: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x26fd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26fd30: 0xc049514  jal         func_125450
    ctx->pc = 0x26FD30u;
    SET_GPR_U32(ctx, 31, 0x26FD38u);
    ctx->pc = 0x26FD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FD30u;
            // 0x26fd34: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD38u; }
        if (ctx->pc != 0x26FD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD38u; }
        if (ctx->pc != 0x26FD38u) { return; }
    }
    ctx->pc = 0x26FD38u;
label_26fd38:
    // 0x26fd38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26fd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fd3c: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x26FD3Cu;
    SET_GPR_U32(ctx, 31, 0x26FD44u);
    ctx->pc = 0x26FD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FD3Cu;
            // 0x26fd40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD44u; }
        if (ctx->pc != 0x26FD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD44u; }
        if (ctx->pc != 0x26FD44u) { return; }
    }
    ctx->pc = 0x26FD44u;
label_26fd44:
    // 0x26fd44: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x26FD44u;
    SET_GPR_U32(ctx, 31, 0x26FD4Cu);
    ctx->pc = 0x26FD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FD44u;
            // 0x26fd48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD4Cu; }
        if (ctx->pc != 0x26FD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD4Cu; }
        if (ctx->pc != 0x26FD4Cu) { return; }
    }
    ctx->pc = 0x26FD4Cu;
label_26fd4c:
    // 0x26fd4c: 0xc0a3234  jal         func_28C8D0
    ctx->pc = 0x26FD4Cu;
    SET_GPR_U32(ctx, 31, 0x26FD54u);
    ctx->pc = 0x26FD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FD4Cu;
            // 0x26fd50: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C8D0u;
    if (runtime->hasFunction(0x28C8D0u)) {
        auto targetFn = runtime->lookupFunction(0x28C8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD54u; }
        if (ctx->pc != 0x26FD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C8D0_0x28c8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD54u; }
        if (ctx->pc != 0x26FD54u) { return; }
    }
    ctx->pc = 0x26FD54u;
label_26fd54:
    // 0x26fd54: 0xc0a32a0  jal         func_28CA80
    ctx->pc = 0x26FD54u;
    SET_GPR_U32(ctx, 31, 0x26FD5Cu);
    ctx->pc = 0x26FD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FD54u;
            // 0x26fd58: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CA80u;
    if (runtime->hasFunction(0x28CA80u)) {
        auto targetFn = runtime->lookupFunction(0x28CA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD5Cu; }
        if (ctx->pc != 0x26FD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CA80_0x28ca80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD5Cu; }
        if (ctx->pc != 0x26FD5Cu) { return; }
    }
    ctx->pc = 0x26FD5Cu;
label_26fd5c:
    // 0x26fd5c: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x26fd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26fd60: 0xc049514  jal         func_125450
    ctx->pc = 0x26FD60u;
    SET_GPR_U32(ctx, 31, 0x26FD68u);
    ctx->pc = 0x26FD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FD60u;
            // 0x26fd64: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD68u; }
        if (ctx->pc != 0x26FD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD68u; }
        if (ctx->pc != 0x26FD68u) { return; }
    }
    ctx->pc = 0x26FD68u;
label_26fd68:
    // 0x26fd68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26fd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fd6c: 0xc049622  jal         func_125888
    ctx->pc = 0x26FD6Cu;
    SET_GPR_U32(ctx, 31, 0x26FD74u);
    ctx->pc = 0x26FD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FD6Cu;
            // 0x26fd70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD74u; }
        if (ctx->pc != 0x26FD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD74u; }
        if (ctx->pc != 0x26FD74u) { return; }
    }
    ctx->pc = 0x26FD74u;
label_26fd74:
    // 0x26fd74: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x26fd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26fd78: 0xc049514  jal         func_125450
    ctx->pc = 0x26FD78u;
    SET_GPR_U32(ctx, 31, 0x26FD80u);
    ctx->pc = 0x26FD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FD78u;
            // 0x26fd7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD80u; }
        if (ctx->pc != 0x26FD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD80u; }
        if (ctx->pc != 0x26FD80u) { return; }
    }
    ctx->pc = 0x26FD80u;
label_26fd80:
    // 0x26fd80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26fd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fd84: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x26FD84u;
    SET_GPR_U32(ctx, 31, 0x26FD8Cu);
    ctx->pc = 0x26FD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FD84u;
            // 0x26fd88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD8Cu; }
        if (ctx->pc != 0x26FD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD8Cu; }
        if (ctx->pc != 0x26FD8Cu) { return; }
    }
    ctx->pc = 0x26FD8Cu;
label_26fd8c:
    // 0x26fd8c: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x26FD8Cu;
    SET_GPR_U32(ctx, 31, 0x26FD94u);
    ctx->pc = 0x26FD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FD8Cu;
            // 0x26fd90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD94u; }
        if (ctx->pc != 0x26FD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD94u; }
        if (ctx->pc != 0x26FD94u) { return; }
    }
    ctx->pc = 0x26FD94u;
label_26fd94:
    // 0x26fd94: 0xc0a3234  jal         func_28C8D0
    ctx->pc = 0x26FD94u;
    SET_GPR_U32(ctx, 31, 0x26FD9Cu);
    ctx->pc = 0x26FD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FD94u;
            // 0x26fd98: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C8D0u;
    if (runtime->hasFunction(0x28C8D0u)) {
        auto targetFn = runtime->lookupFunction(0x28C8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD9Cu; }
        if (ctx->pc != 0x26FD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C8D0_0x28c8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD9Cu; }
        if (ctx->pc != 0x26FD9Cu) { return; }
    }
    ctx->pc = 0x26FD9Cu;
label_26fd9c:
    // 0x26fd9c: 0xc0a32a0  jal         func_28CA80
    ctx->pc = 0x26FD9Cu;
    SET_GPR_U32(ctx, 31, 0x26FDA4u);
    ctx->pc = 0x26FDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FD9Cu;
            // 0x26fda0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CA80u;
    if (runtime->hasFunction(0x28CA80u)) {
        auto targetFn = runtime->lookupFunction(0x28CA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FDA4u; }
        if (ctx->pc != 0x26FDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CA80_0x28ca80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FDA4u; }
        if (ctx->pc != 0x26FDA4u) { return; }
    }
    ctx->pc = 0x26FDA4u;
label_26fda4:
    // 0x26fda4: 0x2751821  addu        $v1, $s3, $s5
    ctx->pc = 0x26fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x26fda8: 0x8ea50024  lw          $a1, 0x24($s5)
    ctx->pc = 0x26fda8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x26fdac: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x26fdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x26fdb0: 0x2232023  subu        $a0, $s1, $v1
    ctx->pc = 0x26fdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x26fdb4: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x26fdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26fdb8: 0xa43007  srav        $a2, $a0, $a1
    ctx->pc = 0x26fdb8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x26fdbc: 0xa31807  srav        $v1, $v1, $a1
    ctx->pc = 0x26fdbcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x26fdc0: 0x18c00003  blez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FDC0u;
    {
        const bool branch_taken_0x26fdc0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x26FDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FDC0u;
            // 0x26fdc4: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fdc0) {
            ctx->pc = 0x26FDD0u;
            goto label_26fdd0;
        }
    }
    ctx->pc = 0x26FDC8u;
    // 0x26fdc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26FDC8u;
    {
        const bool branch_taken_0x26fdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FDC8u;
            // 0x26fdcc: 0x28c100ff  slti        $at, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)255) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fdc8) {
            ctx->pc = 0x26FDD8u;
            goto label_26fdd8;
        }
    }
    ctx->pc = 0x26FDD0u;
label_26fdd0:
    // 0x26fdd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26fdd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fdd4: 0x28c100ff  slti        $at, $a2, 0xFF
    ctx->pc = 0x26fdd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)255) ? 1 : 0);
label_26fdd8:
    // 0x26fdd8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FDD8u;
    {
        const bool branch_taken_0x26fdd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fdd8) {
            ctx->pc = 0x26FDE8u;
            goto label_26fde8;
        }
    }
    ctx->pc = 0x26FDE0u;
    // 0x26fde0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26FDE0u;
    {
        const bool branch_taken_0x26fde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fde0) {
            ctx->pc = 0x26FDECu;
            goto label_26fdec;
        }
    }
    ctx->pc = 0x26FDE8u;
label_26fde8:
    // 0x26fde8: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x26fde8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_26fdec:
    // 0x26fdec: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FDECu;
    {
        const bool branch_taken_0x26fdec = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x26fdec) {
            ctx->pc = 0x26FDFCu;
            goto label_26fdfc;
        }
    }
    ctx->pc = 0x26FDF4u;
    // 0x26fdf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26FDF4u;
    {
        const bool branch_taken_0x26fdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FDF4u;
            // 0x26fdf8: 0x288100ff  slti        $at, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)255) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fdf4) {
            ctx->pc = 0x26FE04u;
            goto label_26fe04;
        }
    }
    ctx->pc = 0x26FDFCu;
label_26fdfc:
    // 0x26fdfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26fdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fe00: 0x288100ff  slti        $at, $a0, 0xFF
    ctx->pc = 0x26fe00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)255) ? 1 : 0);
label_26fe04:
    // 0x26fe04: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FE04u;
    {
        const bool branch_taken_0x26fe04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fe04) {
            ctx->pc = 0x26FE14u;
            goto label_26fe14;
        }
    }
    ctx->pc = 0x26FE0Cu;
    // 0x26fe0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26FE0Cu;
    {
        const bool branch_taken_0x26fe0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FE0Cu;
            // 0x26fe10: 0xaee60000  sw          $a2, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe0c) {
            ctx->pc = 0x26FE1Cu;
            goto label_26fe1c;
        }
    }
    ctx->pc = 0x26FE14u;
label_26fe14:
    // 0x26fe14: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x26fe14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x26fe18: 0xaee60000  sw          $a2, 0x0($s7)
    ctx->pc = 0x26fe18u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
label_26fe1c:
    // 0x26fe1c: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x26fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x26fe20: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x26fe20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x26fe24: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x26fe24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x26fe28: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FE28u;
    {
        const bool branch_taken_0x26fe28 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x26fe28) {
            ctx->pc = 0x26FE38u;
            goto label_26fe38;
        }
    }
    ctx->pc = 0x26FE30u;
    // 0x26fe30: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x26fe30u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x26fe34: 0x0  nop
    ctx->pc = 0x26fe34u;
    // NOP
label_26fe38:
    // 0x26fe38: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x26FE38u;
    {
        const bool branch_taken_0x26fe38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fe38) {
            ctx->pc = 0x270108u;
            goto label_270108;
        }
    }
    ctx->pc = 0x26FE40u;
label_26fe40:
    // 0x26fe40: 0x7ac30030  lq          $v1, 0x30($s6)
    ctx->pc = 0x26fe40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x26fe44: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x26fe44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x26fe48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26fe4c: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x26fe4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x26fe50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26fe50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26fe54: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x26fe54u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x26fe58: 0xc6d4003c  lwc1        $f20, 0x3C($s6)
    ctx->pc = 0x26fe58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26fe5c: 0xc6a50028  lwc1        $f5, 0x28($s5)
    ctx->pc = 0x26fe5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x26fe60: 0xc7a400c0  lwc1        $f4, 0xC0($sp)
    ctx->pc = 0x26fe60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26fe64: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x26fe64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fe68: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x26fe68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26fe6c: 0xc7a300c8  lwc1        $f3, 0xC8($sp)
    ctx->pc = 0x26fe6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26fe70: 0x46143183  div.s       $f6, $f6, $f20
    ctx->pc = 0x26fe70u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[6] = ctx->f[6] / ctx->f[20];
    // 0x26fe74: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x26fe74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x26fe78: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x26fe78u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x26fe7c: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x26fe7cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x26fe80: 0xe7a400c0  swc1        $f4, 0xC0($sp)
    ctx->pc = 0x26fe80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x26fe84: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x26fe84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x26fe88: 0xc6a5002c  lwc1        $f5, 0x2C($s5)
    ctx->pc = 0x26fe88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x26fe8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26fe8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26fe90: 0xc7a400c0  lwc1        $f4, 0xC0($sp)
    ctx->pc = 0x26fe90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26fe94: 0x46802860  cvt.s.w     $f1, $f5
    ctx->pc = 0x26fe94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x26fe98: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x26fe98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x26fe9c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x26fe9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x26fea0: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x26fea0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x26fea4: 0xc6a10030  lwc1        $f1, 0x30($s5)
    ctx->pc = 0x26fea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fea8: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x26fea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26feac: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x26feacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x26feb0: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x26feb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x26feb4: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x26feb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x26feb8: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x26feb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x26febc: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x26febcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x26fec0: 0xc7c50000  lwc1        $f5, 0x0($fp)
    ctx->pc = 0x26fec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x26fec4: 0xc7c30004  lwc1        $f3, 0x4($fp)
    ctx->pc = 0x26fec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26fec8: 0xc7c10008  lwc1        $f1, 0x8($fp)
    ctx->pc = 0x26fec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fecc: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x26feccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fed0: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x26fed0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x26fed4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x26fed4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x26fed8: 0x46022018  adda.s      $f4, $f2
    ctx->pc = 0x26fed8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x26fedc: 0xc049514  jal         func_125450
    ctx->pc = 0x26FEDCu;
    SET_GPR_U32(ctx, 31, 0x26FEE4u);
    ctx->pc = 0x26FEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FEDCu;
            // 0x26fee0: 0x46000b1c  madd.s      $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FEE4u; }
        if (ctx->pc != 0x26FEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FEE4u; }
        if (ctx->pc != 0x26FEE4u) { return; }
    }
    ctx->pc = 0x26FEE4u;
label_26fee4:
    // 0x26fee4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26fee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fee8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26fee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26feec: 0xc049622  jal         func_125888
    ctx->pc = 0x26FEECu;
    SET_GPR_U32(ctx, 31, 0x26FEF4u);
    ctx->pc = 0x26FEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FEECu;
            // 0x26fef0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FEF4u; }
        if (ctx->pc != 0x26FEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FEF4u; }
        if (ctx->pc != 0x26FEF4u) { return; }
    }
    ctx->pc = 0x26FEF4u;
label_26fef4:
    // 0x26fef4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26fef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26fef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fefc: 0xc049622  jal         func_125888
    ctx->pc = 0x26FEFCu;
    SET_GPR_U32(ctx, 31, 0x26FF04u);
    ctx->pc = 0x26FF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FEFCu;
            // 0x26ff00: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF04u; }
        if (ctx->pc != 0x26FF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF04u; }
        if (ctx->pc != 0x26FF04u) { return; }
    }
    ctx->pc = 0x26FF04u;
label_26ff04:
    // 0x26ff04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26ff04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff08: 0xc049514  jal         func_125450
    ctx->pc = 0x26FF08u;
    SET_GPR_U32(ctx, 31, 0x26FF10u);
    ctx->pc = 0x26FF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FF08u;
            // 0x26ff0c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF10u; }
        if (ctx->pc != 0x26FF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF10u; }
        if (ctx->pc != 0x26FF10u) { return; }
    }
    ctx->pc = 0x26FF10u;
label_26ff10:
    // 0x26ff10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ff10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff14: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x26FF14u;
    SET_GPR_U32(ctx, 31, 0x26FF1Cu);
    ctx->pc = 0x26FF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FF14u;
            // 0x26ff18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF1Cu; }
        if (ctx->pc != 0x26FF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF1Cu; }
        if (ctx->pc != 0x26FF1Cu) { return; }
    }
    ctx->pc = 0x26FF1Cu;
label_26ff1c:
    // 0x26ff1c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26ff1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26ff20: 0xc049514  jal         func_125450
    ctx->pc = 0x26FF20u;
    SET_GPR_U32(ctx, 31, 0x26FF28u);
    ctx->pc = 0x26FF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FF20u;
            // 0x26ff24: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF28u; }
        if (ctx->pc != 0x26FF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF28u; }
        if (ctx->pc != 0x26FF28u) { return; }
    }
    ctx->pc = 0x26FF28u;
label_26ff28:
    // 0x26ff28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ff28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff2c: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x26FF2Cu;
    SET_GPR_U32(ctx, 31, 0x26FF34u);
    ctx->pc = 0x26FF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FF2Cu;
            // 0x26ff30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF34u; }
        if (ctx->pc != 0x26FF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF34u; }
        if (ctx->pc != 0x26FF34u) { return; }
    }
    ctx->pc = 0x26FF34u;
label_26ff34:
    // 0x26ff34: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x26ff34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x26ff38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26ff38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ff40: 0x629004  sllv        $s2, $v0, $v1
    ctx->pc = 0x26ff40u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x26ff44: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x26ff44u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ff48: 0xc049514  jal         func_125450
    ctx->pc = 0x26FF48u;
    SET_GPR_U32(ctx, 31, 0x26FF50u);
    ctx->pc = 0x26FF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FF48u;
            // 0x26ff4c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF50u; }
        if (ctx->pc != 0x26FF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF50u; }
        if (ctx->pc != 0x26FF50u) { return; }
    }
    ctx->pc = 0x26FF50u;
label_26ff50:
    // 0x26ff50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ff50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff54: 0xc0496ca  jal         func_125B28
    ctx->pc = 0x26FF54u;
    SET_GPR_U32(ctx, 31, 0x26FF5Cu);
    ctx->pc = 0x26FF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FF54u;
            // 0x26ff58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B28u;
    if (runtime->hasFunction(0x125B28u)) {
        auto targetFn = runtime->lookupFunction(0x125B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF5Cu; }
        if (ctx->pc != 0x26FF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125B28_0x125b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF5Cu; }
        if (ctx->pc != 0x26FF5Cu) { return; }
    }
    ctx->pc = 0x26FF5Cu;
label_26ff5c:
    // 0x26ff5c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x26ff5cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ff60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26ff60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff64: 0xc049514  jal         func_125450
    ctx->pc = 0x26FF64u;
    SET_GPR_U32(ctx, 31, 0x26FF6Cu);
    ctx->pc = 0x26FF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FF64u;
            // 0x26ff68: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF6Cu; }
        if (ctx->pc != 0x26FF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF6Cu; }
        if (ctx->pc != 0x26FF6Cu) { return; }
    }
    ctx->pc = 0x26FF6Cu;
label_26ff6c:
    // 0x26ff6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ff6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff70: 0xc0496ca  jal         func_125B28
    ctx->pc = 0x26FF70u;
    SET_GPR_U32(ctx, 31, 0x26FF78u);
    ctx->pc = 0x26FF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FF70u;
            // 0x26ff74: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B28u;
    if (runtime->hasFunction(0x125B28u)) {
        auto targetFn = runtime->lookupFunction(0x125B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF78u; }
        if (ctx->pc != 0x26FF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125B28_0x125b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF78u; }
        if (ctx->pc != 0x26FF78u) { return; }
    }
    ctx->pc = 0x26FF78u;
label_26ff78:
    // 0x26ff78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26ff78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff7c: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x26ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
    // 0x26ff80: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x26ff80u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26ff84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26ff88: 0x16820009  bne         $s4, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26FF88u;
    {
        const bool branch_taken_0x26ff88 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x26FF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FF88u;
            // 0x26ff8c: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ff88) {
            ctx->pc = 0x26FFB0u;
            goto label_26ffb0;
        }
    }
    ctx->pc = 0x26FF90u;
    // 0x26ff90: 0x3c023ff6  lui         $v0, 0x3FF6
    ctx->pc = 0x26ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16374 << 16));
    // 0x26ff94: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x26ff94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x26ff98: 0x3444a09e  ori         $a0, $v0, 0xA09E
    ctx->pc = 0x26ff98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41118);
    // 0x26ff9c: 0x3c023fe0  lui         $v0, 0x3FE0
    ctx->pc = 0x26ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
    // 0x26ffa0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x26ffa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x26ffa4: 0x2a83c  dsll32      $s5, $v0, 0
    ctx->pc = 0x26ffa4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26ffa8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26FFA8u;
    {
        const bool branch_taken_0x26ffa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FFA8u;
            // 0x26ffac: 0x649025  or          $s2, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ffa8) {
            ctx->pc = 0x26FFE8u;
            goto label_26ffe8;
        }
    }
    ctx->pc = 0x26FFB0u;
label_26ffb0:
    // 0x26ffb0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26ffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26ffb4: 0x1682000c  bne         $s4, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26FFB4u;
    {
        const bool branch_taken_0x26ffb4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x26FFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FFB4u;
            // 0x26ffb8: 0x3c033ffb  lui         $v1, 0x3FFB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16379 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ffb4) {
            ctx->pc = 0x26FFE8u;
            goto label_26ffe8;
        }
    }
    ctx->pc = 0x26FFBCu;
    // 0x26ffbc: 0x3402e000  ori         $v0, $zero, 0xE000
    ctx->pc = 0x26ffbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x26ffc0: 0x3464b67a  ori         $a0, $v1, 0xB67A
    ctx->pc = 0x26ffc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46714);
    // 0x26ffc4: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x26ffc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x26ffc8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x26ffc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x26ffcc: 0x3c023fd5  lui         $v0, 0x3FD5
    ctx->pc = 0x26ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16341 << 16));
    // 0x26ffd0: 0x649025  or          $s2, $v1, $a0
    ctx->pc = 0x26ffd0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x26ffd4: 0x34425555  ori         $v0, $v0, 0x5555
    ctx->pc = 0x26ffd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21845);
    // 0x26ffd8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x26ffd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26ffdc: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x26ffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
    // 0x26ffe0: 0x43a825  or          $s5, $v0, $v1
    ctx->pc = 0x26ffe0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26ffe4: 0x0  nop
    ctx->pc = 0x26ffe4u;
    // NOP
label_26ffe8:
    // 0x26ffe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ffe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ffec: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x26FFECu;
    SET_GPR_U32(ctx, 31, 0x26FFF4u);
    ctx->pc = 0x26FFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FFECu;
            // 0x26fff0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FFF4u; }
        if (ctx->pc != 0x26FFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FFF4u; }
        if (ctx->pc != 0x26FFF4u) { return; }
    }
    ctx->pc = 0x26FFF4u;
label_26fff4:
    // 0x26fff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26fff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fff8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26fff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fffc: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x26FFFCu;
    SET_GPR_U32(ctx, 31, 0x270004u);
    ctx->pc = 0x270000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FFFCu;
            // 0x270000: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270004u; }
        if (ctx->pc != 0x270004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270004u; }
        if (ctx->pc != 0x270004u) { return; }
    }
    ctx->pc = 0x270004u;
label_270004:
    // 0x270004: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x270004u;
    {
        const bool branch_taken_0x270004 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x270008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270004u;
            // 0x270008: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270004) {
            ctx->pc = 0x270048u;
            goto label_270048;
        }
    }
    ctx->pc = 0x27000Cu;
    // 0x27000c: 0x131200  sll         $v0, $s3, 8
    ctx->pc = 0x27000cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
    // 0x270010: 0x539023  subu        $s2, $v0, $s3
    ctx->pc = 0x270010u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x270014: 0xc049776  jal         func_125DD8
    ctx->pc = 0x270014u;
    SET_GPR_U32(ctx, 31, 0x27001Cu);
    ctx->pc = 0x270018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270014u;
            // 0x270018: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125DD8u;
    if (runtime->hasFunction(0x125DD8u)) {
        auto targetFn = runtime->lookupFunction(0x125DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27001Cu; }
        if (ctx->pc != 0x27001Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125DD8_0x125dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27001Cu; }
        if (ctx->pc != 0x27001Cu) { return; }
    }
    ctx->pc = 0x27001Cu;
label_27001c:
    // 0x27001c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27001cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270020: 0xc04960a  jal         func_125828
    ctx->pc = 0x270020u;
    SET_GPR_U32(ctx, 31, 0x270028u);
    ctx->pc = 0x270024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270020u;
            // 0x270024: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270028u; }
        if (ctx->pc != 0x270028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270028u; }
        if (ctx->pc != 0x270028u) { return; }
    }
    ctx->pc = 0x270028u;
label_270028:
    // 0x270028: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27002c: 0xc049776  jal         func_125DD8
    ctx->pc = 0x27002Cu;
    SET_GPR_U32(ctx, 31, 0x270034u);
    ctx->pc = 0x270030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27002Cu;
            // 0x270030: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125DD8u;
    if (runtime->hasFunction(0x125DD8u)) {
        auto targetFn = runtime->lookupFunction(0x125DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270034u; }
        if (ctx->pc != 0x270034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125DD8_0x125dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270034u; }
        if (ctx->pc != 0x270034u) { return; }
    }
    ctx->pc = 0x270034u;
label_270034:
    // 0x270034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270038: 0xc04960a  jal         func_125828
    ctx->pc = 0x270038u;
    SET_GPR_U32(ctx, 31, 0x270040u);
    ctx->pc = 0x27003Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270038u;
            // 0x27003c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270040u; }
        if (ctx->pc != 0x270040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270040u; }
        if (ctx->pc != 0x270040u) { return; }
    }
    ctx->pc = 0x270040u;
label_270040:
    // 0x270040: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270044: 0x0  nop
    ctx->pc = 0x270044u;
    // NOP
label_270048:
    // 0x270048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x270048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27004c: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x27004Cu;
    SET_GPR_U32(ctx, 31, 0x270054u);
    ctx->pc = 0x270050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27004Cu;
            // 0x270050: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270054u; }
        if (ctx->pc != 0x270054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270054u; }
        if (ctx->pc != 0x270054u) { return; }
    }
    ctx->pc = 0x270054u;
label_270054:
    // 0x270054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270058: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x270058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27005c: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x27005Cu;
    SET_GPR_U32(ctx, 31, 0x270064u);
    ctx->pc = 0x270060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27005Cu;
            // 0x270060: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270064u; }
        if (ctx->pc != 0x270064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270064u; }
        if (ctx->pc != 0x270064u) { return; }
    }
    ctx->pc = 0x270064u;
label_270064:
    // 0x270064: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270068: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x270068u;
    SET_GPR_U32(ctx, 31, 0x270070u);
    ctx->pc = 0x27006Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270068u;
            // 0x27006c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270070u; }
        if (ctx->pc != 0x270070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270070u; }
        if (ctx->pc != 0x270070u) { return; }
    }
    ctx->pc = 0x270070u;
label_270070:
    // 0x270070: 0xc0a3264  jal         func_28C990
    ctx->pc = 0x270070u;
    SET_GPR_U32(ctx, 31, 0x270078u);
    ctx->pc = 0x270074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270070u;
            // 0x270074: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270078u; }
        if (ctx->pc != 0x270078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270078u; }
        if (ctx->pc != 0x270078u) { return; }
    }
    ctx->pc = 0x270078u;
label_270078:
    // 0x270078: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x270078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27007c: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x27007Cu;
    SET_GPR_U32(ctx, 31, 0x270084u);
    ctx->pc = 0x270080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27007Cu;
            // 0x270080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270084u; }
        if (ctx->pc != 0x270084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270084u; }
        if (ctx->pc != 0x270084u) { return; }
    }
    ctx->pc = 0x270084u;
label_270084:
    // 0x270084: 0xc0a3264  jal         func_28C990
    ctx->pc = 0x270084u;
    SET_GPR_U32(ctx, 31, 0x27008Cu);
    ctx->pc = 0x270088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270084u;
            // 0x270088: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27008Cu; }
        if (ctx->pc != 0x27008Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27008Cu; }
        if (ctx->pc != 0x27008Cu) { return; }
    }
    ctx->pc = 0x27008Cu;
label_27008c:
    // 0x27008c: 0x1a200003  blez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27008Cu;
    {
        const bool branch_taken_0x27008c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x270090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27008Cu;
            // 0x270090: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27008c) {
            ctx->pc = 0x27009Cu;
            goto label_27009c;
        }
    }
    ctx->pc = 0x270094u;
    // 0x270094: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x270094u;
    {
        const bool branch_taken_0x270094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270094u;
            // 0x270098: 0x2a2100ff  slti        $at, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)255) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270094) {
            ctx->pc = 0x2700A4u;
            goto label_2700a4;
        }
    }
    ctx->pc = 0x27009Cu;
label_27009c:
    // 0x27009c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27009cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2700a0: 0x2a2100ff  slti        $at, $s1, 0xFF
    ctx->pc = 0x2700a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)255) ? 1 : 0);
label_2700a4:
    // 0x2700a4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2700A4u;
    {
        const bool branch_taken_0x2700a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2700a4) {
            ctx->pc = 0x2700B4u;
            goto label_2700b4;
        }
    }
    ctx->pc = 0x2700ACu;
    // 0x2700ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2700ACu;
    {
        const bool branch_taken_0x2700ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2700ac) {
            ctx->pc = 0x2700B8u;
            goto label_2700b8;
        }
    }
    ctx->pc = 0x2700B4u;
label_2700b4:
    // 0x2700b4: 0x241100ff  addiu       $s1, $zero, 0xFF
    ctx->pc = 0x2700b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2700b8:
    // 0x2700b8: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2700B8u;
    {
        const bool branch_taken_0x2700b8 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x2700b8) {
            ctx->pc = 0x2700C8u;
            goto label_2700c8;
        }
    }
    ctx->pc = 0x2700C0u;
    // 0x2700c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2700C0u;
    {
        const bool branch_taken_0x2700c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2700C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2700C0u;
            // 0x2700c4: 0x288100ff  slti        $at, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)255) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2700c0) {
            ctx->pc = 0x2700D0u;
            goto label_2700d0;
        }
    }
    ctx->pc = 0x2700C8u;
label_2700c8:
    // 0x2700c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2700c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2700cc: 0x288100ff  slti        $at, $a0, 0xFF
    ctx->pc = 0x2700ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)255) ? 1 : 0);
label_2700d0:
    // 0x2700d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2700D0u;
    {
        const bool branch_taken_0x2700d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2700d0) {
            ctx->pc = 0x2700E0u;
            goto label_2700e0;
        }
    }
    ctx->pc = 0x2700D8u;
    // 0x2700d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2700D8u;
    {
        const bool branch_taken_0x2700d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2700DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2700D8u;
            // 0x2700dc: 0xaef10000  sw          $s1, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2700d8) {
            ctx->pc = 0x2700E8u;
            goto label_2700e8;
        }
    }
    ctx->pc = 0x2700E0u;
label_2700e0:
    // 0x2700e0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2700e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2700e4: 0xaef10000  sw          $s1, 0x0($s7)
    ctx->pc = 0x2700e4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 17));
label_2700e8:
    // 0x2700e8: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x2700e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2700ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2700ECu;
    {
        const bool branch_taken_0x2700ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2700F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2700ECu;
            // 0x2700f0: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2700ec) {
            ctx->pc = 0x270108u;
            goto label_270108;
        }
    }
    ctx->pc = 0x2700F4u;
    // 0x2700f4: 0x0  nop
    ctx->pc = 0x2700f4u;
    // NOP
label_2700f8:
    // 0x2700f8: 0x8e1e0060  lw          $fp, 0x60($s0)
    ctx->pc = 0x2700f8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2700fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2700fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270100: 0x1000fef5  b           . + 4 + (-0x10B << 2)
    ctx->pc = 0x270100u;
    {
        const bool branch_taken_0x270100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270100u;
            // 0x270104: 0x3c0182d  daddu       $v1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270100) {
            ctx->pc = 0x26FCD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26fcd8;
        }
    }
    ctx->pc = 0x270108u;
label_270108:
    // 0x270108: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x270108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27010c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x27010cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x270110: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x270110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x270114: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x270114u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x270118: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x270118u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27011c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x27011cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x270120: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x270120u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x270124: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x270124u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x270128: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x270128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27012c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27012cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x270130: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x270130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270134: 0x3e00008  jr          $ra
    ctx->pc = 0x270134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270134u;
            // 0x270138: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27013Cu;
    // 0x27013c: 0x0  nop
    ctx->pc = 0x27013cu;
    // NOP
    // 0x270140: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x270140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270144: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x270144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270148: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x270148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27014c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x27014cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270150: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x270150u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x270154: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x270154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x270158: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x270158u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x27015c: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x27015cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x270160: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x270160u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x270164: 0x0  nop
    ctx->pc = 0x270164u;
    // NOP
label_270168:
    // 0x270168: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x270168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27016c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x27016cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270170: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x270170u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x270174: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x270174u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270178: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x270178u;
    {
        const bool branch_taken_0x270178 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x270178) {
            ctx->pc = 0x270188u;
            goto label_270188;
        }
    }
    ctx->pc = 0x270180u;
    // 0x270180: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x270180u;
    {
        const bool branch_taken_0x270180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270180u;
            // 0x270184: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270180) {
            ctx->pc = 0x270190u;
            goto label_270190;
        }
    }
    ctx->pc = 0x270188u;
label_270188:
    // 0x270188: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x270188u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x27018c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x27018cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_270190:
    // 0x270190: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x270190u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x270194: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x270194u;
    {
        const bool branch_taken_0x270194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x270198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270194u;
            // 0x270198: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270194) {
            ctx->pc = 0x270168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270168;
        }
    }
    ctx->pc = 0x27019Cu;
    // 0x27019c: 0x3c03437e  lui         $v1, 0x437E
    ctx->pc = 0x27019cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17278 << 16));
    // 0x2701a0: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x2701a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x2701a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2701a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2701a8: 0x0  nop
    ctx->pc = 0x2701a8u;
    // NOP
    // 0x2701ac: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2701acu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x2701b0: 0x3c034780  lui         $v1, 0x4780
    ctx->pc = 0x2701b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18304 << 16));
    // 0x2701b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2701b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2701b8: 0x0  nop
    ctx->pc = 0x2701b8u;
    // NOP
    // 0x2701bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2701bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2701c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2701C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2701C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2701C0u;
            // 0x2701c4: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2701C8u;
    // 0x2701c8: 0x0  nop
    ctx->pc = 0x2701c8u;
    // NOP
    // 0x2701cc: 0x0  nop
    ctx->pc = 0x2701ccu;
    // NOP
}
