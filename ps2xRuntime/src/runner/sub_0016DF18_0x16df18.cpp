#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016DF18
// Address: 0x16df18 - 0x16e0c0
void sub_0016DF18_0x16df18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DF18_0x16df18");
#endif

    switch (ctx->pc) {
        case 0x16df28u: goto label_16df28;
        case 0x16df30u: goto label_16df30;
        case 0x16df38u: goto label_16df38;
        case 0x16df40u: goto label_16df40;
        case 0x16df90u: goto label_16df90;
        case 0x16df98u: goto label_16df98;
        case 0x16e004u: goto label_16e004;
        case 0x16e03cu: goto label_16e03c;
        case 0x16e05cu: goto label_16e05c;
        case 0x16e064u: goto label_16e064;
        case 0x16e06cu: goto label_16e06c;
        default: break;
    }

    ctx->pc = 0x16df18u;

label_16df18:
    // 0x16df18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16df18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16df1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16df1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16df20: 0xc0622d0  jal         func_188B40
    ctx->pc = 0x16DF20u;
    SET_GPR_U32(ctx, 31, 0x16DF28u);
    ctx->pc = 0x188B40u;
    if (runtime->hasFunction(0x188B40u)) {
        auto targetFn = runtime->lookupFunction(0x188B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF28u; }
        if (ctx->pc != 0x16DF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188B40_0x188b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF28u; }
        if (ctx->pc != 0x16DF28u) { return; }
    }
    ctx->pc = 0x16DF28u;
label_16df28:
    // 0x16df28: 0xc05b77a  jal         func_16DDE8
    ctx->pc = 0x16DF28u;
    SET_GPR_U32(ctx, 31, 0x16DF30u);
    ctx->pc = 0x16DDE8u;
    if (runtime->hasFunction(0x16DDE8u)) {
        auto targetFn = runtime->lookupFunction(0x16DDE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF30u; }
        if (ctx->pc != 0x16DF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DDE8_0x16dde8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF30u; }
        if (ctx->pc != 0x16DF30u) { return; }
    }
    ctx->pc = 0x16DF30u;
label_16df30:
    // 0x16df30: 0xc05b8fc  jal         func_16E3F0
    ctx->pc = 0x16DF30u;
    SET_GPR_U32(ctx, 31, 0x16DF38u);
    ctx->pc = 0x16E3F0u;
    if (runtime->hasFunction(0x16E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x16E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF38u; }
        if (ctx->pc != 0x16DF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E3F0_0x16e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF38u; }
        if (ctx->pc != 0x16DF38u) { return; }
    }
    ctx->pc = 0x16DF38u;
label_16df38:
    // 0x16df38: 0xc05b7bc  jal         func_16DEF0
    ctx->pc = 0x16DF38u;
    SET_GPR_U32(ctx, 31, 0x16DF40u);
    ctx->pc = 0x16DEF0u;
    if (runtime->hasFunction(0x16DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x16DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF40u; }
        if (ctx->pc != 0x16DF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DEF0_0x16def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF40u; }
        if (ctx->pc != 0x16DF40u) { return; }
    }
    ctx->pc = 0x16DF40u;
label_16df40:
    // 0x16df40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16df40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16df44: 0x80622dc  j           func_188B70
    ctx->pc = 0x16DF44u;
    ctx->pc = 0x16DF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DF44u;
            // 0x16df48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188B70u;
    {
        auto targetFn = runtime->lookupFunction(0x188B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16DF4Cu;
    // 0x16df4c: 0x0  nop
    ctx->pc = 0x16df4cu;
    // NOP
    // 0x16df50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16df50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16df54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16df54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16df58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16df58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16df5c: 0x805b7c6  j           func_16DF18
    ctx->pc = 0x16DF5Cu;
    ctx->pc = 0x16DF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DF5Cu;
            // 0x16df60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16DF18u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_16df18;
    ctx->pc = 0x16DF64u;
    // 0x16df64: 0x0  nop
    ctx->pc = 0x16df64u;
    // NOP
    // 0x16df68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16df68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16df6c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16df6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16df70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16df70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16df74: 0x2450ab48  addiu       $s0, $v0, -0x54B8
    ctx->pc = 0x16df74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945608));
    // 0x16df78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16df78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16df7c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x16DF7Cu;
    {
        const bool branch_taken_0x16df7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16DF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DF7Cu;
            // 0x16df80: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16df7c) {
            ctx->pc = 0x16DF9Cu;
            goto label_16df9c;
        }
    }
    ctx->pc = 0x16DF84u;
    // 0x16df84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16df84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16df88: 0xc05d2aa  jal         func_174AA8
    ctx->pc = 0x16DF88u;
    SET_GPR_U32(ctx, 31, 0x16DF90u);
    ctx->pc = 0x174AA8u;
    if (runtime->hasFunction(0x174AA8u)) {
        auto targetFn = runtime->lookupFunction(0x174AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF90u; }
        if (ctx->pc != 0x16DF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174AA8_0x174aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF90u; }
        if (ctx->pc != 0x16DF90u) { return; }
    }
    ctx->pc = 0x16DF90u;
