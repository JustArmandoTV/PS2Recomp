#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E0610
// Address: 0x3e0610 - 0x3e0650
void sub_003E0610_0x3e0610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0610_0x3e0610");
#endif

    switch (ctx->pc) {
        case 0x3e062cu: goto label_3e062c;
        case 0x3e063cu: goto label_3e063c;
        default: break;
    }

    ctx->pc = 0x3e0610u;

    // 0x3e0610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e0610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e0614: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3e0614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3e0618: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x3e0618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x3e061c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E061Cu;
    {
        const bool branch_taken_0x3e061c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E061Cu;
            // 0x3e0620: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e061c) {
            ctx->pc = 0x3E0634u;
            goto label_3e0634;
        }
    }
    ctx->pc = 0x3E0624u;
    // 0x3e0624: 0xc0538d8  jal         func_14E360
    ctx->pc = 0x3E0624u;
    SET_GPR_U32(ctx, 31, 0x3E062Cu);
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E062Cu; }
        if (ctx->pc != 0x3E062Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E062Cu; }
        if (ctx->pc != 0x3E062Cu) { return; }
    }
    ctx->pc = 0x3E062Cu;
label_3e062c:
    // 0x3e062c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3E062Cu;
    {
        const bool branch_taken_0x3e062c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E062Cu;
            // 0x3e0630: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e062c) {
            ctx->pc = 0x3E0640u;
            goto label_3e0640;
        }
    }
    ctx->pc = 0x3E0634u;
label_3e0634:
    // 0x3e0634: 0xc050044  jal         func_140110
    ctx->pc = 0x3E0634u;
    SET_GPR_U32(ctx, 31, 0x3E063Cu);
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E063Cu; }
        if (ctx->pc != 0x3E063Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E063Cu; }
        if (ctx->pc != 0x3E063Cu) { return; }
    }
    ctx->pc = 0x3E063Cu;
label_3e063c:
    // 0x3e063c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e063cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e0640:
    // 0x3e0640: 0x3e00008  jr          $ra
    ctx->pc = 0x3E0640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0640u;
            // 0x3e0644: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E0648u;
    // 0x3e0648: 0x0  nop
    ctx->pc = 0x3e0648u;
    // NOP
    // 0x3e064c: 0x0  nop
    ctx->pc = 0x3e064cu;
    // NOP
}
