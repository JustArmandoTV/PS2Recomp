#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038A850
// Address: 0x38a850 - 0x38a9c0
void sub_0038A850_0x38a850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A850_0x38a850");
#endif

    switch (ctx->pc) {
        case 0x38a850u: goto label_38a850;
        case 0x38a854u: goto label_38a854;
        case 0x38a858u: goto label_38a858;
        case 0x38a85cu: goto label_38a85c;
        case 0x38a860u: goto label_38a860;
        case 0x38a864u: goto label_38a864;
        case 0x38a868u: goto label_38a868;
        case 0x38a86cu: goto label_38a86c;
        case 0x38a870u: goto label_38a870;
        case 0x38a874u: goto label_38a874;
        case 0x38a878u: goto label_38a878;
        case 0x38a87cu: goto label_38a87c;
        case 0x38a880u: goto label_38a880;
        case 0x38a884u: goto label_38a884;
        case 0x38a888u: goto label_38a888;
        case 0x38a88cu: goto label_38a88c;
        case 0x38a890u: goto label_38a890;
        case 0x38a894u: goto label_38a894;
        case 0x38a898u: goto label_38a898;
        case 0x38a89cu: goto label_38a89c;
        case 0x38a8a0u: goto label_38a8a0;
        case 0x38a8a4u: goto label_38a8a4;
        case 0x38a8a8u: goto label_38a8a8;
        case 0x38a8acu: goto label_38a8ac;
        case 0x38a8b0u: goto label_38a8b0;
        case 0x38a8b4u: goto label_38a8b4;
        case 0x38a8b8u: goto label_38a8b8;
        case 0x38a8bcu: goto label_38a8bc;
        case 0x38a8c0u: goto label_38a8c0;
        case 0x38a8c4u: goto label_38a8c4;
        case 0x38a8c8u: goto label_38a8c8;
        case 0x38a8ccu: goto label_38a8cc;
        case 0x38a8d0u: goto label_38a8d0;
        case 0x38a8d4u: goto label_38a8d4;
        case 0x38a8d8u: goto label_38a8d8;
        case 0x38a8dcu: goto label_38a8dc;
        case 0x38a8e0u: goto label_38a8e0;
        case 0x38a8e4u: goto label_38a8e4;
        case 0x38a8e8u: goto label_38a8e8;
        case 0x38a8ecu: goto label_38a8ec;
        case 0x38a8f0u: goto label_38a8f0;
        case 0x38a8f4u: goto label_38a8f4;
        case 0x38a8f8u: goto label_38a8f8;
        case 0x38a8fcu: goto label_38a8fc;
        case 0x38a900u: goto label_38a900;
        case 0x38a904u: goto label_38a904;
        case 0x38a908u: goto label_38a908;
        case 0x38a90cu: goto label_38a90c;
        case 0x38a910u: goto label_38a910;
        case 0x38a914u: goto label_38a914;
        case 0x38a918u: goto label_38a918;
        case 0x38a91cu: goto label_38a91c;
        case 0x38a920u: goto label_38a920;
        case 0x38a924u: goto label_38a924;
        case 0x38a928u: goto label_38a928;
        case 0x38a92cu: goto label_38a92c;
        case 0x38a930u: goto label_38a930;
        case 0x38a934u: goto label_38a934;
        case 0x38a938u: goto label_38a938;
        case 0x38a93cu: goto label_38a93c;
        case 0x38a940u: goto label_38a940;
        case 0x38a944u: goto label_38a944;
        case 0x38a948u: goto label_38a948;
        case 0x38a94cu: goto label_38a94c;
        case 0x38a950u: goto label_38a950;
        case 0x38a954u: goto label_38a954;
        case 0x38a958u: goto label_38a958;
        case 0x38a95cu: goto label_38a95c;
        case 0x38a960u: goto label_38a960;
        case 0x38a964u: goto label_38a964;
        case 0x38a968u: goto label_38a968;
        case 0x38a96cu: goto label_38a96c;
        case 0x38a970u: goto label_38a970;
        case 0x38a974u: goto label_38a974;
        case 0x38a978u: goto label_38a978;
        case 0x38a97cu: goto label_38a97c;
        case 0x38a980u: goto label_38a980;
        case 0x38a984u: goto label_38a984;
        case 0x38a988u: goto label_38a988;
        case 0x38a98cu: goto label_38a98c;
        case 0x38a990u: goto label_38a990;
        case 0x38a994u: goto label_38a994;
        case 0x38a998u: goto label_38a998;
        case 0x38a99cu: goto label_38a99c;
        case 0x38a9a0u: goto label_38a9a0;
        case 0x38a9a4u: goto label_38a9a4;
        case 0x38a9a8u: goto label_38a9a8;
        case 0x38a9acu: goto label_38a9ac;
        case 0x38a9b0u: goto label_38a9b0;
        case 0x38a9b4u: goto label_38a9b4;
        case 0x38a9b8u: goto label_38a9b8;
        case 0x38a9bcu: goto label_38a9bc;
        default: break;
    }

    ctx->pc = 0x38a850u;

