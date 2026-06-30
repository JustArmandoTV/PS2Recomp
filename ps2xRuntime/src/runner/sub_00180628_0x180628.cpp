#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180628
// Address: 0x180628 - 0x180660
void sub_00180628_0x180628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180628_0x180628");
#endif

    switch (ctx->pc) {
        case 0x18063cu: goto label_18063c;
        case 0x180644u: goto label_180644;
        case 0x18064cu: goto label_18064c;
        default: break;
    }

    ctx->pc = 0x180628u;

    // 0x180628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18062c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18062cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180630: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x180630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x180634: 0xc06031a  jal         func_180C68
    ctx->pc = 0x180634u;
    SET_GPR_U32(ctx, 31, 0x18063Cu);
    ctx->pc = 0x180638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180634u;
            // 0x180638: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C68u;
    if (runtime->hasFunction(0x180C68u)) {
        auto targetFn = runtime->lookupFunction(0x180C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18063Cu; }
        if (ctx->pc != 0x18063Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C68_0x180c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18063Cu; }
        if (ctx->pc != 0x18063Cu) { return; }
    }
    ctx->pc = 0x18063Cu;
label_18063c:
    // 0x18063c: 0xc060198  jal         func_180660
    ctx->pc = 0x18063Cu;
    SET_GPR_U32(ctx, 31, 0x180644u);
    ctx->pc = 0x180640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18063Cu;
            // 0x180640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180660u;
    if (runtime->hasFunction(0x180660u)) {
        auto targetFn = runtime->lookupFunction(0x180660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180644u; }
        if (ctx->pc != 0x180644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180660_0x180660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180644u; }
        if (ctx->pc != 0x180644u) { return; }
    }
    ctx->pc = 0x180644u;
label_180644:
    // 0x180644: 0xc06031c  jal         func_180C70
    ctx->pc = 0x180644u;
    SET_GPR_U32(ctx, 31, 0x18064Cu);
    ctx->pc = 0x180648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180644u;
            // 0x180648: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C70u;
    if (runtime->hasFunction(0x180C70u)) {
        auto targetFn = runtime->lookupFunction(0x180C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18064Cu; }
        if (ctx->pc != 0x18064Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C70_0x180c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18064Cu; }
        if (ctx->pc != 0x18064Cu) { return; }
    }
    ctx->pc = 0x18064Cu;
label_18064c:
    // 0x18064c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18064cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180650: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x180650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180654: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180658: 0x3e00008  jr          $ra
    ctx->pc = 0x180658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18065Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180658u;
            // 0x18065c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180660u;
}
