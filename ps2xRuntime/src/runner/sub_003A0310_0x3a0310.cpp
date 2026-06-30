#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A0310
// Address: 0x3a0310 - 0x3a0350
void sub_003A0310_0x3a0310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0310_0x3a0310");
#endif

    switch (ctx->pc) {
        case 0x3a032cu: goto label_3a032c;
        case 0x3a033cu: goto label_3a033c;
        default: break;
    }

    ctx->pc = 0x3a0310u;

    // 0x3a0310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a0310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a0314: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3a0314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3a0318: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x3a0318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x3a031c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A031Cu;
    {
        const bool branch_taken_0x3a031c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A031Cu;
            // 0x3a0320: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a031c) {
            ctx->pc = 0x3A0334u;
            goto label_3a0334;
        }
    }
    ctx->pc = 0x3A0324u;
    // 0x3a0324: 0xc0538d8  jal         func_14E360
    ctx->pc = 0x3A0324u;
    SET_GPR_U32(ctx, 31, 0x3A032Cu);
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A032Cu; }
        if (ctx->pc != 0x3A032Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A032Cu; }
        if (ctx->pc != 0x3A032Cu) { return; }
    }
    ctx->pc = 0x3A032Cu;
label_3a032c:
    // 0x3a032c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A032Cu;
    {
        const bool branch_taken_0x3a032c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A032Cu;
            // 0x3a0330: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a032c) {
            ctx->pc = 0x3A0340u;
            goto label_3a0340;
        }
    }
    ctx->pc = 0x3A0334u;
label_3a0334:
    // 0x3a0334: 0xc050044  jal         func_140110
    ctx->pc = 0x3A0334u;
    SET_GPR_U32(ctx, 31, 0x3A033Cu);
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A033Cu; }
        if (ctx->pc != 0x3A033Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A033Cu; }
        if (ctx->pc != 0x3A033Cu) { return; }
    }
    ctx->pc = 0x3A033Cu;
label_3a033c:
    // 0x3a033c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a033cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a0340:
    // 0x3a0340: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0340u;
            // 0x3a0344: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A0348u;
    // 0x3a0348: 0x0  nop
    ctx->pc = 0x3a0348u;
    // NOP
    // 0x3a034c: 0x0  nop
    ctx->pc = 0x3a034cu;
    // NOP
}
