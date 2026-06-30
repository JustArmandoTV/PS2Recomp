#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B39D8
// Address: 0x1b39d8 - 0x1b3a50
void sub_001B39D8_0x1b39d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B39D8_0x1b39d8");
#endif

    switch (ctx->pc) {
        case 0x1b39f4u: goto label_1b39f4;
        case 0x1b3a2cu: goto label_1b3a2c;
        case 0x1b3a34u: goto label_1b3a34;
        case 0x1b3a3cu: goto label_1b3a3c;
        default: break;
    }

    ctx->pc = 0x1b39d8u;

    // 0x1b39d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b39d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b39dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b39dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b39e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b39e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b39e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b39e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b39e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b39e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b39ec: 0xc06419c  jal         func_190670
    ctx->pc = 0x1B39ECu;
    SET_GPR_U32(ctx, 31, 0x1B39F4u);
    ctx->pc = 0x1B39F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B39ECu;
            // 0x1b39f0: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190670u;
    if (runtime->hasFunction(0x190670u)) {
        auto targetFn = runtime->lookupFunction(0x190670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39F4u; }
        if (ctx->pc != 0x1B39F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190670_0x190670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39F4u; }
        if (ctx->pc != 0x1B39F4u) { return; }
    }
    ctx->pc = 0x1B39F4u;
label_1b39f4:
    // 0x1b39f4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b39f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1b39f8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1b39f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1b39fc: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x1b39fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1b3a00: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1b3a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1b3a04: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1b3a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1b3a08: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1b3a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1b3a0c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1b3a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1b3a10: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1b3a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1b3a14: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1b3a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1b3a18: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1b3a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1b3a1c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1b3a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1b3a20: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1b3a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1b3a24: 0xc06ce94  jal         func_1B3A50
    ctx->pc = 0x1B3A24u;
    SET_GPR_U32(ctx, 31, 0x1B3A2Cu);
    ctx->pc = 0x1B3A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3A24u;
            // 0x1b3a28: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A50u;
    if (runtime->hasFunction(0x1B3A50u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A2Cu; }
        if (ctx->pc != 0x1B3A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3A50_0x1b3a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A2Cu; }
        if (ctx->pc != 0x1B3A2Cu) { return; }
    }
    ctx->pc = 0x1B3A2Cu;
label_1b3a2c:
    // 0x1b3a2c: 0xc06ce94  jal         func_1B3A50
    ctx->pc = 0x1B3A2Cu;
    SET_GPR_U32(ctx, 31, 0x1B3A34u);
    ctx->pc = 0x1B3A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3A2Cu;
            // 0x1b3a30: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A50u;
    if (runtime->hasFunction(0x1B3A50u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A34u; }
        if (ctx->pc != 0x1B3A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3A50_0x1b3a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A34u; }
        if (ctx->pc != 0x1B3A34u) { return; }
    }
    ctx->pc = 0x1B3A34u;
label_1b3a34:
    // 0x1b3a34: 0xc06ce94  jal         func_1B3A50
    ctx->pc = 0x1B3A34u;
    SET_GPR_U32(ctx, 31, 0x1B3A3Cu);
    ctx->pc = 0x1B3A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3A34u;
            // 0x1b3a38: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A50u;
    if (runtime->hasFunction(0x1B3A50u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A3Cu; }
        if (ctx->pc != 0x1B3A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3A50_0x1b3a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A3Cu; }
        if (ctx->pc != 0x1B3A3Cu) { return; }
    }
    ctx->pc = 0x1B3A3Cu;
label_1b3a3c:
    // 0x1b3a3c: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1b3a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1b3a40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b3a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b3a44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b3a44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3a48: 0x806ce94  j           func_1B3A50
    ctx->pc = 0x1B3A48u;
    ctx->pc = 0x1B3A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3A48u;
            // 0x1b3a4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A50u;
    if (runtime->hasFunction(0x1B3A50u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B3A50_0x1b3a50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B3A50u;
}
