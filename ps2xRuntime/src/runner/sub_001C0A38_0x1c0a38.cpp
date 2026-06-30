#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0A38
// Address: 0x1c0a38 - 0x1c0ae8
void sub_001C0A38_0x1c0a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0A38_0x1c0a38");
#endif

    switch (ctx->pc) {
        case 0x1c0a70u: goto label_1c0a70;
        default: break;
    }

    ctx->pc = 0x1c0a38u;

    // 0x1c0a38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c0a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c0a3c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c0a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c0a40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c0a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a44: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c0a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c0a48: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c0a48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a4c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c0a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c0a50: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c0a50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a54: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1c0a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c0a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a5c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1c0a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1c0a60: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1c0a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1c0a64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c0a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c0a68: 0xc07132c  jal         func_1C4CB0
    ctx->pc = 0x1C0A68u;
    SET_GPR_U32(ctx, 31, 0x1C0A70u);
    ctx->pc = 0x1C0A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0A68u;
            // 0x1c0a6c: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4CB0u;
    if (runtime->hasFunction(0x1C4CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1C4CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0A70u; }
        if (ctx->pc != 0x1C0A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4CB0_0x1c4cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0A70u; }
        if (ctx->pc != 0x1C0A70u) { return; }
    }
    ctx->pc = 0x1C0A70u;
label_1c0a70:
    // 0x1c0a70: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C0A70u;
    {
        const bool branch_taken_0x1c0a70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0A70u;
            // 0x1c0a74: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a70) {
            ctx->pc = 0x1C0AC8u;
            goto label_1c0ac8;
        }
    }
    ctx->pc = 0x1C0A78u;
    // 0x1c0a78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0a7c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1c0a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0a80: 0x24a307ff  addiu       $v1, $a1, 0x7FF
    ctx->pc = 0x1c0a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
    // 0x1c0a84: 0xa6020034  sh          $v0, 0x34($s0)
    ctx->pc = 0x1c0a84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c0a88: 0x31ac2  srl         $v1, $v1, 11
    ctx->pc = 0x1c0a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x1c0a8c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x1c0a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x1c0a90: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x1c0a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x1c0a94: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1c0a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x1c0a98: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1c0a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x1c0a9c: 0xae13001c  sw          $s3, 0x1C($s0)
    ctx->pc = 0x1c0a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
    // 0x1c0aa0: 0xa600003a  sh          $zero, 0x3A($s0)
    ctx->pc = 0x1c0aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 58), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c0aa4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1c0aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1c0aa8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1c0aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x1c0aac: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1c0aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1c0ab0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c0ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c0ab4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1c0ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1c0ab8: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1c0ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1c0abc: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1c0abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1c0ac0: 0xa6000036  sh          $zero, 0x36($s0)
    ctx->pc = 0x1c0ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c0ac4: 0xa6000038  sh          $zero, 0x38($s0)
    ctx->pc = 0x1c0ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 0));
label_1c0ac8:
    // 0x1c0ac8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c0ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0acc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c0accu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c0ad0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c0ad0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0ad4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1c0ad4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0ad8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c0ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c0adc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0ADCu;
            // 0x1c0ae0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0AE4u;
    // 0x1c0ae4: 0x0  nop
    ctx->pc = 0x1c0ae4u;
    // NOP
}
