#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B2AC0
// Address: 0x3b2ac0 - 0x3b2b70
void sub_003B2AC0_0x3b2ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2AC0_0x3b2ac0");
#endif

    switch (ctx->pc) {
        case 0x3b2afcu: goto label_3b2afc;
        case 0x3b2b0cu: goto label_3b2b0c;
        case 0x3b2b18u: goto label_3b2b18;
        case 0x3b2b48u: goto label_3b2b48;
        default: break;
    }

    ctx->pc = 0x3b2ac0u;

    // 0x3b2ac0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b2ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3b2ac4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3b2ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3b2ac8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3b2ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3b2acc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b2accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3b2ad0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b2ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b2ad4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3b2ad4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2ad8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b2ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b2adc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3b2adcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2ae0: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x3B2AE0u;
    {
        const bool branch_taken_0x3b2ae0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2AE0u;
            // 0x3b2ae4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2ae0) {
            ctx->pc = 0x3B2B48u;
            goto label_3b2b48;
        }
    }
    ctx->pc = 0x3B2AE8u;
    // 0x3b2ae8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3b2ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3b2aec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3b2aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2af0: 0x24428958  addiu       $v0, $v0, -0x76A8
    ctx->pc = 0x3b2af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936920));
    // 0x3b2af4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3b2af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2af8: 0xae62017c  sw          $v0, 0x17C($s3)
    ctx->pc = 0x3b2af8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 380), GPR_U32(ctx, 2));
label_3b2afc:
    // 0x3b2afc: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x3b2afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x3b2b00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b2b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b2b04: 0xc1109cc  jal         func_442730
    ctx->pc = 0x3B2B04u;
    SET_GPR_U32(ctx, 31, 0x3B2B0Cu);
    ctx->pc = 0x3B2B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2B04u;
            // 0x3b2b08: 0x2614002c  addiu       $s4, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442730u;
    if (runtime->hasFunction(0x442730u)) {
        auto targetFn = runtime->lookupFunction(0x442730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2B0Cu; }
        if (ctx->pc != 0x3B2B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442730_0x442730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2B0Cu; }
        if (ctx->pc != 0x3B2B0Cu) { return; }
    }
    ctx->pc = 0x3B2B0Cu;
label_3b2b0c:
    // 0x3b2b0c: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x3b2b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x3b2b10: 0xc1109cc  jal         func_442730
    ctx->pc = 0x3B2B10u;
    SET_GPR_U32(ctx, 31, 0x3B2B18u);
    ctx->pc = 0x3B2B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2B10u;
            // 0x3b2b14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442730u;
    if (runtime->hasFunction(0x442730u)) {
        auto targetFn = runtime->lookupFunction(0x442730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2B18u; }
        if (ctx->pc != 0x3B2B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442730_0x442730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2B18u; }
        if (ctx->pc != 0x3B2B18u) { return; }
    }
    ctx->pc = 0x3B2B18u;
label_3b2b18:
    // 0x3b2b18: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3b2b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3b2b1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3b2b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3b2b20: 0x8c420110  lw          $v0, 0x110($v0)
    ctx->pc = 0x3b2b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x3b2b24: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3b2b24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b2b28: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3B2B28u;
    {
        const bool branch_taken_0x3b2b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2B28u;
            // 0x3b2b2c: 0x26100054  addiu       $s0, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2b28) {
            ctx->pc = 0x3B2AFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b2afc;
        }
    }
    ctx->pc = 0x3B2B30u;
    // 0x3b2b30: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x3b2b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x3b2b34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b2b34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3b2b38: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B2B38u;
    {
        const bool branch_taken_0x3b2b38 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3b2b38) {
            ctx->pc = 0x3B2B3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2B38u;
            // 0x3b2b3c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B2B4Cu;
            goto label_3b2b4c;
        }
    }
    ctx->pc = 0x3B2B40u;
    // 0x3b2b40: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3B2B40u;
    SET_GPR_U32(ctx, 31, 0x3B2B48u);
    ctx->pc = 0x3B2B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2B40u;
            // 0x3b2b44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2B48u; }
        if (ctx->pc != 0x3B2B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2B48u; }
        if (ctx->pc != 0x3B2B48u) { return; }
    }
    ctx->pc = 0x3B2B48u;
label_3b2b48:
    // 0x3b2b48: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3b2b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b2b4c:
    // 0x3b2b4c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3b2b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b2b50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3b2b50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b2b54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b2b54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b2b58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b2b58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b2b5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b2b5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2b60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b2b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2b64: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2B64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2B64u;
            // 0x3b2b68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B2B6Cu;
    // 0x3b2b6c: 0x0  nop
    ctx->pc = 0x3b2b6cu;
    // NOP
}
