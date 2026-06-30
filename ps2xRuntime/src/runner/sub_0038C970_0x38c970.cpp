#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038C970
// Address: 0x38c970 - 0x38ca30
void sub_0038C970_0x38c970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038C970_0x38c970");
#endif

    switch (ctx->pc) {
        case 0x38c970u: goto label_38c970;
        case 0x38c974u: goto label_38c974;
        case 0x38c978u: goto label_38c978;
        case 0x38c97cu: goto label_38c97c;
        case 0x38c980u: goto label_38c980;
        case 0x38c984u: goto label_38c984;
        case 0x38c988u: goto label_38c988;
        case 0x38c98cu: goto label_38c98c;
        case 0x38c990u: goto label_38c990;
        case 0x38c994u: goto label_38c994;
        case 0x38c998u: goto label_38c998;
        case 0x38c99cu: goto label_38c99c;
        case 0x38c9a0u: goto label_38c9a0;
        case 0x38c9a4u: goto label_38c9a4;
        case 0x38c9a8u: goto label_38c9a8;
        case 0x38c9acu: goto label_38c9ac;
        case 0x38c9b0u: goto label_38c9b0;
        case 0x38c9b4u: goto label_38c9b4;
        case 0x38c9b8u: goto label_38c9b8;
        case 0x38c9bcu: goto label_38c9bc;
        case 0x38c9c0u: goto label_38c9c0;
        case 0x38c9c4u: goto label_38c9c4;
        case 0x38c9c8u: goto label_38c9c8;
        case 0x38c9ccu: goto label_38c9cc;
        case 0x38c9d0u: goto label_38c9d0;
        case 0x38c9d4u: goto label_38c9d4;
        case 0x38c9d8u: goto label_38c9d8;
        case 0x38c9dcu: goto label_38c9dc;
        case 0x38c9e0u: goto label_38c9e0;
        case 0x38c9e4u: goto label_38c9e4;
        case 0x38c9e8u: goto label_38c9e8;
        case 0x38c9ecu: goto label_38c9ec;
        case 0x38c9f0u: goto label_38c9f0;
        case 0x38c9f4u: goto label_38c9f4;
        case 0x38c9f8u: goto label_38c9f8;
        case 0x38c9fcu: goto label_38c9fc;
        case 0x38ca00u: goto label_38ca00;
        case 0x38ca04u: goto label_38ca04;
        case 0x38ca08u: goto label_38ca08;
        case 0x38ca0cu: goto label_38ca0c;
        case 0x38ca10u: goto label_38ca10;
        case 0x38ca14u: goto label_38ca14;
        case 0x38ca18u: goto label_38ca18;
        case 0x38ca1cu: goto label_38ca1c;
        case 0x38ca20u: goto label_38ca20;
        case 0x38ca24u: goto label_38ca24;
        case 0x38ca28u: goto label_38ca28;
        case 0x38ca2cu: goto label_38ca2c;
        default: break;
    }

    ctx->pc = 0x38c970u;

label_38c970:
    // 0x38c970: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x38c970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_38c974:
    // 0x38c974: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x38c974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_38c978:
    // 0x38c978: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x38c978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_38c97c:
    // 0x38c97c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x38c97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_38c980:
    // 0x38c980: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x38c980u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38c984:
    // 0x38c984: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38c984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_38c988:
    // 0x38c988: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x38c988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38c98c:
    // 0x38c98c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38c98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_38c990:
    // 0x38c990: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x38c990u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_38c994:
    // 0x38c994: 0x90830020  lbu         $v1, 0x20($a0)
    ctx->pc = 0x38c994u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_38c998:
    // 0x38c998: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_38c99c:
    if (ctx->pc == 0x38C99Cu) {
        ctx->pc = 0x38C99Cu;
            // 0x38c99c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x38C9A0u;
        goto label_38c9a0;
    }
    ctx->pc = 0x38C998u;
    {
        const bool branch_taken_0x38c998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C998u;
            // 0x38c99c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c998) {
            ctx->pc = 0x38CA00u;
            goto label_38ca00;
        }
    }
    ctx->pc = 0x38C9A0u;
label_38c9a0:
    // 0x38c9a0: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x38c9a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_38c9a4:
    // 0x38c9a4: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_38c9a8:
    if (ctx->pc == 0x38C9A8u) {
        ctx->pc = 0x38C9A8u;
            // 0x38c9a8: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x38C9ACu;
        goto label_38c9ac;
    }
    ctx->pc = 0x38C9A4u;
    {
        const bool branch_taken_0x38c9a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C9A4u;
            // 0x38c9a8: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c9a4) {
            ctx->pc = 0x38C9DCu;
            goto label_38c9dc;
        }
    }
    ctx->pc = 0x38C9ACu;
