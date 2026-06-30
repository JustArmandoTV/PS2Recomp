#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CA340
// Address: 0x1ca340 - 0x1ca400
void sub_001CA340_0x1ca340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA340_0x1ca340");
#endif

    switch (ctx->pc) {
        case 0x1ca380u: goto label_1ca380;
        case 0x1ca3dcu: goto label_1ca3dc;
        default: break;
    }

    ctx->pc = 0x1ca340u;

    // 0x1ca340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ca340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ca344: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ca344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ca348: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x1ca348u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x1ca34c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ca34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ca350: 0x2623a6f0  addiu       $v1, $s1, -0x5910
    ctx->pc = 0x1ca350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944496));
    // 0x1ca354: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ca354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ca358: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ca358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ca35c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1CA35Cu;
    {
        const bool branch_taken_0x1ca35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA35Cu;
            // 0x1ca360: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca35c) {
            ctx->pc = 0x1CA3E8u;
            goto label_1ca3e8;
        }
    }
    ctx->pc = 0x1CA364u;
    // 0x1ca364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ca364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca368: 0x18c0000f  blez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x1CA368u;
    {
        const bool branch_taken_0x1ca368 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1CA36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA368u;
            // 0x1ca36c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca368) {
            ctx->pc = 0x1CA3A8u;
            goto label_1ca3a8;
        }
    }
    ctx->pc = 0x1CA370u;
    // 0x1ca370: 0x3c10006e  lui         $s0, 0x6E
    ctx->pc = 0x1ca370u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)110 << 16));
    // 0x1ca374: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1ca374u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca378: 0x26043080  addiu       $a0, $s0, 0x3080
    ctx->pc = 0x1ca378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12416));
    // 0x1ca37c: 0x0  nop
    ctx->pc = 0x1ca37cu;
    // NOP
label_1ca380:
    // 0x1ca380: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ca380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ca384: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1ca384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1ca388: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ca388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ca38c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ca38cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1ca390: 0x0  nop
    ctx->pc = 0x1ca390u;
    // NOP
    // 0x1ca394: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CA394u;
    {
        const bool branch_taken_0x1ca394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA394u;
            // 0x1ca398: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca394) {
            ctx->pc = 0x1CA380u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ca380;
        }
    }
    ctx->pc = 0x1CA39Cu;
    // 0x1ca39c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA39Cu;
    {
        const bool branch_taken_0x1ca39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA39Cu;
            // 0x1ca3a0: 0x26103080  addiu       $s0, $s0, 0x3080 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca39c) {
            ctx->pc = 0x1CA3B0u;
            goto label_1ca3b0;
        }
    }
    ctx->pc = 0x1CA3A4u;
    // 0x1ca3a4: 0x0  nop
    ctx->pc = 0x1ca3a4u;
    // NOP
label_1ca3a8:
    // 0x1ca3a8: 0x3c10006e  lui         $s0, 0x6E
    ctx->pc = 0x1ca3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)110 << 16));
    // 0x1ca3ac: 0x26103080  addiu       $s0, $s0, 0x3080
    ctx->pc = 0x1ca3acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12416));
label_1ca3b0:
    // 0x1ca3b0: 0x3c04006e  lui         $a0, 0x6E
    ctx->pc = 0x1ca3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)110 << 16));
    // 0x1ca3b4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1ca3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3b8: 0x64080  sll         $t0, $a2, 2
    ctx->pc = 0x1ca3b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ca3bc: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1ca3bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3c0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ca3c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3c4: 0x24843e00  addiu       $a0, $a0, 0x3E00
    ctx->pc = 0x1ca3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15872));
    // 0x1ca3c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca3c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3cc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ca3ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3d0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ca3d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3d4: 0xc04410c  jal         func_110430
    ctx->pc = 0x1CA3D4u;
    SET_GPR_U32(ctx, 31, 0x1CA3DCu);
    ctx->pc = 0x1CA3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA3D4u;
            // 0x1ca3d8: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (runtime->hasFunction(0x110430u)) {
        auto targetFn = runtime->lookupFunction(0x110430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA3DCu; }
        if (ctx->pc != 0x1CA3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110430_0x110430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA3DCu; }
        if (ctx->pc != 0x1CA3DCu) { return; }
    }
    ctx->pc = 0x1CA3DCu;
label_1ca3dc:
    // 0x1ca3dc: 0xae20a6f0  sw          $zero, -0x5910($s1)
    ctx->pc = 0x1ca3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294944496), GPR_U32(ctx, 0));
    // 0x1ca3e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CA3E0u;
    {
        const bool branch_taken_0x1ca3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA3E0u;
            // 0x1ca3e4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca3e0) {
            ctx->pc = 0x1CA3ECu;
            goto label_1ca3ec;
        }
    }
    ctx->pc = 0x1CA3E8u;
label_1ca3e8:
    // 0x1ca3e8: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x1ca3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_1ca3ec:
    // 0x1ca3ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ca3ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca3f0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ca3f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca3f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ca3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA3F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA3F8u;
            // 0x1ca3fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA400u;
}
