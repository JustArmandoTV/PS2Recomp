#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E8E60
// Address: 0x2e8e60 - 0x2e90f0
void sub_002E8E60_0x2e8e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8E60_0x2e8e60");
#endif

    switch (ctx->pc) {
        case 0x2e8ea0u: goto label_2e8ea0;
        case 0x2e8f00u: goto label_2e8f00;
        case 0x2e8f60u: goto label_2e8f60;
        case 0x2e8fc0u: goto label_2e8fc0;
        case 0x2e9040u: goto label_2e9040;
        case 0x2e9068u: goto label_2e9068;
        case 0x2e90bcu: goto label_2e90bc;
        case 0x2e90c4u: goto label_2e90c4;
        default: break;
    }

    ctx->pc = 0x2e8e60u;

    // 0x2e8e60: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2e8e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2e8e64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e8e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e8e68: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2e8e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2e8e6c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e8e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2e8e70: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e8e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e8e74: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e8e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e8e78: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2e8e78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8e7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e8e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e8e80: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2e8e80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8e84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e8e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e8e88: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2e8e88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8e8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e8e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e8e90: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2e8e90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8e94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e8e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e8e98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8e9c: 0x94430ef8  lhu         $v1, 0xEF8($v0)
    ctx->pc = 0x2e8e9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3832)));
label_2e8ea0:
    // 0x2e8ea0: 0x5494000e  bnel        $a0, $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x2E8EA0u;
    {
        const bool branch_taken_0x2e8ea0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        if (branch_taken_0x2e8ea0) {
            ctx->pc = 0x2E8EA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8EA0u;
            // 0x2e8ea4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8EDCu;
            goto label_2e8edc;
        }
    }
    ctx->pc = 0x2E8EA8u;
    // 0x2e8ea8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2e8ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2e8eac: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2e8eacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e8eb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8EB0u;
    {
        const bool branch_taken_0x2e8eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8eb0) {
            ctx->pc = 0x2E8EC0u;
            goto label_2e8ec0;
        }
    }
    ctx->pc = 0x2E8EB8u;
    // 0x2e8eb8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8EB8u;
    {
        const bool branch_taken_0x2e8eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8EB8u;
            // 0x2e8ebc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8eb8) {
            ctx->pc = 0x2E8ED4u;
            goto label_2e8ed4;
        }
    }
    ctx->pc = 0x2E8EC0u;
label_2e8ec0:
    // 0x2e8ec0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e8ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e8ec4: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x2e8ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2e8ec8: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x2e8ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x2e8ecc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e8eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e8ed0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2e8ed0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e8ed4:
    // 0x2e8ed4: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2E8ED4u;
    {
        const bool branch_taken_0x2e8ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8ed4) {
            ctx->pc = 0x2E900Cu;
            goto label_2e900c;
        }
    }
    ctx->pc = 0x2E8EDCu;
label_2e8edc:
    // 0x2e8edc: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2e8edcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e8ee0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2E8EE0u;
    {
        const bool branch_taken_0x2e8ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8ee0) {
            ctx->pc = 0x2E8EA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e8ea0;
        }
    }
    ctx->pc = 0x2E8EE8u;
    // 0x2e8ee8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2e8ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2e8eec: 0x2822023  subu        $a0, $s4, $v0
    ctx->pc = 0x2e8eecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2e8ef0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e8ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e8ef4: 0x94430f00  lhu         $v1, 0xF00($v0)
    ctx->pc = 0x2e8ef4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3840)));
    // 0x2e8ef8: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E8EF8u;
    {
        const bool branch_taken_0x2e8ef8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2E8EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8EF8u;
            // 0x2e8efc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ef8) {
            ctx->pc = 0x2E8F48u;
            goto label_2e8f48;
        }
    }
    ctx->pc = 0x2E8F00u;
label_2e8f00:
    // 0x2e8f00: 0x54a4000d  bnel        $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E8F00u;
    {
        const bool branch_taken_0x2e8f00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2e8f00) {
            ctx->pc = 0x2E8F04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8F00u;
            // 0x2e8f04: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8F38u;
            goto label_2e8f38;
        }
    }
    ctx->pc = 0x2E8F08u;
    // 0x2e8f08: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2e8f08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e8f0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8F0Cu;
    {
        const bool branch_taken_0x2e8f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8f0c) {
            ctx->pc = 0x2E8F1Cu;
            goto label_2e8f1c;
        }
    }
    ctx->pc = 0x2E8F14u;
    // 0x2e8f14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8F14u;
    {
        const bool branch_taken_0x2e8f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8F14u;
            // 0x2e8f18: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f14) {
            ctx->pc = 0x2E8F30u;
            goto label_2e8f30;
        }
    }
    ctx->pc = 0x2E8F1Cu;
