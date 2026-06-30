#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6960
// Address: 0x1b6960 - 0x1b69b0
void sub_001B6960_0x1b6960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6960_0x1b6960");
#endif

    switch (ctx->pc) {
        case 0x1b6974u: goto label_1b6974;
        case 0x1b6980u: goto label_1b6980;
        default: break;
    }

    ctx->pc = 0x1b6960u;

    // 0x1b6960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6968: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b6968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b696c: 0xc06da6c  jal         func_1B69B0
    ctx->pc = 0x1B696Cu;
    SET_GPR_U32(ctx, 31, 0x1B6974u);
    ctx->pc = 0x1B6970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B696Cu;
            // 0x1b6970: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B69B0u;
    if (runtime->hasFunction(0x1B69B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B69B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6974u; }
        if (ctx->pc != 0x1B6974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B69B0_0x1b69b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6974u; }
        if (ctx->pc != 0x1B6974u) { return; }
    }
    ctx->pc = 0x1B6974u;
label_1b6974:
    // 0x1b6974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6978: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B6978u;
    SET_GPR_U32(ctx, 31, 0x1B6980u);
    ctx->pc = 0x1B697Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6978u;
            // 0x1b697c: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6980u; }
        if (ctx->pc != 0x1B6980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6980u; }
        if (ctx->pc != 0x1B6980u) { return; }
    }
    ctx->pc = 0x1B6980u;
label_1b6980:
    // 0x1b6980: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b6980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6984: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6984u;
    {
        const bool branch_taken_0x1b6984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B6988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6984u;
            // 0x1b6988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6984) {
            ctx->pc = 0x1B69A0u;
            goto label_1b69a0;
        }
    }
    ctx->pc = 0x1B698Cu;
    // 0x1b698c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b698cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6990: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b6990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6994: 0x806dd5a  j           func_1B7568
    ctx->pc = 0x1B6994u;
    ctx->pc = 0x1B6998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6994u;
            // 0x1b6998: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7568u;
    if (runtime->hasFunction(0x1B7568u)) {
        auto targetFn = runtime->lookupFunction(0x1B7568u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B7568_0x1b7568(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B699Cu;
    // 0x1b699c: 0x0  nop
    ctx->pc = 0x1b699cu;
    // NOP
label_1b69a0:
    // 0x1b69a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b69a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b69a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b69a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b69a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B69A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B69ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B69A8u;
            // 0x1b69ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B69B0u;
}
