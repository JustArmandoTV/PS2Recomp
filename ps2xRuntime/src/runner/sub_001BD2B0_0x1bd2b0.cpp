#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BD2B0
// Address: 0x1bd2b0 - 0x1bd2f0
void sub_001BD2B0_0x1bd2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD2B0_0x1bd2b0");
#endif

    switch (ctx->pc) {
        case 0x1bd2c8u: goto label_1bd2c8;
        default: break;
    }

    ctx->pc = 0x1bd2b0u;

    // 0x1bd2b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bd2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bd2b4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bd2b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bd2b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bd2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bd2bc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bd2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bd2c0: 0xc06f2e6  jal         func_1BCB98
    ctx->pc = 0x1BD2C0u;
    SET_GPR_U32(ctx, 31, 0x1BD2C8u);
    ctx->pc = 0x1BD2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD2C0u;
            // 0x1bd2c4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BCB98u;
    if (runtime->hasFunction(0x1BCB98u)) {
        auto targetFn = runtime->lookupFunction(0x1BCB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD2C8u; }
        if (ctx->pc != 0x1BD2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCB98_0x1bcb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD2C8u; }
        if (ctx->pc != 0x1BD2C8u) { return; }
    }
    ctx->pc = 0x1BD2C8u;
label_1bd2c8:
    // 0x1bd2c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bd2c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd2cc: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD2CCu;
    {
        const bool branch_taken_0x1bd2cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd2cc) {
            ctx->pc = 0x1BD2D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD2CCu;
            // 0x1bd2d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD2E4u;
            goto label_1bd2e4;
        }
    }
    ctx->pc = 0x1BD2D4u;
    // 0x1bd2d4: 0x90630027  lbu         $v1, 0x27($v1)
    ctx->pc = 0x1bd2d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 39)));
    // 0x1bd2d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd2dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bd2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bd2e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bd2e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bd2e4:
    // 0x1bd2e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bd2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bd2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD2E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD2E8u;
            // 0x1bd2ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD2F0u;
}
