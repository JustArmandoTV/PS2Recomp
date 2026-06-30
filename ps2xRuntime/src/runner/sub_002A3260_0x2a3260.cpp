#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A3260
// Address: 0x2a3260 - 0x2a33e0
void sub_002A3260_0x2a3260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3260_0x2a3260");
#endif

    switch (ctx->pc) {
        case 0x2a3284u: goto label_2a3284;
        case 0x2a329cu: goto label_2a329c;
        case 0x2a32f0u: goto label_2a32f0;
        case 0x2a3308u: goto label_2a3308;
        case 0x2a3350u: goto label_2a3350;
        case 0x2a3368u: goto label_2a3368;
        case 0x2a33acu: goto label_2a33ac;
        default: break;
    }

    ctx->pc = 0x2a3260u;

    // 0x2a3260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a3260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a3264: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a3264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a3268: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a3268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a326c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a326cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a3270: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a3270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3274: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A3274u;
    {
        const bool branch_taken_0x2a3274 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3274u;
            // 0x2a3278: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3274) {
            ctx->pc = 0x2A329Cu;
            goto label_2a329c;
        }
    }
    ctx->pc = 0x2A327Cu;
    // 0x2a327c: 0xc07507c  jal         func_1D41F0
    ctx->pc = 0x2A327Cu;
    SET_GPR_U32(ctx, 31, 0x2A3284u);
    ctx->pc = 0x2A3280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A327Cu;
            // 0x2a3280: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3284u; }
        if (ctx->pc != 0x2A3284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3284u; }
        if (ctx->pc != 0x2A3284u) { return; }
    }
    ctx->pc = 0x2A3284u;
label_2a3284:
    // 0x2a3284: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2a3284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2a3288: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a3288u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a328c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A328Cu;
    {
        const bool branch_taken_0x2a328c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a328c) {
            ctx->pc = 0x2A3290u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A328Cu;
            // 0x2a3290: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A32A0u;
            goto label_2a32a0;
        }
    }
    ctx->pc = 0x2A3294u;
    // 0x2a3294: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2A3294u;
    SET_GPR_U32(ctx, 31, 0x2A329Cu);
    ctx->pc = 0x2A3298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3294u;
            // 0x2a3298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A329Cu; }
        if (ctx->pc != 0x2A329Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A329Cu; }
        if (ctx->pc != 0x2A329Cu) { return; }
    }
    ctx->pc = 0x2A329Cu;
label_2a329c:
    // 0x2a329c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a329cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a32a0:
    // 0x2a32a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a32a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a32a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a32a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a32a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a32a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a32ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2A32ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A32B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A32ACu;
            // 0x2a32b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A32B4u;
    // 0x2a32b4: 0x0  nop
    ctx->pc = 0x2a32b4u;
    // NOP
    // 0x2a32b8: 0x0  nop
    ctx->pc = 0x2a32b8u;
    // NOP
    // 0x2a32bc: 0x0  nop
    ctx->pc = 0x2a32bcu;
    // NOP
    // 0x2a32c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a32c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a32c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a32c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a32c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a32c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a32cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a32ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a32d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a32d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32d4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2A32D4u;
    {
        const bool branch_taken_0x2a32d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A32D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A32D4u;
            // 0x2a32d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a32d4) {
            ctx->pc = 0x2A3308u;
            goto label_2a3308;
        }
    }
    ctx->pc = 0x2A32DCu;
    // 0x2a32dc: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2a32dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2a32e0: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x2a32e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2a32e4: 0x24a53320  addiu       $a1, $a1, 0x3320
    ctx->pc = 0x2a32e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13088));
    // 0x2a32e8: 0xc0407e8  jal         func_101FA0
    ctx->pc = 0x2A32E8u;
    SET_GPR_U32(ctx, 31, 0x2A32F0u);
    ctx->pc = 0x2A32ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A32E8u;
            // 0x2a32ec: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A32F0u; }
        if (ctx->pc != 0x2A32F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A32F0u; }
        if (ctx->pc != 0x2A32F0u) { return; }
    }
    ctx->pc = 0x2A32F0u;
label_2a32f0:
    // 0x2a32f0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2a32f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2a32f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a32f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a32f8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A32F8u;
    {
        const bool branch_taken_0x2a32f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a32f8) {
            ctx->pc = 0x2A32FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A32F8u;
            // 0x2a32fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A330Cu;
            goto label_2a330c;
        }
    }
    ctx->pc = 0x2A3300u;
    // 0x2a3300: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2A3300u;
    SET_GPR_U32(ctx, 31, 0x2A3308u);
    ctx->pc = 0x2A3304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3300u;
            // 0x2a3304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3308u; }
        if (ctx->pc != 0x2A3308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3308u; }
        if (ctx->pc != 0x2A3308u) { return; }
    }
    ctx->pc = 0x2A3308u;
