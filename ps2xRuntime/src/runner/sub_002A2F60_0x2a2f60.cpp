#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A2F60
// Address: 0x2a2f60 - 0x2a3120
void sub_002A2F60_0x2a2f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2F60_0x2a2f60");
#endif

    switch (ctx->pc) {
        case 0x2a2f9cu: goto label_2a2f9c;
        case 0x2a2fb0u: goto label_2a2fb0;
        case 0x2a2fc4u: goto label_2a2fc4;
        case 0x2a2ff8u: goto label_2a2ff8;
        case 0x2a3000u: goto label_2a3000;
        case 0x2a3018u: goto label_2a3018;
        case 0x2a302cu: goto label_2a302c;
        case 0x2a306cu: goto label_2a306c;
        case 0x2a3078u: goto label_2a3078;
        case 0x2a3090u: goto label_2a3090;
        default: break;
    }

    ctx->pc = 0x2a2f60u;

    // 0x2a2f60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2a2f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2a2f64: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2a2f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2a2f68: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2a2f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2a2f6c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2a2f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2a2f70: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2a2f70u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f74: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a2f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2a2f78: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a2f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a2f7c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a2f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a2f80: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2a2f80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a2f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a2f88: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a2f88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a2f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a2f90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a2f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a2f94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a2f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a2f98: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x2a2f98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2a2f9c:
    // 0x2a2f9c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2a2f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a2fa0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A2FA0u;
    {
        const bool branch_taken_0x2a2fa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2fa0) {
            ctx->pc = 0x2A2FE0u;
            goto label_2a2fe0;
        }
    }
    ctx->pc = 0x2A2FA8u;
    // 0x2a2fa8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a2fa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2fac: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2a2facu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a2fb0:
    // 0x2a2fb0: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x2a2fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2a2fb4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2FB4u;
    {
        const bool branch_taken_0x2a2fb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2fb4) {
            ctx->pc = 0x2A2FC8u;
            goto label_2a2fc8;
        }
    }
    ctx->pc = 0x2A2FBCu;
    // 0x2a2fbc: 0xc074ea0  jal         func_1D3A80
    ctx->pc = 0x2A2FBCu;
    SET_GPR_U32(ctx, 31, 0x2A2FC4u);
    ctx->pc = 0x2A2FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2FBCu;
            // 0x2a2fc0: 0x26440008  addiu       $a0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2FC4u; }
        if (ctx->pc != 0x2A2FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2FC4u; }
        if (ctx->pc != 0x2A2FC4u) { return; }
    }
    ctx->pc = 0x2A2FC4u;
label_2a2fc4:
    // 0x2a2fc4: 0x0  nop
    ctx->pc = 0x2a2fc4u;
    // NOP
label_2a2fc8:
    // 0x2a2fc8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a2fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a2fcc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2a2fccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2a2fd0: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x2a2fd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2a2fd4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A2FD4u;
    {
        const bool branch_taken_0x2a2fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2FD4u;
            // 0x2a2fd8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2fd4) {
            ctx->pc = 0x2A2FB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a2fb0;
        }
    }
    ctx->pc = 0x2A2FDCu;
    // 0x2a2fdc: 0x0  nop
    ctx->pc = 0x2a2fdcu;
    // NOP
label_2a2fe0:
    // 0x2a2fe0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a2fe0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a2fe4: 0x2a830008  slti        $v1, $s4, 0x8
    ctx->pc = 0x2a2fe4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a2fe8: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2A2FE8u;
    {
        const bool branch_taken_0x2a2fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2FE8u;
            // 0x2a2fec: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2fe8) {
            ctx->pc = 0x2A2F9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a2f9c;
        }
    }
    ctx->pc = 0x2A2FF0u;
    // 0x2a2ff0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a2ff0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2ff4: 0x2a0b82d  daddu       $s7, $s5, $zero
    ctx->pc = 0x2a2ff4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a2ff8:
    // 0x2a2ff8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a2ff8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2ffc: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x2a2ffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a3000:
    // 0x2a3000: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2a3000u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a3004: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A3004u;
    {
        const bool branch_taken_0x2a3004 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3004) {
            ctx->pc = 0x2A3048u;
            goto label_2a3048;
        }
    }
    ctx->pc = 0x2A300Cu;
    // 0x2a300c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a300cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3010: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2a3010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3014: 0x0  nop
    ctx->pc = 0x2a3014u;
    // NOP
label_2a3018:
    // 0x2a3018: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x2a3018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2a301c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A301Cu;
    {
        const bool branch_taken_0x2a301c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a301c) {
            ctx->pc = 0x2A3030u;
            goto label_2a3030;
        }
    }
    ctx->pc = 0x2A3024u;
    // 0x2a3024: 0xc074ea0  jal         func_1D3A80
    ctx->pc = 0x2A3024u;
    SET_GPR_U32(ctx, 31, 0x2A302Cu);
    ctx->pc = 0x2A3028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3024u;
            // 0x2a3028: 0x26440008  addiu       $a0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A302Cu; }
        if (ctx->pc != 0x2A302Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A302Cu; }
        if (ctx->pc != 0x2A302Cu) { return; }
    }
    ctx->pc = 0x2A302Cu;
