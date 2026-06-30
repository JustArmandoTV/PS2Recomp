#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00336890
// Address: 0x336890 - 0x336900
void sub_00336890_0x336890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336890_0x336890");
#endif

    switch (ctx->pc) {
        case 0x3368d0u: goto label_3368d0;
        case 0x3368e8u: goto label_3368e8;
        default: break;
    }

    ctx->pc = 0x336890u;

    // 0x336890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x336890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x336894: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x336894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x336898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x336898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33689c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33689cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3368a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3368a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3368a4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3368A4u;
    {
        const bool branch_taken_0x3368a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3368A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3368A4u;
            // 0x3368a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3368a4) {
            ctx->pc = 0x3368E8u;
            goto label_3368e8;
        }
    }
    ctx->pc = 0x3368ACu;
    // 0x3368ac: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3368ACu;
    {
        const bool branch_taken_0x3368ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3368ac) {
            ctx->pc = 0x3368B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3368ACu;
            // 0x3368b0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3368D4u;
            goto label_3368d4;
        }
    }
    ctx->pc = 0x3368B4u;
    // 0x3368b4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3368B4u;
    {
        const bool branch_taken_0x3368b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3368b4) {
            ctx->pc = 0x3368D0u;
            goto label_3368d0;
        }
    }
    ctx->pc = 0x3368BCu;
    // 0x3368bc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3368bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3368c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3368C0u;
    {
        const bool branch_taken_0x3368c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3368c0) {
            ctx->pc = 0x3368D0u;
            goto label_3368d0;
        }
    }
    ctx->pc = 0x3368C8u;
    // 0x3368c8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3368C8u;
    SET_GPR_U32(ctx, 31, 0x3368D0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3368D0u; }
        if (ctx->pc != 0x3368D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3368D0u; }
        if (ctx->pc != 0x3368D0u) { return; }
    }
    ctx->pc = 0x3368D0u;
label_3368d0:
    // 0x3368d0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3368d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3368d4:
    // 0x3368d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3368d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3368d8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3368D8u;
    {
        const bool branch_taken_0x3368d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3368d8) {
            ctx->pc = 0x3368DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3368D8u;
            // 0x3368dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3368ECu;
            goto label_3368ec;
        }
    }
    ctx->pc = 0x3368E0u;
    // 0x3368e0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3368E0u;
    SET_GPR_U32(ctx, 31, 0x3368E8u);
    ctx->pc = 0x3368E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3368E0u;
            // 0x3368e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3368E8u; }
        if (ctx->pc != 0x3368E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3368E8u; }
        if (ctx->pc != 0x3368E8u) { return; }
    }
    ctx->pc = 0x3368E8u;
label_3368e8:
    // 0x3368e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3368e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3368ec:
    // 0x3368ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3368ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3368f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3368f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3368f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3368f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3368f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3368F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3368FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3368F8u;
            // 0x3368fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x336900u;
}
