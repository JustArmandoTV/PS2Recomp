#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001988C0
// Address: 0x1988c0 - 0x1988e8
void sub_001988C0_0x1988c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001988C0_0x1988c0");
#endif

    ctx->pc = 0x1988c0u;

    // 0x1988c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1988c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1988c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1988c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1988c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1988c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1988cc: 0x8c460440  lw          $a2, 0x440($v0)
    ctx->pc = 0x1988ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1088)));
    // 0x1988d0: 0x8c440438  lw          $a0, 0x438($v0)
    ctx->pc = 0x1988d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1080)));
    // 0x1988d4: 0x8c45043c  lw          $a1, 0x43C($v0)
    ctx->pc = 0x1988d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1084)));
    // 0x1988d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1988d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1988dc: 0x806156e  j           func_1855B8
    ctx->pc = 0x1988DCu;
    ctx->pc = 0x1988E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1988DCu;
            // 0x1988e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1855B8u;
    if (runtime->hasFunction(0x1855B8u)) {
        auto targetFn = runtime->lookupFunction(0x1855B8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001855B8_0x1855b8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1988E4u;
    // 0x1988e4: 0x0  nop
    ctx->pc = 0x1988e4u;
    // NOP
}
