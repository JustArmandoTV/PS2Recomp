#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001988E8
// Address: 0x1988e8 - 0x198cd0
void sub_001988E8_0x1988e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001988E8_0x1988e8");
#endif

    switch (ctx->pc) {
        case 0x198920u: goto label_198920;
        case 0x198938u: goto label_198938;
        case 0x198960u: goto label_198960;
        case 0x198998u: goto label_198998;
        case 0x1989b0u: goto label_1989b0;
        case 0x1989ccu: goto label_1989cc;
        case 0x1989e8u: goto label_1989e8;
        case 0x1989f4u: goto label_1989f4;
        case 0x198a78u: goto label_198a78;
        case 0x198a94u: goto label_198a94;
        case 0x198ab8u: goto label_198ab8;
        case 0x198ac0u: goto label_198ac0;
        case 0x198ae0u: goto label_198ae0;
        case 0x198af4u: goto label_198af4;
        case 0x198afcu: goto label_198afc;
        case 0x198b1cu: goto label_198b1c;
        case 0x198b68u: goto label_198b68;
        case 0x198b98u: goto label_198b98;
        case 0x198ba4u: goto label_198ba4;
        case 0x198bb4u: goto label_198bb4;
        case 0x198bc8u: goto label_198bc8;
        case 0x198bd0u: goto label_198bd0;
        case 0x198be4u: goto label_198be4;
        case 0x198becu: goto label_198bec;
        case 0x198c08u: goto label_198c08;
        case 0x198c2cu: goto label_198c2c;
        case 0x198c34u: goto label_198c34;
        case 0x198c40u: goto label_198c40;
        case 0x198c58u: goto label_198c58;
        case 0x198c60u: goto label_198c60;
        case 0x198c70u: goto label_198c70;
        case 0x198c78u: goto label_198c78;
        case 0x198c80u: goto label_198c80;
        default: break;
    }

    ctx->pc = 0x1988e8u;

    // 0x1988e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1988e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1988ec: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1988ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1988f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1988f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1988f4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1988f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1988f8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1988f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1988fc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1988fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x198900: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x198900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x198904: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x198904u;
    {
        const bool branch_taken_0x198904 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x198908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198904u;
            // 0x198908: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198904) {
            ctx->pc = 0x198918u;
            goto label_198918;
        }
    }
    ctx->pc = 0x19890Cu;
    // 0x19890c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19890cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x198910: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x198910u;
    {
        const bool branch_taken_0x198910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198910u;
            // 0x198914: 0x24848840  addiu       $a0, $a0, -0x77C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198910) {
            ctx->pc = 0x1989C4u;
            goto label_1989c4;
        }
    }
    ctx->pc = 0x198918u;
label_198918:
    // 0x198918: 0xc06635e  jal         func_198D78
    ctx->pc = 0x198918u;
    SET_GPR_U32(ctx, 31, 0x198920u);
    ctx->pc = 0x198D78u;
    if (runtime->hasFunction(0x198D78u)) {
        auto targetFn = runtime->lookupFunction(0x198D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198920u; }
        if (ctx->pc != 0x198920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00198D78_0x198d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198920u; }
        if (ctx->pc != 0x198920u) { return; }
    }
    ctx->pc = 0x198920u;
label_198920:
    // 0x198920: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198924: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x198924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198928: 0x162300e1  bne         $s1, $v1, . + 4 + (0xE1 << 2)
    ctx->pc = 0x198928u;
    {
        const bool branch_taken_0x198928 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x19892Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198928u;
            // 0x19892c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198928) {
            ctx->pc = 0x198CB0u;
            goto label_198cb0;
        }
    }
    ctx->pc = 0x198930u;
    // 0x198930: 0xc066c68  jal         func_19B1A0
    ctx->pc = 0x198930u;
    SET_GPR_U32(ctx, 31, 0x198938u);
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198938u; }
        if (ctx->pc != 0x198938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198938u; }
        if (ctx->pc != 0x198938u) { return; }
    }
    ctx->pc = 0x198938u;
label_198938:
    // 0x198938: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x198938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19893c: 0x2450006c  addiu       $s0, $v0, 0x6C
    ctx->pc = 0x19893cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x198940: 0x24530004  addiu       $s3, $v0, 0x4
    ctx->pc = 0x198940u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x198944: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x198944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x198948: 0x1451000f  bne         $v0, $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x198948u;
    {
        const bool branch_taken_0x198948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x19894Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198948u;
            // 0x19894c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198948) {
            ctx->pc = 0x198988u;
            goto label_198988;
        }
    }
    ctx->pc = 0x198950u;
    // 0x198950: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x198950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198954: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x198954u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198958: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19895c: 0x0  nop
    ctx->pc = 0x19895cu;
    // NOP
