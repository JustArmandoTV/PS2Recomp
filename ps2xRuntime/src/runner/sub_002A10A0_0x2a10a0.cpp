#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A10A0
// Address: 0x2a10a0 - 0x2a1100
void sub_002A10A0_0x2a10a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A10A0_0x2a10a0");
#endif

    switch (ctx->pc) {
        case 0x2a10f4u: goto label_2a10f4;
        default: break;
    }

    ctx->pc = 0x2a10a0u;

    // 0x2a10a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a10a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a10a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a10a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a10a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a10a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a10ac: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x2a10acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a10b0: 0xffa60030  sd          $a2, 0x30($sp)
    ctx->pc = 0x2a10b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x2a10b4: 0xffa70038  sd          $a3, 0x38($sp)
    ctx->pc = 0x2a10b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 7));
    // 0x2a10b8: 0xffa80040  sd          $t0, 0x40($sp)
    ctx->pc = 0x2a10b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 8));
    // 0x2a10bc: 0xffa90048  sd          $t1, 0x48($sp)
    ctx->pc = 0x2a10bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 9));
    // 0x2a10c0: 0xffaa0050  sd          $t2, 0x50($sp)
    ctx->pc = 0x2a10c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 10));
    // 0x2a10c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A10C4u;
    {
        const bool branch_taken_0x2a10c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A10C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A10C4u;
            // 0x2a10c8: 0xffab0058  sd          $t3, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a10c4) {
            ctx->pc = 0x2A10D4u;
            goto label_2a10d4;
        }
    }
    ctx->pc = 0x2A10CCu;
    // 0x2a10cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A10CCu;
    {
        const bool branch_taken_0x2a10cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A10D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A10CCu;
            // 0x2a10d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a10cc) {
            ctx->pc = 0x2A10E0u;
            goto label_2a10e0;
        }
    }
    ctx->pc = 0x2A10D4u;
label_2a10d4:
    // 0x2a10d4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2a10d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a10d8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a10d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a10dc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2a10dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2a10e0:
    // 0x2a10e0: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2a10e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a10e4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2a10e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2a10e8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2a10e8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2a10ec: 0xc04c136  jal         func_1304D8
    ctx->pc = 0x2A10ECu;
    SET_GPR_U32(ctx, 31, 0x2A10F4u);
    ctx->pc = 0x2A10F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A10ECu;
            // 0x2a10f0: 0x433023  subu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1304D8u;
    if (runtime->hasFunction(0x1304D8u)) {
        auto targetFn = runtime->lookupFunction(0x1304D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A10F4u; }
        if (ctx->pc != 0x2A10F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001304D8_0x1304d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A10F4u; }
        if (ctx->pc != 0x2A10F4u) { return; }
    }
    ctx->pc = 0x2A10F4u;
label_2a10f4:
    // 0x2a10f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a10f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a10f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A10F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A10FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A10F8u;
            // 0x2a10fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A1100u;
}