label_38a850:
    // 0x38a850: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38a850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_38a854:
    // 0x38a854: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x38a854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_38a858:
    // 0x38a858: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x38a858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_38a85c:
    // 0x38a85c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38a85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_38a860:
    // 0x38a860: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38a860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38a864:
    // 0x38a864: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x38a864u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38a868:
    // 0x38a868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38a868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38a86c:
    // 0x38a86c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x38a86cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38a870:
    // 0x38a870: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38a870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38a874:
    // 0x38a874: 0x26650012  addiu       $a1, $s3, 0x12
    ctx->pc = 0x38a874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 18));
label_38a878:
    // 0x38a878: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x38a878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_38a87c:
    // 0x38a87c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x38a87cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38a880:
    // 0x38a880: 0x90840012  lbu         $a0, 0x12($a0)
    ctx->pc = 0x38a880u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
label_38a884:
    // 0x38a884: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
label_38a888:
    if (ctx->pc == 0x38A888u) {
        ctx->pc = 0x38A888u;
            // 0x38a888: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38A88Cu;
        goto label_38a88c;
    }
    ctx->pc = 0x38A884u;
    {
        const bool branch_taken_0x38a884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x38A888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A884u;
            // 0x38a888: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a884) {
            ctx->pc = 0x38A8C0u;
            goto label_38a8c0;
        }
    }
    ctx->pc = 0x38A88Cu;
label_38a88c:
    // 0x38a88c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38a88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38a890:
    // 0x38a890: 0x50830045  beql        $a0, $v1, . + 4 + (0x45 << 2)
label_38a894:
    if (ctx->pc == 0x38A894u) {
        ctx->pc = 0x38A894u;
            // 0x38a894: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x38A898u;
        goto label_38a898;
    }
    ctx->pc = 0x38A890u;
    {
        const bool branch_taken_0x38a890 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38a890) {
            ctx->pc = 0x38A894u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38A890u;
            // 0x38a894: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38A9A8u;
            goto label_38a9a8;
        }
    }
    ctx->pc = 0x38A898u;
label_38a898:
    // 0x38a898: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38a898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38a89c:
    // 0x38a89c: 0x10830041  beq         $a0, $v1, . + 4 + (0x41 << 2)
label_38a8a0:
    if (ctx->pc == 0x38A8A0u) {
        ctx->pc = 0x38A8A4u;
        goto label_38a8a4;
    }
    ctx->pc = 0x38A89Cu;
    {
        const bool branch_taken_0x38a89c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38a89c) {
            ctx->pc = 0x38A9A4u;
            goto label_38a9a4;
        }
    }
    ctx->pc = 0x38A8A4u;