label_198960:
    // 0x198960: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x198960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x198964: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x198964u;
    {
        const bool branch_taken_0x198964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198964u;
            // 0x198968: 0x24630594  addiu       $v1, $v1, 0x594 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1428));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198964) {
            ctx->pc = 0x198984u;
            goto label_198984;
        }
    }
    ctx->pc = 0x19896Cu;
    // 0x19896c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x19896cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198970: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x198970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x198974: 0x0  nop
    ctx->pc = 0x198974u;
    // NOP
    // 0x198978: 0x0  nop
    ctx->pc = 0x198978u;
    // NOP
    // 0x19897c: 0x5045fff8  beql        $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19897Cu;
    {
        const bool branch_taken_0x19897c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x19897c) {
            ctx->pc = 0x198980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19897Cu;
            // 0x198980: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x198960u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_198960;
        }
    }
    ctx->pc = 0x198984u;
label_198984:
    // 0x198984: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x198984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_198988:
    // 0x198988: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x198988u;
    {
        const bool branch_taken_0x198988 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x198988) {
            ctx->pc = 0x1989A8u;
            goto label_1989a8;
        }
    }
    ctx->pc = 0x198990u;
    // 0x198990: 0xc066dae  jal         func_19B6B8
    ctx->pc = 0x198990u;
    SET_GPR_U32(ctx, 31, 0x198998u);
    ctx->pc = 0x198994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198990u;
            // 0x198994: 0x2404fff5  addiu       $a0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B6B8u;
    if (runtime->hasFunction(0x19B6B8u)) {
        auto targetFn = runtime->lookupFunction(0x19B6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198998u; }
        if (ctx->pc != 0x198998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B6B8_0x19b6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198998u; }
        if (ctx->pc != 0x198998u) { return; }
    }
    ctx->pc = 0x198998u;
label_198998:
    // 0x198998: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x198998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19899c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19899Cu;
    {
        const bool branch_taken_0x19899c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1989A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19899Cu;
            // 0x1989a0: 0x24848870  addiu       $a0, $a0, -0x7790 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19899c) {
            ctx->pc = 0x1989C4u;
            goto label_1989c4;
        }
    }
    ctx->pc = 0x1989A4u;
    // 0x1989a4: 0x0  nop
    ctx->pc = 0x1989a4u;
    // NOP
label_1989a8:
    // 0x1989a8: 0xc066334  jal         func_198CD0
    ctx->pc = 0x1989A8u;
    SET_GPR_U32(ctx, 31, 0x1989B0u);
    ctx->pc = 0x1989ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1989A8u;
            // 0x1989ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198CD0u;
    if (runtime->hasFunction(0x198CD0u)) {
        auto targetFn = runtime->lookupFunction(0x198CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1989B0u; }
        if (ctx->pc != 0x1989B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00198CD0_0x198cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1989B0u; }
        if (ctx->pc != 0x1989B0u) { return; }
    }
    ctx->pc = 0x1989B0u;
label_1989b0:
    // 0x1989b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1989b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1989b4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1989B4u;
    {
        const bool branch_taken_0x1989b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1989B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1989B4u;
            // 0x1989b8: 0x24060594  addiu       $a2, $zero, 0x594 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1428));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1989b4) {
            ctx->pc = 0x1989D8u;
            goto label_1989d8;
        }
    }
    ctx->pc = 0x1989BCu;
    // 0x1989bc: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1989bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1989c0: 0x248488c0  addiu       $a0, $a0, -0x7740
    ctx->pc = 0x1989c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936768));
label_1989c4:
    // 0x1989c4: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x1989C4u;
    SET_GPR_U32(ctx, 31, 0x1989CCu);
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1989CCu; }
        if (ctx->pc != 0x1989CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1989CCu; }
        if (ctx->pc != 0x1989CCu) { return; }
    }
    ctx->pc = 0x1989CCu;
label_1989cc:
    // 0x1989cc: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x1989CCu;
    {
        const bool branch_taken_0x1989cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1989D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1989CCu;
            // 0x1989d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1989cc) {
            ctx->pc = 0x198CB0u;
            goto label_198cb0;
        }
    }
    ctx->pc = 0x1989D4u;
    // 0x1989d4: 0x0  nop
    ctx->pc = 0x1989d4u;
    // NOP
label_1989d8:
    // 0x1989d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1989d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1989dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1989dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1989e0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1989E0u;
    SET_GPR_U32(ctx, 31, 0x1989E8u);
    ctx->pc = 0x1989E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1989E0u;
            // 0x1989e4: 0x26110008  addiu       $s1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1989E8u; }
        if (ctx->pc != 0x1989E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1989E8u; }
        if (ctx->pc != 0x1989E8u) { return; }
    }
    ctx->pc = 0x1989E8u;
