#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001803D0
// Address: 0x1803d0 - 0x180400
void sub_001803D0_0x1803d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001803D0_0x1803d0");
#endif

    switch (ctx->pc) {
        case 0x1803e4u: goto label_1803e4;
        case 0x1803ecu: goto label_1803ec;
        default: break;
    }

    ctx->pc = 0x1803d0u;

    // 0x1803d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1803d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1803d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1803d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1803d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1803d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1803dc: 0xc06031a  jal         func_180C68
    ctx->pc = 0x1803DCu;
    SET_GPR_U32(ctx, 31, 0x1803E4u);
    ctx->pc = 0x1803E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1803DCu;
            // 0x1803e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C68u;
    if (runtime->hasFunction(0x180C68u)) {
        auto targetFn = runtime->lookupFunction(0x180C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1803E4u; }
        if (ctx->pc != 0x1803E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C68_0x180c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1803E4u; }
        if (ctx->pc != 0x1803E4u) { return; }
    }
    ctx->pc = 0x1803E4u;
label_1803e4:
    // 0x1803e4: 0xc060100  jal         func_180400
    ctx->pc = 0x1803E4u;
    SET_GPR_U32(ctx, 31, 0x1803ECu);
    ctx->pc = 0x1803E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1803E4u;
            // 0x1803e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180400u;
    if (runtime->hasFunction(0x180400u)) {
        auto targetFn = runtime->lookupFunction(0x180400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1803ECu; }
        if (ctx->pc != 0x1803ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180400_0x180400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1803ECu; }
        if (ctx->pc != 0x1803ECu) { return; }
    }
    ctx->pc = 0x1803ECu;
label_1803ec:
    // 0x1803ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1803ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1803f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1803f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1803f4: 0x806031c  j           func_180C70
    ctx->pc = 0x1803F4u;
    ctx->pc = 0x1803F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1803F4u;
            // 0x1803f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C70u;
    if (runtime->hasFunction(0x180C70u)) {
        auto targetFn = runtime->lookupFunction(0x180C70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00180C70_0x180c70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1803FCu;
    // 0x1803fc: 0x0  nop
    ctx->pc = 0x1803fcu;
    // NOP
}
