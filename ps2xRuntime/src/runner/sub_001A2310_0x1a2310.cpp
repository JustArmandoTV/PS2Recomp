#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A2310
// Address: 0x1a2310 - 0x1a2428
void sub_001A2310_0x1a2310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2310_0x1a2310");
#endif

    switch (ctx->pc) {
        case 0x1a236cu: goto label_1a236c;
        case 0x1a2378u: goto label_1a2378;
        case 0x1a2398u: goto label_1a2398;
        case 0x1a23fcu: goto label_1a23fc;
        default: break;
    }

    ctx->pc = 0x1a2310u;

label_1a2310:
    // 0x1a2310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a2310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a2314: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1a2314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x1a2318: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a2318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a231c: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x1a231cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x1a2320: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a2320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a2324: 0x24a59950  addiu       $a1, $a1, -0x66B0
    ctx->pc = 0x1a2324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941008));
    // 0x1a2328: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a232c: 0x24c69954  addiu       $a2, $a2, -0x66AC
    ctx->pc = 0x1a232cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941012));
    // 0x1a2330: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a2330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a2334: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x1a2334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x1a2338: 0x24926c14  addiu       $s2, $a0, 0x6C14
    ctx->pc = 0x1a2338u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 27668));
    // 0x1a233c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a233cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2340: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a2340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a2344: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1a2344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a2348: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x1a2348u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a234c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a234cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a2350: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a2350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a2354: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1a2354u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1a2358: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1a2358u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1a235c: 0x56240010  bnel        $s1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A235Cu;
    {
        const bool branch_taken_0x1a235c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a235c) {
            ctx->pc = 0x1A2360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A235Cu;
            // 0x1a2360: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A23A0u;
            goto label_1a23a0;
        }
    }
    ctx->pc = 0x1A2364u;
    // 0x1a2364: 0xc066c68  jal         func_19B1A0
    ctx->pc = 0x1A2364u;
    SET_GPR_U32(ctx, 31, 0x1A236Cu);
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A236Cu; }
        if (ctx->pc != 0x1A236Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A236Cu; }
        if (ctx->pc != 0x1A236Cu) { return; }
    }
    ctx->pc = 0x1A236Cu;
label_1a236c:
    // 0x1a236c: 0x2450005c  addiu       $s0, $v0, 0x5C
    ctx->pc = 0x1a236cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x1a2370: 0xc0686c0  jal         func_1A1B00
    ctx->pc = 0x1A2370u;
    SET_GPR_U32(ctx, 31, 0x1A2378u);
    ctx->pc = 0x1A2374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2370u;
            // 0x1a2374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B00u;
    if (runtime->hasFunction(0x1A1B00u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2378u; }
        if (ctx->pc != 0x1A2378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B00_0x1a1b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2378u; }
        if (ctx->pc != 0x1A2378u) { return; }
    }
    ctx->pc = 0x1A2378u;
label_1a2378:
    // 0x1a2378: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a2378u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a237c: 0x54710008  bnel        $v1, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A237Cu;
    {
        const bool branch_taken_0x1a237c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x1a237c) {
            ctx->pc = 0x1A2380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A237Cu;
            // 0x1a2380: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A23A0u;
            goto label_1a23a0;
        }
    }
    ctx->pc = 0x1A2384u;
    // 0x1a2384: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a2384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a2388: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2388u;
    {
        const bool branch_taken_0x1a2388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a2388) {
            ctx->pc = 0x1A238Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2388u;
            // 0x1a238c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A239Cu;
            goto label_1a239c;
        }
    }
    ctx->pc = 0x1A2390u;
    // 0x1a2390: 0xc06c93a  jal         func_1B24E8
    ctx->pc = 0x1A2390u;
    SET_GPR_U32(ctx, 31, 0x1A2398u);
    ctx->pc = 0x1B24E8u;
    if (runtime->hasFunction(0x1B24E8u)) {
        auto targetFn = runtime->lookupFunction(0x1B24E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2398u; }
        if (ctx->pc != 0x1A2398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B24E8_0x1b24e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2398u; }
        if (ctx->pc != 0x1A2398u) { return; }
    }
    ctx->pc = 0x1A2398u;
label_1a2398:
    // 0x1a2398: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a2398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1a239c:
    // 0x1a239c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a239cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a23a0:
    // 0x1a23a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a23a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a23a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a23a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a23a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a23a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a23ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1A23ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A23B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A23ACu;
            // 0x1a23b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A23B4u;
    // 0x1a23b4: 0x0  nop
    ctx->pc = 0x1a23b4u;
    // NOP
    // 0x1a23b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a23b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a23bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a23bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a23c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a23c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a23c4: 0x80688c4  j           func_1A2310
    ctx->pc = 0x1A23C4u;
    ctx->pc = 0x1A23C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A23C4u;
            // 0x1a23c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2310u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_1a2310;
    ctx->pc = 0x1A23CCu;
    // 0x1a23cc: 0x0  nop
    ctx->pc = 0x1a23ccu;
    // NOP
    // 0x1a23d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a23d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a23d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a23d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a23d8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1a23d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a23dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a23dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a23e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a23e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a23e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a23e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a23e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a23e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a23ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a23ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a23f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a23f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a23f4: 0xc066c68  jal         func_19B1A0
    ctx->pc = 0x1A23F4u;
    SET_GPR_U32(ctx, 31, 0x1A23FCu);
    ctx->pc = 0x1A23F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A23F4u;
            // 0x1a23f8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A23FCu; }
        if (ctx->pc != 0x1A23FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A23FCu; }
        if (ctx->pc != 0x1A23FCu) { return; }
    }
    ctx->pc = 0x1A23FCu;
label_1a23fc:
    // 0x1a23fc: 0xac50004c  sw          $s0, 0x4C($v0)
    ctx->pc = 0x1a23fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 16));
    // 0x1a2400: 0xac510040  sw          $s1, 0x40($v0)
    ctx->pc = 0x1a2400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 17));
    // 0x1a2404: 0xac520044  sw          $s2, 0x44($v0)
    ctx->pc = 0x1a2404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 18));
    // 0x1a2408: 0xac530048  sw          $s3, 0x48($v0)
    ctx->pc = 0x1a2408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 19));
    // 0x1a240c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a240cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2410: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a2410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a2414: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a2414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2418: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a2418u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a241c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a241cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2420: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2420u;
            // 0x1a2424: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2428u;
}
