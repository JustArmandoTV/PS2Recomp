#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0980
// Address: 0x1c0980 - 0x1c0a38
void sub_001C0980_0x1c0980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0980_0x1c0980");
#endif

    switch (ctx->pc) {
        case 0x1c0980u: goto label_1c0980;
        case 0x1c0984u: goto label_1c0984;
        case 0x1c0988u: goto label_1c0988;
        case 0x1c098cu: goto label_1c098c;
        case 0x1c0990u: goto label_1c0990;
        case 0x1c0994u: goto label_1c0994;
        case 0x1c0998u: goto label_1c0998;
        case 0x1c099cu: goto label_1c099c;
        case 0x1c09a0u: goto label_1c09a0;
        case 0x1c09a4u: goto label_1c09a4;
        case 0x1c09a8u: goto label_1c09a8;
        case 0x1c09acu: goto label_1c09ac;
        case 0x1c09b0u: goto label_1c09b0;
        case 0x1c09b4u: goto label_1c09b4;
        case 0x1c09b8u: goto label_1c09b8;
        case 0x1c09bcu: goto label_1c09bc;
        case 0x1c09c0u: goto label_1c09c0;
        case 0x1c09c4u: goto label_1c09c4;
        case 0x1c09c8u: goto label_1c09c8;
        case 0x1c09ccu: goto label_1c09cc;
        case 0x1c09d0u: goto label_1c09d0;
        case 0x1c09d4u: goto label_1c09d4;
        case 0x1c09d8u: goto label_1c09d8;
        case 0x1c09dcu: goto label_1c09dc;
        case 0x1c09e0u: goto label_1c09e0;
        case 0x1c09e4u: goto label_1c09e4;
        case 0x1c09e8u: goto label_1c09e8;
        case 0x1c09ecu: goto label_1c09ec;
        case 0x1c09f0u: goto label_1c09f0;
        case 0x1c09f4u: goto label_1c09f4;
        case 0x1c09f8u: goto label_1c09f8;
        case 0x1c09fcu: goto label_1c09fc;
        case 0x1c0a00u: goto label_1c0a00;
        case 0x1c0a04u: goto label_1c0a04;
        case 0x1c0a08u: goto label_1c0a08;
        case 0x1c0a0cu: goto label_1c0a0c;
        case 0x1c0a10u: goto label_1c0a10;
        case 0x1c0a14u: goto label_1c0a14;
        case 0x1c0a18u: goto label_1c0a18;
        case 0x1c0a1cu: goto label_1c0a1c;
        case 0x1c0a20u: goto label_1c0a20;
        case 0x1c0a24u: goto label_1c0a24;
        case 0x1c0a28u: goto label_1c0a28;
        case 0x1c0a2cu: goto label_1c0a2c;
        case 0x1c0a30u: goto label_1c0a30;
        case 0x1c0a34u: goto label_1c0a34;
        default: break;
    }

    ctx->pc = 0x1c0980u;

label_1c0980:
    // 0x1c0980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c0980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c0984:
    // 0x1c0984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c0984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c0988:
    // 0x1c0988: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c0988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c098c:
    // 0x1c098c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c098cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c0990:
    // 0x1c0990: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1c0990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0994:
    // 0x1c0994: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c0994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1c0998:
    // 0x1c0998: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1c0998u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c099c:
    // 0x1c099c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c099cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1c09a0:
    // 0x1c09a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c09a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c09a4:
    // 0x1c09a4: 0xc070ed0  jal         func_1C3B40
label_1c09a8:
    if (ctx->pc == 0x1C09A8u) {
        ctx->pc = 0x1C09A8u;
            // 0x1c09a8: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1C09ACu;
        goto label_1c09ac;
    }
    ctx->pc = 0x1C09A4u;
    SET_GPR_U32(ctx, 31, 0x1C09ACu);
    ctx->pc = 0x1C09A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C09A4u;
            // 0x1c09a8: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3B40u;
    if (runtime->hasFunction(0x1C3B40u)) {
        auto targetFn = runtime->lookupFunction(0x1C3B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C09ACu; }
        if (ctx->pc != 0x1C09ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3B40_0x1c3b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C09ACu; }
        if (ctx->pc != 0x1C09ACu) { return; }
    }
    ctx->pc = 0x1C09ACu;
label_1c09ac:
    // 0x1c09ac: 0x0  nop
    ctx->pc = 0x1c09acu;
    // NOP
label_1c09b0:
    // 0x1c09b0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1c09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1c09b4:
    // 0x1c09b4: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x1c09b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1c09b8:
    // 0x1c09b8: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x1c09b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1c09bc:
    // 0x1c09bc: 0x80f809  jalr        $a0
