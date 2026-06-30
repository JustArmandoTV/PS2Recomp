#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB5A8
// Address: 0x1bb5a8 - 0x1bb5f0
void sub_001BB5A8_0x1bb5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB5A8_0x1bb5a8");
#endif

    switch (ctx->pc) {
        case 0x1bb5c8u: goto label_1bb5c8;
        default: break;
    }

    ctx->pc = 0x1bb5a8u;

    // 0x1bb5a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb5ac: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bb5acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bb5b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bb5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bb5b4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1bb5b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb5b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bb5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bb5bc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1bb5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1bb5c0: 0xc06edb0  jal         func_1BB6C0
    ctx->pc = 0x1BB5C0u;
    SET_GPR_U32(ctx, 31, 0x1BB5C8u);
    ctx->pc = 0x1BB5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB5C0u;
            // 0x1bb5c4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB6C0u;
    if (runtime->hasFunction(0x1BB6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1BB6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB5C8u; }
        if (ctx->pc != 0x1BB5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB6C0_0x1bb6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB5C8u; }
        if (ctx->pc != 0x1BB5C8u) { return; }
    }
    ctx->pc = 0x1BB5C8u;
label_1bb5c8:
    // 0x1bb5c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB5C8u;
    {
        const bool branch_taken_0x1bb5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB5C8u;
            // 0x1bb5cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb5c8) {
            ctx->pc = 0x1BB5D8u;
            goto label_1bb5d8;
        }
    }
    ctx->pc = 0x1BB5D0u;
    // 0x1bb5d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB5D0u;
    {
        const bool branch_taken_0x1bb5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB5D0u;
            // 0x1bb5d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb5d0) {
            ctx->pc = 0x1BB5DCu;
            goto label_1bb5dc;
        }
    }
    ctx->pc = 0x1BB5D8u;
label_1bb5d8:
    // 0x1bb5d8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1bb5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1bb5dc:
    // 0x1bb5dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bb5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb5e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bb5e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb5e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bb5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bb5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB5E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB5E8u;
            // 0x1bb5ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB5F0u;
}
