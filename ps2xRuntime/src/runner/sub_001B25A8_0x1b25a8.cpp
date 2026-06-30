#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B25A8
// Address: 0x1b25a8 - 0x1b2658
void sub_001B25A8_0x1b25a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B25A8_0x1b25a8");
#endif

    switch (ctx->pc) {
        case 0x1b25bcu: goto label_1b25bc;
        case 0x1b25e8u: goto label_1b25e8;
        case 0x1b2620u: goto label_1b2620;
        case 0x1b2628u: goto label_1b2628;
        case 0x1b2638u: goto label_1b2638;
        default: break;
    }

    ctx->pc = 0x1b25a8u;

    // 0x1b25a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b25a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b25ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b25acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b25b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b25b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b25b4: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B25B4u;
    SET_GPR_U32(ctx, 31, 0x1B25BCu);
    ctx->pc = 0x1B25B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B25B4u;
            // 0x1b25b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B25BCu; }
        if (ctx->pc != 0x1B25BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B25BCu; }
        if (ctx->pc != 0x1B25BCu) { return; }
    }
    ctx->pc = 0x1B25BCu;
label_1b25bc:
    // 0x1b25bc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b25bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b25c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b25c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b25c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B25C4u;
    {
        const bool branch_taken_0x1b25c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B25C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B25C4u;
            // 0x1b25c8: 0x34a50138  ori         $a1, $a1, 0x138 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)312);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b25c4) {
            ctx->pc = 0x1B25E0u;
            goto label_1b25e0;
        }
    }
    ctx->pc = 0x1B25CCu;
    // 0x1b25cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b25ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b25d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b25d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b25d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b25d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b25d8: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B25D8u;
    ctx->pc = 0x1B25DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B25D8u;
            // 0x1b25dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B25E0u;
label_1b25e0:
    // 0x1b25e0: 0xc06c996  jal         func_1B2658
    ctx->pc = 0x1B25E0u;
    SET_GPR_U32(ctx, 31, 0x1B25E8u);
    ctx->pc = 0x1B2658u;
    if (runtime->hasFunction(0x1B2658u)) {
        auto targetFn = runtime->lookupFunction(0x1B2658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B25E8u; }
        if (ctx->pc != 0x1B25E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2658_0x1b2658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B25E8u; }
        if (ctx->pc != 0x1B25E8u) { return; }
    }
    ctx->pc = 0x1B25E8u;
label_1b25e8:
    // 0x1b25e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b25e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b25ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b25ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b25f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b25f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b25f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B25F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B25F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B25F4u;
            // 0x1b25f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B25FCu;
    // 0x1b25fc: 0x0  nop
    ctx->pc = 0x1b25fcu;
    // NOP
    // 0x1b2600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b2604: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b2604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2608: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b2608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b260c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b260cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2610: 0x24509b8c  addiu       $s0, $v0, -0x6474
    ctx->pc = 0x1b2610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941580));
    // 0x1b2614: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b2614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2618: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x1b2618u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b261c: 0x0  nop
    ctx->pc = 0x1b261cu;
    // NOP
label_1b2620:
    // 0x1b2620: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B2620u;
    SET_GPR_U32(ctx, 31, 0x1B2628u);
    ctx->pc = 0x1B2624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2620u;
            // 0x1b2624: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2628u; }
        if (ctx->pc != 0x1B2628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2628u; }
        if (ctx->pc != 0x1B2628u) { return; }
    }
    ctx->pc = 0x1B2628u;
label_1b2628:
    // 0x1b2628: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2628u;
    {
        const bool branch_taken_0x1b2628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2628) {
            ctx->pc = 0x1B262Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2628u;
            // 0x1b262c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B263Cu;
            goto label_1b263c;
        }
    }
    ctx->pc = 0x1B2630u;
    // 0x1b2630: 0xc06c996  jal         func_1B2658
    ctx->pc = 0x1B2630u;
    SET_GPR_U32(ctx, 31, 0x1B2638u);
    ctx->pc = 0x1B2634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2630u;
            // 0x1b2634: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2658u;
    if (runtime->hasFunction(0x1B2658u)) {
        auto targetFn = runtime->lookupFunction(0x1B2658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2638u; }
        if (ctx->pc != 0x1B2638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2658_0x1b2658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2638u; }
        if (ctx->pc != 0x1B2638u) { return; }
    }
    ctx->pc = 0x1B2638u;
label_1b2638:
    // 0x1b2638: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1b2638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1b263c:
    // 0x1b263c: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B263Cu;
    {
        const bool branch_taken_0x1b263c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1B2640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B263Cu;
            // 0x1b2640: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b263c) {
            ctx->pc = 0x1B2620u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b2620;
        }
    }
    ctx->pc = 0x1B2644u;
    // 0x1b2644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2648: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2648u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b264c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b264cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2650: 0x806cd48  j           func_1B3520
    ctx->pc = 0x1B2650u;
    ctx->pc = 0x1B2654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2650u;
            // 0x1b2654: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3520u;
    {
        auto targetFn = runtime->lookupFunction(0x1B3520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B2658u;
}
