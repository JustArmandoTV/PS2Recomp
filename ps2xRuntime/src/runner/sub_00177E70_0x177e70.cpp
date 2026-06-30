#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00177E70
// Address: 0x177e70 - 0x177e98
void sub_00177E70_0x177e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177E70_0x177e70");
#endif

    ctx->pc = 0x177e70u;

    // 0x177e70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177e74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177e7c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x177e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x177e80: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x177e80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x177e84: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x177e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x177e88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177e8c: 0x804a576  j           func_1295D8
    ctx->pc = 0x177E8Cu;
    ctx->pc = 0x177E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177E8Cu;
            // 0x177e90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x177E94u;
    // 0x177e94: 0x0  nop
    ctx->pc = 0x177e94u;
    // NOP
}
