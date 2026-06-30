#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044F640
// Address: 0x44f640 - 0x44f6b0
void sub_0044F640_0x44f640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044F640_0x44f640");
#endif

    switch (ctx->pc) {
        case 0x44f680u: goto label_44f680;
        case 0x44f698u: goto label_44f698;
        default: break;
    }

    ctx->pc = 0x44f640u;

    // 0x44f640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44f640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44f644: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44f644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x44f648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44f648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x44f64c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44f64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x44f650: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44f650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f654: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x44F654u;
    {
        const bool branch_taken_0x44f654 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F654u;
            // 0x44f658: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f654) {
            ctx->pc = 0x44F698u;
            goto label_44f698;
        }
    }
    ctx->pc = 0x44F65Cu;
    // 0x44f65c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x44F65Cu;
    {
        const bool branch_taken_0x44f65c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x44f65c) {
            ctx->pc = 0x44F660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44F65Cu;
            // 0x44f660: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44F684u;
            goto label_44f684;
        }
    }
    ctx->pc = 0x44F664u;
    // 0x44f664: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x44F664u;
    {
        const bool branch_taken_0x44f664 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x44f664) {
            ctx->pc = 0x44F680u;
            goto label_44f680;
        }
    }
    ctx->pc = 0x44F66Cu;
    // 0x44f66c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x44f66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x44f670: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x44F670u;
    {
        const bool branch_taken_0x44f670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44f670) {
            ctx->pc = 0x44F680u;
            goto label_44f680;
        }
    }
    ctx->pc = 0x44F678u;
    // 0x44f678: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x44F678u;
    SET_GPR_U32(ctx, 31, 0x44F680u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F680u; }
        if (ctx->pc != 0x44F680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F680u; }
        if (ctx->pc != 0x44F680u) { return; }
    }
    ctx->pc = 0x44F680u;
label_44f680:
    // 0x44f680: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x44f680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_44f684:
    // 0x44f684: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x44f684u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x44f688: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x44F688u;
    {
        const bool branch_taken_0x44f688 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x44f688) {
            ctx->pc = 0x44F68Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44F688u;
            // 0x44f68c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44F69Cu;
            goto label_44f69c;
        }
    }
    ctx->pc = 0x44F690u;
    // 0x44f690: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x44F690u;
    SET_GPR_U32(ctx, 31, 0x44F698u);
    ctx->pc = 0x44F694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F690u;
            // 0x44f694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F698u; }
        if (ctx->pc != 0x44F698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F698u; }
        if (ctx->pc != 0x44F698u) { return; }
    }
    ctx->pc = 0x44F698u;
label_44f698:
    // 0x44f698: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x44f698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44f69c:
    // 0x44f69c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44f69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44f6a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44f6a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f6a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44f6a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44f6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x44F6A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44F6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F6A8u;
            // 0x44f6ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44F6B0u;
}
