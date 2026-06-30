#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180018
// Address: 0x180018 - 0x180048
void sub_00180018_0x180018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180018_0x180018");
#endif

    switch (ctx->pc) {
        case 0x18002cu: goto label_18002c;
        case 0x180034u: goto label_180034;
        default: break;
    }

    ctx->pc = 0x180018u;

    // 0x180018: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18001c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18001cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180020: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x180020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x180024: 0xc06031a  jal         func_180C68
    ctx->pc = 0x180024u;
    SET_GPR_U32(ctx, 31, 0x18002Cu);
    ctx->pc = 0x180028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180024u;
            // 0x180028: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C68u;
    if (runtime->hasFunction(0x180C68u)) {
        auto targetFn = runtime->lookupFunction(0x180C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18002Cu; }
        if (ctx->pc != 0x18002Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C68_0x180c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18002Cu; }
        if (ctx->pc != 0x18002Cu) { return; }
    }
    ctx->pc = 0x18002Cu;
label_18002c:
    // 0x18002c: 0xc060012  jal         func_180048
    ctx->pc = 0x18002Cu;
    SET_GPR_U32(ctx, 31, 0x180034u);
    ctx->pc = 0x180030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18002Cu;
            // 0x180030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180048u;
    if (runtime->hasFunction(0x180048u)) {
        auto targetFn = runtime->lookupFunction(0x180048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180034u; }
        if (ctx->pc != 0x180034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180048_0x180048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180034u; }
        if (ctx->pc != 0x180034u) { return; }
    }
    ctx->pc = 0x180034u;
label_180034:
    // 0x180034: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180038: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x180038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18003c: 0x806031c  j           func_180C70
    ctx->pc = 0x18003Cu;
    ctx->pc = 0x180040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18003Cu;
            // 0x180040: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C70u;
    if (runtime->hasFunction(0x180C70u)) {
        auto targetFn = runtime->lookupFunction(0x180C70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00180C70_0x180c70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x180044u;
    // 0x180044: 0x0  nop
    ctx->pc = 0x180044u;
    // NOP
}
