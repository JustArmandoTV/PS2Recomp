#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00181390
// Address: 0x181390 - 0x181430
void sub_00181390_0x181390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181390_0x181390");
#endif

    switch (ctx->pc) {
        case 0x1813acu: goto label_1813ac;
        case 0x1813c4u: goto label_1813c4;
        case 0x1813d8u: goto label_1813d8;
        case 0x181408u: goto label_181408;
        default: break;
    }

    ctx->pc = 0x181390u;

    // 0x181390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x181390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x181394: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x181394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x181398: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x181398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18139c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x18139cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1813a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1813a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1813a4: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x1813A4u;
    SET_GPR_U32(ctx, 31, 0x1813ACu);
    ctx->pc = 0x1813A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1813A4u;
            // 0x1813a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1813ACu; }
        if (ctx->pc != 0x1813ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1813ACu; }
        if (ctx->pc != 0x1813ACu) { return; }
    }
    ctx->pc = 0x1813ACu;
label_1813ac:
    // 0x1813ac: 0x2c420012  sltiu       $v0, $v0, 0x12
    ctx->pc = 0x1813acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x1813b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1813b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1813B4u;
    {
        const bool branch_taken_0x1813b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1813B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1813B4u;
            // 0x1813b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1813b4) {
            ctx->pc = 0x1813C4u;
            goto label_1813c4;
        }
    }
    ctx->pc = 0x1813BCu;
    // 0x1813bc: 0xc0604b2  jal         func_1812C8
    ctx->pc = 0x1813BCu;
    SET_GPR_U32(ctx, 31, 0x1813C4u);
    ctx->pc = 0x1812C8u;
    if (runtime->hasFunction(0x1812C8u)) {
        auto targetFn = runtime->lookupFunction(0x1812C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1813C4u; }
        if (ctx->pc != 0x1813C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001812C8_0x1812c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1813C4u; }
        if (ctx->pc != 0x1813C4u) { return; }
    }
    ctx->pc = 0x1813C4u;
label_1813c4:
    // 0x1813c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1813c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1813c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813cc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1813ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1813d0: 0xc0604c4  jal         func_181310
    ctx->pc = 0x1813D0u;
    SET_GPR_U32(ctx, 31, 0x1813D8u);
    ctx->pc = 0x1813D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1813D0u;
            // 0x1813d4: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181310u;
    if (runtime->hasFunction(0x181310u)) {
        auto targetFn = runtime->lookupFunction(0x181310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1813D8u; }
        if (ctx->pc != 0x1813D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181310_0x181310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1813D8u; }
        if (ctx->pc != 0x1813D8u) { return; }
    }
    ctx->pc = 0x1813D8u;
label_1813d8:
    // 0x1813d8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1813d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1813dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1813dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1813e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1813e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1813e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813e8: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1813e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1813ec: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1813ECu;
    {
        const bool branch_taken_0x1813ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1813F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1813ECu;
            // 0x1813f0: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1813ec) {
            ctx->pc = 0x1813F8u;
            goto label_1813f8;
        }
    }
    ctx->pc = 0x1813F4u;
    // 0x1813f4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1813f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1813f8:
    // 0x1813f8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1813F8u;
    {
        const bool branch_taken_0x1813f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1813FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1813F8u;
            // 0x1813fc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1813f8) {
            ctx->pc = 0x181418u;
            goto label_181418;
        }
    }
    ctx->pc = 0x181400u;
    // 0x181400: 0xc0604be  jal         func_1812F8
    ctx->pc = 0x181400u;
    SET_GPR_U32(ctx, 31, 0x181408u);
    ctx->pc = 0x181404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181400u;
            // 0x181404: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812F8u;
    if (runtime->hasFunction(0x1812F8u)) {
        auto targetFn = runtime->lookupFunction(0x1812F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181408u; }
        if (ctx->pc != 0x181408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001812F8_0x1812f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181408u; }
        if (ctx->pc != 0x181408u) { return; }
    }
    ctx->pc = 0x181408u;
label_181408:
    // 0x181408: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x181408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18140c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18140cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x181410: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x181410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x181414: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x181414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181418:
    // 0x181418: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x181418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18141c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x18141cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x181420: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x181420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181424: 0x3e00008  jr          $ra
    ctx->pc = 0x181424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181424u;
            // 0x181428: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18142Cu;
    // 0x18142c: 0x0  nop
    ctx->pc = 0x18142cu;
    // NOP
}
