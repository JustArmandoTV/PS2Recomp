#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B32B0
// Address: 0x1b32b0 - 0x1b3368
void sub_001B32B0_0x1b32b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B32B0_0x1b32b0");
#endif

    switch (ctx->pc) {
        case 0x1b32e4u: goto label_1b32e4;
        case 0x1b32f4u: goto label_1b32f4;
        case 0x1b3304u: goto label_1b3304;
        default: break;
    }

    ctx->pc = 0x1b32b0u;

    // 0x1b32b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b32b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b32b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b32b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b32b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b32b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b32bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b32bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b32c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b32c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b32c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b32c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b32c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b32c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b32cc: 0xde030a20  ld          $v1, 0xA20($s0)
    ctx->pc = 0x1b32ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 2592)));
    // 0x1b32d0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B32D0u;
    {
        const bool branch_taken_0x1b32d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B32D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B32D0u;
            // 0x1b32d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b32d0) {
            ctx->pc = 0x1B3348u;
            goto label_1b3348;
        }
    }
    ctx->pc = 0x1B32D8u;
    // 0x1b32d8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b32d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b32dc: 0xc06e382  jal         func_1B8E08
    ctx->pc = 0x1B32DCu;
    SET_GPR_U32(ctx, 31, 0x1B32E4u);
    ctx->pc = 0x1B32E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B32DCu;
            // 0x1b32e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8E08u;
    if (runtime->hasFunction(0x1B8E08u)) {
        auto targetFn = runtime->lookupFunction(0x1B8E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B32E4u; }
        if (ctx->pc != 0x1B32E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8E08_0x1b8e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B32E4u; }
        if (ctx->pc != 0x1B32E4u) { return; }
    }
    ctx->pc = 0x1B32E4u;
label_1b32e4:
    // 0x1b32e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b32e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b32e8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b32e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b32ec: 0xc06e382  jal         func_1B8E08
    ctx->pc = 0x1B32ECu;
    SET_GPR_U32(ctx, 31, 0x1B32F4u);
    ctx->pc = 0x1B32F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B32ECu;
            // 0x1b32f0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8E08u;
    if (runtime->hasFunction(0x1B8E08u)) {
        auto targetFn = runtime->lookupFunction(0x1B8E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B32F4u; }
        if (ctx->pc != 0x1B32F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8E08_0x1b8e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B32F4u; }
        if (ctx->pc != 0x1B32F4u) { return; }
    }
    ctx->pc = 0x1B32F4u;
label_1b32f4:
    // 0x1b32f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b32f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b32f8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1b32f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1b32fc: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B32FCu;
    SET_GPR_U32(ctx, 31, 0x1B3304u);
    ctx->pc = 0x1B3300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B32FCu;
            // 0x1b3300: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3304u; }
        if (ctx->pc != 0x1B3304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3304u; }
        if (ctx->pc != 0x1B3304u) { return; }
    }
    ctx->pc = 0x1B3304u;
label_1b3304:
    // 0x1b3304: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b3304u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b330c: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B330Cu;
    {
        const bool branch_taken_0x1b330c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b330c) {
            ctx->pc = 0x1B3310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B330Cu;
            // 0x1b3310: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B3344u;
            goto label_1b3344;
        }
    }
    ctx->pc = 0x1B3314u;
    // 0x1b3314: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1B3314u;
    {
        const bool branch_taken_0x1b3314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3314) {
            ctx->pc = 0x1B3318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3314u;
            // 0x1b3318: 0x2329824  and         $s3, $s1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) & GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B3344u;
            goto label_1b3344;
        }
    }
    ctx->pc = 0x1B331Cu;
    // 0x1b331c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b3320: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3320u;
    {
        const bool branch_taken_0x1b3320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B3324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3320u;
            // 0x1b3324: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3320) {
            ctx->pc = 0x1B3338u;
            goto label_1b3338;
        }
    }
    ctx->pc = 0x1B3328u;
    // 0x1b3328: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3328u;
    {
        const bool branch_taken_0x1b3328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B332Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3328u;
            // 0x1b332c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3328) {
            ctx->pc = 0x1B3340u;
            goto label_1b3340;
        }
    }
    ctx->pc = 0x1B3330u;
    // 0x1b3330: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3330u;
    {
        const bool branch_taken_0x1b3330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3330u;
            // 0x1b3334: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3330) {
            ctx->pc = 0x1B334Cu;
            goto label_1b334c;
        }
    }
    ctx->pc = 0x1B3338u;
label_1b3338:
    // 0x1b3338: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B3338u;
    {
        const bool branch_taken_0x1b3338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B333Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3338u;
            // 0x1b333c: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3338) {
            ctx->pc = 0x1B3344u;
            goto label_1b3344;
        }
    }
    ctx->pc = 0x1B3340u;
label_1b3340:
    // 0x1b3340: 0x2329825  or          $s3, $s1, $s2
    ctx->pc = 0x1b3340u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) | GPR_U64(ctx, 18));
label_1b3344:
    // 0x1b3344: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1b3344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b3348:
    // 0x1b3348: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b3348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b334c:
    // 0x1b334c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b334cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b3350: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b3350u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3354: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b3354u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b3358: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b3358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b335c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B335Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B335Cu;
            // 0x1b3360: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B3364u;
    // 0x1b3364: 0x0  nop
    ctx->pc = 0x1b3364u;
    // NOP
}