label_1989e8:
    // 0x1989e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1989e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1989ec: 0xc066348  jal         func_198D20
    ctx->pc = 0x1989ECu;
    SET_GPR_U32(ctx, 31, 0x1989F4u);
    ctx->pc = 0x1989F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1989ECu;
            // 0x1989f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198D20u;
    if (runtime->hasFunction(0x198D20u)) {
        auto targetFn = runtime->lookupFunction(0x198D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1989F4u; }
        if (ctx->pc != 0x1989F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00198D20_0x198d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1989F4u; }
        if (ctx->pc != 0x1989F4u) { return; }
    }
    ctx->pc = 0x1989F4u;
label_1989f4:
    // 0x1989f4: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x1989f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1989f8: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x1989f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1989fc: 0x6a43000f  ldl         $v1, 0xF($s2)
    ctx->pc = 0x1989fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x198a00: 0x6e430008  ldr         $v1, 0x8($s2)
    ctx->pc = 0x198a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x198a04: 0x6a440017  ldl         $a0, 0x17($s2)
    ctx->pc = 0x198a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x198a08: 0x6e440010  ldr         $a0, 0x10($s2)
    ctx->pc = 0x198a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x198a0c: 0x6a45001f  ldl         $a1, 0x1F($s2)
    ctx->pc = 0x198a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x198a10: 0x6e450018  ldr         $a1, 0x18($s2)
    ctx->pc = 0x198a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x198a14: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x198a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198a18: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x198a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198a1c: 0xb223000f  sdl         $v1, 0xF($s1)
    ctx->pc = 0x198a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198a20: 0xb6230008  sdr         $v1, 0x8($s1)
    ctx->pc = 0x198a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198a24: 0xb2240017  sdl         $a0, 0x17($s1)
    ctx->pc = 0x198a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198a28: 0xb6240010  sdr         $a0, 0x10($s1)
    ctx->pc = 0x198a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198a2c: 0xb225001f  sdl         $a1, 0x1F($s1)
    ctx->pc = 0x198a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198a30: 0xb6250018  sdr         $a1, 0x18($s1)
    ctx->pc = 0x198a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198a34: 0x6a420027  ldl         $v0, 0x27($s2)
    ctx->pc = 0x198a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x198a38: 0x6e420020  ldr         $v0, 0x20($s2)
    ctx->pc = 0x198a38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x198a3c: 0x6a43002f  ldl         $v1, 0x2F($s2)
    ctx->pc = 0x198a3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x198a40: 0x6e430028  ldr         $v1, 0x28($s2)
    ctx->pc = 0x198a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x198a44: 0x6a440037  ldl         $a0, 0x37($s2)
    ctx->pc = 0x198a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x198a48: 0x6e440030  ldr         $a0, 0x30($s2)
    ctx->pc = 0x198a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x198a4c: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x198a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x198a50: 0xb2220027  sdl         $v0, 0x27($s1)
    ctx->pc = 0x198a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198a54: 0xb6220020  sdr         $v0, 0x20($s1)
    ctx->pc = 0x198a54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198a58: 0xb223002f  sdl         $v1, 0x2F($s1)
    ctx->pc = 0x198a58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198a5c: 0xb6230028  sdr         $v1, 0x28($s1)
    ctx->pc = 0x198a5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198a60: 0xb2240037  sdl         $a0, 0x37($s1)
    ctx->pc = 0x198a60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198a64: 0xb6240030  sdr         $a0, 0x30($s1)
    ctx->pc = 0x198a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198a68: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x198a68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198a6c: 0xae250038  sw          $a1, 0x38($s1)
    ctx->pc = 0x198a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
    // 0x198a70: 0xc065e5a  jal         func_197968
    ctx->pc = 0x198A70u;
    SET_GPR_U32(ctx, 31, 0x198A78u);
    ctx->pc = 0x198A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198A70u;
            // 0x198a74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197968u;
    if (runtime->hasFunction(0x197968u)) {
        auto targetFn = runtime->lookupFunction(0x197968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A78u; }
        if (ctx->pc != 0x198A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197968_0x197968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A78u; }
        if (ctx->pc != 0x198A78u) { return; }
    }
    ctx->pc = 0x198A78u;
