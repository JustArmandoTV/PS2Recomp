#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00181EC8
// Address: 0x181ec8 - 0x181ef8
void sub_00181EC8_0x181ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181EC8_0x181ec8");
#endif

    switch (ctx->pc) {
        case 0x181edcu: goto label_181edc;
        case 0x181ee4u: goto label_181ee4;
        default: break;
    }

    ctx->pc = 0x181ec8u;

    // 0x181ec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x181ecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x181eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x181ed0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x181ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x181ed4: 0xc060704  jal         func_181C10
    ctx->pc = 0x181ED4u;
    SET_GPR_U32(ctx, 31, 0x181EDCu);
    ctx->pc = 0x181ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181ED4u;
            // 0x181ed8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C10u;
    if (runtime->hasFunction(0x181C10u)) {
        auto targetFn = runtime->lookupFunction(0x181C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181EDCu; }
        if (ctx->pc != 0x181EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181C10_0x181c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181EDCu; }
        if (ctx->pc != 0x181EDCu) { return; }
    }
    ctx->pc = 0x181EDCu;
label_181edc:
    // 0x181edc: 0xc0607be  jal         func_181EF8
    ctx->pc = 0x181EDCu;
    SET_GPR_U32(ctx, 31, 0x181EE4u);
    ctx->pc = 0x181EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181EDCu;
            // 0x181ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181EF8u;
    if (runtime->hasFunction(0x181EF8u)) {
        auto targetFn = runtime->lookupFunction(0x181EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181EE4u; }
        if (ctx->pc != 0x181EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181EF8_0x181ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181EE4u; }
        if (ctx->pc != 0x181EE4u) { return; }
    }
    ctx->pc = 0x181EE4u;
label_181ee4:
    // 0x181ee4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x181ee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181ee8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x181ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181eec: 0x806070a  j           func_181C28
    ctx->pc = 0x181EECu;
    ctx->pc = 0x181EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181EECu;
            // 0x181ef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C28u;
    if (runtime->hasFunction(0x181C28u)) {
        auto targetFn = runtime->lookupFunction(0x181C28u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00181C28_0x181c28(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x181EF4u;
    // 0x181ef4: 0x0  nop
    ctx->pc = 0x181ef4u;
    // NOP
}
