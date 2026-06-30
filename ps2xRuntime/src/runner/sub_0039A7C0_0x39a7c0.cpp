#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0039A7C0
// Address: 0x39a7c0 - 0x39a830
void sub_0039A7C0_0x39a7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A7C0_0x39a7c0");
#endif

    switch (ctx->pc) {
        case 0x39a800u: goto label_39a800;
        case 0x39a818u: goto label_39a818;
        default: break;
    }

    ctx->pc = 0x39a7c0u;

    // 0x39a7c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39a7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39a7c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39a7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39a7c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39a7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39a7cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39a7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39a7d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39a7d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a7d4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x39A7D4u;
    {
        const bool branch_taken_0x39a7d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A7D4u;
            // 0x39a7d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a7d4) {
            ctx->pc = 0x39A818u;
            goto label_39a818;
        }
    }
    ctx->pc = 0x39A7DCu;
    // 0x39a7dc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x39A7DCu;
    {
        const bool branch_taken_0x39a7dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a7dc) {
            ctx->pc = 0x39A7E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39A7DCu;
            // 0x39a7e0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39A804u;
            goto label_39a804;
        }
    }
    ctx->pc = 0x39A7E4u;
    // 0x39a7e4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x39A7E4u;
    {
        const bool branch_taken_0x39a7e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a7e4) {
            ctx->pc = 0x39A800u;
            goto label_39a800;
        }
    }
    ctx->pc = 0x39A7ECu;
    // 0x39a7ec: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x39a7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x39a7f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39A7F0u;
    {
        const bool branch_taken_0x39a7f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a7f0) {
            ctx->pc = 0x39A800u;
            goto label_39a800;
        }
    }
    ctx->pc = 0x39A7F8u;
    // 0x39a7f8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x39A7F8u;
    SET_GPR_U32(ctx, 31, 0x39A800u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A800u; }
        if (ctx->pc != 0x39A800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A800u; }
        if (ctx->pc != 0x39A800u) { return; }
    }
    ctx->pc = 0x39A800u;
label_39a800:
    // 0x39a800: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x39a800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_39a804:
    // 0x39a804: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x39a804u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x39a808: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39A808u;
    {
        const bool branch_taken_0x39a808 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x39a808) {
            ctx->pc = 0x39A80Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39A808u;
            // 0x39a80c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39A81Cu;
            goto label_39a81c;
        }
    }
    ctx->pc = 0x39A810u;
    // 0x39a810: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x39A810u;
    SET_GPR_U32(ctx, 31, 0x39A818u);
    ctx->pc = 0x39A814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A810u;
            // 0x39a814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A818u; }
        if (ctx->pc != 0x39A818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A818u; }
        if (ctx->pc != 0x39A818u) { return; }
    }
    ctx->pc = 0x39A818u;
label_39a818:
    // 0x39a818: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x39a818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39a81c:
    // 0x39a81c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39a81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39a820: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39a820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39a824: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39a824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a828: 0x3e00008  jr          $ra
    ctx->pc = 0x39A828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A828u;
            // 0x39a82c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39A830u;
}
