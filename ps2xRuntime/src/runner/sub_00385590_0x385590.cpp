#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00385590
// Address: 0x385590 - 0x3855e0
void sub_00385590_0x385590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385590_0x385590");
#endif

    switch (ctx->pc) {
        case 0x3855ccu: goto label_3855cc;
        default: break;
    }

    ctx->pc = 0x385590u;

    // 0x385590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x385590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x385594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x385594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x385598: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x385598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38559c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x38559cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x3855a0: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x3855a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x3855a4: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x3855a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3855a8: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3855A8u;
    {
        const bool branch_taken_0x3855a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3855a8) {
            ctx->pc = 0x3855ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3855A8u;
            // 0x3855ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3855D0u;
            goto label_3855d0;
        }
    }
    ctx->pc = 0x3855B0u;
    // 0x3855b0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3855b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3855b4: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x3855b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3855b8: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3855B8u;
    {
        const bool branch_taken_0x3855b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3855b8) {
            ctx->pc = 0x3855BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3855B8u;
            // 0x3855bc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3855C0u;
            goto label_3855c0;
        }
    }
    ctx->pc = 0x3855C0u;
label_3855c0:
    // 0x3855c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3855c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3855c4: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x3855C4u;
    SET_GPR_U32(ctx, 31, 0x3855CCu);
    ctx->pc = 0x3855C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3855C4u;
            // 0x3855c8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3855CCu; }
        if (ctx->pc != 0x3855CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3855CCu; }
        if (ctx->pc != 0x3855CCu) { return; }
    }
    ctx->pc = 0x3855CCu;
label_3855cc:
    // 0x3855cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3855ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3855d0:
    // 0x3855d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3855D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3855D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3855D0u;
            // 0x3855d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3855D8u;
    // 0x3855d8: 0x0  nop
    ctx->pc = 0x3855d8u;
    // NOP
    // 0x3855dc: 0x0  nop
    ctx->pc = 0x3855dcu;
    // NOP
}