label_1c09c0:
    if (ctx->pc == 0x1C09C0u) {
        ctx->pc = 0x1C09C4u;
        goto label_1c09c4;
    }
    ctx->pc = 0x1C09BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        SET_GPR_U32(ctx, 31, 0x1C09C4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C09C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C09C4u; }
            if (ctx->pc != 0x1C09C4u) { return; }
        }
        }
    }
    ctx->pc = 0x1C09C4u;
label_1c09c4:
    // 0x1c09c4: 0xc070610  jal         func_1C1840
label_1c09c8:
    if (ctx->pc == 0x1C09C8u) {
        ctx->pc = 0x1C09CCu;
        goto label_1c09cc;
    }
    ctx->pc = 0x1C09C4u;
    SET_GPR_U32(ctx, 31, 0x1C09CCu);
    ctx->pc = 0x1C1840u;
    if (runtime->hasFunction(0x1C1840u)) {
        auto targetFn = runtime->lookupFunction(0x1C1840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C09CCu; }
        if (ctx->pc != 0x1C09CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1840_0x1c1840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C09CCu; }
        if (ctx->pc != 0x1C09CCu) { return; }
    }
    ctx->pc = 0x1C09CCu;
label_1c09cc:
    // 0x1c09cc: 0xc071710  jal         func_1C5C40
label_1c09d0:
    if (ctx->pc == 0x1C09D0u) {
        ctx->pc = 0x1C09D4u;
        goto label_1c09d4;
    }
    ctx->pc = 0x1C09CCu;
    SET_GPR_U32(ctx, 31, 0x1C09D4u);
    ctx->pc = 0x1C5C40u;
    if (runtime->hasFunction(0x1C5C40u)) {
        auto targetFn = runtime->lookupFunction(0x1C5C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C09D4u; }
        if (ctx->pc != 0x1C09D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5C40_0x1c5c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C09D4u; }
        if (ctx->pc != 0x1C09D4u) { return; }
    }
    ctx->pc = 0x1C09D4u;
label_1c09d4:
    // 0x1c09d4: 0xc07042c  jal         func_1C10B0
label_1c09d8:
    if (ctx->pc == 0x1C09D8u) {
        ctx->pc = 0x1C09D8u;
            // 0x1c09d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C09DCu;
        goto label_1c09dc;
    }
    ctx->pc = 0x1C09D4u;
    SET_GPR_U32(ctx, 31, 0x1C09DCu);
    ctx->pc = 0x1C09D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C09D4u;
            // 0x1c09d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C10B0u;
    if (runtime->hasFunction(0x1C10B0u)) {
        auto targetFn = runtime->lookupFunction(0x1C10B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C09DCu; }
        if (ctx->pc != 0x1C09DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C10B0_0x1c10b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C09DCu; }
        if (ctx->pc != 0x1C09DCu) { return; }
    }
    ctx->pc = 0x1C09DCu;
label_1c09dc:
    // 0x1c09dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c09dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c09e0:
    // 0x1c09e0: 0x1071000d  beq         $v1, $s1, . + 4 + (0xD << 2)
label_1c09e4:
    if (ctx->pc == 0x1C09E4u) {
        ctx->pc = 0x1C09E4u;
            // 0x1c09e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C09E8u;
        goto label_1c09e8;
    }
    ctx->pc = 0x1C09E0u;
    {
        const bool branch_taken_0x1c09e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1C09E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C09E0u;
            // 0x1c09e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c09e0) {
            ctx->pc = 0x1C0A18u;
            goto label_1c0a18;
        }
    }
    ctx->pc = 0x1C09E8u;
label_1c09e8:
    // 0x1c09e8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1c09ec:
    if (ctx->pc == 0x1C09ECu) {
        ctx->pc = 0x1C09ECu;
            // 0x1c09ec: 0x2402ff34  addiu       $v0, $zero, -0xCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967092));
        ctx->pc = 0x1C09F0u;
        goto label_1c09f0;
    }
    ctx->pc = 0x1C09E8u;
    {
        const bool branch_taken_0x1c09e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C09ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C09E8u;
            // 0x1c09ec: 0x2402ff34  addiu       $v0, $zero, -0xCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967092));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c09e8) {
            ctx->pc = 0x1C0A18u;
            goto label_1c0a18;
        }
    }
    ctx->pc = 0x1C09F0u;
label_1c09f0:
    // 0x1c09f0: 0x50720005  beql        $v1, $s2, . + 4 + (0x5 << 2)
