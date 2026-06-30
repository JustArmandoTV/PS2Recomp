#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003855E0
// Address: 0x3855e0 - 0x385630
void sub_003855E0_0x3855e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003855E0_0x3855e0");
#endif

    switch (ctx->pc) {
        case 0x38561cu: goto label_38561c;
        default: break;
    }

    ctx->pc = 0x3855e0u;

    // 0x3855e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3855e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3855e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3855e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3855e8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3855e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3855ec: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x3855ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x3855f0: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x3855f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x3855f4: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x3855f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3855f8: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3855F8u;
    {
        const bool branch_taken_0x3855f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3855f8) {
            ctx->pc = 0x3855FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3855F8u;
            // 0x3855fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x385620u;
            goto label_385620;
        }
    }
    ctx->pc = 0x385600u;
    // 0x385600: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x385600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x385604: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x385604u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x385608: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x385608u;
    {
        const bool branch_taken_0x385608 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x385608) {
            ctx->pc = 0x38560Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x385608u;
            // 0x38560c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x385610u;
            goto label_385610;
        }
    }
    ctx->pc = 0x385610u;
label_385610:
    // 0x385610: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x385610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385614: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x385614u;
    SET_GPR_U32(ctx, 31, 0x38561Cu);
    ctx->pc = 0x385618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385614u;
            // 0x385618: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38561Cu; }
        if (ctx->pc != 0x38561Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38561Cu; }
        if (ctx->pc != 0x38561Cu) { return; }
    }
    ctx->pc = 0x38561Cu;
label_38561c:
    // 0x38561c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38561cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_385620:
    // 0x385620: 0x3e00008  jr          $ra
    ctx->pc = 0x385620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x385620u;
            // 0x385624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x385628u;
    // 0x385628: 0x0  nop
    ctx->pc = 0x385628u;
    // NOP
    // 0x38562c: 0x0  nop
    ctx->pc = 0x38562cu;
    // NOP
}
