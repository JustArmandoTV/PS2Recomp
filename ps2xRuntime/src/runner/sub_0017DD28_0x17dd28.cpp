#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017DD28
// Address: 0x17dd28 - 0x17dde8
void sub_0017DD28_0x17dd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DD28_0x17dd28");
#endif

    switch (ctx->pc) {
        case 0x17dd58u: goto label_17dd58;
        case 0x17dd90u: goto label_17dd90;
        case 0x17ddacu: goto label_17ddac;
        case 0x17ddbcu: goto label_17ddbc;
        case 0x17ddccu: goto label_17ddcc;
        default: break;
    }

    ctx->pc = 0x17dd28u;

    // 0x17dd28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17dd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17dd2c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17dd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17dd30: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x17dd30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd34: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17dd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17dd38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17dd38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd3c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x17dd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17dd40: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17dd40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd44: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x17dd44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17dd48: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17dd48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd4c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17dd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17dd50: 0xc04b6aa  jal         func_12DAA8
    ctx->pc = 0x17DD50u;
    SET_GPR_U32(ctx, 31, 0x17DD58u);
    ctx->pc = 0x17DD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DD50u;
            // 0x17dd54: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DAA8u;
    if (runtime->hasFunction(0x12DAA8u)) {
        auto targetFn = runtime->lookupFunction(0x12DAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DD58u; }
        if (ctx->pc != 0x17DD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DAA8_0x12daa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DD58u; }
        if (ctx->pc != 0x17DD58u) { return; }
    }
    ctx->pc = 0x17DD58u;
label_17dd58:
    // 0x17dd58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17dd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17dd5c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x17dd5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x17dd60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17dd60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd64: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x17dd64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x17dd68: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x17dd68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17dd6c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dd70: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x17dd70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17dd74: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17DD74u;
    {
        const bool branch_taken_0x17dd74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DD74u;
            // 0x17dd78: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd74) {
            ctx->pc = 0x17DD80u;
            goto label_17dd80;
        }
    }
    ctx->pc = 0x17DD7Cu;
    // 0x17dd7c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x17dd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_17dd80:
    // 0x17dd80: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17DD80u;
    {
        const bool branch_taken_0x17dd80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dd80) {
            ctx->pc = 0x17DD84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17DD80u;
            // 0x17dd84: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17DDA0u;
            goto label_17dda0;
        }
    }
    ctx->pc = 0x17DD88u;
    // 0x17dd88: 0xc04b6aa  jal         func_12DAA8
    ctx->pc = 0x17DD88u;
    SET_GPR_U32(ctx, 31, 0x17DD90u);
    ctx->pc = 0x17DD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DD88u;
            // 0x17dd8c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DAA8u;
    if (runtime->hasFunction(0x12DAA8u)) {
        auto targetFn = runtime->lookupFunction(0x12DAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DD90u; }
        if (ctx->pc != 0x17DD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DAA8_0x12daa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DD90u; }
        if (ctx->pc != 0x17DD90u) { return; }
    }
    ctx->pc = 0x17DD90u;
label_17dd90:
    // 0x17dd90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17dd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17dd94: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x17dd94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x17dd98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17dd98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17dd9c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17dd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_17dda0:
    // 0x17dda0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17dda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dda4: 0xc05b97e  jal         func_16E5F8
    ctx->pc = 0x17DDA4u;
    SET_GPR_U32(ctx, 31, 0x17DDACu);
    ctx->pc = 0x17DDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DDA4u;
            // 0x17dda8: 0x248460b0  addiu       $a0, $a0, 0x60B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E5F8u;
    if (runtime->hasFunction(0x16E5F8u)) {
        auto targetFn = runtime->lookupFunction(0x16E5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DDACu; }
        if (ctx->pc != 0x17DDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E5F8_0x16e5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DDACu; }
        if (ctx->pc != 0x17DDACu) { return; }
    }
    ctx->pc = 0x17DDACu;
label_17ddac:
    // 0x17ddac: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17ddacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17ddb0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x17ddb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17ddb4: 0xc05b97e  jal         func_16E5F8
    ctx->pc = 0x17DDB4u;
    SET_GPR_U32(ctx, 31, 0x17DDBCu);
    ctx->pc = 0x17DDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DDB4u;
            // 0x17ddb8: 0x248460c8  addiu       $a0, $a0, 0x60C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E5F8u;
    if (runtime->hasFunction(0x16E5F8u)) {
        auto targetFn = runtime->lookupFunction(0x16E5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DDBCu; }
        if (ctx->pc != 0x17DDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E5F8_0x16e5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DDBCu; }
        if (ctx->pc != 0x17DDBCu) { return; }
    }
    ctx->pc = 0x17DDBCu;
label_17ddbc:
    // 0x17ddbc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17ddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17ddc0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x17ddc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17ddc4: 0xc05b97e  jal         func_16E5F8
    ctx->pc = 0x17DDC4u;
    SET_GPR_U32(ctx, 31, 0x17DDCCu);
    ctx->pc = 0x17DDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DDC4u;
            // 0x17ddc8: 0x248460d8  addiu       $a0, $a0, 0x60D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E5F8u;
    if (runtime->hasFunction(0x16E5F8u)) {
        auto targetFn = runtime->lookupFunction(0x16E5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DDCCu; }
        if (ctx->pc != 0x17DDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E5F8_0x16e5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DDCCu; }
        if (ctx->pc != 0x17DDCCu) { return; }
    }
    ctx->pc = 0x17DDCCu;
label_17ddcc:
    // 0x17ddcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ddccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ddd0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17ddd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ddd4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17ddd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ddd8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x17ddd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17dddc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17dddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17dde0: 0x3e00008  jr          $ra
    ctx->pc = 0x17DDE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DDE0u;
            // 0x17dde4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17DDE8u;
}