label_198a78:
    // 0x198a78: 0x14540004  bne         $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x198A78u;
    {
        const bool branch_taken_0x198a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x198A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198A78u;
            // 0x198a7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a78) {
            ctx->pc = 0x198A8Cu;
            goto label_198a8c;
        }
    }
    ctx->pc = 0x198A80u;
    // 0x198a80: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x198a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x198a84: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x198a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x198a88: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x198a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_198a8c:
    // 0x198a8c: 0xc065f62  jal         func_197D88
    ctx->pc = 0x198A8Cu;
    SET_GPR_U32(ctx, 31, 0x198A94u);
    ctx->pc = 0x198A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198A8Cu;
            // 0x198a90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197D88u;
    if (runtime->hasFunction(0x197D88u)) {
        auto targetFn = runtime->lookupFunction(0x197D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A94u; }
        if (ctx->pc != 0x198A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197D88_0x197d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A94u; }
        if (ctx->pc != 0x198A94u) { return; }
    }
    ctx->pc = 0x198A94u;
label_198a94:
    // 0x198a94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x198a94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a98: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x198A98u;
    {
        const bool branch_taken_0x198a98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x198A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198A98u;
            // 0x198a9c: 0xae110048  sw          $s1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a98) {
            ctx->pc = 0x198AB0u;
            goto label_198ab0;
        }
    }
    ctx->pc = 0x198AA0u;
    // 0x198aa0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x198aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x198aa4: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x198AA4u;
    {
        const bool branch_taken_0x198aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198AA4u;
            // 0x198aa8: 0x24848900  addiu       $a0, $a0, -0x7700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198aa4) {
            ctx->pc = 0x198C50u;
            goto label_198c50;
        }
    }
    ctx->pc = 0x198AACu;
    // 0x198aac: 0x0  nop
    ctx->pc = 0x198aacu;
    // NOP
label_198ab0:
    // 0x198ab0: 0xc0672e0  jal         func_19CB80
    ctx->pc = 0x198AB0u;
    SET_GPR_U32(ctx, 31, 0x198AB8u);
    ctx->pc = 0x198AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198AB0u;
            // 0x198ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CB80u;
    if (runtime->hasFunction(0x19CB80u)) {
        auto targetFn = runtime->lookupFunction(0x19CB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198AB8u; }
        if (ctx->pc != 0x198AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CB80_0x19cb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198AB8u; }
        if (ctx->pc != 0x198AB8u) { return; }
    }
    ctx->pc = 0x198AB8u;
label_198ab8:
    // 0x198ab8: 0xc06614c  jal         func_198530
    ctx->pc = 0x198AB8u;
    SET_GPR_U32(ctx, 31, 0x198AC0u);
    ctx->pc = 0x198ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198AB8u;
            // 0x198abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198530u;
    if (runtime->hasFunction(0x198530u)) {
        auto targetFn = runtime->lookupFunction(0x198530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198AC0u; }
        if (ctx->pc != 0x198AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00198530_0x198530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198AC0u; }
        if (ctx->pc != 0x198AC0u) { return; }
    }
    ctx->pc = 0x198AC0u;
label_198ac0:
    // 0x198ac0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x198ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ac4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x198ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ac8: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x198ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x198acc: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x198accu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x198ad0: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x198ad0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x198ad4: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x198ad4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x198ad8: 0xc065d4e  jal         func_197538
    ctx->pc = 0x198AD8u;
    SET_GPR_U32(ctx, 31, 0x198AE0u);
    ctx->pc = 0x198ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198AD8u;
            // 0x198adc: 0x27aa0014  addiu       $t2, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197538u;
    if (runtime->hasFunction(0x197538u)) {
        auto targetFn = runtime->lookupFunction(0x197538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198AE0u; }
        if (ctx->pc != 0x198AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197538_0x197538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198AE0u; }
        if (ctx->pc != 0x198AE0u) { return; }
    }
    ctx->pc = 0x198AE0u;
label_198ae0:
    // 0x198ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ae4: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x198ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x198ae8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x198ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198aec: 0xc0661b6  jal         func_1986D8
    ctx->pc = 0x198AECu;
    SET_GPR_U32(ctx, 31, 0x198AF4u);
    ctx->pc = 0x198AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198AECu;
            // 0x198af0: 0x8e670008  lw          $a3, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1986D8u;
    if (runtime->hasFunction(0x1986D8u)) {
        auto targetFn = runtime->lookupFunction(0x1986D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198AF4u; }
        if (ctx->pc != 0x198AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001986D8_0x1986d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198AF4u; }
        if (ctx->pc != 0x198AF4u) { return; }
    }
    ctx->pc = 0x198AF4u;
label_198af4:
    // 0x198af4: 0xc066230  jal         func_1988C0
    ctx->pc = 0x198AF4u;
    SET_GPR_U32(ctx, 31, 0x198AFCu);
    ctx->pc = 0x198AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198AF4u;
            // 0x198af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1988C0u;
    if (runtime->hasFunction(0x1988C0u)) {
        auto targetFn = runtime->lookupFunction(0x1988C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198AFCu; }
        if (ctx->pc != 0x198AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001988C0_0x1988c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198AFCu; }
        if (ctx->pc != 0x198AFCu) { return; }
    }
    ctx->pc = 0x198AFCu;
