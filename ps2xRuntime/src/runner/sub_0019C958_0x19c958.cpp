#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019C958
// Address: 0x19c958 - 0x19c990
void sub_0019C958_0x19c958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C958_0x19c958");
#endif

    switch (ctx->pc) {
        case 0x19c96cu: goto label_19c96c;
        case 0x19c97cu: goto label_19c97c;
        default: break;
    }

    ctx->pc = 0x19c958u;

    // 0x19c958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19c958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19c95c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19c95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19c960: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19c960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19c964: 0xc068a6a  jal         func_1A29A8
    ctx->pc = 0x19C964u;
    SET_GPR_U32(ctx, 31, 0x19C96Cu);
    ctx->pc = 0x19C968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C964u;
            // 0x19c968: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A29A8u;
    if (runtime->hasFunction(0x1A29A8u)) {
        auto targetFn = runtime->lookupFunction(0x1A29A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C96Cu; }
        if (ctx->pc != 0x19C96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A29A8_0x1a29a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C96Cu; }
        if (ctx->pc != 0x19C96Cu) { return; }
    }
    ctx->pc = 0x19C96Cu;
label_19c96c:
    // 0x19c96c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C96Cu;
    {
        const bool branch_taken_0x19c96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C96Cu;
            // 0x19c970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c96c) {
            ctx->pc = 0x19C980u;
            goto label_19c980;
        }
    }
    ctx->pc = 0x19C974u;
    // 0x19c974: 0xc068a0a  jal         func_1A2828
    ctx->pc = 0x19C974u;
    SET_GPR_U32(ctx, 31, 0x19C97Cu);
    ctx->pc = 0x1A2828u;
    if (runtime->hasFunction(0x1A2828u)) {
        auto targetFn = runtime->lookupFunction(0x1A2828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C97Cu; }
        if (ctx->pc != 0x19C97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2828_0x1a2828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C97Cu; }
        if (ctx->pc != 0x19C97Cu) { return; }
    }
    ctx->pc = 0x19C97Cu;
label_19c97c:
    // 0x19c97c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x19c97cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19c980:
    // 0x19c980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19c980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c984: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19c984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19c988: 0x3e00008  jr          $ra
    ctx->pc = 0x19C988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C988u;
            // 0x19c98c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C990u;
}