label_38c9ac:
    // 0x38c9ac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x38c9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38c9b0:
    // 0x38c9b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38c9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38c9b4:
    // 0x38c9b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x38c9b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_38c9b8:
    // 0x38c9b8: 0x8c990024  lw          $t9, 0x24($a0)
    ctx->pc = 0x38c9b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_38c9bc:
    // 0x38c9bc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x38c9bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_38c9c0:
    // 0x38c9c0: 0x320f809  jalr        $t9
label_38c9c4:
    if (ctx->pc == 0x38C9C4u) {
        ctx->pc = 0x38C9C4u;
            // 0x38c9c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38C9C8u;
        goto label_38c9c8;
    }
    ctx->pc = 0x38C9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38C9C8u);
        ctx->pc = 0x38C9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C9C0u;
            // 0x38c9c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38C9C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38C9C8u; }
            if (ctx->pc != 0x38C9C8u) { return; }
        }
        }
    }
    ctx->pc = 0x38C9C8u;
label_38c9c8:
    // 0x38c9c8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x38c9c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_38c9cc:
    // 0x38c9cc: 0x1e00fff7  bgtz        $s0, . + 4 + (-0x9 << 2)
label_38c9d0:
    if (ctx->pc == 0x38C9D0u) {
        ctx->pc = 0x38C9D0u;
            // 0x38c9d0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x38C9D4u;
        goto label_38c9d4;
    }
    ctx->pc = 0x38C9CCu;
    {
        const bool branch_taken_0x38c9cc = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x38C9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C9CCu;
            // 0x38c9d0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c9cc) {
            ctx->pc = 0x38C9ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_38c9ac;
        }
    }
    ctx->pc = 0x38C9D4u;
label_38c9d4:
    // 0x38c9d4: 0x1000000a  b           . + 4 + (0xA << 2)
label_38c9d8:
    if (ctx->pc == 0x38C9D8u) {
        ctx->pc = 0x38C9DCu;
        goto label_38c9dc;
    }
    ctx->pc = 0x38C9D4u;
    {
        const bool branch_taken_0x38c9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c9d4) {
            ctx->pc = 0x38CA00u;
            goto label_38ca00;
        }
    }
    ctx->pc = 0x38C9DCu;
label_38c9dc:
    // 0x38c9dc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x38c9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38c9e0:
    // 0x38c9e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38c9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38c9e4:
    // 0x38c9e4: 0x8c990024  lw          $t9, 0x24($a0)
    ctx->pc = 0x38c9e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_38c9e8:
    // 0x38c9e8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x38c9e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_38c9ec:
    // 0x38c9ec: 0x320f809  jalr        $t9
label_38c9f0:
    if (ctx->pc == 0x38C9F0u) {
        ctx->pc = 0x38C9F0u;
            // 0x38c9f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x38C9F4u;
        goto label_38c9f4;
    }
    ctx->pc = 0x38C9ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38C9F4u);
        ctx->pc = 0x38C9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C9ECu;
            // 0x38c9f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38C9F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38C9F4u; }
            if (ctx->pc != 0x38C9F4u) { return; }
        }
        }
    }
    ctx->pc = 0x38C9F4u;
label_38c9f4:
    // 0x38c9f4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x38c9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_38c9f8:
    // 0x38c9f8: 0x1e00fff8  bgtz        $s0, . + 4 + (-0x8 << 2)
label_38c9fc:
    if (ctx->pc == 0x38C9FCu) {
        ctx->pc = 0x38C9FCu;
            // 0x38c9fc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x38CA00u;
        goto label_38ca00;
    }
    ctx->pc = 0x38C9F8u;
    {
        const bool branch_taken_0x38c9f8 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x38C9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C9F8u;
            // 0x38c9fc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c9f8) {
            ctx->pc = 0x38C9DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_38c9dc;
        }
    }
    ctx->pc = 0x38CA00u;
label_38ca00:
    // 0x38ca00: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x38ca00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_38ca04:
    // 0x38ca04: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x38ca04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38ca08:
    // 0x38ca08: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x38ca08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38ca0c:
    // 0x38ca0c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x38ca0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38ca10:
    // 0x38ca10: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38ca10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38ca14:
    // 0x38ca14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38ca14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38ca18:
    // 0x38ca18: 0x3e00008  jr          $ra
label_38ca1c:
    if (ctx->pc == 0x38CA1Cu) {
        ctx->pc = 0x38CA1Cu;
            // 0x38ca1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x38CA20u;
        goto label_38ca20;
    }
    ctx->pc = 0x38CA18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38CA18u;
            // 0x38ca1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38CA20u;
label_38ca20:
    // 0x38ca20: 0x3e00008  jr          $ra
label_38ca24:
    if (ctx->pc == 0x38CA24u) {
        ctx->pc = 0x38CA28u;
        goto label_38ca28;
    }
    ctx->pc = 0x38CA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38CA28u;
label_38ca28:
    // 0x38ca28: 0x0  nop
    ctx->pc = 0x38ca28u;
    // NOP
label_38ca2c:
    // 0x38ca2c: 0x0  nop
    ctx->pc = 0x38ca2cu;
    // NOP
}
