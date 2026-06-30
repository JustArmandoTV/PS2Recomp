#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023A850
// Address: 0x23a850 - 0x23a960
void sub_0023A850_0x23a850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A850_0x23a850");
#endif

    switch (ctx->pc) {
        case 0x23a850u: goto label_23a850;
        case 0x23a854u: goto label_23a854;
        case 0x23a858u: goto label_23a858;
        case 0x23a85cu: goto label_23a85c;
        case 0x23a860u: goto label_23a860;
        case 0x23a864u: goto label_23a864;
        case 0x23a868u: goto label_23a868;
        case 0x23a86cu: goto label_23a86c;
        case 0x23a870u: goto label_23a870;
        case 0x23a874u: goto label_23a874;
        case 0x23a878u: goto label_23a878;
        case 0x23a87cu: goto label_23a87c;
        case 0x23a880u: goto label_23a880;
        case 0x23a884u: goto label_23a884;
        case 0x23a888u: goto label_23a888;
        case 0x23a88cu: goto label_23a88c;
        case 0x23a890u: goto label_23a890;
        case 0x23a894u: goto label_23a894;
        case 0x23a898u: goto label_23a898;
        case 0x23a89cu: goto label_23a89c;
        case 0x23a8a0u: goto label_23a8a0;
        case 0x23a8a4u: goto label_23a8a4;
        case 0x23a8a8u: goto label_23a8a8;
        case 0x23a8acu: goto label_23a8ac;
        case 0x23a8b0u: goto label_23a8b0;
        case 0x23a8b4u: goto label_23a8b4;
        case 0x23a8b8u: goto label_23a8b8;
        case 0x23a8bcu: goto label_23a8bc;
        case 0x23a8c0u: goto label_23a8c0;
        case 0x23a8c4u: goto label_23a8c4;
        case 0x23a8c8u: goto label_23a8c8;
        case 0x23a8ccu: goto label_23a8cc;
        case 0x23a8d0u: goto label_23a8d0;
        case 0x23a8d4u: goto label_23a8d4;
        case 0x23a8d8u: goto label_23a8d8;
        case 0x23a8dcu: goto label_23a8dc;
        case 0x23a8e0u: goto label_23a8e0;
        case 0x23a8e4u: goto label_23a8e4;
        case 0x23a8e8u: goto label_23a8e8;
        case 0x23a8ecu: goto label_23a8ec;
        case 0x23a8f0u: goto label_23a8f0;
        case 0x23a8f4u: goto label_23a8f4;
        case 0x23a8f8u: goto label_23a8f8;
        case 0x23a8fcu: goto label_23a8fc;
        case 0x23a900u: goto label_23a900;
        case 0x23a904u: goto label_23a904;
        case 0x23a908u: goto label_23a908;
        case 0x23a90cu: goto label_23a90c;
        case 0x23a910u: goto label_23a910;
        case 0x23a914u: goto label_23a914;
        case 0x23a918u: goto label_23a918;
        case 0x23a91cu: goto label_23a91c;
        case 0x23a920u: goto label_23a920;
        case 0x23a924u: goto label_23a924;
        case 0x23a928u: goto label_23a928;
        case 0x23a92cu: goto label_23a92c;
        case 0x23a930u: goto label_23a930;
        case 0x23a934u: goto label_23a934;
        case 0x23a938u: goto label_23a938;
        case 0x23a93cu: goto label_23a93c;
        case 0x23a940u: goto label_23a940;
        case 0x23a944u: goto label_23a944;
        case 0x23a948u: goto label_23a948;
        case 0x23a94cu: goto label_23a94c;
        case 0x23a950u: goto label_23a950;
        case 0x23a954u: goto label_23a954;
        case 0x23a958u: goto label_23a958;
        case 0x23a95cu: goto label_23a95c;
        default: break;
    }

    ctx->pc = 0x23a850u;