label_16df90:
    // 0x16df90: 0xc05adda  jal         func_16B768
    ctx->pc = 0x16DF90u;
    SET_GPR_U32(ctx, 31, 0x16DF98u);
    ctx->pc = 0x16B768u;
    if (runtime->hasFunction(0x16B768u)) {
        auto targetFn = runtime->lookupFunction(0x16B768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF98u; }
        if (ctx->pc != 0x16DF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B768_0x16b768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF98u; }
        if (ctx->pc != 0x16DF98u) { return; }
    }
    ctx->pc = 0x16DF98u;
label_16df98:
    // 0x16df98: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x16df98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_16df9c:
    // 0x16df9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16df9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16dfa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16dfa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dfa4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16dfa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16dfa8: 0x3e00008  jr          $ra
    ctx->pc = 0x16DFA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DFA8u;
            // 0x16dfac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16DFB0u;
    // 0x16dfb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16dfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16dfb4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x16dfb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dfb8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16DFB8u;
    {
        const bool branch_taken_0x16dfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DFB8u;
            // 0x16dfbc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dfb8) {
            ctx->pc = 0x16DFF8u;
            goto label_16dff8;
        }
    }
    ctx->pc = 0x16DFC0u;
    // 0x16dfc0: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x16dfc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16dfc4: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x16dfc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x16dfc8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x16dfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x16dfcc: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x16dfccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dfd0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16dfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16dfd4: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x16dfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x16dfd8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16dfdc: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16dfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16dfe0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x16dfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x16dfe4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x16dfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x16dfe8: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x16dfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x16dfec: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x16dfecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x16dff0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16DFF0u;
    {
        const bool branch_taken_0x16dff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DFF0u;
            // 0x16dff4: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dff0) {
            ctx->pc = 0x16DFFCu;
            goto label_16dffc;
        }
    }
    ctx->pc = 0x16DFF8u;
label_16dff8:
    // 0x16dff8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16dff8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16dffc:
    // 0x16dffc: 0xc05b526  jal         func_16D498
    ctx->pc = 0x16DFFCu;
    SET_GPR_U32(ctx, 31, 0x16E004u);
    ctx->pc = 0x16E000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DFFCu;
            // 0x16e000: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16D498u;
    if (runtime->hasFunction(0x16D498u)) {
        auto targetFn = runtime->lookupFunction(0x16D498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E004u; }
        if (ctx->pc != 0x16E004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D498_0x16d498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E004u; }
        if (ctx->pc != 0x16E004u) { return; }
    }
    ctx->pc = 0x16E004u;
