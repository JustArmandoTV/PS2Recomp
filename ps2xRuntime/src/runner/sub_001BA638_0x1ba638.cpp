#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BA638
// Address: 0x1ba638 - 0x1ba690
void sub_001BA638_0x1ba638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA638_0x1ba638");
#endif

    switch (ctx->pc) {
        case 0x1ba670u: goto label_1ba670;
        case 0x1ba680u: goto label_1ba680;
        default: break;
    }

    ctx->pc = 0x1ba638u;

    // 0x1ba638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba63c: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1ba63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ba640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba644: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1ba644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1ba648: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1ba648u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ba64c: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA64Cu;
    {
        const bool branch_taken_0x1ba64c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA64Cu;
            // 0x1ba650: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba64c) {
            ctx->pc = 0x1BA668u;
            goto label_1ba668;
        }
    }
    ctx->pc = 0x1BA654u;
    // 0x1ba654: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1ba654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1ba658: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA658u;
    {
        const bool branch_taken_0x1ba658 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA658u;
            // 0x1ba65c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba658) {
            ctx->pc = 0x1BA678u;
            goto label_1ba678;
        }
    }
    ctx->pc = 0x1BA660u;
    // 0x1ba660: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA660u;
    {
        const bool branch_taken_0x1ba660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA660u;
            // 0x1ba664: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba660) {
            ctx->pc = 0x1BA684u;
            goto label_1ba684;
        }
    }
    ctx->pc = 0x1BA668u;
label_1ba668:
    // 0x1ba668: 0xc06ed6a  jal         func_1BB5A8
    ctx->pc = 0x1BA668u;
    SET_GPR_U32(ctx, 31, 0x1BA670u);
    ctx->pc = 0x1BB5A8u;
    if (runtime->hasFunction(0x1BB5A8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA670u; }
        if (ctx->pc != 0x1BA670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB5A8_0x1bb5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA670u; }
        if (ctx->pc != 0x1BA670u) { return; }
    }
    ctx->pc = 0x1BA670u;
label_1ba670:
    // 0x1ba670: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA670u;
    {
        const bool branch_taken_0x1ba670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA670u;
            // 0x1ba674: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba670) {
            ctx->pc = 0x1BA684u;
            goto label_1ba684;
        }
    }
    ctx->pc = 0x1BA678u;
label_1ba678:
    // 0x1ba678: 0xc06f114  jal         func_1BC450
    ctx->pc = 0x1BA678u;
    SET_GPR_U32(ctx, 31, 0x1BA680u);
    ctx->pc = 0x1BA67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA678u;
            // 0x1ba67c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BC450u;
    if (runtime->hasFunction(0x1BC450u)) {
        auto targetFn = runtime->lookupFunction(0x1BC450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA680u; }
        if (ctx->pc != 0x1BA680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC450_0x1bc450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA680u; }
        if (ctx->pc != 0x1BA680u) { return; }
    }
    ctx->pc = 0x1BA680u;
label_1ba680:
    // 0x1ba680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba684:
    // 0x1ba684: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA684u;
            // 0x1ba688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA68Cu;
    // 0x1ba68c: 0x0  nop
    ctx->pc = 0x1ba68cu;
    // NOP
}
