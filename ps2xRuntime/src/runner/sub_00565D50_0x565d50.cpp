#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00565D50
// Address: 0x565d50 - 0x565eb0
void sub_00565D50_0x565d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00565D50_0x565d50");
#endif

    switch (ctx->pc) {
        case 0x565da4u: goto label_565da4;
        case 0x565decu: goto label_565dec;
        case 0x565dfcu: goto label_565dfc;
        case 0x565e44u: goto label_565e44;
        default: break;
    }

    ctx->pc = 0x565d50u;

    // 0x565d50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x565d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x565d54: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x565d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x565d58: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x565d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x565d5c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x565d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x565d60: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x565d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x565d64: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x565d64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x565d68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x565d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x565d6c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x565d6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x565d70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x565d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x565d74: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x565d74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x565d78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x565d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x565d7c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x565d7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x565d80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x565d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x565d84: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x565d84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x565d88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x565d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x565d8c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x565d8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x565d90: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x565d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x565d94: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x565d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x565d98: 0x3445d57b  ori         $a1, $v0, 0xD57B
    ctx->pc = 0x565d98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54651);
    // 0x565d9c: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x565D9Cu;
    SET_GPR_U32(ctx, 31, 0x565DA4u);
    ctx->pc = 0x565DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x565D9Cu;
            // 0x565da0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565DA4u; }
        if (ctx->pc != 0x565DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565DA4u; }
        if (ctx->pc != 0x565DA4u) { return; }
    }
    ctx->pc = 0x565DA4u;
label_565da4:
    // 0x565da4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x565da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x565da8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x565da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x565dac: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x565dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x565db0: 0x24637ef0  addiu       $v1, $v1, 0x7EF0
    ctx->pc = 0x565db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32496));
    // 0x565db4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x565db4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x565db8: 0x26a4006c  addiu       $a0, $s5, 0x6C
    ctx->pc = 0x565db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
    // 0x565dbc: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x565dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x565dc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x565dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x565dc4: 0xaea00054  sw          $zero, 0x54($s5)
    ctx->pc = 0x565dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 0));
    // 0x565dc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x565dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x565dcc: 0xaeb10058  sw          $s1, 0x58($s5)
    ctx->pc = 0x565dccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 17));
    // 0x565dd0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x565dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x565dd4: 0xaeb0005c  sw          $s0, 0x5C($s5)
    ctx->pc = 0x565dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 16));
    // 0x565dd8: 0xaeb60060  sw          $s6, 0x60($s5)
    ctx->pc = 0x565dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 22));
    // 0x565ddc: 0xaeb40064  sw          $s4, 0x64($s5)
    ctx->pc = 0x565ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 20));
    // 0x565de0: 0xa2a00080  sb          $zero, 0x80($s5)
    ctx->pc = 0x565de0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 128), (uint8_t)GPR_U32(ctx, 0));
    // 0x565de4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x565DE4u;
    SET_GPR_U32(ctx, 31, 0x565DECu);
    ctx->pc = 0x565DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x565DE4u;
            // 0x565de8: 0xa2a20081  sb          $v0, 0x81($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 129), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565DECu; }
        if (ctx->pc != 0x565DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565DECu; }
        if (ctx->pc != 0x565DECu) { return; }
    }
    ctx->pc = 0x565DECu;
label_565dec:
    // 0x565dec: 0xa2a0007c  sb          $zero, 0x7C($s5)
    ctx->pc = 0x565decu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 124), (uint8_t)GPR_U32(ctx, 0));
    // 0x565df0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x565df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x565df4: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x565DF4u;
    {
        const bool branch_taken_0x565df4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x565DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565DF4u;
            // 0x565df8: 0xaeb30068  sw          $s3, 0x68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x565df4) {
            ctx->pc = 0x565E30u;
            goto label_565e30;
        }
    }
    ctx->pc = 0x565DFCu;