label_198afc:
    // 0x198afc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x198AFCu;
    {
        const bool branch_taken_0x198afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198AFCu;
            // 0x198b00: 0xae020434  sw          $v0, 0x434($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1076), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198afc) {
            ctx->pc = 0x198B10u;
            goto label_198b10;
        }
    }
    ctx->pc = 0x198B04u;
    // 0x198b04: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x198b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x198b08: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x198B08u;
    {
        const bool branch_taken_0x198b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198B08u;
            // 0x198b0c: 0x24848928  addiu       $a0, $a0, -0x76D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b08) {
            ctx->pc = 0x198C50u;
            goto label_198c50;
        }
    }
    ctx->pc = 0x198B10u;
label_198b10:
    // 0x198b10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x198b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b14: 0xc0612e8  jal         func_184BA0
    ctx->pc = 0x198B14u;
    SET_GPR_U32(ctx, 31, 0x198B1Cu);
    ctx->pc = 0x198B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198B14u;
            // 0x198b18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184BA0u;
    if (runtime->hasFunction(0x184BA0u)) {
        auto targetFn = runtime->lookupFunction(0x184BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198B1Cu; }
        if (ctx->pc != 0x198B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184BA0_0x184ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198B1Cu; }
        if (ctx->pc != 0x198B1Cu) { return; }
    }
    ctx->pc = 0x198B1Cu;
label_198b1c:
    // 0x198b1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x198B1Cu;
    {
        const bool branch_taken_0x198b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198B1Cu;
            // 0x198b20: 0xae020454  sw          $v0, 0x454($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b1c) {
            ctx->pc = 0x198B30u;
            goto label_198b30;
        }
    }
    ctx->pc = 0x198B24u;
    // 0x198b24: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x198b24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x198b28: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x198B28u;
    {
        const bool branch_taken_0x198b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198B28u;
            // 0x198b2c: 0x24848950  addiu       $a0, $a0, -0x76B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b28) {
            ctx->pc = 0x198C50u;
            goto label_198c50;
        }
    }
    ctx->pc = 0x198B30u;
label_198b30:
    // 0x198b30: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x198b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198b34: 0x26130050  addiu       $s3, $s0, 0x50
    ctx->pc = 0x198b34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x198b38: 0xae140044  sw          $s4, 0x44($s0)
    ctx->pc = 0x198b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 20));
    // 0x198b3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x198b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b40: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x198b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x198b44: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x198b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x198b48: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x198b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x198b4c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x198b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b50: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x198b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x198b54: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x198b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x198b58: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x198b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x198b5c: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x198b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x198b60: 0xc06d8ee  jal         func_1B63B8
    ctx->pc = 0x198B60u;
    SET_GPR_U32(ctx, 31, 0x198B68u);
    ctx->pc = 0x198B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198B60u;
            // 0x198b64: 0xae03005c  sw          $v1, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B63B8u;
    if (runtime->hasFunction(0x1B63B8u)) {
        auto targetFn = runtime->lookupFunction(0x1B63B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198B68u; }
        if (ctx->pc != 0x198B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B63B8_0x1b63b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198B68u; }
        if (ctx->pc != 0x198B68u) { return; }
    }
    ctx->pc = 0x198B68u;
label_198b68:
    // 0x198b68: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x198B68u;
    {
        const bool branch_taken_0x198b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x198b68) {
            ctx->pc = 0x198B6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x198B68u;
            // 0x198b6c: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x198B70u;
            goto label_198b70;
        }
    }
    ctx->pc = 0x198B70u;
label_198b70:
    // 0x198b70: 0xae140078  sw          $s4, 0x78($s0)
    ctx->pc = 0x198b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 20));
    // 0x198b74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x198b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b78: 0xae14007c  sw          $s4, 0x7C($s0)
    ctx->pc = 0x198b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 20));
    // 0x198b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b80: 0xa2000080  sb          $zero, 0x80($s0)
    ctx->pc = 0x198b80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 0));
    // 0x198b84: 0xa2000081  sb          $zero, 0x81($s0)
    ctx->pc = 0x198b84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 129), (uint8_t)GPR_U32(ctx, 0));
    // 0x198b88: 0xa2000082  sb          $zero, 0x82($s0)
    ctx->pc = 0x198b88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 130), (uint8_t)GPR_U32(ctx, 0));
    // 0x198b8c: 0xa2000083  sb          $zero, 0x83($s0)
    ctx->pc = 0x198b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 131), (uint8_t)GPR_U32(ctx, 0));
    // 0x198b90: 0xc068a02  jal         func_1A2808
    ctx->pc = 0x198B90u;
    SET_GPR_U32(ctx, 31, 0x198B98u);
    ctx->pc = 0x198B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198B90u;
            // 0x198b94: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2808u;
    if (runtime->hasFunction(0x1A2808u)) {
        auto targetFn = runtime->lookupFunction(0x1A2808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198B98u; }
        if (ctx->pc != 0x198B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2808_0x1a2808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198B98u; }
        if (ctx->pc != 0x198B98u) { return; }
    }
    ctx->pc = 0x198B98u;