label_2e8f1c:
    // 0x2e8f1c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e8f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e8f20: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2e8f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e8f24: 0x244210b0  addiu       $v0, $v0, 0x10B0
    ctx->pc = 0x2e8f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2e8f28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e8f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e8f2c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2e8f2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e8f30:
    // 0x2e8f30: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2E8F30u;
    {
        const bool branch_taken_0x2e8f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8f30) {
            ctx->pc = 0x2E900Cu;
            goto label_2e900c;
        }
    }
    ctx->pc = 0x2E8F38u;
label_2e8f38:
    // 0x2e8f38: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2e8f38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e8f3c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2E8F3Cu;
    {
        const bool branch_taken_0x2e8f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8f3c) {
            ctx->pc = 0x2E8F00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e8f00;
        }
    }
    ctx->pc = 0x2E8F44u;
    // 0x2e8f44: 0x0  nop
    ctx->pc = 0x2e8f44u;
    // NOP
label_2e8f48:
    // 0x2e8f48: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2e8f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2e8f4c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2e8f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e8f50: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e8f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e8f54: 0x94430f08  lhu         $v1, 0xF08($v0)
    ctx->pc = 0x2e8f54u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3848)));
    // 0x2e8f58: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E8F58u;
    {
        const bool branch_taken_0x2e8f58 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2E8F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8F58u;
            // 0x2e8f5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f58) {
            ctx->pc = 0x2E8FA8u;
            goto label_2e8fa8;
        }
    }
    ctx->pc = 0x2E8F60u;
label_2e8f60:
    // 0x2e8f60: 0x54a4000d  bnel        $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E8F60u;
    {
        const bool branch_taken_0x2e8f60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2e8f60) {
            ctx->pc = 0x2E8F64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8F60u;
            // 0x2e8f64: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8F98u;
            goto label_2e8f98;
        }
    }
    ctx->pc = 0x2E8F68u;
    // 0x2e8f68: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2e8f68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e8f6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8F6Cu;
    {
        const bool branch_taken_0x2e8f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8f6c) {
            ctx->pc = 0x2E8F7Cu;
            goto label_2e8f7c;
        }
    }
    ctx->pc = 0x2E8F74u;
    // 0x2e8f74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8F74u;
    {
        const bool branch_taken_0x2e8f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8F74u;
            // 0x2e8f78: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f74) {
            ctx->pc = 0x2E8F90u;
            goto label_2e8f90;
        }
    }
    ctx->pc = 0x2E8F7Cu;
label_2e8f7c:
    // 0x2e8f7c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e8f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e8f80: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2e8f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e8f84: 0x24421240  addiu       $v0, $v0, 0x1240
    ctx->pc = 0x2e8f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x2e8f88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e8f8c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2e8f8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e8f90:
    // 0x2e8f90: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2E8F90u;
    {
        const bool branch_taken_0x2e8f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8f90) {
            ctx->pc = 0x2E900Cu;
            goto label_2e900c;
        }
    }
    ctx->pc = 0x2E8F98u;
label_2e8f98:
    // 0x2e8f98: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2e8f98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e8f9c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2E8F9Cu;
    {
        const bool branch_taken_0x2e8f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8f9c) {
            ctx->pc = 0x2E8F60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e8f60;
        }
    }
    ctx->pc = 0x2E8FA4u;
    // 0x2e8fa4: 0x0  nop
    ctx->pc = 0x2e8fa4u;
    // NOP
label_2e8fa8:
    // 0x2e8fa8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2e8fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2e8fac: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2e8facu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e8fb0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e8fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e8fb4: 0x94430f10  lhu         $v1, 0xF10($v0)
    ctx->pc = 0x2e8fb4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3856)));
    // 0x2e8fb8: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E8FB8u;
    {
        const bool branch_taken_0x2e8fb8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2E8FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8FB8u;
            // 0x2e8fbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8fb8) {
            ctx->pc = 0x2E9008u;
            goto label_2e9008;
        }
    }
    ctx->pc = 0x2E8FC0u;
