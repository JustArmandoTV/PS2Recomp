#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004FD8A0
// Address: 0x4fd8a0 - 0x4fd910
void sub_004FD8A0_0x4fd8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FD8A0_0x4fd8a0");
#endif

    switch (ctx->pc) {
        case 0x4fd8e0u: goto label_4fd8e0;
        case 0x4fd8f8u: goto label_4fd8f8;
        default: break;
    }

    ctx->pc = 0x4fd8a0u;

    // 0x4fd8a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4fd8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4fd8a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4fd8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4fd8a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4fd8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4fd8ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4fd8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4fd8b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4fd8b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd8b4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4FD8B4u;
    {
        const bool branch_taken_0x4fd8b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FD8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD8B4u;
            // 0x4fd8b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd8b4) {
            ctx->pc = 0x4FD8F8u;
            goto label_4fd8f8;
        }
    }
    ctx->pc = 0x4FD8BCu;
    // 0x4fd8bc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4FD8BCu;
    {
        const bool branch_taken_0x4fd8bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd8bc) {
            ctx->pc = 0x4FD8C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD8BCu;
            // 0x4fd8c0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FD8E4u;
            goto label_4fd8e4;
        }
    }
    ctx->pc = 0x4FD8C4u;
    // 0x4fd8c4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4FD8C4u;
    {
        const bool branch_taken_0x4fd8c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd8c4) {
            ctx->pc = 0x4FD8E0u;
            goto label_4fd8e0;
        }
    }
    ctx->pc = 0x4FD8CCu;
    // 0x4fd8cc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4fd8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4fd8d0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FD8D0u;
    {
        const bool branch_taken_0x4fd8d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd8d0) {
            ctx->pc = 0x4FD8E0u;
            goto label_4fd8e0;
        }
    }
    ctx->pc = 0x4FD8D8u;
    // 0x4fd8d8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4FD8D8u;
    SET_GPR_U32(ctx, 31, 0x4FD8E0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD8E0u; }
        if (ctx->pc != 0x4FD8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD8E0u; }
        if (ctx->pc != 0x4FD8E0u) { return; }
    }
    ctx->pc = 0x4FD8E0u;
label_4fd8e0:
    // 0x4fd8e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4fd8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4fd8e4:
    // 0x4fd8e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4fd8e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4fd8e8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4FD8E8u;
    {
        const bool branch_taken_0x4fd8e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4fd8e8) {
            ctx->pc = 0x4FD8ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD8E8u;
            // 0x4fd8ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FD8FCu;
            goto label_4fd8fc;
        }
    }
    ctx->pc = 0x4FD8F0u;
    // 0x4fd8f0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4FD8F0u;
    SET_GPR_U32(ctx, 31, 0x4FD8F8u);
    ctx->pc = 0x4FD8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD8F0u;
            // 0x4fd8f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD8F8u; }
        if (ctx->pc != 0x4FD8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD8F8u; }
        if (ctx->pc != 0x4FD8F8u) { return; }
    }
    ctx->pc = 0x4FD8F8u;
label_4fd8f8:
    // 0x4fd8f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4fd8f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4fd8fc:
    // 0x4fd8fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4fd8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4fd900: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4fd900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4fd904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4fd904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fd908: 0x3e00008  jr          $ra
    ctx->pc = 0x4FD908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FD90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD908u;
            // 0x4fd90c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FD910u;
}
