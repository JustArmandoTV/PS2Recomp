#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013A050
// Address: 0x13a050 - 0x13a0a0
void sub_0013A050_0x13a050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A050_0x13a050");
#endif

    switch (ctx->pc) {
        case 0x13a070u: goto label_13a070;
        case 0x13a080u: goto label_13a080;
        default: break;
    }

    ctx->pc = 0x13a050u;

    // 0x13a050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13a050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13a054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13a054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13a058: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x13a058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x13a05c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x13a05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x13a060: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13A060u;
    {
        const bool branch_taken_0x13a060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a060) {
            ctx->pc = 0x13A078u;
            goto label_13a078;
        }
    }
    ctx->pc = 0x13A068u;
    // 0x13a068: 0xc056900  jal         func_15A400
    ctx->pc = 0x13A068u;
    SET_GPR_U32(ctx, 31, 0x13A070u);
    ctx->pc = 0x15A400u;
    if (runtime->hasFunction(0x15A400u)) {
        auto targetFn = runtime->lookupFunction(0x15A400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A070u; }
        if (ctx->pc != 0x13A070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A400_0x15a400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A070u; }
        if (ctx->pc != 0x13A070u) { return; }
    }
    ctx->pc = 0x13A070u;
label_13a070:
    // 0x13a070: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13A070u;
    {
        const bool branch_taken_0x13a070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A070u;
            // 0x13a074: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a070) {
            ctx->pc = 0x13A084u;
            goto label_13a084;
        }
    }
    ctx->pc = 0x13A078u;
label_13a078:
    // 0x13a078: 0xc056584  jal         func_159610
    ctx->pc = 0x13A078u;
    SET_GPR_U32(ctx, 31, 0x13A080u);
    ctx->pc = 0x159610u;
    if (runtime->hasFunction(0x159610u)) {
        auto targetFn = runtime->lookupFunction(0x159610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A080u; }
        if (ctx->pc != 0x13A080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00159610_0x159610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A080u; }
        if (ctx->pc != 0x13A080u) { return; }
    }
    ctx->pc = 0x13A080u;
label_13a080:
    // 0x13a080: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x13a080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_13a084:
    // 0x13a084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13a084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a088: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x13a088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13a08c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x13a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13a090: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13a090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13a094: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x13a094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x13a098: 0x3e00008  jr          $ra
    ctx->pc = 0x13A098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A098u;
            // 0x13a09c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13A0A0u;
}