label_38a8a4:
    // 0x38a8a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38a8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38a8a8:
    // 0x38a8a8: 0x1083003e  beq         $a0, $v1, . + 4 + (0x3E << 2)
label_38a8ac:
    if (ctx->pc == 0x38A8ACu) {
        ctx->pc = 0x38A8B0u;
        goto label_38a8b0;
    }
    ctx->pc = 0x38A8A8u;
    {
        const bool branch_taken_0x38a8a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38a8a8) {
            ctx->pc = 0x38A9A4u;
            goto label_38a9a4;
        }
    }
    ctx->pc = 0x38A8B0u;
label_38a8b0:
    // 0x38a8b0: 0x1080003c  beqz        $a0, . + 4 + (0x3C << 2)
label_38a8b4:
    if (ctx->pc == 0x38A8B4u) {
        ctx->pc = 0x38A8B8u;
        goto label_38a8b8;
    }
    ctx->pc = 0x38A8B0u;
    {
        const bool branch_taken_0x38a8b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a8b0) {
            ctx->pc = 0x38A9A4u;
            goto label_38a9a4;
        }
    }
    ctx->pc = 0x38A8B8u;
label_38a8b8:
    // 0x38a8b8: 0x1000003a  b           . + 4 + (0x3A << 2)
label_38a8bc:
    if (ctx->pc == 0x38A8BCu) {
        ctx->pc = 0x38A8C0u;
        goto label_38a8c0;
    }
    ctx->pc = 0x38A8B8u;
    {
        const bool branch_taken_0x38a8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a8b8) {
            ctx->pc = 0x38A9A4u;
            goto label_38a9a4;
        }
    }
    ctx->pc = 0x38A8C0u;
label_38a8c0:
    // 0x38a8c0: 0xc0754b4  jal         func_1D52D0
label_38a8c4:
    if (ctx->pc == 0x38A8C4u) {
        ctx->pc = 0x38A8C4u;
            // 0x38a8c4: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->pc = 0x38A8C8u;
        goto label_38a8c8;
    }
    ctx->pc = 0x38A8C0u;
    SET_GPR_U32(ctx, 31, 0x38A8C8u);
    ctx->pc = 0x38A8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38A8C0u;
            // 0x38a8c4: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38A8C8u; }
        if (ctx->pc != 0x38A8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38A8C8u; }
        if (ctx->pc != 0x38A8C8u) { return; }
    }
    ctx->pc = 0x38A8C8u;
label_38a8c8:
    // 0x38a8c8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x38a8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_38a8cc:
    // 0x38a8cc: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x38a8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_38a8d0:
    // 0x38a8d0: 0x8c641ba8  lw          $a0, 0x1BA8($v1)
    ctx->pc = 0x38a8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7080)));
label_38a8d4:
    // 0x38a8d4: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x38a8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_38a8d8:
    // 0x38a8d8: 0x10830032  beq         $a0, $v1, . + 4 + (0x32 << 2)
label_38a8dc:
    if (ctx->pc == 0x38A8DCu) {
        ctx->pc = 0x38A8E0u;
        goto label_38a8e0;
    }
    ctx->pc = 0x38A8D8u;
    {
        const bool branch_taken_0x38a8d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38a8d8) {
            ctx->pc = 0x38A9A4u;
            goto label_38a9a4;
        }
    }
    ctx->pc = 0x38A8E0u;
label_38a8e0:
    // 0x38a8e0: 0x8e030e30  lw          $v1, 0xE30($s0)
    ctx->pc = 0x38a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3632)));
label_38a8e4:
    // 0x38a8e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38a8e8:
    // 0x38a8e8: 0x54620022  bnel        $v1, $v0, . + 4 + (0x22 << 2)
