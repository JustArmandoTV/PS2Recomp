#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048CB60
// Address: 0x48cb60 - 0x48cca0
void sub_0048CB60_0x48cb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CB60_0x48cb60");
#endif

    switch (ctx->pc) {
        case 0x48cba8u: goto label_48cba8;
        case 0x48cbc0u: goto label_48cbc0;
        case 0x48cc28u: goto label_48cc28;
        default: break;
    }

    ctx->pc = 0x48cb60u;

    // 0x48cb60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x48cb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x48cb64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x48cb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x48cb68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48cb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x48cb6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48cb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x48cb70: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x48cb70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48cb74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48cb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48cb78: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x48cb78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48cb7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48cb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48cb80: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x48cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x48cb84: 0x8c90006c  lw          $s0, 0x6C($a0)
    ctx->pc = 0x48cb84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x48cb88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48cb8c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x48cb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x48cb90: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x48cb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x48cb94: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48cb94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x48cb98: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48cb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x48cb9c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x48CB9Cu;
    {
        const bool branch_taken_0x48cb9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48CB9Cu;
            // 0x48cba0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cb9c) {
            ctx->pc = 0x48CC78u;
            goto label_48cc78;
        }
    }
    ctx->pc = 0x48CBA4u;
    // 0x48cba4: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x48cba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_48cba8:
    // 0x48cba8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x48cba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x48cbac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48cbacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x48cbb0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48cbb4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x48cbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48cbb8: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x48CBB8u;
    SET_GPR_U32(ctx, 31, 0x48CBC0u);
    ctx->pc = 0x48CBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48CBB8u;
            // 0x48cbbc: 0x24a507f0  addiu       $a1, $a1, 0x7F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48CBC0u; }
        if (ctx->pc != 0x48CBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48CBC0u; }
        if (ctx->pc != 0x48CBC0u) { return; }
    }
    ctx->pc = 0x48CBC0u;
label_48cbc0:
    // 0x48cbc0: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x48CBC0u;
    {
        const bool branch_taken_0x48cbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48cbc0) {
            ctx->pc = 0x48CBC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48CBC0u;
            // 0x48cbc4: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48CC48u;
            goto label_48cc48;
        }
    }
    ctx->pc = 0x48CBC8u;
    // 0x48cbc8: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x48cbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x48cbcc: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x48cbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x48cbd0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48cbd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x48cbd4: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x48cbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x48cbd8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x48cbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48cbdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48cbe0: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x48cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x48cbe4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x48cbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x48cbe8: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x48cbe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x48cbec: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x48cbecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48cbf0: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x48CBF0u;
    {
        const bool branch_taken_0x48cbf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x48cbf0) {
            ctx->pc = 0x48CBF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48CBF0u;
            // 0x48cbf4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48CC1Cu;
            goto label_48cc1c;
        }
    }
    ctx->pc = 0x48CBF8u;
    // 0x48cbf8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x48cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x48cbfc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x48CBFCu;
    {
        const bool branch_taken_0x48cbfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x48cbfc) {
            ctx->pc = 0x48CC18u;
            goto label_48cc18;
        }
    }
    ctx->pc = 0x48CC04u;
    // 0x48cc04: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x48cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x48cc08: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48CC08u;
    {
        const bool branch_taken_0x48cc08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x48cc08) {
            ctx->pc = 0x48CC18u;
            goto label_48cc18;
        }
    }
    ctx->pc = 0x48CC10u;
    // 0x48cc10: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x48CC10u;
    {
        const bool branch_taken_0x48cc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cc10) {
            ctx->pc = 0x48CC78u;
            goto label_48cc78;
        }
    }
    ctx->pc = 0x48CC18u;
label_48cc18:
    // 0x48cc18: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x48cc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_48cc1c:
    // 0x48cc1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48cc1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48cc20: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x48CC20u;
    SET_GPR_U32(ctx, 31, 0x48CC28u);
    ctx->pc = 0x48CC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48CC20u;
            // 0x48cc24: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48CC28u; }
        if (ctx->pc != 0x48CC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48CC28u; }
        if (ctx->pc != 0x48CC28u) { return; }
    }
    ctx->pc = 0x48CC28u;
label_48cc28:
    // 0x48cc28: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x48cc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x48cc2c: 0xafb10058  sw          $s1, 0x58($sp)
    ctx->pc = 0x48cc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 17));
    // 0x48cc30: 0xa3a20050  sb          $v0, 0x50($sp)
    ctx->pc = 0x48cc30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
    // 0x48cc34: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x48cc34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48cc38: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x48cc38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x48cc3c: 0xdfa20058  ld          $v0, 0x58($sp)
    ctx->pc = 0x48cc3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x48cc40: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x48CC40u;
    {
        const bool branch_taken_0x48cc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48CC40u;
            // 0x48cc44: 0xfe020008  sd          $v0, 0x8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cc40) {
            ctx->pc = 0x48CC78u;
            goto label_48cc78;
        }
    }
    ctx->pc = 0x48CC48u;
label_48cc48:
    // 0x48cc48: 0x8e630068  lw          $v1, 0x68($s3)
    ctx->pc = 0x48cc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x48cc4c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48cc4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x48cc50: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x48cc50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x48cc54: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x48cc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x48cc58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48cc58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x48cc5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x48cc60: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x48cc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x48cc64: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48cc64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x48cc68: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48cc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x48cc6c: 0x5440ffce  bnel        $v0, $zero, . + 4 + (-0x32 << 2)
    ctx->pc = 0x48CC6Cu;
    {
        const bool branch_taken_0x48cc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48cc6c) {
            ctx->pc = 0x48CC70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48CC6Cu;
            // 0x48cc70: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48CBA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48cba8;
        }
    }
    ctx->pc = 0x48CC74u;
    // 0x48cc74: 0x0  nop
    ctx->pc = 0x48cc74u;
    // NOP
label_48cc78:
    // 0x48cc78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x48cc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48cc7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48cc7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48cc80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48cc80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48cc84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48cc84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48cc88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48cc88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48cc8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48cc8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48cc90: 0x3e00008  jr          $ra
    ctx->pc = 0x48CC90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48CC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48CC90u;
            // 0x48cc94: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48CC98u;
    // 0x48cc98: 0x0  nop
    ctx->pc = 0x48cc98u;
    // NOP
    // 0x48cc9c: 0x0  nop
    ctx->pc = 0x48cc9cu;
    // NOP
}
