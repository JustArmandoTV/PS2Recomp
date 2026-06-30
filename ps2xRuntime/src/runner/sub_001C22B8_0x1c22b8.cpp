#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C22B8
// Address: 0x1c22b8 - 0x1c2390
void sub_001C22B8_0x1c22b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C22B8_0x1c22b8");
#endif

    switch (ctx->pc) {
        case 0x1c22fcu: goto label_1c22fc;
        case 0x1c230cu: goto label_1c230c;
        case 0x1c2320u: goto label_1c2320;
        case 0x1c2348u: goto label_1c2348;
        case 0x1c2358u: goto label_1c2358;
        default: break;
    }

    ctx->pc = 0x1c22b8u;

    // 0x1c22b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c22b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c22bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c22bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c22c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c22c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c22c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c22c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c22c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c22cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c22ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c22d0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c22d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c22d4: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C22D4u;
    {
        const bool branch_taken_0x1c22d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C22D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C22D4u;
            // 0x1c22d8: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22d4) {
            ctx->pc = 0x1C22F0u;
            goto label_1c22f0;
        }
    }
    ctx->pc = 0x1C22DCu;
    // 0x1c22dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c22dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c22e0: 0x14a20023  bne         $a1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1C22E0u;
    {
        const bool branch_taken_0x1c22e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C22E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C22E0u;
            // 0x1c22e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22e0) {
            ctx->pc = 0x1C2370u;
            goto label_1c2370;
        }
    }
    ctx->pc = 0x1C22E8u;
    // 0x1c22e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C22E8u;
    {
        const bool branch_taken_0x1c22e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c22e8) {
            ctx->pc = 0x1C2304u;
            goto label_1c2304;
        }
    }
    ctx->pc = 0x1C22F0u;
label_1c22f0:
    // 0x1c22f0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1c22f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1c22f4: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x1C22F4u;
    SET_GPR_U32(ctx, 31, 0x1C22FCu);
    ctx->pc = 0x1C22F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C22F4u;
            // 0x1c22f8: 0x24a5bb80  addiu       $a1, $a1, -0x4480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C22FCu; }
        if (ctx->pc != 0x1C22FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C22FCu; }
        if (ctx->pc != 0x1C22FCu) { return; }
    }
    ctx->pc = 0x1C22FCu;
label_1c22fc:
    // 0x1c22fc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C22FCu;
    {
        const bool branch_taken_0x1c22fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C22FCu;
            // 0x1c2300: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22fc) {
            ctx->pc = 0x1C2328u;
            goto label_1c2328;
        }
    }
    ctx->pc = 0x1C2304u;
label_1c2304:
    // 0x1c2304: 0xc070d0c  jal         func_1C3430
    ctx->pc = 0x1C2304u;
    SET_GPR_U32(ctx, 31, 0x1C230Cu);
    ctx->pc = 0x1C3430u;
    if (runtime->hasFunction(0x1C3430u)) {
        auto targetFn = runtime->lookupFunction(0x1C3430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C230Cu; }
        if (ctx->pc != 0x1C230Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3430_0x1c3430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C230Cu; }
        if (ctx->pc != 0x1C230Cu) { return; }
    }
    ctx->pc = 0x1C230Cu;
label_1c230c:
    // 0x1c230c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c230cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2310: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2310u;
    {
        const bool branch_taken_0x1c2310 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2310u;
            // 0x1c2314: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2310) {
            ctx->pc = 0x1C2328u;
            goto label_1c2328;
        }
    }
    ctx->pc = 0x1C2318u;
    // 0x1c2318: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C2318u;
    {
        const bool branch_taken_0x1c2318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C231Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2318u;
            // 0x1c231c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2318) {
            ctx->pc = 0x1C2374u;
            goto label_1c2374;
        }
    }
    ctx->pc = 0x1C2320u;
label_1c2320:
    // 0x1c2320: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C2320u;
    {
        const bool branch_taken_0x1c2320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2320u;
            // 0x1c2324: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2320) {
            ctx->pc = 0x1C2370u;
            goto label_1c2370;
        }
    }
    ctx->pc = 0x1C2328u;
label_1c2328:
    // 0x1c2328: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c2328u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c232c: 0x8c62a4d8  lw          $v0, -0x5B28($v1)
    ctx->pc = 0x1c232cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943960)));
    // 0x1c2330: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x1c2330u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c2334: 0x1a60000d  blez        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x1C2334u;
    {
        const bool branch_taken_0x1c2334 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1C2338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2334u;
            // 0x1c2338: 0x8c450028  lw          $a1, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2334) {
            ctx->pc = 0x1C236Cu;
            goto label_1c236c;
        }
    }
    ctx->pc = 0x1C233Cu;
    // 0x1c233c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c233cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2340: 0x24b00016  addiu       $s0, $a1, 0x16
    ctx->pc = 0x1c2340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 22));
    // 0x1c2344: 0x0  nop
    ctx->pc = 0x1c2344u;
    // NOP
label_1c2348:
    // 0x1c2348: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c2348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c234c: 0x26100034  addiu       $s0, $s0, 0x34
    ctx->pc = 0x1c234cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x1c2350: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x1C2350u;
    SET_GPR_U32(ctx, 31, 0x1C2358u);
    ctx->pc = 0x1C2354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2350u;
            // 0x1c2354: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2358u; }
        if (ctx->pc != 0x1C2358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2358u; }
        if (ctx->pc != 0x1C2358u) { return; }
    }
    ctx->pc = 0x1C2358u;
label_1c2358:
    // 0x1c2358: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1C2358u;
    {
        const bool branch_taken_0x1c2358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C235Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2358u;
            // 0x1c235c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2358) {
            ctx->pc = 0x1C2320u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c2320;
        }
    }
    ctx->pc = 0x1C2360u;
    // 0x1c2360: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x1c2360u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1c2364: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C2364u;
    {
        const bool branch_taken_0x1c2364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2364u;
            // 0x1c2368: 0x26310034  addiu       $s1, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2364) {
            ctx->pc = 0x1C2348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c2348;
        }
    }
    ctx->pc = 0x1C236Cu;
label_1c236c:
    // 0x1c236c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c236cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2370:
    // 0x1c2370: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c2370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2374:
    // 0x1c2374: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c2374u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c2378: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c2378u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c237c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c237cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c2380: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c2380u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2384: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c2384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2388: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C238Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2388u;
            // 0x1c238c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C2390u;
}