label_38a8ec:
    if (ctx->pc == 0x38A8ECu) {
        ctx->pc = 0x38A8ECu;
            // 0x38a8ec: 0x8e040d60  lw          $a0, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->pc = 0x38A8F0u;
        goto label_38a8f0;
    }
    ctx->pc = 0x38A8E8u;
    {
        const bool branch_taken_0x38a8e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x38a8e8) {
            ctx->pc = 0x38A8ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38A8E8u;
            // 0x38a8ec: 0x8e040d60  lw          $a0, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38A974u;
            goto label_38a974;
        }
    }
    ctx->pc = 0x38A8F0u;
label_38a8f0:
    // 0x38a8f0: 0x8e020a68  lw          $v0, 0xA68($s0)
    ctx->pc = 0x38a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
label_38a8f4:
    // 0x38a8f4: 0x26030a50  addiu       $v1, $s0, 0xA50
    ctx->pc = 0x38a8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
label_38a8f8:
    // 0x38a8f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x38a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_38a8fc:
    // 0x38a8fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_38a900:
    // 0x38a900: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x38a900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_38a904:
    // 0x38a904: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x38a904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_38a908:
    // 0x38a908: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x38a908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_38a90c:
    // 0x38a90c: 0x320f809  jalr        $t9
label_38a910:
    if (ctx->pc == 0x38A910u) {
        ctx->pc = 0x38A914u;
        goto label_38a914;
    }
    ctx->pc = 0x38A90Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38A914u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x38A914u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38A914u; }
            if (ctx->pc != 0x38A914u) { return; }
        }
        }
    }
    ctx->pc = 0x38A914u;
label_38a914:
    // 0x38a914: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x38a914u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38a918:
    // 0x38a918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38a918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38a91c:
    // 0x38a91c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x38a91cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_38a920:
    // 0x38a920: 0x320f809  jalr        $t9
label_38a924:
    if (ctx->pc == 0x38A924u) {
        ctx->pc = 0x38A924u;
            // 0x38a924: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x38A928u;
        goto label_38a928;
    }
    ctx->pc = 0x38A920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38A928u);
        ctx->pc = 0x38A924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A920u;
            // 0x38a924: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38A928u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38A928u; }
            if (ctx->pc != 0x38A928u) { return; }
        }
        }
    }
    ctx->pc = 0x38A928u;
label_38a928:
    // 0x38a928: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x38a928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
label_38a92c:
    // 0x38a92c: 0xae000de8  sw          $zero, 0xDE8($s0)
    ctx->pc = 0x38a92cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3560), GPR_U32(ctx, 0));
label_38a930:
    // 0x38a930: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x38a930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_38a934:
    // 0x38a934: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38a934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38a938:
    // 0x38a938: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38a938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38a93c:
    // 0x38a93c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x38a93cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38a940:
    // 0x38a940: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x38a940u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38a944:
    // 0x38a944: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x38a944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38a948:
    // 0x38a948: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38a948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38a94c:
    // 0x38a94c: 0xc0e256c  jal         func_3895B0
label_38a950:
    if (ctx->pc == 0x38A950u) {
        ctx->pc = 0x38A950u;
            // 0x38a950: 0xae020de4  sw          $v0, 0xDE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 2));
        ctx->pc = 0x38A954u;
        goto label_38a954;
    }
    ctx->pc = 0x38A94Cu;
    SET_GPR_U32(ctx, 31, 0x38A954u);
    ctx->pc = 0x38A950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38A94Cu;
            // 0x38a950: 0xae020de4  sw          $v0, 0xDE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3895B0u;
    if (runtime->hasFunction(0x3895B0u)) {
        auto targetFn = runtime->lookupFunction(0x3895B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38A954u; }
        if (ctx->pc != 0x38A954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003895B0_0x3895b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38A954u; }
        if (ctx->pc != 0x38A954u) { return; }
    }
    ctx->pc = 0x38A954u;
label_38a954:
    // 0x38a954: 0x8e040d60  lw          $a0, 0xD60($s0)
    ctx->pc = 0x38a954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_38a958:
    // 0x38a958: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x38a958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_38a95c:
    // 0x38a95c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x38a95cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_38a960:
    // 0x38a960: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x38a960u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_38a964:
    // 0x38a964: 0x320f809  jalr        $t9