label_23a850:
    // 0x23a850: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23a850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_23a854:
    // 0x23a854: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23a854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_23a858:
    // 0x23a858: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23a858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_23a85c:
    // 0x23a85c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23a85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23a860:
    // 0x23a860: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23a860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23a864:
    // 0x23a864: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23a864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23a868:
    // 0x23a868: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23a868u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23a86c:
    // 0x23a86c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23a86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23a870:
    // 0x23a870: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x23a870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23a874:
    // 0x23a874: 0x8c83018c  lw          $v1, 0x18C($a0)
    ctx->pc = 0x23a874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 396)));
label_23a878:
    // 0x23a878: 0x2474ffff  addiu       $s4, $v1, -0x1
    ctx->pc = 0x23a878u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a87c:
    // 0x23a87c: 0x6800010  bltz        $s4, . + 4 + (0x10 << 2)
label_23a880:
    if (ctx->pc == 0x23A880u) {
        ctx->pc = 0x23A880u;
            // 0x23a880: 0x24900188  addiu       $s0, $a0, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 392));
        ctx->pc = 0x23A884u;
        goto label_23a884;
    }
    ctx->pc = 0x23A87Cu;
    {
        const bool branch_taken_0x23a87c = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x23A880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A87Cu;
            // 0x23a880: 0x24900188  addiu       $s0, $a0, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a87c) {
            ctx->pc = 0x23A8C0u;
            goto label_23a8c0;
        }
    }
    ctx->pc = 0x23A884u;
label_23a884:
    // 0x23a884: 0x149880  sll         $s3, $s4, 2
    ctx->pc = 0x23a884u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_23a888:
    // 0x23a888: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23a888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23a88c:
    // 0x23a88c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x23a88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_23a890:
    // 0x23a890: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23a890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23a894:
    // 0x23a894: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_23a898:
    if (ctx->pc == 0x23A898u) {
        ctx->pc = 0x23A89Cu;
        goto label_23a89c;
    }
    ctx->pc = 0x23A894u;
    {
        const bool branch_taken_0x23a894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a894) {
            ctx->pc = 0x23A8B0u;
            goto label_23a8b0;
        }
    }
    ctx->pc = 0x23A89Cu;
label_23a89c:
    // 0x23a89c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23a89cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23a8a0:
    // 0x23a8a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23a8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23a8a4:
    // 0x23a8a4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x23a8a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_23a8a8:
    // 0x23a8a8: 0x320f809  jalr        $t9
label_23a8ac:
    if (ctx->pc == 0x23A8ACu) {
        ctx->pc = 0x23A8ACu;
            // 0x23a8ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A8B0u;
        goto label_23a8b0;
    }
    ctx->pc = 0x23A8A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23A8B0u);
        ctx->pc = 0x23A8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A8A8u;
            // 0x23a8ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23A8B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23A8B0u; }
            if (ctx->pc != 0x23A8B0u) { return; }
        }
        }
    }
    ctx->pc = 0x23A8B0u;
label_23a8b0:
    // 0x23a8b0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x23a8b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_23a8b4:
    // 0x23a8b4: 0x681fff4  bgez        $s4, . + 4 + (-0xC << 2)
label_23a8b8:
    if (ctx->pc == 0x23A8B8u) {
        ctx->pc = 0x23A8B8u;
            // 0x23a8b8: 0x2673fffc  addiu       $s3, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->pc = 0x23A8BCu;
        goto label_23a8bc;
    }
    ctx->pc = 0x23A8B4u;
    {
        const bool branch_taken_0x23a8b4 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x23A8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A8B4u;
            // 0x23a8b8: 0x2673fffc  addiu       $s3, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a8b4) {
            ctx->pc = 0x23A888u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a888;
        }
    }
    ctx->pc = 0x23A8BCu;
label_23a8bc:
    // 0x23a8bc: 0x0  nop
    ctx->pc = 0x23a8bcu;
    // NOP
label_23a8c0:
    // 0x23a8c0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23a8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23a8c4:
    // 0x23a8c4: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x23a8c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a8c8:
    // 0x23a8c8: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_23a8cc:
    if (ctx->pc == 0x23A8CCu) {
        ctx->pc = 0x23A8D0u;
        goto label_23a8d0;
    }
    ctx->pc = 0x23A8C8u;
    {
        const bool branch_taken_0x23a8c8 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x23a8c8) {
            ctx->pc = 0x23A940u;
            goto label_23a940;
        }
    }
    ctx->pc = 0x23A8D0u;
