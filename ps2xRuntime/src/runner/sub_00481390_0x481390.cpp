#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00481390
// Address: 0x481390 - 0x481480
void sub_00481390_0x481390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481390_0x481390");
#endif

    switch (ctx->pc) {
        case 0x4813d4u: goto label_4813d4;
        case 0x4813dcu: goto label_4813dc;
        case 0x4813f8u: goto label_4813f8;
        case 0x481404u: goto label_481404;
        case 0x481418u: goto label_481418;
        case 0x481420u: goto label_481420;
        case 0x48146cu: goto label_48146c;
        default: break;
    }

    ctx->pc = 0x481390u;

    // 0x481390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x481390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x481394: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x481394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x481398: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x481398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x48139c: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x48139cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4813a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4813a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4813a4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4813a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4813a8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4813a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4813ac: 0x24430448  addiu       $v1, $v0, 0x448
    ctx->pc = 0x4813acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1096));
    // 0x4813b0: 0x90420448  lbu         $v0, 0x448($v0)
    ctx->pc = 0x4813b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1096)));
    // 0x4813b4: 0x47082a  slt         $at, $v0, $a3
    ctx->pc = 0x4813b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x4813b8: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x4813B8u;
    {
        const bool branch_taken_0x4813b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4813BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4813B8u;
            // 0x4813bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4813b8) {
            ctx->pc = 0x4813D4u;
            goto label_4813d4;
        }
    }
    ctx->pc = 0x4813C0u;
    // 0x4813c0: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x4813c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x4813c4: 0x2604003c  addiu       $a0, $s0, 0x3C
    ctx->pc = 0x4813c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x4813c8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4813c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4813cc: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x4813CCu;
    SET_GPR_U32(ctx, 31, 0x4813D4u);
    ctx->pc = 0x4813D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4813CCu;
            // 0x4813d0: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4813D4u; }
        if (ctx->pc != 0x4813D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4813D4u; }
        if (ctx->pc != 0x4813D4u) { return; }
    }
    ctx->pc = 0x4813D4u;
label_4813d4:
    // 0x4813d4: 0xc120800  jal         func_482000
    ctx->pc = 0x4813D4u;
    SET_GPR_U32(ctx, 31, 0x4813DCu);
    ctx->pc = 0x4813D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4813D4u;
            // 0x4813d8: 0x2604003c  addiu       $a0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x482000u;
    if (runtime->hasFunction(0x482000u)) {
        auto targetFn = runtime->lookupFunction(0x482000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4813DCu; }
        if (ctx->pc != 0x4813DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00482000_0x482000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4813DCu; }
        if (ctx->pc != 0x4813DCu) { return; }
    }
    ctx->pc = 0x4813DCu;
label_4813dc:
    // 0x4813dc: 0x2c430070  sltiu       $v1, $v0, 0x70
    ctx->pc = 0x4813dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)112) ? 1 : 0);
    // 0x4813e0: 0x54600023  bnel        $v1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x4813E0u;
    {
        const bool branch_taken_0x4813e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4813e0) {
            ctx->pc = 0x4813E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4813E0u;
            // 0x4813e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x481470u;
            goto label_481470;
        }
    }
    ctx->pc = 0x4813E8u;
    // 0x4813e8: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x4813e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x4813ec: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x4813ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4813f0: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x4813F0u;
    SET_GPR_U32(ctx, 31, 0x4813F8u);
    ctx->pc = 0x4813F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4813F0u;
            // 0x4813f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4813F8u; }
        if (ctx->pc != 0x4813F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4813F8u; }
        if (ctx->pc != 0x4813F8u) { return; }
    }
    ctx->pc = 0x4813F8u;
label_4813f8:
    // 0x4813f8: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x4813f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x4813fc: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x4813FCu;
    SET_GPR_U32(ctx, 31, 0x481404u);
    ctx->pc = 0x481400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4813FCu;
            // 0x481400: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481404u; }
        if (ctx->pc != 0x481404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481404u; }
        if (ctx->pc != 0x481404u) { return; }
    }
    ctx->pc = 0x481404u;
label_481404:
    // 0x481404: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x481404u;
    {
        const bool branch_taken_0x481404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x481404) {
            ctx->pc = 0x48146Cu;
            goto label_48146c;
        }
    }
    ctx->pc = 0x48140Cu;
    // 0x48140c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x48140cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x481410: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x481410u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481414: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x481414u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_481418:
    // 0x481418: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x481418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48141c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x48141cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_481420:
    // 0x481420: 0x90c40448  lbu         $a0, 0x448($a2)
    ctx->pc = 0x481420u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1096)));
    // 0x481424: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x481424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x481428: 0x2ce30008  sltiu       $v1, $a3, 0x8
    ctx->pc = 0x481428u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x48142c: 0x38840003  xori        $a0, $a0, 0x3
    ctx->pc = 0x48142cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)3);
    // 0x481430: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x481430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x481434: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x481434u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x481438: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x481438u;
    {
        const bool branch_taken_0x481438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48143Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481438u;
            // 0x48143c: 0x1244821  addu        $t1, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481438) {
            ctx->pc = 0x481420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_481420;
        }
    }
    ctx->pc = 0x481440u;
    // 0x481440: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x481440u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x481444: 0x2d030010  sltiu       $v1, $t0, 0x10
    ctx->pc = 0x481444u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x481448: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x481448u;
    {
        const bool branch_taken_0x481448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48144Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481448u;
            // 0x48144c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481448) {
            ctx->pc = 0x481418u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_481418;
        }
    }
    ctx->pc = 0x481450u;
    // 0x481450: 0x2d230070  sltiu       $v1, $t1, 0x70
    ctx->pc = 0x481450u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)112) ? 1 : 0);
    // 0x481454: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x481454u;
    {
        const bool branch_taken_0x481454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x481454) {
            ctx->pc = 0x48146Cu;
            goto label_48146c;
        }
    }
    ctx->pc = 0x48145Cu;
    // 0x48145c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x48145cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x481460: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x481460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x481464: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x481464u;
    SET_GPR_U32(ctx, 31, 0x48146Cu);
    ctx->pc = 0x481468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481464u;
            // 0x481468: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48146Cu; }
        if (ctx->pc != 0x48146Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48146Cu; }
        if (ctx->pc != 0x48146Cu) { return; }
    }
    ctx->pc = 0x48146Cu;
label_48146c:
    // 0x48146c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48146cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_481470:
    // 0x481470: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x481470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x481474: 0x3e00008  jr          $ra
    ctx->pc = 0x481474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x481478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481474u;
            // 0x481478: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48147Cu;
    // 0x48147c: 0x0  nop
    ctx->pc = 0x48147cu;
    // NOP
}
