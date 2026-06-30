#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00177BD8
// Address: 0x177bd8 - 0x177c00
void sub_00177BD8_0x177bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177BD8_0x177bd8");
#endif

    ctx->pc = 0x177bd8u;

    // 0x177bd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177bdc: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x177bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x177be0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177be4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177be8: 0x24843f88  addiu       $a0, $a0, 0x3F88
    ctx->pc = 0x177be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16264));
    // 0x177bec: 0x240603c0  addiu       $a2, $zero, 0x3C0
    ctx->pc = 0x177becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x177bf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177bf4: 0x804a576  j           func_1295D8
    ctx->pc = 0x177BF4u;
    ctx->pc = 0x177BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177BF4u;
            // 0x177bf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x177BFCu;
    // 0x177bfc: 0x0  nop
    ctx->pc = 0x177bfcu;
    // NOP
}
