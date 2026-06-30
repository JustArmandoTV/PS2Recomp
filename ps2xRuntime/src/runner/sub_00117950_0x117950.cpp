#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117950
// Address: 0x117950 - 0x1179a0
void sub_00117950_0x117950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117950_0x117950");
#endif

    switch (ctx->pc) {
        case 0x117968u: goto label_117968;
        case 0x117974u: goto label_117974;
        case 0x117984u: goto label_117984;
        default: break;
    }

    ctx->pc = 0x117950u;

    // 0x117950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x117950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117954: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117958: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11795c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11795cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x117960: 0xc045968  jal         func_1165A0
    ctx->pc = 0x117960u;
    SET_GPR_U32(ctx, 31, 0x117968u);
    ctx->pc = 0x117964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117960u;
            // 0x117964: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117968u; }
        if (ctx->pc != 0x117968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117968u; }
        if (ctx->pc != 0x117968u) { return; }
    }
    ctx->pc = 0x117968u;
label_117968:
    // 0x117968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11796c: 0xc045e24  jal         func_117890
    ctx->pc = 0x11796Cu;
    SET_GPR_U32(ctx, 31, 0x117974u);
    ctx->pc = 0x117970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11796Cu;
            // 0x117970: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117890u;
    if (runtime->hasFunction(0x117890u)) {
        auto targetFn = runtime->lookupFunction(0x117890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117974u; }
        if (ctx->pc != 0x117974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117890_0x117890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117974u; }
        if (ctx->pc != 0x117974u) { return; }
    }
    ctx->pc = 0x117974u;
label_117974:
    // 0x117974: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x117974u;
    {
        const bool branch_taken_0x117974 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x117978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117974u;
            // 0x117978: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117974) {
            ctx->pc = 0x117984u;
            goto label_117984;
        }
    }
    ctx->pc = 0x11797Cu;
    // 0x11797c: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x11797Cu;
    SET_GPR_U32(ctx, 31, 0x117984u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117984u; }
        if (ctx->pc != 0x117984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117984u; }
        if (ctx->pc != 0x117984u) { return; }
    }
    ctx->pc = 0x117984u;
label_117984:
    // 0x117984: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x117984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117988: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x117988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11798c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11798cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117990: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117994: 0x3e00008  jr          $ra
    ctx->pc = 0x117994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117994u;
            // 0x117998: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11799Cu;
    // 0x11799c: 0x0  nop
    ctx->pc = 0x11799cu;
    // NOP
}
