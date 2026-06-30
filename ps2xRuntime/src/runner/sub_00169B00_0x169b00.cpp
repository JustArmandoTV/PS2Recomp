#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00169B00
// Address: 0x169b00 - 0x169b68
void sub_00169B00_0x169b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169B00_0x169b00");
#endif

    switch (ctx->pc) {
        case 0x169b34u: goto label_169b34;
        case 0x169b3cu: goto label_169b3c;
        case 0x169b50u: goto label_169b50;
        default: break;
    }

    ctx->pc = 0x169b00u;

    // 0x169b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169b04: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x169b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x169b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169b0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x169b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x169b14: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x169b14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b18: 0xae07002c  sw          $a3, 0x2C($s0)
    ctx->pc = 0x169b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 7));
    // 0x169b1c: 0x842f8  dsll        $t0, $t0, 11
    ctx->pc = 0x169b1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 11);
    // 0x169b20: 0xae060030  sw          $a2, 0x30($s0)
    ctx->pc = 0x169b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 6));
    // 0x169b24: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x169b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x169b28: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x169b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x169b2c: 0xc05c26c  jal         func_1709B0
    ctx->pc = 0x169B2Cu;
    SET_GPR_U32(ctx, 31, 0x169B34u);
    ctx->pc = 0x169B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169B2Cu;
            // 0x169b30: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1709B0u;
    if (runtime->hasFunction(0x1709B0u)) {
        auto targetFn = runtime->lookupFunction(0x1709B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169B34u; }
        if (ctx->pc != 0x169B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001709B0_0x1709b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169B34u; }
        if (ctx->pc != 0x169B34u) { return; }
    }
    ctx->pc = 0x169B34u;
label_169b34:
    // 0x169b34: 0xc05c2e2  jal         func_170B88
    ctx->pc = 0x169B34u;
    SET_GPR_U32(ctx, 31, 0x169B3Cu);
    ctx->pc = 0x169B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169B34u;
            // 0x169b38: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170B88u;
    if (runtime->hasFunction(0x170B88u)) {
        auto targetFn = runtime->lookupFunction(0x170B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169B3Cu; }
        if (ctx->pc != 0x169B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B88_0x170b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169B3Cu; }
        if (ctx->pc != 0x169B3Cu) { return; }
    }
    ctx->pc = 0x169B3Cu;
label_169b3c:
    // 0x169b3c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x169b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x169b40: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x169B40u;
    {
        const bool branch_taken_0x169b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x169b40) {
            ctx->pc = 0x169B44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x169B40u;
            // 0x169b44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x169B54u;
            goto label_169b54;
        }
    }
    ctx->pc = 0x169B48u;
    // 0x169b48: 0xc05c2b2  jal         func_170AC8
    ctx->pc = 0x169B48u;
    SET_GPR_U32(ctx, 31, 0x169B50u);
    ctx->pc = 0x169B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169B48u;
            // 0x169b4c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170AC8u;
    if (runtime->hasFunction(0x170AC8u)) {
        auto targetFn = runtime->lookupFunction(0x170AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169B50u; }
        if (ctx->pc != 0x169B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170AC8_0x170ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169B50u; }
        if (ctx->pc != 0x169B50u) { return; }
    }
    ctx->pc = 0x169B50u;
label_169b50:
    // 0x169b50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x169b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_169b54:
    // 0x169b54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x169b54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169b58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x169b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x169B5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169B5Cu;
            // 0x169b60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169B64u;
    // 0x169b64: 0x0  nop
    ctx->pc = 0x169b64u;
    // NOP
}