label_2e8fc0:
    // 0x2e8fc0: 0x54a4000d  bnel        $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E8FC0u;
    {
        const bool branch_taken_0x2e8fc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2e8fc0) {
            ctx->pc = 0x2E8FC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8FC0u;
            // 0x2e8fc4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8FF8u;
            goto label_2e8ff8;
        }
    }
    ctx->pc = 0x2E8FC8u;
    // 0x2e8fc8: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2e8fc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e8fcc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8FCCu;
    {
        const bool branch_taken_0x2e8fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8fcc) {
            ctx->pc = 0x2E8FDCu;
            goto label_2e8fdc;
        }
    }
    ctx->pc = 0x2E8FD4u;
    // 0x2e8fd4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8FD4u;
    {
        const bool branch_taken_0x2e8fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8FD4u;
            // 0x2e8fd8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8fd4) {
            ctx->pc = 0x2E8FF0u;
            goto label_2e8ff0;
        }
    }
    ctx->pc = 0x2E8FDCu;
label_2e8fdc:
    // 0x2e8fdc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e8fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e8fe0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2e8fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e8fe4: 0x24421310  addiu       $v0, $v0, 0x1310
    ctx->pc = 0x2e8fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4880));
    // 0x2e8fe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e8fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e8fec: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2e8fecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e8ff0:
    // 0x2e8ff0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8FF0u;
    {
        const bool branch_taken_0x2e8ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8ff0) {
            ctx->pc = 0x2E900Cu;
            goto label_2e900c;
        }
    }
    ctx->pc = 0x2E8FF8u;
label_2e8ff8:
    // 0x2e8ff8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2e8ff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e8ffc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2E8FFCu;
    {
        const bool branch_taken_0x2e8ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8ffc) {
            ctx->pc = 0x2E8FC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e8fc0;
        }
    }
    ctx->pc = 0x2E9004u;
    // 0x2e9004: 0x0  nop
    ctx->pc = 0x2e9004u;
    // NOP
label_2e9008:
    // 0x2e9008: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e9008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e900c:
    // 0x2e900c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E900Cu;
    {
        const bool branch_taken_0x2e900c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e900c) {
            ctx->pc = 0x2E901Cu;
            goto label_2e901c;
        }
    }
    ctx->pc = 0x2E9014u;
    // 0x2e9014: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2E9014u;
    {
        const bool branch_taken_0x2e9014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9014u;
            // 0x2e9018: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9014) {
            ctx->pc = 0x2E90C8u;
            goto label_2e90c8;
        }
    }
    ctx->pc = 0x2E901Cu;
label_2e901c:
    // 0x2e901c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e901cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e9020: 0x944314a0  lhu         $v1, 0x14A0($v0)
    ctx->pc = 0x2e9020u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 5280)));
    // 0x2e9024: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2e9024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e9028: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9028u;
    {
        const bool branch_taken_0x2e9028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E902Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9028u;
            // 0x2e902c: 0xa7a0008e  sh          $zero, 0x8E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 142), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9028) {
            ctx->pc = 0x2E9038u;
            goto label_2e9038;
        }
    }
    ctx->pc = 0x2E9030u;
    // 0x2e9030: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e9030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e9034: 0xa44014a0  sh          $zero, 0x14A0($v0)
    ctx->pc = 0x2e9034u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5280), (uint16_t)GPR_U32(ctx, 0));
label_2e9038:
    // 0x2e9038: 0xc040180  jal         func_100600
    ctx->pc = 0x2E9038u;
    SET_GPR_U32(ctx, 31, 0x2E9040u);
    ctx->pc = 0x2E903Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9038u;
            // 0x2e903c: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9040u; }
        if (ctx->pc != 0x2E9040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9040u; }
        if (ctx->pc != 0x2E9040u) { return; }
    }
    ctx->pc = 0x2E9040u;
