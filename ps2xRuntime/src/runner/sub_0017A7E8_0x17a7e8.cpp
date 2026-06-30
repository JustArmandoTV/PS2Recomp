#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017A7E8
// Address: 0x17a7e8 - 0x17a810
void sub_0017A7E8_0x17a7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A7E8_0x17a7e8");
#endif

    switch (ctx->pc) {
        case 0x17a7f8u: goto label_17a7f8;
        case 0x17a800u: goto label_17a800;
        default: break;
    }

    ctx->pc = 0x17a7e8u;

    // 0x17a7e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17a7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a7ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a7f0: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17A7F0u;
    SET_GPR_U32(ctx, 31, 0x17A7F8u);
    ctx->pc = 0x17A7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A7F0u;
            // 0x17a7f4: 0x24041300  addiu       $a0, $zero, 0x1300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A7F8u; }
        if (ctx->pc != 0x17A7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A7F8u; }
        if (ctx->pc != 0x17A7F8u) { return; }
    }
    ctx->pc = 0x17A7F8u;
label_17a7f8:
    // 0x17a7f8: 0xc047aee  jal         func_11EBB8
    ctx->pc = 0x17A7F8u;
    SET_GPR_U32(ctx, 31, 0x17A800u);
    ctx->pc = 0x17A7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A7F8u;
            // 0x17a7fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EBB8u;
    if (runtime->hasFunction(0x11EBB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A800u; }
        if (ctx->pc != 0x17A800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EBB8_0x11ebb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A800u; }
        if (ctx->pc != 0x17A800u) { return; }
    }
    ctx->pc = 0x17A800u;
label_17a800:
    // 0x17a800: 0x24041301  addiu       $a0, $zero, 0x1301
    ctx->pc = 0x17a800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4865));
    // 0x17a804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a808: 0x805ed3a  j           func_17B4E8
    ctx->pc = 0x17A808u;
    ctx->pc = 0x17A80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A808u;
            // 0x17a80c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17A810u;
}
