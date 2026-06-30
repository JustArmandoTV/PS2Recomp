#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A3120
// Address: 0x2a3120 - 0x2a3260
void sub_002A3120_0x2a3120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3120_0x2a3120");
#endif

    switch (ctx->pc) {
        case 0x2a3134u: goto label_2a3134;
        case 0x2a31d0u: goto label_2a31d0;
        case 0x2a31e0u: goto label_2a31e0;
        case 0x2a31f8u: goto label_2a31f8;
        default: break;
    }

    ctx->pc = 0x2a3120u;

    // 0x2a3120: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a3120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a3124: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a3124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3128: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A3128u;
    {
        const bool branch_taken_0x2a3128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A312Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3128u;
            // 0x2a312c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3128) {
            ctx->pc = 0x2A3170u;
            goto label_2a3170;
        }
    }
    ctx->pc = 0x2A3130u;
    // 0x2a3130: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a3130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3134:
    // 0x2a3134: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x2a3134u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2a3138: 0x6282b  sltu        $a1, $zero, $a2
    ctx->pc = 0x2a3138u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2a313c: 0xc4182b  sltu        $v1, $a2, $a0
    ctx->pc = 0x2a313cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2a3140: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2a3140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2a3144: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3144u;
    {
        const bool branch_taken_0x2a3144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3144) {
            ctx->pc = 0x2A3158u;
            goto label_2a3158;
        }
    }
    ctx->pc = 0x2A314Cu;
    // 0x2a314c: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x2a314cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2a3150: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x2a3150u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x2a3154: 0x0  nop
    ctx->pc = 0x2a3154u;
    // NOP
label_2a3158:
    // 0x2a3158: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a315c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2a315cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2a3160: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x2a3160u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2a3164: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2A3164u;
    {
        const bool branch_taken_0x2a3164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3164u;
            // 0x2a3168: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3164) {
            ctx->pc = 0x2A3134u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a3134;
        }
    }
    ctx->pc = 0x2A316Cu;
    // 0x2a316c: 0x0  nop
    ctx->pc = 0x2a316cu;
    // NOP
label_2a3170:
    // 0x2a3170: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3178u;
    // 0x2a3178: 0x0  nop
    ctx->pc = 0x2a3178u;
    // NOP
    // 0x2a317c: 0x0  nop
    ctx->pc = 0x2a317cu;
    // NOP
    // 0x2a3180: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2a3180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2a3184: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2a3184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2a3188: 0x2484f570  addiu       $a0, $a0, -0xA90
    ctx->pc = 0x2a3188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964592));
    // 0x2a318c: 0x24a531a0  addiu       $a1, $a1, 0x31A0
    ctx->pc = 0x2a318cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12704));
    // 0x2a3190: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x2a3190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2a3194: 0x80407e8  j           func_101FA0
    ctx->pc = 0x2A3194u;
    ctx->pc = 0x2A3198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3194u;
            // 0x2a3198: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00101FA0_0x101fa0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2A319Cu;
    // 0x2a319c: 0x0  nop
    ctx->pc = 0x2a319cu;
    // NOP
    // 0x2a31a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a31a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a31a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a31a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a31a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a31a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a31ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a31acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a31b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a31b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a31b4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A31B4u;
    {
        const bool branch_taken_0x2a31b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A31B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A31B4u;
            // 0x2a31b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a31b4) {
            ctx->pc = 0x2A31F8u;
            goto label_2a31f8;
        }
    }
    ctx->pc = 0x2A31BCu;
    // 0x2a31bc: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x2a31bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2a31c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A31C0u;
    {
        const bool branch_taken_0x2a31c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a31c0) {
            ctx->pc = 0x2A31D0u;
            goto label_2a31d0;
        }
    }
    ctx->pc = 0x2A31C8u;
    // 0x2a31c8: 0xc07507c  jal         func_1D41F0
    ctx->pc = 0x2A31C8u;
    SET_GPR_U32(ctx, 31, 0x2A31D0u);
    ctx->pc = 0x2A31CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A31C8u;
            // 0x2a31cc: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A31D0u; }
        if (ctx->pc != 0x2A31D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A31D0u; }
        if (ctx->pc != 0x2A31D0u) { return; }
    }
    ctx->pc = 0x2A31D0u;
label_2a31d0:
    // 0x2a31d0: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A31D0u;
    {
        const bool branch_taken_0x2a31d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a31d0) {
            ctx->pc = 0x2A31D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A31D0u;
            // 0x2a31d4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A31E4u;
            goto label_2a31e4;
        }
    }
    ctx->pc = 0x2A31D8u;
    // 0x2a31d8: 0xc07507c  jal         func_1D41F0
    ctx->pc = 0x2A31D8u;
    SET_GPR_U32(ctx, 31, 0x2A31E0u);
    ctx->pc = 0x2A31DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A31D8u;
            // 0x2a31dc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A31E0u; }
        if (ctx->pc != 0x2A31E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A31E0u; }
        if (ctx->pc != 0x2A31E0u) { return; }
    }
    ctx->pc = 0x2A31E0u;
label_2a31e0:
    // 0x2a31e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2a31e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2a31e4:
    // 0x2a31e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a31e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a31e8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A31E8u;
    {
        const bool branch_taken_0x2a31e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a31e8) {
            ctx->pc = 0x2A31ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A31E8u;
            // 0x2a31ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A31FCu;
            goto label_2a31fc;
        }
    }
    ctx->pc = 0x2A31F0u;
    // 0x2a31f0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2A31F0u;
    SET_GPR_U32(ctx, 31, 0x2A31F8u);
    ctx->pc = 0x2A31F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A31F0u;
            // 0x2a31f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A31F8u; }
        if (ctx->pc != 0x2A31F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A31F8u; }
        if (ctx->pc != 0x2A31F8u) { return; }
    }
    ctx->pc = 0x2A31F8u;
label_2a31f8:
    // 0x2a31f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a31f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a31fc:
    // 0x2a31fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a31fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3200: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a3200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3204: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a3204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3208: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A320Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3208u;
            // 0x2a320c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3210u;
    // 0x2a3210: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a3210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2a3214: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a3214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3218: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a3218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a321c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2a321cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2a3220: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2a3220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2a3224: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2a3224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2a3228: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2a3228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2a322c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2a322cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2a3230: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2a3230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2a3234: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2a3234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2a3238: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2a3238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2a323c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2a323cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x2a3240: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x2a3240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x2a3244: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x2a3244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x2a3248: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x2a3248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x2a324c: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x2a324cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x2a3250: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3250u;
            // 0x2a3254: 0xac80003c  sw          $zero, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3258u;
    // 0x2a3258: 0x0  nop
    ctx->pc = 0x2a3258u;
    // NOP
    // 0x2a325c: 0x0  nop
    ctx->pc = 0x2a325cu;
    // NOP
}