label_2a3308:
    // 0x2a3308: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a3308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a330c:
    // 0x2a330c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a330cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3310: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a3310u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3314: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a3314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3318: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A331Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3318u;
            // 0x2a331c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3320u;
    // 0x2a3320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a3320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a3324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a3324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a3328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a3328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a332c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a332cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a3330: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a3330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3334: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2A3334u;
    {
        const bool branch_taken_0x2a3334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3334u;
            // 0x2a3338: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3334) {
            ctx->pc = 0x2A3368u;
            goto label_2a3368;
        }
    }
    ctx->pc = 0x2A333Cu;
    // 0x2a333c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2a333cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2a3340: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2a3340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a3344: 0x24a533e0  addiu       $a1, $a1, 0x33E0
    ctx->pc = 0x2a3344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
    // 0x2a3348: 0xc0407e8  jal         func_101FA0
    ctx->pc = 0x2A3348u;
    SET_GPR_U32(ctx, 31, 0x2A3350u);
    ctx->pc = 0x2A334Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3348u;
            // 0x2a334c: 0x24070009  addiu       $a3, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3350u; }
        if (ctx->pc != 0x2A3350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3350u; }
        if (ctx->pc != 0x2A3350u) { return; }
    }
    ctx->pc = 0x2A3350u;
label_2a3350:
    // 0x2a3350: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2a3350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2a3354: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a3354u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a3358: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3358u;
    {
        const bool branch_taken_0x2a3358 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a3358) {
            ctx->pc = 0x2A335Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3358u;
            // 0x2a335c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A336Cu;
            goto label_2a336c;
        }
    }
    ctx->pc = 0x2A3360u;
    // 0x2a3360: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2A3360u;
    SET_GPR_U32(ctx, 31, 0x2A3368u);
    ctx->pc = 0x2A3364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3360u;
            // 0x2a3364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3368u; }
        if (ctx->pc != 0x2A3368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3368u; }
        if (ctx->pc != 0x2A3368u) { return; }
    }
    ctx->pc = 0x2A3368u;
label_2a3368:
    // 0x2a3368: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a3368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a336c:
    // 0x2a336c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a336cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3370: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a3370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3374: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a3374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3378: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A337Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3378u;
            // 0x2a337c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3380u;
    // 0x2a3380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a3380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a3384: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2a3384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2a3388: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a3388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a338c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x2a338cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x2a3390: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a3390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a3394: 0x24a53440  addiu       $a1, $a1, 0x3440
    ctx->pc = 0x2a3394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13376));
    // 0x2a3398: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a3398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a339c: 0x24c633e0  addiu       $a2, $a2, 0x33E0
    ctx->pc = 0x2a339cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13280));
    // 0x2a33a0: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2a33a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a33a4: 0xc040804  jal         func_102010
    ctx->pc = 0x2A33A4u;
    SET_GPR_U32(ctx, 31, 0x2A33ACu);
    ctx->pc = 0x2A33A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A33A4u;
            // 0x2a33a8: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A33ACu; }
        if (ctx->pc != 0x2A33ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A33ACu; }
        if (ctx->pc != 0x2A33ACu) { return; }
    }
    ctx->pc = 0x2A33ACu;
label_2a33ac:
    // 0x2a33ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a33acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a33b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a33b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a33b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a33b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a33b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A33B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A33BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A33B8u;
            // 0x2a33bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A33C0u;
    // 0x2a33c0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2a33c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2a33c4: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2a33c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2a33c8: 0x2484ef10  addiu       $a0, $a0, -0x10F0
    ctx->pc = 0x2a33c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962960));
    // 0x2a33cc: 0x24a533e0  addiu       $a1, $a1, 0x33E0
    ctx->pc = 0x2a33ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
    // 0x2a33d0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2a33d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a33d4: 0x80407e8  j           func_101FA0
    ctx->pc = 0x2A33D4u;
    ctx->pc = 0x2A33D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A33D4u;
            // 0x2a33d8: 0x24070072  addiu       $a3, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00101FA0_0x101fa0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2A33DCu;
    // 0x2a33dc: 0x0  nop
    ctx->pc = 0x2a33dcu;
    // NOP
}