label_2a302c:
    // 0x2a302c: 0x0  nop
    ctx->pc = 0x2a302cu;
    // NOP
label_2a3030:
    // 0x2a3030: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a3030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a3034: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2a3034u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2a3038: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x2a3038u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2a303c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A303Cu;
    {
        const bool branch_taken_0x2a303c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A303Cu;
            // 0x2a3040: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a303c) {
            ctx->pc = 0x2A3018u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a3018;
        }
    }
    ctx->pc = 0x2A3044u;
    // 0x2a3044: 0x0  nop
    ctx->pc = 0x2a3044u;
    // NOP
label_2a3048:
    // 0x2a3048: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a3048u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a304c: 0x2a830008  slti        $v1, $s4, 0x8
    ctx->pc = 0x2a304cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a3050: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2A3050u;
    {
        const bool branch_taken_0x2a3050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3050u;
            // 0x2a3054: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3050) {
            ctx->pc = 0x2A3000u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a3000;
        }
    }
    ctx->pc = 0x2A3058u;
    // 0x2a3058: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2a3058u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2a305c: 0x2ac30013  slti        $v1, $s6, 0x13
    ctx->pc = 0x2a305cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x2a3060: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2A3060u;
    {
        const bool branch_taken_0x2a3060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3060u;
            // 0x2a3064: 0x26f70020  addiu       $s7, $s7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3060) {
            ctx->pc = 0x2A2FF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a2ff8;
        }
    }
    ctx->pc = 0x2A3068u;
    // 0x2a3068: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a3068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a306c:
    // 0x2a306c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a306cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3070: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2a3070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3074: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2a3074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2a3078:
    // 0x2a3078: 0x8ce90000  lw          $t1, 0x0($a3)
    ctx->pc = 0x2a3078u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a307c: 0x11200010  beqz        $t1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A307Cu;
    {
        const bool branch_taken_0x2a307c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a307c) {
            ctx->pc = 0x2A30C0u;
            goto label_2a30c0;
        }
    }
    ctx->pc = 0x2A3084u;
    // 0x2a3084: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2a3084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a3088: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a3088u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a308c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2a308cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a3090:
    // 0x2a3090: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x2a3090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2a3094: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3094u;
    {
        const bool branch_taken_0x2a3094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3094) {
            ctx->pc = 0x2A30A8u;
            goto label_2a30a8;
        }
    }
    ctx->pc = 0x2A309Cu;
    // 0x2a309c: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x2a309cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2a30a0: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x2a30a0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x2a30a4: 0x0  nop
    ctx->pc = 0x2a30a4u;
    // NOP
label_2a30a8:
    // 0x2a30a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a30a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a30ac: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2a30acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2a30b0: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2a30b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2a30b4: 0x143182b  sltu        $v1, $t2, $v1
    ctx->pc = 0x2a30b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2a30b8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2A30B8u;
    {
        const bool branch_taken_0x2a30b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A30BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A30B8u;
            // 0x2a30bc: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a30b8) {
            ctx->pc = 0x2A3090u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a3090;
        }
    }
    ctx->pc = 0x2A30C0u;
label_2a30c0:
    // 0x2a30c0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2a30c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2a30c4: 0x29630008  slti        $v1, $t3, 0x8
    ctx->pc = 0x2a30c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a30c8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2a30c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2a30cc: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2A30CCu;
    {
        const bool branch_taken_0x2a30cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A30D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A30CCu;
            // 0x2a30d0: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a30cc) {
            ctx->pc = 0x2A3078u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a3078;
        }
    }
    ctx->pc = 0x2A30D4u;
    // 0x2a30d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2a30d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a30d8: 0x28a30013  slti        $v1, $a1, 0x13
    ctx->pc = 0x2a30d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x2a30dc: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2A30DCu;
    {
        const bool branch_taken_0x2a30dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A30E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A30DCu;
            // 0x2a30e0: 0x26b50020  addiu       $s5, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a30dc) {
            ctx->pc = 0x2A306Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a306c;
        }
    }
    ctx->pc = 0x2A30E4u;
    // 0x2a30e4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2a30e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a30e8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2a30e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a30ec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2a30ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a30f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a30f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a30f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a30f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a30f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a30f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a30fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a30fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a3100: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a3100u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3104: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a3104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3108: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a3108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a310c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A310Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A310Cu;
            // 0x2a3110: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3114u;
    // 0x2a3114: 0x0  nop
    ctx->pc = 0x2a3114u;
    // NOP
    // 0x2a3118: 0x0  nop
    ctx->pc = 0x2a3118u;
    // NOP
    // 0x2a311c: 0x0  nop
    ctx->pc = 0x2a311cu;
    // NOP
}
