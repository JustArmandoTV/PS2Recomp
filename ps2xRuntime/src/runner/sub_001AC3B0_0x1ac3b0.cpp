#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AC3B0
// Address: 0x1ac3b0 - 0x1ac400
void sub_001AC3B0_0x1ac3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC3B0_0x1ac3b0");
#endif

    switch (ctx->pc) {
        case 0x1ac3ccu: goto label_1ac3cc;
        default: break;
    }

    ctx->pc = 0x1ac3b0u;

    // 0x1ac3b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ac3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ac3b4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1ac3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1ac3b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ac3b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac3bc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1ac3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1ac3c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ac3c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac3c4: 0xc069616  jal         func_1A5858
    ctx->pc = 0x1AC3C4u;
    SET_GPR_U32(ctx, 31, 0x1AC3CCu);
    ctx->pc = 0x1AC3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC3C4u;
            // 0x1ac3c8: 0x8c852038  lw          $a1, 0x2038($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8248)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5858u;
    if (runtime->hasFunction(0x1A5858u)) {
        auto targetFn = runtime->lookupFunction(0x1A5858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC3CCu; }
        if (ctx->pc != 0x1AC3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5858_0x1a5858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC3CCu; }
        if (ctx->pc != 0x1AC3CCu) { return; }
    }
    ctx->pc = 0x1AC3CCu;
label_1ac3cc:
    // 0x1ac3cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC3CCu;
    {
        const bool branch_taken_0x1ac3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC3CCu;
            // 0x1ac3d0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac3cc) {
            ctx->pc = 0x1AC3E0u;
            goto label_1ac3e0;
        }
    }
    ctx->pc = 0x1AC3D4u;
    // 0x1ac3d4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1ac3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1ac3d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC3D8u;
    {
        const bool branch_taken_0x1ac3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC3D8u;
            // 0x1ac3dc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac3d8) {
            ctx->pc = 0x1AC3ECu;
            goto label_1ac3ec;
        }
    }
    ctx->pc = 0x1AC3E0u;
label_1ac3e0:
    // 0x1ac3e0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1ac3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ac3e4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1ac3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1ac3e8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ac3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ac3ec:
    // 0x1ac3ec: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ac3ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac3f0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ac3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ac3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC3F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC3F4u;
            // 0x1ac3f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AC3FCu;
    // 0x1ac3fc: 0x0  nop
    ctx->pc = 0x1ac3fcu;
    // NOP
}
