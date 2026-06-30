#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00374070
// Address: 0x374070 - 0x3740b0
void sub_00374070_0x374070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374070_0x374070");
#endif

    switch (ctx->pc) {
        case 0x37409cu: goto label_37409c;
        default: break;
    }

    ctx->pc = 0x374070u;

    // 0x374070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x374070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x374074: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x374074u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
    // 0x374078: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x374078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37407c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37407cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x374080: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x374080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x374084: 0x3405fd3c  ori         $a1, $zero, 0xFD3C
    ctx->pc = 0x374084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64828);
    // 0x374088: 0x8c506058  lw          $s0, 0x6058($v0)
    ctx->pc = 0x374088u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24664)));
    // 0x37408c: 0x24e77790  addiu       $a3, $a3, 0x7790
    ctx->pc = 0x37408cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30608));
    // 0x374090: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x374090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x374094: 0xc155a20  jal         func_556880
    ctx->pc = 0x374094u;
    SET_GPR_U32(ctx, 31, 0x37409Cu);
    ctx->pc = 0x374098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374094u;
            // 0x374098: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x556880u;
    if (runtime->hasFunction(0x556880u)) {
        auto targetFn = runtime->lookupFunction(0x556880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37409Cu; }
        if (ctx->pc != 0x37409Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00556880_0x556880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37409Cu; }
        if (ctx->pc != 0x37409Cu) { return; }
    }
    ctx->pc = 0x37409Cu;
label_37409c:
    // 0x37409c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37409cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3740a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3740a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3740a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3740a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3740a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3740A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3740ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3740A8u;
            // 0x3740ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3740B0u;
}
