#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004AD660
// Address: 0x4ad660 - 0x4ad6d0
void sub_004AD660_0x4ad660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD660_0x4ad660");
#endif

    switch (ctx->pc) {
        case 0x4ad6a0u: goto label_4ad6a0;
        case 0x4ad6b8u: goto label_4ad6b8;
        default: break;
    }

    ctx->pc = 0x4ad660u;

    // 0x4ad660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ad660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ad664: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ad664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4ad668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ad668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ad66c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ad66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4ad670: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ad670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad674: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4AD674u;
    {
        const bool branch_taken_0x4ad674 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD674u;
            // 0x4ad678: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad674) {
            ctx->pc = 0x4AD6B8u;
            goto label_4ad6b8;
        }
    }
    ctx->pc = 0x4AD67Cu;
    // 0x4ad67c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AD67Cu;
    {
        const bool branch_taken_0x4ad67c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ad67c) {
            ctx->pc = 0x4AD680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD67Cu;
            // 0x4ad680: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AD6A4u;
            goto label_4ad6a4;
        }
    }
    ctx->pc = 0x4AD684u;
    // 0x4ad684: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AD684u;
    {
        const bool branch_taken_0x4ad684 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ad684) {
            ctx->pc = 0x4AD6A0u;
            goto label_4ad6a0;
        }
    }
    ctx->pc = 0x4AD68Cu;
    // 0x4ad68c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4ad68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4ad690: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AD690u;
    {
        const bool branch_taken_0x4ad690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ad690) {
            ctx->pc = 0x4AD6A0u;
            goto label_4ad6a0;
        }
    }
    ctx->pc = 0x4AD698u;
    // 0x4ad698: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4AD698u;
    SET_GPR_U32(ctx, 31, 0x4AD6A0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD6A0u; }
        if (ctx->pc != 0x4AD6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD6A0u; }
        if (ctx->pc != 0x4AD6A0u) { return; }
    }
    ctx->pc = 0x4AD6A0u;
label_4ad6a0:
    // 0x4ad6a0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4ad6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4ad6a4:
    // 0x4ad6a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ad6a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4ad6a8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AD6A8u;
    {
        const bool branch_taken_0x4ad6a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4ad6a8) {
            ctx->pc = 0x4AD6ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD6A8u;
            // 0x4ad6ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AD6BCu;
            goto label_4ad6bc;
        }
    }
    ctx->pc = 0x4AD6B0u;
    // 0x4ad6b0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4AD6B0u;
    SET_GPR_U32(ctx, 31, 0x4AD6B8u);
    ctx->pc = 0x4AD6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD6B0u;
            // 0x4ad6b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD6B8u; }
        if (ctx->pc != 0x4AD6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD6B8u; }
        if (ctx->pc != 0x4AD6B8u) { return; }
    }
    ctx->pc = 0x4AD6B8u;
label_4ad6b8:
    // 0x4ad6b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4ad6b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ad6bc:
    // 0x4ad6bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ad6bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ad6c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ad6c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ad6c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ad6c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD6C8u;
            // 0x4ad6cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AD6D0u;
}