label_23a8d0:
    // 0x23a8d0: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x23a8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23a8d4:
    // 0x23a8d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23a8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23a8d8:
    // 0x23a8d8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x23a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_23a8dc:
    // 0x23a8dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23a8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23a8e0:
    // 0x23a8e0: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_23a8e4:
    if (ctx->pc == 0x23A8E4u) {
        ctx->pc = 0x23A8E8u;
        goto label_23a8e8;
    }
    ctx->pc = 0x23A8E0u;
    {
        const bool branch_taken_0x23a8e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a8e0) {
            ctx->pc = 0x23A930u;
            goto label_23a930;
        }
    }
    ctx->pc = 0x23A8E8u;
label_23a8e8:
    // 0x23a8e8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23a8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23a8ec:
    // 0x23a8ec: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x23a8ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_23a8f0:
    // 0x23a8f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23a8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a8f4:
    // 0x23a8f4: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x23a8f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23a8f8:
    // 0x23a8f8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_23a8fc:
    if (ctx->pc == 0x23A8FCu) {
        ctx->pc = 0x23A8FCu;
            // 0x23a8fc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x23A900u;
        goto label_23a900;
    }
    ctx->pc = 0x23A8F8u;
    {
        const bool branch_taken_0x23a8f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A8F8u;
            // 0x23a8fc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a8f8) {
            ctx->pc = 0x23A930u;
            goto label_23a930;
        }
    }
    ctx->pc = 0x23A900u;
label_23a900:
    // 0x23a900: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x23a900u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23a904:
    // 0x23a904: 0x0  nop
    ctx->pc = 0x23a904u;
    // NOP
label_23a908:
    // 0x23a908: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23a908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23a90c:
    // 0x23a90c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23a90cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23a910:
    // 0x23a910: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x23a910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23a914:
    // 0x23a914: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23a914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_23a918:
    // 0x23a918: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x23a918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_23a91c:
    // 0x23a91c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23a91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23a920:
    // 0x23a920: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x23a920u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23a924:
    // 0x23a924: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_23a928:
    if (ctx->pc == 0x23A928u) {
        ctx->pc = 0x23A928u;
            // 0x23a928: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x23A92Cu;
        goto label_23a92c;
    }
    ctx->pc = 0x23A924u;
    {
        const bool branch_taken_0x23a924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A924u;
            // 0x23a928: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a924) {
            ctx->pc = 0x23A908u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a908;
        }
    }
    ctx->pc = 0x23A92Cu;
label_23a92c:
    // 0x23a92c: 0x0  nop
    ctx->pc = 0x23a92cu;
    // NOP
label_23a930:
    // 0x23a930: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x23a930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_23a934:
    // 0x23a934: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_23a938:
    if (ctx->pc == 0x23A938u) {
        ctx->pc = 0x23A938u;
            // 0x23a938: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x23A93Cu;
        goto label_23a93c;
    }
    ctx->pc = 0x23A934u;
    {
        const bool branch_taken_0x23a934 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x23A938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A934u;
            // 0x23a938: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a934) {
            ctx->pc = 0x23A8D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a8d4;
        }
    }
    ctx->pc = 0x23A93Cu;
label_23a93c:
    // 0x23a93c: 0x0  nop
    ctx->pc = 0x23a93cu;
    // NOP
label_23a940:
    // 0x23a940: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23a940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23a944:
    // 0x23a944: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23a944u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23a948:
    // 0x23a948: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23a948u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23a94c:
    // 0x23a94c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23a94cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23a950:
    // 0x23a950: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23a950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23a954:
    // 0x23a954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23a954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23a958:
    // 0x23a958: 0x3e00008  jr          $ra
label_23a95c:
    if (ctx->pc == 0x23A95Cu) {
        ctx->pc = 0x23A95Cu;
            // 0x23a95c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x23A960u;
        goto label_fallthrough_0x23a958;
    }
    ctx->pc = 0x23A958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A958u;
            // 0x23a95c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x23a958:
    ctx->pc = 0x23A960u;
}
