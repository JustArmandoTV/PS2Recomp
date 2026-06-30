#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001745C8
// Address: 0x1745c8 - 0x174608
void sub_001745C8_0x1745c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001745C8_0x1745c8");
#endif

    switch (ctx->pc) {
        case 0x1745e4u: goto label_1745e4;
        case 0x1745f0u: goto label_1745f0;
        default: break;
    }

    ctx->pc = 0x1745c8u;

    // 0x1745c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1745c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1745cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1745ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1745d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1745d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1745d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1745d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1745d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1745d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1745dc: 0xc0599de  jal         func_166778
    ctx->pc = 0x1745DCu;
    SET_GPR_U32(ctx, 31, 0x1745E4u);
    ctx->pc = 0x1745E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1745DCu;
            // 0x1745e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1745E4u; }
        if (ctx->pc != 0x1745E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1745E4u; }
        if (ctx->pc != 0x1745E4u) { return; }
    }
    ctx->pc = 0x1745E4u;
label_1745e4:
    // 0x1745e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1745e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1745e8: 0xc05d182  jal         func_174608
    ctx->pc = 0x1745E8u;
    SET_GPR_U32(ctx, 31, 0x1745F0u);
    ctx->pc = 0x1745ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1745E8u;
            // 0x1745ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174608u;
    if (runtime->hasFunction(0x174608u)) {
        auto targetFn = runtime->lookupFunction(0x174608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1745F0u; }
        if (ctx->pc != 0x1745F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174608_0x174608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1745F0u; }
        if (ctx->pc != 0x1745F0u) { return; }
    }
    ctx->pc = 0x1745F0u;
label_1745f0:
    // 0x1745f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1745f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1745f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1745f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1745f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1745f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1745fc: 0x80599e0  j           func_166780
    ctx->pc = 0x1745FCu;
    ctx->pc = 0x174600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1745FCu;
            // 0x174600: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x174604u;
    // 0x174604: 0x0  nop
    ctx->pc = 0x174604u;
    // NOP
}