label_565dfc:
    // 0x565dfc: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x565dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x565e00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x565E00u;
    {
        const bool branch_taken_0x565e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x565e00) {
            ctx->pc = 0x565E20u;
            goto label_565e20;
        }
    }
    ctx->pc = 0x565E08u;
    // 0x565e08: 0x82a2007c  lb          $v0, 0x7C($s5)
    ctx->pc = 0x565e08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x565e0c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x565e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x565e10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x565e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x565e14: 0xa2a3007c  sb          $v1, 0x7C($s5)
    ctx->pc = 0x565e14u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 124), (uint8_t)GPR_U32(ctx, 3));
    // 0x565e18: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x565e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x565e1c: 0xac44006c  sw          $a0, 0x6C($v0)
    ctx->pc = 0x565e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 4));
label_565e20:
    // 0x565e20: 0x139842  srl         $s3, $s3, 1
    ctx->pc = 0x565e20u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x565e24: 0x1660fff5  bnez        $s3, . + 4 + (-0xB << 2)
    ctx->pc = 0x565E24u;
    {
        const bool branch_taken_0x565e24 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x565E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565E24u;
            // 0x565e28: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x565e24) {
            ctx->pc = 0x565DFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_565dfc;
        }
    }
    ctx->pc = 0x565E2Cu;
    // 0x565e2c: 0x0  nop
    ctx->pc = 0x565e2cu;
    // NOP
label_565e30:
    // 0x565e30: 0xa2a0007d  sb          $zero, 0x7D($s5)
    ctx->pc = 0x565e30u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 125), (uint8_t)GPR_U32(ctx, 0));
    // 0x565e34: 0x82a2007c  lb          $v0, 0x7C($s5)
    ctx->pc = 0x565e34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x565e38: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x565E38u;
    {
        const bool branch_taken_0x565e38 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x565E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565E38u;
            // 0x565e3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x565e38) {
            ctx->pc = 0x565E70u;
            goto label_565e70;
        }
    }
    ctx->pc = 0x565E40u;
    // 0x565e40: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x565e40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_565e44:
    // 0x565e44: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x565e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x565e48: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x565E48u;
    {
        const bool branch_taken_0x565e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x565e48) {
            ctx->pc = 0x565E58u;
            goto label_565e58;
        }
    }
    ctx->pc = 0x565E50u;
    // 0x565e50: 0xa2a4007d  sb          $a0, 0x7D($s5)
    ctx->pc = 0x565e50u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 125), (uint8_t)GPR_U32(ctx, 4));
    // 0x565e54: 0x0  nop
    ctx->pc = 0x565e54u;
    // NOP
label_565e58:
    // 0x565e58: 0x82a2007c  lb          $v0, 0x7C($s5)
    ctx->pc = 0x565e58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x565e5c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x565e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x565e60: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x565e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x565e64: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x565E64u;
    {
        const bool branch_taken_0x565e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x565E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565E64u;
            // 0x565e68: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x565e64) {
            ctx->pc = 0x565E44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_565e44;
        }
    }
    ctx->pc = 0x565E6Cu;
    // 0x565e6c: 0x0  nop
    ctx->pc = 0x565e6cu;
    // NOP
label_565e70:
    // 0x565e70: 0xaea00078  sw          $zero, 0x78($s5)
    ctx->pc = 0x565e70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 120), GPR_U32(ctx, 0));
    // 0x565e74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x565e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x565e78: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x565e78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x565e7c: 0xa2a3007e  sb          $v1, 0x7E($s5)
    ctx->pc = 0x565e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 126), (uint8_t)GPR_U32(ctx, 3));
    // 0x565e80: 0xa2a3007f  sb          $v1, 0x7F($s5)
    ctx->pc = 0x565e80u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 127), (uint8_t)GPR_U32(ctx, 3));
    // 0x565e84: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x565e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x565e88: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x565e88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x565e8c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x565e8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x565e90: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x565e90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x565e94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x565e94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x565e98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x565e98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x565e9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x565e9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x565ea0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x565ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x565ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x565EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x565EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565EA4u;
            // 0x565ea8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x565EACu;
    // 0x565eac: 0x0  nop
    ctx->pc = 0x565eacu;
    // NOP
}
