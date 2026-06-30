#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019A030
// Address: 0x19a030 - 0x19a130
void sub_0019A030_0x19a030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A030_0x19a030");
#endif

    switch (ctx->pc) {
        case 0x19a048u: goto label_19a048;
        case 0x19a054u: goto label_19a054;
        case 0x19a0a4u: goto label_19a0a4;
        case 0x19a0c0u: goto label_19a0c0;
        default: break;
    }

    ctx->pc = 0x19a030u;

    // 0x19a030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19a030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a034: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19a034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19a038: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x19a038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a03c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19a03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19a040: 0xc06ab50  jal         func_1AAD40
    ctx->pc = 0x19A040u;
    SET_GPR_U32(ctx, 31, 0x19A048u);
    ctx->pc = 0x19A044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A040u;
            // 0x19a044: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AAD40u;
    if (runtime->hasFunction(0x1AAD40u)) {
        auto targetFn = runtime->lookupFunction(0x1AAD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A048u; }
        if (ctx->pc != 0x19A048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AAD40_0x1aad40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A048u; }
        if (ctx->pc != 0x19A048u) { return; }
    }
    ctx->pc = 0x19A048u;
label_19a048:
    // 0x19a048: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a04c: 0xc066876  jal         func_19A1D8
    ctx->pc = 0x19A04Cu;
    SET_GPR_U32(ctx, 31, 0x19A054u);
    ctx->pc = 0x19A050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A04Cu;
            // 0x19a050: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A1D8u;
    if (runtime->hasFunction(0x19A1D8u)) {
        auto targetFn = runtime->lookupFunction(0x19A1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A054u; }
        if (ctx->pc != 0x19A054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019A1D8_0x19a1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A054u; }
        if (ctx->pc != 0x19A054u) { return; }
    }
    ctx->pc = 0x19A054u;
label_19a054:
    // 0x19a054: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19a054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a058: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19a058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19a05c: 0x3e00008  jr          $ra
    ctx->pc = 0x19A05Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A05Cu;
            // 0x19a060: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A064u;
    // 0x19a064: 0x0  nop
    ctx->pc = 0x19a064u;
    // NOP
    // 0x19a068: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19a068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19a06c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a070: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19a070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a074: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19a074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19a078: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19a078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a07c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19a07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19a080: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x19a080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x19a084: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x19a084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x19a088: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x19a088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x19a08c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x19a08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x19a090: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19a090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19a094: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x19a094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x19a098: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x19a098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19a09c: 0xc06684c  jal         func_19A130
    ctx->pc = 0x19A09Cu;
    SET_GPR_U32(ctx, 31, 0x19A0A4u);
    ctx->pc = 0x19A0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A09Cu;
            // 0x19a0a0: 0x8e170000  lw          $s7, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A130u;
    if (runtime->hasFunction(0x19A130u)) {
        auto targetFn = runtime->lookupFunction(0x19A130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A0A4u; }
        if (ctx->pc != 0x19A0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019A130_0x19a130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A0A4u; }
        if (ctx->pc != 0x19A0A4u) { return; }
    }
    ctx->pc = 0x19A0A4u;
label_19a0a4:
    // 0x19a0a4: 0x8e16000c  lw          $s6, 0xC($s0)
    ctx->pc = 0x19a0a4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19a0a8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x19a0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x19a0ac: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x19a0acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a0b0: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x19a0b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19a0b4: 0x8e130014  lw          $s3, 0x14($s0)
    ctx->pc = 0x19a0b4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x19a0b8: 0xc06685c  jal         func_19A170
    ctx->pc = 0x19A0B8u;
    SET_GPR_U32(ctx, 31, 0x19A0C0u);
    ctx->pc = 0x19A0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A0B8u;
            // 0x19a0bc: 0x8e140018  lw          $s4, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A170u;
    if (runtime->hasFunction(0x19A170u)) {
        auto targetFn = runtime->lookupFunction(0x19A170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A0C0u; }
        if (ctx->pc != 0x19A0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019A170_0x19a170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A0C0u; }
        if (ctx->pc != 0x19A0C0u) { return; }
    }
    ctx->pc = 0x19A0C0u;
label_19a0c0:
    // 0x19a0c0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19a0c4: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x19a0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x19a0c8: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x19a0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x19a0cc: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x19a0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19a0d0: 0x8e070040  lw          $a3, 0x40($s0)
    ctx->pc = 0x19a0d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19a0d4: 0xae370020  sw          $s7, 0x20($s1)
    ctx->pc = 0x19a0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 23));
    // 0x19a0d8: 0xae35001c  sw          $s5, 0x1C($s1)
    ctx->pc = 0x19a0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 21));
    // 0x19a0dc: 0xae360000  sw          $s6, 0x0($s1)
    ctx->pc = 0x19a0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 22));
    // 0x19a0e0: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x19a0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x19a0e4: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x19a0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x19a0e8: 0xae34000c  sw          $s4, 0xC($s1)
    ctx->pc = 0x19a0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 20));
    // 0x19a0ec: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x19a0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x19a0f0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x19a0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x19a0f4: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x19a0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    // 0x19a0f8: 0xae250018  sw          $a1, 0x18($s1)
    ctx->pc = 0x19a0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 5));
    // 0x19a0fc: 0xae260024  sw          $a2, 0x24($s1)
    ctx->pc = 0x19a0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 6));
    // 0x19a100: 0xae270028  sw          $a3, 0x28($s1)
    ctx->pc = 0x19a100u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 7));
    // 0x19a104: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a108: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19a108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a10c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19a10cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a110: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19a110u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19a114: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x19a114u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a118: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x19a118u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a11c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x19a11cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a120: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x19a120u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19a124: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19a124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a128: 0x3e00008  jr          $ra
    ctx->pc = 0x19A128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A128u;
            // 0x19a12c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A130u;
}