label_198b98:
    // 0x198b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b9c: 0xc068a06  jal         func_1A2818
    ctx->pc = 0x198B9Cu;
    SET_GPR_U32(ctx, 31, 0x198BA4u);
    ctx->pc = 0x198BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198B9Cu;
            // 0x198ba0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2818u;
    if (runtime->hasFunction(0x1A2818u)) {
        auto targetFn = runtime->lookupFunction(0x1A2818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198BA4u; }
        if (ctx->pc != 0x198BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2818_0x1a2818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198BA4u; }
        if (ctx->pc != 0x198BA4u) { return; }
    }
    ctx->pc = 0x198BA4u;
label_198ba4:
    // 0x198ba4: 0xae140060  sw          $s4, 0x60($s0)
    ctx->pc = 0x198ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 20));
    // 0x198ba8: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x198ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x198bac: 0xc068b3c  jal         func_1A2CF0
    ctx->pc = 0x198BACu;
    SET_GPR_U32(ctx, 31, 0x198BB4u);
    ctx->pc = 0x198BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198BACu;
            // 0x198bb0: 0x8e040434  lw          $a0, 0x434($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2CF0u;
    if (runtime->hasFunction(0x1A2CF0u)) {
        auto targetFn = runtime->lookupFunction(0x1A2CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198BB4u; }
        if (ctx->pc != 0x198BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2CF0_0x1a2cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198BB4u; }
        if (ctx->pc != 0x198BB4u) { return; }
    }
    ctx->pc = 0x198BB4u;
label_198bb4:
    // 0x198bb4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x198BB4u;
    {
        const bool branch_taken_0x198bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198BB4u;
            // 0x198bb8: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198bb4) {
            ctx->pc = 0x198C58u;
            goto label_198c58;
        }
    }
    ctx->pc = 0x198BBCu;
    // 0x198bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198bc0: 0xc067170  jal         func_19C5C0
    ctx->pc = 0x198BC0u;
    SET_GPR_U32(ctx, 31, 0x198BC8u);
    ctx->pc = 0x198BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198BC0u;
            // 0x198bc4: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C5C0u;
    if (runtime->hasFunction(0x19C5C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198BC8u; }
        if (ctx->pc != 0x198BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C5C0_0x19c5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198BC8u; }
        if (ctx->pc != 0x198BC8u) { return; }
    }
    ctx->pc = 0x198BC8u;
label_198bc8:
    // 0x198bc8: 0xc05ffb6  jal         func_17FED8
    ctx->pc = 0x198BC8u;
    SET_GPR_U32(ctx, 31, 0x198BD0u);
    ctx->pc = 0x198BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198BC8u;
            // 0x198bcc: 0x8e040434  lw          $a0, 0x434($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FED8u;
    if (runtime->hasFunction(0x17FED8u)) {
        auto targetFn = runtime->lookupFunction(0x17FED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198BD0u; }
        if (ctx->pc != 0x198BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FED8_0x17fed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198BD0u; }
        if (ctx->pc != 0x198BD0u) { return; }
    }
    ctx->pc = 0x198BD0u;
label_198bd0:
    // 0x198bd0: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x198bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x198bd4: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x198bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x198bd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x198bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198bdc: 0xc060026  jal         func_180098
    ctx->pc = 0x198BDCu;
    SET_GPR_U32(ctx, 31, 0x198BE4u);
    ctx->pc = 0x198BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198BDCu;
            // 0x198be0: 0x8e05004c  lw          $a1, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180098u;
    if (runtime->hasFunction(0x180098u)) {
        auto targetFn = runtime->lookupFunction(0x180098u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198BE4u; }
        if (ctx->pc != 0x198BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180098_0x180098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198BE4u; }
        if (ctx->pc != 0x198BE4u) { return; }
    }
    ctx->pc = 0x198BE4u;
