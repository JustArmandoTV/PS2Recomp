#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C8EF0
// Address: 0x1c8ef0 - 0x1c90a8
void sub_001C8EF0_0x1c8ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8EF0_0x1c8ef0");
#endif

    switch (ctx->pc) {
        case 0x1c8f30u: goto label_1c8f30;
        case 0x1c8f38u: goto label_1c8f38;
        case 0x1c8f48u: goto label_1c8f48;
        case 0x1c8f58u: goto label_1c8f58;
        case 0x1c8f7cu: goto label_1c8f7c;
        case 0x1c8fa8u: goto label_1c8fa8;
        case 0x1c8fbcu: goto label_1c8fbc;
        case 0x1c8fc8u: goto label_1c8fc8;
        case 0x1c8fecu: goto label_1c8fec;
        case 0x1c9070u: goto label_1c9070;
        default: break;
    }

    ctx->pc = 0x1c8ef0u;

    // 0x1c8ef0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c8ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c8ef4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c8ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c8ef8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1c8ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1c8efc: 0x3c10006e  lui         $s0, 0x6E
    ctx->pc = 0x1c8efcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)110 << 16));
    // 0x1c8f00: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1c8f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1c8f04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c8f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f08: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1c8f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1c8f0c: 0x26123e00  addiu       $s2, $s0, 0x3E00
    ctx->pc = 0x1c8f0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 15872));
    // 0x1c8f10: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1c8f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1c8f14: 0x2442a700  addiu       $v0, $v0, -0x5900
    ctx->pc = 0x1c8f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944512));
    // 0x1c8f18: 0x3c05006e  lui         $a1, 0x6E
    ctx->pc = 0x1c8f18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)110 << 16));
    // 0x1c8f1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c8f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8f20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c8f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f24: 0xaca33e50  sw          $v1, 0x3E50($a1)
    ctx->pc = 0x1c8f24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 15952), GPR_U32(ctx, 3));
    // 0x1c8f28: 0xc043eaa  jal         func_10FAA8
    ctx->pc = 0x1C8F28u;
    SET_GPR_U32(ctx, 31, 0x1C8F30u);
    ctx->pc = 0x1C8F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8F28u;
            // 0x1c8f2c: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FAA8u;
    if (runtime->hasFunction(0x10FAA8u)) {
        auto targetFn = runtime->lookupFunction(0x10FAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8F30u; }
        if (ctx->pc != 0x1C8F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FAA8_0x10faa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8F30u; }
        if (ctx->pc != 0x1C8F30u) { return; }
    }
    ctx->pc = 0x1C8F30u;
label_1c8f30:
    // 0x1c8f30: 0x3c05534e  lui         $a1, 0x534E
    ctx->pc = 0x1c8f30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21326 << 16));
    // 0x1c8f34: 0x0  nop
    ctx->pc = 0x1c8f34u;
    // NOP
label_1c8f38:
    // 0x1c8f38: 0x26043e00  addiu       $a0, $s0, 0x3E00
    ctx->pc = 0x1c8f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15872));
    // 0x1c8f3c: 0x34a54446  ori         $a1, $a1, 0x4446
    ctx->pc = 0x1c8f3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17478);
    // 0x1c8f40: 0xc044094  jal         func_110250
    ctx->pc = 0x1C8F40u;
    SET_GPR_U32(ctx, 31, 0x1C8F48u);
    ctx->pc = 0x1C8F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8F40u;
            // 0x1c8f44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110250u;
    if (runtime->hasFunction(0x110250u)) {
        auto targetFn = runtime->lookupFunction(0x110250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8F48u; }
        if (ctx->pc != 0x1C8F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110250_0x110250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8F48u; }
        if (ctx->pc != 0x1C8F48u) { return; }
    }
    ctx->pc = 0x1C8F48u;
label_1c8f48:
    // 0x1c8f48: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1c8f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8f4c: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8F4Cu;
    {
        const bool branch_taken_0x1c8f4c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C8F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8F4Cu;
            // 0x1c8f50: 0x2403270f  addiu       $v1, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f4c) {
            ctx->pc = 0x1C8F78u;
            goto label_1c8f78;
        }
    }
    ctx->pc = 0x1C8F54u;
    // 0x1c8f54: 0x0  nop
    ctx->pc = 0x1c8f54u;
    // NOP