label_16e004:
    // 0x16e004: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16e004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e008: 0x3e00008  jr          $ra
    ctx->pc = 0x16E008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E008u;
            // 0x16e00c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E010u;
    // 0x16e010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e01c: 0x805b59e  j           func_16D678
    ctx->pc = 0x16E01Cu;
    ctx->pc = 0x16E020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E01Cu;
            // 0x16e020: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16D678u;
    if (runtime->hasFunction(0x16D678u)) {
        auto targetFn = runtime->lookupFunction(0x16D678u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016D678_0x16d678(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16E024u;
    // 0x16e024: 0x0  nop
    ctx->pc = 0x16e024u;
    // NOP
    // 0x16e028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e02c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16e02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16e030: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16e030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16e034: 0xc05b714  jal         func_16DC50
    ctx->pc = 0x16E034u;
    SET_GPR_U32(ctx, 31, 0x16E03Cu);
    ctx->pc = 0x16DC50u;
    if (runtime->hasFunction(0x16DC50u)) {
        auto targetFn = runtime->lookupFunction(0x16DC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E03Cu; }
        if (ctx->pc != 0x16E03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DC50_0x16dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E03Cu; }
        if (ctx->pc != 0x16E03Cu) { return; }
    }
    ctx->pc = 0x16E03Cu;
label_16e03c:
    // 0x16e03c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16e040: 0x2450ab48  addiu       $s0, $v0, -0x54B8
    ctx->pc = 0x16e040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945608));
    // 0x16e044: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16e044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16e048: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x16E048u;
    {
        const bool branch_taken_0x16e048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e048) {
            ctx->pc = 0x16E04Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16E048u;
            // 0x16e04c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16E080u;
            goto label_16e080;
        }
    }
    ctx->pc = 0x16E050u;
    // 0x16e050: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e054: 0xc05b71a  jal         func_16DC68
    ctx->pc = 0x16E054u;
    SET_GPR_U32(ctx, 31, 0x16E05Cu);
    ctx->pc = 0x16E058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E054u;
            // 0x16e058: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16DC68u;
    if (runtime->hasFunction(0x16DC68u)) {
        auto targetFn = runtime->lookupFunction(0x16DC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E05Cu; }
        if (ctx->pc != 0x16E05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DC68_0x16dc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E05Cu; }
        if (ctx->pc != 0x16E05Cu) { return; }
    }
    ctx->pc = 0x16E05Cu;
label_16e05c:
    // 0x16e05c: 0xc05d2aa  jal         func_174AA8
    ctx->pc = 0x16E05Cu;
    SET_GPR_U32(ctx, 31, 0x16E064u);
    ctx->pc = 0x174AA8u;
    if (runtime->hasFunction(0x174AA8u)) {
        auto targetFn = runtime->lookupFunction(0x174AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E064u; }
        if (ctx->pc != 0x16E064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174AA8_0x174aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E064u; }
        if (ctx->pc != 0x16E064u) { return; }
    }
    ctx->pc = 0x16E064u;
label_16e064:
    // 0x16e064: 0xc05adda  jal         func_16B768
    ctx->pc = 0x16E064u;
    SET_GPR_U32(ctx, 31, 0x16E06Cu);
    ctx->pc = 0x16B768u;
    if (runtime->hasFunction(0x16B768u)) {
        auto targetFn = runtime->lookupFunction(0x16B768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E06Cu; }
        if (ctx->pc != 0x16E06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B768_0x16b768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E06Cu; }
        if (ctx->pc != 0x16E06Cu) { return; }
    }
    ctx->pc = 0x16E06Cu;
label_16e06c:
    // 0x16e06c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x16e06cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x16e070: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16e070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16e074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16e074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e078: 0x3e00008  jr          $ra
    ctx->pc = 0x16E078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E078u;
            // 0x16e07c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E080u;
label_16e080:
    // 0x16e080: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16e080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16e084: 0x805b71a  j           func_16DC68
    ctx->pc = 0x16E084u;
    ctx->pc = 0x16E088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E084u;
            // 0x16e088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16DC68u;
    if (runtime->hasFunction(0x16DC68u)) {
        auto targetFn = runtime->lookupFunction(0x16DC68u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016DC68_0x16dc68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16E08Cu;
    // 0x16e08c: 0x0  nop
    ctx->pc = 0x16e08cu;
    // NOP
    // 0x16e090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e09c: 0x8061f74  j           func_187DD0
    ctx->pc = 0x16E09Cu;
    ctx->pc = 0x16E0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E09Cu;
            // 0x16e0a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187DD0u;
    if (runtime->hasFunction(0x187DD0u)) {
        auto targetFn = runtime->lookupFunction(0x187DD0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187DD0_0x187dd0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16E0A4u;
    // 0x16e0a4: 0x0  nop
    ctx->pc = 0x16e0a4u;
    // NOP
    // 0x16e0a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e0ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e0b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e0b4: 0x8061f7a  j           func_187DE8
    ctx->pc = 0x16E0B4u;
    ctx->pc = 0x16E0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E0B4u;
            // 0x16e0b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187DE8u;
    if (runtime->hasFunction(0x187DE8u)) {
        auto targetFn = runtime->lookupFunction(0x187DE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187DE8_0x187de8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16E0BCu;
    // 0x16e0bc: 0x0  nop
    ctx->pc = 0x16e0bcu;
    // NOP
}
