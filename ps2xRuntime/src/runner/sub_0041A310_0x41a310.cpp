#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0041A310
// Address: 0x41a310 - 0x41a380
void sub_0041A310_0x41a310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041A310_0x41a310");
#endif

    switch (ctx->pc) {
        case 0x41a350u: goto label_41a350;
        case 0x41a368u: goto label_41a368;
        default: break;
    }

    ctx->pc = 0x41a310u;

    // 0x41a310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41a310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x41a314: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41a314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x41a318: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41a318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x41a31c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41a31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x41a320: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41a320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a324: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x41A324u;
    {
        const bool branch_taken_0x41a324 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A324u;
            // 0x41a328: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a324) {
            ctx->pc = 0x41A368u;
            goto label_41a368;
        }
    }
    ctx->pc = 0x41A32Cu;
    // 0x41a32c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x41A32Cu;
    {
        const bool branch_taken_0x41a32c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a32c) {
            ctx->pc = 0x41A330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41A32Cu;
            // 0x41a330: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41A354u;
            goto label_41a354;
        }
    }
    ctx->pc = 0x41A334u;
    // 0x41a334: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x41A334u;
    {
        const bool branch_taken_0x41a334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a334) {
            ctx->pc = 0x41A350u;
            goto label_41a350;
        }
    }
    ctx->pc = 0x41A33Cu;
    // 0x41a33c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x41a33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x41a340: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41A340u;
    {
        const bool branch_taken_0x41a340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a340) {
            ctx->pc = 0x41A350u;
            goto label_41a350;
        }
    }
    ctx->pc = 0x41A348u;
    // 0x41a348: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x41A348u;
    SET_GPR_U32(ctx, 31, 0x41A350u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A350u; }
        if (ctx->pc != 0x41A350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A350u; }
        if (ctx->pc != 0x41A350u) { return; }
    }
    ctx->pc = 0x41A350u;
label_41a350:
    // 0x41a350: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x41a350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_41a354:
    // 0x41a354: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x41a354u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x41a358: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x41A358u;
    {
        const bool branch_taken_0x41a358 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x41a358) {
            ctx->pc = 0x41A35Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41A358u;
            // 0x41a35c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41A36Cu;
            goto label_41a36c;
        }
    }
    ctx->pc = 0x41A360u;
    // 0x41a360: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x41A360u;
    SET_GPR_U32(ctx, 31, 0x41A368u);
    ctx->pc = 0x41A364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A360u;
            // 0x41a364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A368u; }
        if (ctx->pc != 0x41A368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A368u; }
        if (ctx->pc != 0x41A368u) { return; }
    }
    ctx->pc = 0x41A368u;
label_41a368:
    // 0x41a368: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x41a368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41a36c:
    // 0x41a36c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41a36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41a370: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41a370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41a374: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41a374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41a378: 0x3e00008  jr          $ra
    ctx->pc = 0x41A378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A378u;
            // 0x41a37c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41A380u;
}