label_1c09f4:
    if (ctx->pc == 0x1C09F4u) {
        ctx->pc = 0x1C09F4u;
            // 0x1c09f4: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x1C09F8u;
        goto label_1c09f8;
    }
    ctx->pc = 0x1C09F0u;
    {
        const bool branch_taken_0x1c09f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x1c09f0) {
            ctx->pc = 0x1C09F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C09F0u;
            // 0x1c09f4: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0A08u;
            goto label_1c0a08;
        }
    }
    ctx->pc = 0x1C09F8u;
label_1c09f8:
    // 0x1c09f8: 0x14730007  bne         $v1, $s3, . + 4 + (0x7 << 2)
label_1c09fc:
    if (ctx->pc == 0x1C09FCu) {
        ctx->pc = 0x1C09FCu;
            // 0x1c09fc: 0x2402fc18  addiu       $v0, $zero, -0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
        ctx->pc = 0x1C0A00u;
        goto label_1c0a00;
    }
    ctx->pc = 0x1C09F8u;
    {
        const bool branch_taken_0x1c09f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x1C09FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C09F8u;
            // 0x1c09fc: 0x2402fc18  addiu       $v0, $zero, -0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c09f8) {
            ctx->pc = 0x1C0A18u;
            goto label_1c0a18;
        }
    }
    ctx->pc = 0x1C0A00u;
label_1c0a00:
    // 0x1c0a00: 0x10000005  b           . + 4 + (0x5 << 2)
label_1c0a04:
    if (ctx->pc == 0x1C0A04u) {
        ctx->pc = 0x1C0A04u;
            // 0x1c0a04: 0x8602003a  lh          $v0, 0x3A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
        ctx->pc = 0x1C0A08u;
        goto label_1c0a08;
    }
    ctx->pc = 0x1C0A00u;
    {
        const bool branch_taken_0x1c0a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0A00u;
            // 0x1c0a04: 0x8602003a  lh          $v0, 0x3A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a00) {
            ctx->pc = 0x1C0A18u;
            goto label_1c0a18;
        }
    }
    ctx->pc = 0x1C0A08u;
label_1c0a08:
    // 0x1c0a08: 0xc070ee2  jal         func_1C3B88
label_1c0a0c:
    if (ctx->pc == 0x1C0A0Cu) {
        ctx->pc = 0x1C0A0Cu;
            // 0x1c0a0c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x1C0A10u;
        goto label_1c0a10;
    }
    ctx->pc = 0x1C0A08u;
    SET_GPR_U32(ctx, 31, 0x1C0A10u);
    ctx->pc = 0x1C0A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0A08u;
            // 0x1c0a0c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3B88u;
    if (runtime->hasFunction(0x1C3B88u)) {
        auto targetFn = runtime->lookupFunction(0x1C3B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0A10u; }
        if (ctx->pc != 0x1C0A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3B88_0x1c3b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0A10u; }
        if (ctx->pc != 0x1C0A10u) { return; }
    }
    ctx->pc = 0x1C0A10u;
label_1c0a10:
    // 0x1c0a10: 0x1051ffe7  beq         $v0, $s1, . + 4 + (-0x19 << 2)
label_1c0a14:
    if (ctx->pc == 0x1C0A14u) {
        ctx->pc = 0x1C0A14u;
            // 0x1c0a14: 0x2402ff37  addiu       $v0, $zero, -0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967095));
        ctx->pc = 0x1C0A18u;
        goto label_1c0a18;
    }
    ctx->pc = 0x1C0A10u;
    {
        const bool branch_taken_0x1c0a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1C0A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0A10u;
            // 0x1c0a14: 0x2402ff37  addiu       $v0, $zero, -0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967095));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a10) {
            ctx->pc = 0x1C09B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c09b0;
        }
    }
    ctx->pc = 0x1C0A18u;
label_1c0a18:
    // 0x1c0a18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0a18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c0a1c:
    // 0x1c0a1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c0a1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c0a20:
    // 0x1c0a20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c0a20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c0a24:
    // 0x1c0a24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c0a24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c0a28:
    // 0x1c0a28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c0a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c0a2c:
    // 0x1c0a2c: 0x3e00008  jr          $ra
label_1c0a30:
    if (ctx->pc == 0x1C0A30u) {
        ctx->pc = 0x1C0A30u;
            // 0x1c0a30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1C0A34u;
        goto label_1c0a34;
    }
    ctx->pc = 0x1C0A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0A2Cu;
            // 0x1c0a30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0A34u;
label_1c0a34:
    // 0x1c0a34: 0x0  nop
    ctx->pc = 0x1c0a34u;
    // NOP
}
