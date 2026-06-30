#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC298
// Address: 0x1bc298 - 0x1bc2e8
void sub_001BC298_0x1bc298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC298_0x1bc298");
#endif

    switch (ctx->pc) {
        case 0x1bc2b0u: goto label_1bc2b0;
        default: break;
    }

    ctx->pc = 0x1bc298u;

    // 0x1bc298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bc298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bc29c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bc29cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bc2a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bc2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bc2a4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bc2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bc2a8: 0xc06ef36  jal         func_1BBCD8
    ctx->pc = 0x1BC2A8u;
    SET_GPR_U32(ctx, 31, 0x1BC2B0u);
    ctx->pc = 0x1BC2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC2A8u;
            // 0x1bc2ac: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBCD8u;
    if (runtime->hasFunction(0x1BBCD8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC2B0u; }
        if (ctx->pc != 0x1BC2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBCD8_0x1bbcd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC2B0u; }
        if (ctx->pc != 0x1BC2B0u) { return; }
    }
    ctx->pc = 0x1BC2B0u;
label_1bc2b0:
    // 0x1bc2b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bc2b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc2b4: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BC2B4u;
    {
        const bool branch_taken_0x1bc2b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc2b4) {
            ctx->pc = 0x1BC2B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC2B4u;
            // 0x1bc2b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC2DCu;
            goto label_1bc2dc;
        }
    }
    ctx->pc = 0x1BC2BCu;
    // 0x1bc2bc: 0x90620026  lbu         $v0, 0x26($v1)
    ctx->pc = 0x1bc2bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x1bc2c0: 0x28430040  slti        $v1, $v0, 0x40
    ctx->pc = 0x1bc2c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1bc2c4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC2C4u;
    {
        const bool branch_taken_0x1bc2c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC2C4u;
            // 0x1bc2c8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc2c4) {
            ctx->pc = 0x1BC2D4u;
            goto label_1bc2d4;
        }
    }
    ctx->pc = 0x1BC2CCu;
    // 0x1bc2cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bc2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bc2d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1bc2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1bc2d4:
    // 0x1bc2d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc2d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc2d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bc2dc:
    // 0x1bc2dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bc2dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bc2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC2E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC2E0u;
            // 0x1bc2e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC2E8u;
}