label_38a968:
    if (ctx->pc == 0x38A968u) {
        ctx->pc = 0x38A968u;
            // 0x38a968: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x38A96Cu;
        goto label_38a96c;
    }
    ctx->pc = 0x38A964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38A96Cu);
        ctx->pc = 0x38A968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A964u;
            // 0x38a968: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38A96Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38A96Cu; }
            if (ctx->pc != 0x38A96Cu) { return; }
        }
        }
    }
    ctx->pc = 0x38A96Cu;
label_38a96c:
    // 0x38a96c: 0x1000000d  b           . + 4 + (0xD << 2)
label_38a970:
    if (ctx->pc == 0x38A970u) {
        ctx->pc = 0x38A974u;
        goto label_38a974;
    }
    ctx->pc = 0x38A96Cu;
    {
        const bool branch_taken_0x38a96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a96c) {
            ctx->pc = 0x38A9A4u;
            goto label_38a9a4;
        }
    }
    ctx->pc = 0x38A974u;
label_38a974:
    // 0x38a974: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x38a974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_38a978:
    // 0x38a978: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x38a978u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_38a97c:
    // 0x38a97c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x38a97cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_38a980:
    // 0x38a980: 0x320f809  jalr        $t9
label_38a984:
    if (ctx->pc == 0x38A984u) {
        ctx->pc = 0x38A984u;
            // 0x38a984: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x38A988u;
        goto label_38a988;
    }
    ctx->pc = 0x38A980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38A988u);
        ctx->pc = 0x38A984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A980u;
            // 0x38a984: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38A988u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38A988u; }
            if (ctx->pc != 0x38A988u) { return; }
        }
        }
    }
    ctx->pc = 0x38A988u;
label_38a988:
    // 0x38a988: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38a988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38a98c:
    // 0x38a98c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38a98cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38a990:
    // 0x38a990: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x38a990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38a994:
    // 0x38a994: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x38a994u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38a998:
    // 0x38a998: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38a998u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38a99c:
    // 0x38a99c: 0xc0e26e0  jal         func_389B80
label_38a9a0:
    if (ctx->pc == 0x38A9A0u) {
        ctx->pc = 0x38A9A0u;
            // 0x38a9a0: 0xae000de4  sw          $zero, 0xDE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 0));
        ctx->pc = 0x38A9A4u;
        goto label_38a9a4;
    }
    ctx->pc = 0x38A99Cu;
    SET_GPR_U32(ctx, 31, 0x38A9A4u);
    ctx->pc = 0x38A9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38A99Cu;
            // 0x38a9a0: 0xae000de4  sw          $zero, 0xDE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x389B80u;
    if (runtime->hasFunction(0x389B80u)) {
        auto targetFn = runtime->lookupFunction(0x389B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38A9A4u; }
        if (ctx->pc != 0x38A9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00389B80_0x389b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38A9A4u; }
        if (ctx->pc != 0x38A9A4u) { return; }
    }
    ctx->pc = 0x38A9A4u;
label_38a9a4:
    // 0x38a9a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x38a9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_38a9a8:
    // 0x38a9a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38a9a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38a9ac:
    // 0x38a9ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38a9acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38a9b0:
    // 0x38a9b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38a9b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38a9b4:
    // 0x38a9b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38a9b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38a9b8:
    // 0x38a9b8: 0x3e00008  jr          $ra
label_38a9bc:
    if (ctx->pc == 0x38A9BCu) {
        ctx->pc = 0x38A9BCu;
            // 0x38a9bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x38A9C0u;
        goto label_fallthrough_0x38a9b8;
    }
    ctx->pc = 0x38A9B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A9B8u;
            // 0x38a9bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x38a9b8:
    ctx->pc = 0x38A9C0u;
}