label_2e9040:
    // 0x2e9040: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2E9040u;
    {
        const bool branch_taken_0x2e9040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9040u;
            // 0x2e9044: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9040) {
            ctx->pc = 0x2E90C4u;
            goto label_2e90c4;
        }
    }
    ctx->pc = 0x2E9048u;
    // 0x2e9048: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e9048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e904c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e904cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9050: 0x8c5614d8  lw          $s6, 0x14D8($v0)
    ctx->pc = 0x2e9050u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2e9054: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2e9054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e9058: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e9058u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e905c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2e905cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2e9060: 0xc0ba470  jal         func_2E91C0
    ctx->pc = 0x2E9060u;
    SET_GPR_U32(ctx, 31, 0x2E9068u);
    ctx->pc = 0x2E9064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9060u;
            // 0x2e9064: 0x3445f76e  ori         $a1, $v0, 0xF76E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63342);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E91C0u;
    if (runtime->hasFunction(0x2E91C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E91C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9068u; }
        if (ctx->pc != 0x2E9068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E91C0_0x2e91c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9068u; }
        if (ctx->pc != 0x2E9068u) { return; }
    }
    ctx->pc = 0x2E9068u;
label_2e9068:
    // 0x2e9068: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2e9068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2e906c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e906cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e9070: 0x244230a0  addiu       $v0, $v0, 0x30A0
    ctx->pc = 0x2e9070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12448));
    // 0x2e9074: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e9074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9078: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2e9078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2e907c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e907cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9080: 0xa2150078  sb          $s5, 0x78($s0)
    ctx->pc = 0x2e9080u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 21));
    // 0x2e9084: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e9084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e9088: 0xa2030079  sb          $v1, 0x79($s0)
    ctx->pc = 0x2e9088u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 121), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e908c: 0x27a6008e  addiu       $a2, $sp, 0x8E
    ctx->pc = 0x2e908cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 142));
    // 0x2e9090: 0xa614007a  sh          $s4, 0x7A($s0)
    ctx->pc = 0x2e9090u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 122), (uint16_t)GPR_U32(ctx, 20));
    // 0x2e9094: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x2e9094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x2e9098: 0xa2000084  sb          $zero, 0x84($s0)
    ctx->pc = 0x2e9098u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 132), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e909c: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x2e909cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x2e90a0: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x2e90a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x2e90a4: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x2e90a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x2e90a8: 0xae1300ec  sw          $s3, 0xEC($s0)
    ctx->pc = 0x2e90a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 19));
    // 0x2e90ac: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x2e90acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x2e90b0: 0xae1200f4  sw          $s2, 0xF4($s0)
    ctx->pc = 0x2e90b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 18));
    // 0x2e90b4: 0xc0ba43c  jal         func_2E90F0
    ctx->pc = 0x2E90B4u;
    SET_GPR_U32(ctx, 31, 0x2E90BCu);
    ctx->pc = 0x2E90B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E90B4u;
            // 0x2e90b8: 0xae1600f8  sw          $s6, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E90F0u;
    if (runtime->hasFunction(0x2E90F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E90F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E90BCu; }
        if (ctx->pc != 0x2E90BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E90F0_0x2e90f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E90BCu; }
        if (ctx->pc != 0x2E90BCu) { return; }
    }
    ctx->pc = 0x2E90BCu;
label_2e90bc:
    // 0x2e90bc: 0xc0ba1e8  jal         func_2E87A0
    ctx->pc = 0x2E90BCu;
    SET_GPR_U32(ctx, 31, 0x2E90C4u);
    ctx->pc = 0x2E90C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E90BCu;
            // 0x2e90c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E87A0u;
    if (runtime->hasFunction(0x2E87A0u)) {
        auto targetFn = runtime->lookupFunction(0x2E87A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E90C4u; }
        if (ctx->pc != 0x2E90C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E87A0_0x2e87a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E90C4u; }
        if (ctx->pc != 0x2E90C4u) { return; }
    }
    ctx->pc = 0x2E90C4u;
label_2e90c4:
    // 0x2e90c4: 0x97a2008e  lhu         $v0, 0x8E($sp)
    ctx->pc = 0x2e90c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 142)));
label_2e90c8:
    // 0x2e90c8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2e90c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e90cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e90ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e90d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e90d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e90d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e90d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e90d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e90d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e90dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e90dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e90e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e90e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e90e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e90e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e90e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E90E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E90ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E90E8u;
            // 0x2e90ec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E90F0u;
}