label_1c8f58:
    // 0x1c8f58: 0x0  nop
    ctx->pc = 0x1c8f58u;
    // NOP
    // 0x1c8f5c: 0x0  nop
    ctx->pc = 0x1c8f5cu;
    // NOP
    // 0x1c8f60: 0x0  nop
    ctx->pc = 0x1c8f60u;
    // NOP
    // 0x1c8f64: 0x0  nop
    ctx->pc = 0x1c8f64u;
    // NOP
    // 0x1c8f68: 0x0  nop
    ctx->pc = 0x1c8f68u;
    // NOP
    // 0x1c8f6c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C8F6Cu;
    {
        const bool branch_taken_0x1c8f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8f6c) {
            ctx->pc = 0x1C8F58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8f58;
        }
    }
    ctx->pc = 0x1C8F74u;
    // 0x1c8f74: 0x0  nop
    ctx->pc = 0x1c8f74u;
    // NOP
label_1c8f78:
    // 0x1c8f78: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1c8f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_1c8f7c:
    // 0x1c8f7c: 0x0  nop
    ctx->pc = 0x1c8f7cu;
    // NOP
    // 0x1c8f80: 0x0  nop
    ctx->pc = 0x1c8f80u;
    // NOP
    // 0x1c8f84: 0x0  nop
    ctx->pc = 0x1c8f84u;
    // NOP
    // 0x1c8f88: 0x0  nop
    ctx->pc = 0x1c8f88u;
    // NOP
    // 0x1c8f8c: 0x0  nop
    ctx->pc = 0x1c8f8cu;
    // NOP
    // 0x1c8f90: 0x5464fffa  bnel        $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C8F90u;
    {
        const bool branch_taken_0x1c8f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1c8f90) {
            ctx->pc = 0x1C8F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8F90u;
            // 0x1c8f94: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C8F7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8f7c;
        }
    }
    ctx->pc = 0x1C8F98u;
    // 0x1c8f98: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1c8f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1c8f9c: 0x1040ffe6  beqz        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1C8F9Cu;
    {
        const bool branch_taken_0x1c8f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8F9Cu;
            // 0x1c8fa0: 0x3c05534e  lui         $a1, 0x534E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21326 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f9c) {
            ctx->pc = 0x1C8F38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8f38;
        }
    }
    ctx->pc = 0x1C8FA4u;
    // 0x1c8fa4: 0x3c10006e  lui         $s0, 0x6E
    ctx->pc = 0x1c8fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)110 << 16));
label_1c8fa8:
    // 0x1c8fa8: 0x3c055346  lui         $a1, 0x5346
    ctx->pc = 0x1c8fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21318 << 16));
    // 0x1c8fac: 0x26043e28  addiu       $a0, $s0, 0x3E28
    ctx->pc = 0x1c8facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15912));
    // 0x1c8fb0: 0x34a55356  ori         $a1, $a1, 0x5356
    ctx->pc = 0x1c8fb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21334);
    // 0x1c8fb4: 0xc044094  jal         func_110250
    ctx->pc = 0x1C8FB4u;
    SET_GPR_U32(ctx, 31, 0x1C8FBCu);
    ctx->pc = 0x1C8FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8FB4u;
            // 0x1c8fb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110250u;
    if (runtime->hasFunction(0x110250u)) {
        auto targetFn = runtime->lookupFunction(0x110250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8FBCu; }
        if (ctx->pc != 0x1C8FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110250_0x110250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8FBCu; }
        if (ctx->pc != 0x1C8FBCu) { return; }
    }
    ctx->pc = 0x1C8FBCu;
label_1c8fbc:
    // 0x1c8fbc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1c8fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8fc0: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C8FC0u;
    {
        const bool branch_taken_0x1c8fc0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C8FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8FC0u;
            // 0x1c8fc4: 0x2403270f  addiu       $v1, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8fc0) {
            ctx->pc = 0x1C8FE8u;
            goto label_1c8fe8;
        }
    }
    ctx->pc = 0x1C8FC8u;
label_1c8fc8:
    // 0x1c8fc8: 0x0  nop
    ctx->pc = 0x1c8fc8u;
    // NOP
    // 0x1c8fcc: 0x0  nop
    ctx->pc = 0x1c8fccu;
    // NOP
    // 0x1c8fd0: 0x0  nop
    ctx->pc = 0x1c8fd0u;
    // NOP
    // 0x1c8fd4: 0x0  nop
    ctx->pc = 0x1c8fd4u;
    // NOP
    // 0x1c8fd8: 0x0  nop
    ctx->pc = 0x1c8fd8u;
    // NOP
    // 0x1c8fdc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C8FDCu;
    {
        const bool branch_taken_0x1c8fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8fdc) {
            ctx->pc = 0x1C8FC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8fc8;
        }
    }
    ctx->pc = 0x1C8FE4u;
    // 0x1c8fe4: 0x0  nop
    ctx->pc = 0x1c8fe4u;
    // NOP
