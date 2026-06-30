#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AE0A8
// Address: 0x1ae0a8 - 0x1ae0f8
void sub_001AE0A8_0x1ae0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE0A8_0x1ae0a8");
#endif

    switch (ctx->pc) {
        case 0x1ae0e8u: goto label_1ae0e8;
        default: break;
    }

    ctx->pc = 0x1ae0a8u;

    // 0x1ae0a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ae0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ae0ac: 0x24853724  addiu       $a1, $a0, 0x3724
    ctx->pc = 0x1ae0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 14116));
    // 0x1ae0b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ae0b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ae0b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae0b8: 0x24830ea0  addiu       $v1, $a0, 0xEA0
    ctx->pc = 0x1ae0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3744));
    // 0x1ae0bc: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x1ae0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ae0c0: 0x4c0000a  bltz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1AE0C0u;
    {
        const bool branch_taken_0x1ae0c0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1AE0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE0C0u;
            // 0x1ae0c4: 0x24880e48  addiu       $t0, $a0, 0xE48 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 3656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0c0) {
            ctx->pc = 0x1AE0ECu;
            goto label_1ae0ec;
        }
    }
    ctx->pc = 0x1AE0C8u;
    // 0x1ae0c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ae0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ae0cc: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE0CCu;
    {
        const bool branch_taken_0x1ae0cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae0cc) {
            ctx->pc = 0x1AE0D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE0CCu;
            // 0x1ae0d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AE0F0u;
            goto label_1ae0f0;
        }
    }
    ctx->pc = 0x1AE0D4u;
    // 0x1ae0d4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1ae0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae0d8: 0x8d060024  lw          $a2, 0x24($t0)
    ctx->pc = 0x1ae0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x1ae0dc: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x1ae0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ae0e0: 0xc062890  jal         func_18A240
    ctx->pc = 0x1AE0E0u;
    SET_GPR_U32(ctx, 31, 0x1AE0E8u);
    ctx->pc = 0x1AE0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE0E0u;
            // 0x1ae0e4: 0x8d070028  lw          $a3, 0x28($t0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A240u;
    if (runtime->hasFunction(0x18A240u)) {
        auto targetFn = runtime->lookupFunction(0x18A240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE0E8u; }
        if (ctx->pc != 0x1AE0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A240_0x18a240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE0E8u; }
        if (ctx->pc != 0x1AE0E8u) { return; }
    }
    ctx->pc = 0x1AE0E8u;
label_1ae0e8:
    // 0x1ae0e8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1ae0e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1ae0ec:
    // 0x1ae0ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae0f0:
    // 0x1ae0f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE0F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE0F0u;
            // 0x1ae0f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AE0F8u;
}
