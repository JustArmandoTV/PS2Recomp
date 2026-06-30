#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6C38
// Address: 0x1b6c38 - 0x1b6c98
void sub_001B6C38_0x1b6c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6C38_0x1b6c38");
#endif

    switch (ctx->pc) {
        case 0x1b6c5cu: goto label_1b6c5c;
        case 0x1b6c6cu: goto label_1b6c6c;
        default: break;
    }

    ctx->pc = 0x1b6c38u;

    // 0x1b6c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6c3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6c40: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b6c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b6c44: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b6c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b6c48: 0xdc900158  ld          $s0, 0x158($a0)
    ctx->pc = 0x1b6c48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x1b6c4c: 0x600000e  bltz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B6C4Cu;
    {
        const bool branch_taken_0x1b6c4c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1B6C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6C4Cu;
            // 0x1b6c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6c4c) {
            ctx->pc = 0x1B6C88u;
            goto label_1b6c88;
        }
    }
    ctx->pc = 0x1B6C54u;
    // 0x1b6c54: 0xc048ce6  jal         func_123398
    ctx->pc = 0x1B6C54u;
    SET_GPR_U32(ctx, 31, 0x1B6C5Cu);
    ctx->pc = 0x123398u;
    if (runtime->hasFunction(0x123398u)) {
        auto targetFn = runtime->lookupFunction(0x123398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C5Cu; }
        if (ctx->pc != 0x1B6C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123398_0x123398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C5Cu; }
        if (ctx->pc != 0x1B6C5Cu) { return; }
    }
    ctx->pc = 0x1B6C5Cu;
label_1b6c5c:
    // 0x1b6c5c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x1b6c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x1b6c60: 0x34a55f90  ori         $a1, $a1, 0x5F90
    ctx->pc = 0x1b6c60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24464);
    // 0x1b6c64: 0xc048dee  jal         func_1237B8
    ctx->pc = 0x1B6C64u;
    SET_GPR_U32(ctx, 31, 0x1B6C6Cu);
    ctx->pc = 0x1B6C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6C64u;
            // 0x1b6c68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1237B8u;
    if (runtime->hasFunction(0x1237B8u)) {
        auto targetFn = runtime->lookupFunction(0x1237B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C6Cu; }
        if (ctx->pc != 0x1B6C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001237B8_0x1237b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C6Cu; }
        if (ctx->pc != 0x1B6C6Cu) { return; }
    }
    ctx->pc = 0x1B6C6Cu;
label_1b6c6c:
    // 0x1b6c6c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1b6c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1b6c70: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1b6c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6c74: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1b6c74u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1b6c78: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1b6c78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x1b6c7c: 0xfc709bd8  sd          $s0, -0x6428($v1)
    ctx->pc = 0x1b6c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294941656), GPR_U64(ctx, 16));
    // 0x1b6c80: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b6c80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c84: 0xaca49be0  sw          $a0, -0x6420($a1)
    ctx->pc = 0x1b6c84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294941664), GPR_U32(ctx, 4));
label_1b6c88:
    // 0x1b6c88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6c88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6c8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b6c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6c90: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6C90u;
            // 0x1b6c94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6C98u;
}
