#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00517BD0
// Address: 0x517bd0 - 0x517c60
void sub_00517BD0_0x517bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00517BD0_0x517bd0");
#endif

    switch (ctx->pc) {
        case 0x517c18u: goto label_517c18;
        case 0x517c3cu: goto label_517c3c;
        default: break;
    }

    ctx->pc = 0x517bd0u;

    // 0x517bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x517bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x517bd4: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x517bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x517bd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x517bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x517bdc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x517bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x517be0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x517be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x517be4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x517be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x517be8: 0xe48c001c  swc1        $f12, 0x1C($a0)
    ctx->pc = 0x517be8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x517bec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x517becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x517bf0: 0xe48d0020  swc1        $f13, 0x20($a0)
    ctx->pc = 0x517bf0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x517bf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x517bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x517bf8: 0xa08601c0  sb          $a2, 0x1C0($a0)
    ctx->pc = 0x517bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 448), (uint8_t)GPR_U32(ctx, 6));
    // 0x517bfc: 0x8c420d30  lw          $v0, 0xD30($v0)
    ctx->pc = 0x517bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3376)));
    // 0x517c00: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x517c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x517c04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x517c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x517c08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x517c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x517c0c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x517c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x517c10: 0xc14039c  jal         func_500E70
    ctx->pc = 0x517C10u;
    SET_GPR_U32(ctx, 31, 0x517C18u);
    ctx->pc = 0x517C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517C10u;
            // 0x517c14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500E70u;
    if (runtime->hasFunction(0x500E70u)) {
        auto targetFn = runtime->lookupFunction(0x500E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517C18u; }
        if (ctx->pc != 0x517C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500E70_0x500e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517C18u; }
        if (ctx->pc != 0x517C18u) { return; }
    }
    ctx->pc = 0x517C18u;
label_517c18:
    // 0x517c18: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x517c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x517c1c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x517c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x517c20: 0x2442af70  addiu       $v0, $v0, -0x5090
    ctx->pc = 0x517c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946672));
    // 0x517c24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x517c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x517c28: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x517c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x517c2c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x517c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x517c30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x517c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x517c34: 0xc145e7c  jal         func_5179F0
    ctx->pc = 0x517C34u;
    SET_GPR_U32(ctx, 31, 0x517C3Cu);
    ctx->pc = 0x517C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517C34u;
            // 0x517c38: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5179F0u;
    if (runtime->hasFunction(0x5179F0u)) {
        auto targetFn = runtime->lookupFunction(0x5179F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517C3Cu; }
        if (ctx->pc != 0x517C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005179F0_0x5179f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517C3Cu; }
        if (ctx->pc != 0x517C3Cu) { return; }
    }
    ctx->pc = 0x517C3Cu;
label_517c3c:
    // 0x517c3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x517c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x517c40: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x517c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x517c44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x517c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x517c48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x517c48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x517c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x517C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x517C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517C4Cu;
            // 0x517c50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x517C54u;
    // 0x517c54: 0x0  nop
    ctx->pc = 0x517c54u;
    // NOP
    // 0x517c58: 0x0  nop
    ctx->pc = 0x517c58u;
    // NOP
    // 0x517c5c: 0x0  nop
    ctx->pc = 0x517c5cu;
    // NOP
}