label_1c8fe8:
    // 0x1c8fe8: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1c8fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_1c8fec:
    // 0x1c8fec: 0x0  nop
    ctx->pc = 0x1c8fecu;
    // NOP
    // 0x1c8ff0: 0x0  nop
    ctx->pc = 0x1c8ff0u;
    // NOP
    // 0x1c8ff4: 0x0  nop
    ctx->pc = 0x1c8ff4u;
    // NOP
    // 0x1c8ff8: 0x0  nop
    ctx->pc = 0x1c8ff8u;
    // NOP
    // 0x1c8ffc: 0x0  nop
    ctx->pc = 0x1c8ffcu;
    // NOP
    // 0x1c9000: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C9000u;
    {
        const bool branch_taken_0x1c9000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C9004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9000u;
            // 0x1c9004: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9000) {
            ctx->pc = 0x1C8FECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8fec;
        }
    }
    ctx->pc = 0x1C9008u;
    // 0x1c9008: 0x26023e28  addiu       $v0, $s0, 0x3E28
    ctx->pc = 0x1c9008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 15912));
    // 0x1c900c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1c900cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1c9010: 0x1060ffe5  beqz        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1C9010u;
    {
        const bool branch_taken_0x1c9010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9010u;
            // 0x1c9014: 0x3c0a0060  lui         $t2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9010) {
            ctx->pc = 0x1C8FA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8fa8;
        }
    }
    ctx->pc = 0x1C9018u;
    // 0x1c9018: 0x8e2d0014  lw          $t5, 0x14($s1)
    ctx->pc = 0x1c9018u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1c901c: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1c901cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c9020: 0x3c090060  lui         $t1, 0x60
    ctx->pc = 0x1c9020u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)96 << 16));
    // 0x1c9024: 0x8e2b0008  lw          $t3, 0x8($s1)
    ctx->pc = 0x1c9024u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c9028: 0x3c08006e  lui         $t0, 0x6E
    ctx->pc = 0x1c9028u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)110 << 16));
    // 0x1c902c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1c902cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c9030: 0x24041300  addiu       $a0, $zero, 0x1300
    ctx->pc = 0x1c9030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4864));
    // 0x1c9034: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1c9034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c9038: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c9038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c903c: 0x8e2c0004  lw          $t4, 0x4($s1)
    ctx->pc = 0x1c903cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c9040: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1c9040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c9044: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1c9044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c9048: 0xad43a704  sw          $v1, -0x58FC($t2)
    ctx->pc = 0x1c9048u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294944516), GPR_U32(ctx, 3));
    // 0x1c904c: 0xad22a708  sw          $v0, -0x58F8($t1)
    ctx->pc = 0x1c904cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294944520), GPR_U32(ctx, 2));
    // 0x1c9050: 0xad0d3e54  sw          $t5, 0x3E54($t0)
    ctx->pc = 0x1c9050u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 15956), GPR_U32(ctx, 13));
    // 0x1c9054: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x1c9054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x1c9058: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1c9058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1c905c: 0xafab0008  sw          $t3, 0x8($sp)
    ctx->pc = 0x1c905cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 11));
    // 0x1c9060: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x1c9060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x1c9064: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1c9064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1c9068: 0xc0728d0  jal         func_1CA340
    ctx->pc = 0x1C9068u;
    SET_GPR_U32(ctx, 31, 0x1C9070u);
    ctx->pc = 0x1C906Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9068u;
            // 0x1c906c: 0xafad0014  sw          $t5, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA340u;
    if (runtime->hasFunction(0x1CA340u)) {
        auto targetFn = runtime->lookupFunction(0x1CA340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9070u; }
        if (ctx->pc != 0x1C9070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA340_0x1ca340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9070u; }
        if (ctx->pc != 0x1C9070u) { return; }
    }
    ctx->pc = 0x1C9070u;
label_1c9070:
    // 0x1c9070: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9070u;
    {
        const bool branch_taken_0x1c9070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9070u;
            // 0x1c9074: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9070) {
            ctx->pc = 0x1C9084u;
            goto label_1c9084;
        }
    }
    ctx->pc = 0x1C9078u;
    // 0x1c9078: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1c9078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1c907c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c907cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9080: 0xac83a6f4  sw          $v1, -0x590C($a0)
    ctx->pc = 0x1c9080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294944500), GPR_U32(ctx, 3));
label_1c9084:
    // 0x1c9084: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1c9084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c9088: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1c9088u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c908c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1c908cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c9090: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9090u;
            // 0x1c9094: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9098u;
    // 0x1c9098: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1c9098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1c909c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C909Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C90A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C909Cu;
            // 0x1c90a0: 0x8c62a6f4  lw          $v0, -0x590C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944500)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C90A4u;
    // 0x1c90a4: 0x0  nop
    ctx->pc = 0x1c90a4u;
    // NOP
}
