#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003933C0
// Address: 0x3933c0 - 0x393430
void sub_003933C0_0x3933c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003933C0_0x3933c0");
#endif

    switch (ctx->pc) {
        case 0x393400u: goto label_393400;
        case 0x393418u: goto label_393418;
        default: break;
    }

    ctx->pc = 0x3933c0u;

    // 0x3933c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3933c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3933c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3933c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3933c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3933c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3933cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3933ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3933d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3933d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3933d4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3933D4u;
    {
        const bool branch_taken_0x3933d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3933D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3933D4u;
            // 0x3933d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3933d4) {
            ctx->pc = 0x393418u;
            goto label_393418;
        }
    }
    ctx->pc = 0x3933DCu;
    // 0x3933dc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3933DCu;
    {
        const bool branch_taken_0x3933dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3933dc) {
            ctx->pc = 0x3933E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3933DCu;
            // 0x3933e0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x393404u;
            goto label_393404;
        }
    }
    ctx->pc = 0x3933E4u;
    // 0x3933e4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3933E4u;
    {
        const bool branch_taken_0x3933e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3933e4) {
            ctx->pc = 0x393400u;
            goto label_393400;
        }
    }
    ctx->pc = 0x3933ECu;
    // 0x3933ec: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3933ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3933f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3933F0u;
    {
        const bool branch_taken_0x3933f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3933f0) {
            ctx->pc = 0x393400u;
            goto label_393400;
        }
    }
    ctx->pc = 0x3933F8u;
    // 0x3933f8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3933F8u;
    SET_GPR_U32(ctx, 31, 0x393400u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393400u; }
        if (ctx->pc != 0x393400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393400u; }
        if (ctx->pc != 0x393400u) { return; }
    }
    ctx->pc = 0x393400u;
label_393400:
    // 0x393400: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x393400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_393404:
    // 0x393404: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x393404u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x393408: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x393408u;
    {
        const bool branch_taken_0x393408 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x393408) {
            ctx->pc = 0x39340Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x393408u;
            // 0x39340c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39341Cu;
            goto label_39341c;
        }
    }
    ctx->pc = 0x393410u;
    // 0x393410: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x393410u;
    SET_GPR_U32(ctx, 31, 0x393418u);
    ctx->pc = 0x393414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393410u;
            // 0x393414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393418u; }
        if (ctx->pc != 0x393418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393418u; }
        if (ctx->pc != 0x393418u) { return; }
    }
    ctx->pc = 0x393418u;
label_393418:
    // 0x393418: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x393418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39341c:
    // 0x39341c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39341cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x393420: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x393420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x393424: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x393424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x393428: 0x3e00008  jr          $ra
    ctx->pc = 0x393428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39342Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x393428u;
            // 0x39342c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x393430u;
}
