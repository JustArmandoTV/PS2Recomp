#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A3D28
// Address: 0x1a3d28 - 0x1a3d70
void sub_001A3D28_0x1a3d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3D28_0x1a3d28");
#endif

    switch (ctx->pc) {
        case 0x1a3d4cu: goto label_1a3d4c;
        default: break;
    }

    ctx->pc = 0x1a3d28u;

    // 0x1a3d28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a3d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a3d2c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a3d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a3d30: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a3d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3d34: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1a3d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1a3d38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a3d38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3d3c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a3d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a3d40: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1a3d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3d44: 0xc069616  jal         func_1A5858
    ctx->pc = 0x1A3D44u;
    SET_GPR_U32(ctx, 31, 0x1A3D4Cu);
    ctx->pc = 0x1A3D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3D44u;
            // 0x1a3d48: 0x8c85207c  lw          $a1, 0x207C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8316)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5858u;
    if (runtime->hasFunction(0x1A5858u)) {
        auto targetFn = runtime->lookupFunction(0x1A5858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3D4Cu; }
        if (ctx->pc != 0x1A3D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5858_0x1a5858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3D4Cu; }
        if (ctx->pc != 0x1A3D4Cu) { return; }
    }
    ctx->pc = 0x1A3D4Cu;
label_1a3d4c:
    // 0x1a3d4c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a3d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3d50: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1a3d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a3d54: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1a3d54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1a3d58: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1a3d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1a3d5c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1a3d5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3d60: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a3d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3d64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a3d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3d68: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3D68u;
            // 0x1a3d6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3D70u;
}