label_198be4:
    // 0x198be4: 0xc066380  jal         func_198E00
    ctx->pc = 0x198BE4u;
    SET_GPR_U32(ctx, 31, 0x198BECu);
    ctx->pc = 0x198BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198BE4u;
            // 0x198be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198E00u;
    if (runtime->hasFunction(0x198E00u)) {
        auto targetFn = runtime->lookupFunction(0x198E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198BECu; }
        if (ctx->pc != 0x198BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00198E00_0x198e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198BECu; }
        if (ctx->pc != 0x198BECu) { return; }
    }
    ctx->pc = 0x198BECu;
label_198bec:
    // 0x198bec: 0x1051001a  beq         $v0, $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x198BECu;
    {
        const bool branch_taken_0x198bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x198bec) {
            ctx->pc = 0x198C58u;
            goto label_198c58;
        }
    }
    ctx->pc = 0x198BF4u;
    // 0x198bf4: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x198bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x198bf8: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x198bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x198bfc: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x198bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x198c00: 0xc067a00  jal         func_19E800
    ctx->pc = 0x198C00u;
    SET_GPR_U32(ctx, 31, 0x198C08u);
    ctx->pc = 0x198C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198C00u;
            // 0x198c04: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E800u;
    if (runtime->hasFunction(0x19E800u)) {
        auto targetFn = runtime->lookupFunction(0x19E800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C08u; }
        if (ctx->pc != 0x198C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E800_0x19e800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C08u; }
        if (ctx->pc != 0x198C08u) { return; }
    }
    ctx->pc = 0x198C08u;
label_198c08:
    // 0x198c08: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x198C08u;
    {
        const bool branch_taken_0x198c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x198c08) {
            ctx->pc = 0x198C0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x198C08u;
            // 0x198c0c: 0xae0200b8  sw          $v0, 0xB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x198C20u;
            goto label_198c20;
        }
    }
    ctx->pc = 0x198C10u;
    // 0x198c10: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x198c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x198c14: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x198C14u;
    {
        const bool branch_taken_0x198c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198C14u;
            // 0x198c18: 0x24848978  addiu       $a0, $a0, -0x7688 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c14) {
            ctx->pc = 0x198C50u;
            goto label_198c50;
        }
    }
    ctx->pc = 0x198C1Cu;
    // 0x198c1c: 0x0  nop
    ctx->pc = 0x198c1cu;
    // NOP
label_198c20:
    // 0x198c20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198c24: 0xc067c10  jal         func_19F040
    ctx->pc = 0x198C24u;
    SET_GPR_U32(ctx, 31, 0x198C2Cu);
    ctx->pc = 0x198C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198C24u;
            // 0x198c28: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F040u;
    if (runtime->hasFunction(0x19F040u)) {
        auto targetFn = runtime->lookupFunction(0x19F040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C2Cu; }
        if (ctx->pc != 0x198C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F040_0x19f040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C2Cu; }
        if (ctx->pc != 0x198C2Cu) { return; }
    }
    ctx->pc = 0x198C2Cu;
label_198c2c:
    // 0x198c2c: 0xc067d02  jal         func_19F408
    ctx->pc = 0x198C2Cu;
    SET_GPR_U32(ctx, 31, 0x198C34u);
    ctx->pc = 0x198C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198C2Cu;
            // 0x198c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F408u;
    if (runtime->hasFunction(0x19F408u)) {
        auto targetFn = runtime->lookupFunction(0x19F408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C34u; }
        if (ctx->pc != 0x198C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F408_0x19f408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C34u; }
        if (ctx->pc != 0x198C34u) { return; }
    }
    ctx->pc = 0x198C34u;
label_198c34:
    // 0x198c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198c38: 0xc067d26  jal         func_19F498
    ctx->pc = 0x198C38u;
    SET_GPR_U32(ctx, 31, 0x198C40u);
    ctx->pc = 0x198C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198C38u;
            // 0x198c3c: 0xae0203f0  sw          $v0, 0x3F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1008), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F498u;
    if (runtime->hasFunction(0x19F498u)) {
        auto targetFn = runtime->lookupFunction(0x19F498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C40u; }
        if (ctx->pc != 0x198C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F498_0x19f498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C40u; }
        if (ctx->pc != 0x198C40u) { return; }
    }
    ctx->pc = 0x198C40u;
label_198c40:
    // 0x198c40: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x198C40u;
    {
        const bool branch_taken_0x198c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198c40) {
            ctx->pc = 0x198C68u;
            goto label_198c68;
        }
    }
    ctx->pc = 0x198C48u;
    // 0x198c48: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x198c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x198c4c: 0x24848998  addiu       $a0, $a0, -0x7668
    ctx->pc = 0x198c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936984));
label_198c50:
    // 0x198c50: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x198C50u;
    SET_GPR_U32(ctx, 31, 0x198C58u);
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C58u; }
        if (ctx->pc != 0x198C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C58u; }
        if (ctx->pc != 0x198C58u) { return; }
    }
    ctx->pc = 0x198C58u;
