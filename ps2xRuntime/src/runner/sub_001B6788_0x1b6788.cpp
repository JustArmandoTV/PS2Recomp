#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6788
// Address: 0x1b6788 - 0x1b67d0
void sub_001B6788_0x1b6788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6788_0x1b6788");
#endif

    switch (ctx->pc) {
        case 0x1b67acu: goto label_1b67ac;
        default: break;
    }

    ctx->pc = 0x1b6788u;

    // 0x1b6788: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b678c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b678cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6790: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6794: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b6794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b6798: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b6798u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b679c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b679cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b67a0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1b67a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1b67a4: 0xc06d9f4  jal         func_1B67D0
    ctx->pc = 0x1B67A4u;
    SET_GPR_U32(ctx, 31, 0x1B67ACu);
    ctx->pc = 0x1B67A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B67A4u;
            // 0x1b67a8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B67D0u;
    if (runtime->hasFunction(0x1B67D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B67D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B67ACu; }
        if (ctx->pc != 0x1B67ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B67D0_0x1b67d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B67ACu; }
        if (ctx->pc != 0x1B67ACu) { return; }
    }
    ctx->pc = 0x1B67ACu;
label_1b67ac:
    // 0x1b67ac: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x1b67acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
    // 0x1b67b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b67b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b67b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b67b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b67b8: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1b67b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1b67bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b67bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b67c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b67c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b67c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B67C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B67C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B67C4u;
            // 0x1b67c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B67CCu;
    // 0x1b67cc: 0x0  nop
    ctx->pc = 0x1b67ccu;
    // NOP
}
