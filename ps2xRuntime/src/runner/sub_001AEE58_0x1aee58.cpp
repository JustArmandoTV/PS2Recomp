#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AEE58
// Address: 0x1aee58 - 0x1aef00
void sub_001AEE58_0x1aee58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEE58_0x1aee58");
#endif

    switch (ctx->pc) {
        case 0x1aee94u: goto label_1aee94;
        case 0x1aeea8u: goto label_1aeea8;
        case 0x1aeeccu: goto label_1aeecc;
        case 0x1aeee8u: goto label_1aeee8;
        default: break;
    }

    ctx->pc = 0x1aee58u;

    // 0x1aee58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aee58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aee5c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1aee5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1aee60: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1aee60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aee64: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1aee64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1aee68: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1aee68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aee6c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1aee6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1aee70: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1aee70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1aee74: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x1aee74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1aee78: 0x8c922030  lw          $s2, 0x2030($a0)
    ctx->pc = 0x1aee78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x1aee7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1aee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1aee80: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1aee80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1aee84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEE84u;
    {
        const bool branch_taken_0x1aee84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEE84u;
            // 0x1aee88: 0x26441094  addiu       $a0, $s2, 0x1094 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee84) {
            ctx->pc = 0x1AEE94u;
            goto label_1aee94;
        }
    }
    ctx->pc = 0x1AEE8Cu;
    // 0x1aee8c: 0xc06bc1e  jal         func_1AF078
    ctx->pc = 0x1AEE8Cu;
    SET_GPR_U32(ctx, 31, 0x1AEE94u);
    ctx->pc = 0x1AEE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEE8Cu;
            // 0x1aee90: 0x8e050054  lw          $a1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF078u;
    if (runtime->hasFunction(0x1AF078u)) {
        auto targetFn = runtime->lookupFunction(0x1AF078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE94u; }
        if (ctx->pc != 0x1AEE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF078_0x1af078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE94u; }
        if (ctx->pc != 0x1AEE94u) { return; }
    }
    ctx->pc = 0x1AEE94u;
label_1aee94:
    // 0x1aee94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1aee94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aee98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aee98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aee9c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1aee9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1aeea0: 0xc06bbc0  jal         func_1AEF00
    ctx->pc = 0x1AEEA0u;
    SET_GPR_U32(ctx, 31, 0x1AEEA8u);
    ctx->pc = 0x1AEEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEEA0u;
            // 0x1aeea4: 0x27a70008  addiu       $a3, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF00u;
    if (runtime->hasFunction(0x1AEF00u)) {
        auto targetFn = runtime->lookupFunction(0x1AEF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEEA8u; }
        if (ctx->pc != 0x1AEEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEF00_0x1aef00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEEA8u; }
        if (ctx->pc != 0x1AEEA8u) { return; }
    }
    ctx->pc = 0x1AEEA8u;
label_1aeea8:
    // 0x1aeea8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1aeea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aeeac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1aeeacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aeeb0: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1AEEB0u;
    {
        const bool branch_taken_0x1aeeb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AEEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEEB0u;
            // 0x1aeeb4: 0x26451094  addiu       $a1, $s2, 0x1094 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeeb0) {
            ctx->pc = 0x1AEEE0u;
            goto label_1aeee0;
        }
    }
    ctx->pc = 0x1AEEB8u;
    // 0x1aeeb8: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1aeeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1aeebc: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1aeebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1aeec0: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1aeec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aeec4: 0xc04a508  jal         func_129420
    ctx->pc = 0x1AEEC4u;
    SET_GPR_U32(ctx, 31, 0x1AEECCu);
    ctx->pc = 0x1AEEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEEC4u;
            // 0x1aeec8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEECCu; }
        if (ctx->pc != 0x1AEECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEECCu; }
        if (ctx->pc != 0x1AEECCu) { return; }
    }
    ctx->pc = 0x1AEECCu;
label_1aeecc:
    // 0x1aeecc: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x1aeeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1aeed0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1aeed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aeed4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AEED4u;
    {
        const bool branch_taken_0x1aeed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEED4u;
            // 0x1aeed8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeed4) {
            ctx->pc = 0x1AEEE8u;
            goto label_1aeee8;
        }
    }
    ctx->pc = 0x1AEEDCu;
    // 0x1aeedc: 0x0  nop
    ctx->pc = 0x1aeedcu;
    // NOP
label_1aeee0:
    // 0x1aeee0: 0xc06bc1e  jal         func_1AF078
    ctx->pc = 0x1AEEE0u;
    SET_GPR_U32(ctx, 31, 0x1AEEE8u);
    ctx->pc = 0x1AEEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEEE0u;
            // 0x1aeee4: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF078u;
    if (runtime->hasFunction(0x1AF078u)) {
        auto targetFn = runtime->lookupFunction(0x1AF078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEEE8u; }
        if (ctx->pc != 0x1AEEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF078_0x1af078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEEE8u; }
        if (ctx->pc != 0x1AEEE8u) { return; }
    }
    ctx->pc = 0x1AEEE8u;
label_1aeee8:
    // 0x1aeee8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1aeee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aeeec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1aeeecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aeef0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1aeef0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aeef4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1aeef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aeef8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEEF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEEF8u;
            // 0x1aeefc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AEF00u;
}