label_198c58:
    // 0x198c58: 0xc0663b2  jal         func_198EC8
    ctx->pc = 0x198C58u;
    SET_GPR_U32(ctx, 31, 0x198C60u);
    ctx->pc = 0x198C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198C58u;
            // 0x198c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198EC8u;
    if (runtime->hasFunction(0x198EC8u)) {
        auto targetFn = runtime->lookupFunction(0x198EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C60u; }
        if (ctx->pc != 0x198C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00198EC8_0x198ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C60u; }
        if (ctx->pc != 0x198C60u) { return; }
    }
    ctx->pc = 0x198C60u;
label_198c60:
    // 0x198c60: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x198C60u;
    {
        const bool branch_taken_0x198c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198C60u;
            // 0x198c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c60) {
            ctx->pc = 0x198CB0u;
            goto label_198cb0;
        }
    }
    ctx->pc = 0x198C68u;
label_198c68:
    // 0x198c68: 0xc067d3e  jal         func_19F4F8
    ctx->pc = 0x198C68u;
    SET_GPR_U32(ctx, 31, 0x198C70u);
    ctx->pc = 0x198C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198C68u;
            // 0x198c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F4F8u;
    if (runtime->hasFunction(0x19F4F8u)) {
        auto targetFn = runtime->lookupFunction(0x19F4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C70u; }
        if (ctx->pc != 0x198C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F4F8_0x19f4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C70u; }
        if (ctx->pc != 0x198C70u) { return; }
    }
    ctx->pc = 0x198C70u;
label_198c70:
    // 0x198c70: 0xc0669e4  jal         func_19A790
    ctx->pc = 0x198C70u;
    SET_GPR_U32(ctx, 31, 0x198C78u);
    ctx->pc = 0x198C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198C70u;
            // 0x198c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A790u;
    if (runtime->hasFunction(0x19A790u)) {
        auto targetFn = runtime->lookupFunction(0x19A790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C78u; }
        if (ctx->pc != 0x198C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019A790_0x19a790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C78u; }
        if (ctx->pc != 0x198C78u) { return; }
    }
    ctx->pc = 0x198C78u;
label_198c78:
    // 0x198c78: 0xc066a0e  jal         func_19A838
    ctx->pc = 0x198C78u;
    SET_GPR_U32(ctx, 31, 0x198C80u);
    ctx->pc = 0x198C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198C78u;
            // 0x198c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A838u;
    if (runtime->hasFunction(0x19A838u)) {
        auto targetFn = runtime->lookupFunction(0x19A838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C80u; }
        if (ctx->pc != 0x198C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019A838_0x19a838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C80u; }
        if (ctx->pc != 0x198C80u) { return; }
    }
    ctx->pc = 0x198C80u;
label_198c80:
    // 0x198c80: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x198c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x198c84: 0xae110578  sw          $s1, 0x578($s0)
    ctx->pc = 0x198c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1400), GPR_U32(ctx, 17));
    // 0x198c88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x198c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198c8c: 0xae000564  sw          $zero, 0x564($s0)
    ctx->pc = 0x198c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 0));
    // 0x198c90: 0xae000554  sw          $zero, 0x554($s0)
    ctx->pc = 0x198c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 0));
    // 0x198c94: 0xae000558  sw          $zero, 0x558($s0)
    ctx->pc = 0x198c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1368), GPR_U32(ctx, 0));
    // 0x198c98: 0xae00055c  sw          $zero, 0x55C($s0)
    ctx->pc = 0x198c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1372), GPR_U32(ctx, 0));
    // 0x198c9c: 0xae00057c  sw          $zero, 0x57C($s0)
    ctx->pc = 0x198c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1404), GPR_U32(ctx, 0));
    // 0x198ca0: 0xae000580  sw          $zero, 0x580($s0)
    ctx->pc = 0x198ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1408), GPR_U32(ctx, 0));
    // 0x198ca4: 0xae000584  sw          $zero, 0x584($s0)
    ctx->pc = 0x198ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1412), GPR_U32(ctx, 0));
    // 0x198ca8: 0xae000588  sw          $zero, 0x588($s0)
    ctx->pc = 0x198ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1416), GPR_U32(ctx, 0));
    // 0x198cac: 0xae00058c  sw          $zero, 0x58C($s0)
    ctx->pc = 0x198cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1420), GPR_U32(ctx, 0));
label_198cb0:
    // 0x198cb0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x198cb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198cb4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x198cb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198cb8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x198cb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198cbc: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x198cbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198cc0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x198cc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198cc4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x198cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x198cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x198CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198CC8u;
            // 0x198ccc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198CD0u;
}
