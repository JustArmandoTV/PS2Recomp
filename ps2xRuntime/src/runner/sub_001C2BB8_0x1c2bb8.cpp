#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C2BB8
// Address: 0x1c2bb8 - 0x1c2ca8
void sub_001C2BB8_0x1c2bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2BB8_0x1c2bb8");
#endif

    switch (ctx->pc) {
        case 0x1c2bb8u: goto label_1c2bb8;
        case 0x1c2bbcu: goto label_1c2bbc;
        case 0x1c2bc0u: goto label_1c2bc0;
        case 0x1c2bc4u: goto label_1c2bc4;
        case 0x1c2bc8u: goto label_1c2bc8;
        case 0x1c2bccu: goto label_1c2bcc;
        case 0x1c2bd0u: goto label_1c2bd0;
        case 0x1c2bd4u: goto label_1c2bd4;
        case 0x1c2bd8u: goto label_1c2bd8;
        case 0x1c2bdcu: goto label_1c2bdc;
        case 0x1c2be0u: goto label_1c2be0;
        case 0x1c2be4u: goto label_1c2be4;
        case 0x1c2be8u: goto label_1c2be8;
        case 0x1c2becu: goto label_1c2bec;
        case 0x1c2bf0u: goto label_1c2bf0;
        case 0x1c2bf4u: goto label_1c2bf4;
        case 0x1c2bf8u: goto label_1c2bf8;
        case 0x1c2bfcu: goto label_1c2bfc;
        case 0x1c2c00u: goto label_1c2c00;
        case 0x1c2c04u: goto label_1c2c04;
        case 0x1c2c08u: goto label_1c2c08;
        case 0x1c2c0cu: goto label_1c2c0c;
        case 0x1c2c10u: goto label_1c2c10;
        case 0x1c2c14u: goto label_1c2c14;
        case 0x1c2c18u: goto label_1c2c18;
        case 0x1c2c1cu: goto label_1c2c1c;
        case 0x1c2c20u: goto label_1c2c20;
        case 0x1c2c24u: goto label_1c2c24;
        case 0x1c2c28u: goto label_1c2c28;
        case 0x1c2c2cu: goto label_1c2c2c;
        case 0x1c2c30u: goto label_1c2c30;
        case 0x1c2c34u: goto label_1c2c34;
        case 0x1c2c38u: goto label_1c2c38;
        case 0x1c2c3cu: goto label_1c2c3c;
        case 0x1c2c40u: goto label_1c2c40;
        case 0x1c2c44u: goto label_1c2c44;
        case 0x1c2c48u: goto label_1c2c48;
        case 0x1c2c4cu: goto label_1c2c4c;
        case 0x1c2c50u: goto label_1c2c50;
        case 0x1c2c54u: goto label_1c2c54;
        case 0x1c2c58u: goto label_1c2c58;
        case 0x1c2c5cu: goto label_1c2c5c;
        case 0x1c2c60u: goto label_1c2c60;
        case 0x1c2c64u: goto label_1c2c64;
        case 0x1c2c68u: goto label_1c2c68;
        case 0x1c2c6cu: goto label_1c2c6c;
        case 0x1c2c70u: goto label_1c2c70;
        case 0x1c2c74u: goto label_1c2c74;
        case 0x1c2c78u: goto label_1c2c78;
        case 0x1c2c7cu: goto label_1c2c7c;
        case 0x1c2c80u: goto label_1c2c80;
        case 0x1c2c84u: goto label_1c2c84;
        case 0x1c2c88u: goto label_1c2c88;
        case 0x1c2c8cu: goto label_1c2c8c;
        case 0x1c2c90u: goto label_1c2c90;
        case 0x1c2c94u: goto label_1c2c94;
        case 0x1c2c98u: goto label_1c2c98;
        case 0x1c2c9cu: goto label_1c2c9c;
        case 0x1c2ca0u: goto label_1c2ca0;
        case 0x1c2ca4u: goto label_1c2ca4;
        default: break;
    }

    ctx->pc = 0x1c2bb8u;

label_1c2bb8:
    // 0x1c2bb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c2bbc:
    // 0x1c2bbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c2bc0:
    // 0x1c2bc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c2bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1c2bc4:
    // 0x1c2bc4: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x1c2bc4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
label_1c2bc8:
    // 0x1c2bc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c2bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c2bcc:
    // 0x1c2bcc: 0x2650a4d8  addiu       $s0, $s2, -0x5B28
    ctx->pc = 0x1c2bccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943960));
label_1c2bd0:
    // 0x1c2bd0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c2bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1c2bd4:
    // 0x1c2bd4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c2bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c2bd8:
    // 0x1c2bd8: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
label_1c2bdc:
    if (ctx->pc == 0x1C2BDCu) {
        ctx->pc = 0x1C2BDCu;
            // 0x1c2bdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1C2BE0u;
        goto label_1c2be0;
    }
    ctx->pc = 0x1C2BD8u;
    {
        const bool branch_taken_0x1c2bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2BD8u;
            // 0x1c2bdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2bd8) {
            ctx->pc = 0x1C2C90u;
            goto label_1c2c90;
        }
    }
    ctx->pc = 0x1C2BE0u;
label_1c2be0:
    // 0x1c2be0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c2be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c2be4:
    // 0x1c2be4: 0x5462002b  bnel        $v1, $v0, . + 4 + (0x2B << 2)
label_1c2be8:
    if (ctx->pc == 0x1C2BE8u) {
        ctx->pc = 0x1C2BE8u;
            // 0x1c2be8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C2BECu;
        goto label_1c2bec;
    }
    ctx->pc = 0x1C2BE4u;
    {
        const bool branch_taken_0x1c2be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c2be4) {
            ctx->pc = 0x1C2BE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2BE4u;
            // 0x1c2be8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C2C94u;
            goto label_1c2c94;
        }
    }
    ctx->pc = 0x1C2BECu;
label_1c2bec:
    // 0x1c2bec: 0xc072202  jal         func_1C8808
label_1c2bf0:
    if (ctx->pc == 0x1C2BF0u) {
        ctx->pc = 0x1C2BF0u;
            // 0x1c2bf0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2BF4u;
        goto label_1c2bf4;
    }
    ctx->pc = 0x1C2BECu;
    SET_GPR_U32(ctx, 31, 0x1C2BF4u);
    ctx->pc = 0x1C2BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2BECu;
            // 0x1c2bf0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8808u;
    if (runtime->hasFunction(0x1C8808u)) {
        auto targetFn = runtime->lookupFunction(0x1C8808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2BF4u; }
        if (ctx->pc != 0x1C2BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8808_0x1c8808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2BF4u; }
        if (ctx->pc != 0x1C2BF4u) { return; }
    }
    ctx->pc = 0x1C2BF4u;
label_1c2bf4:
    // 0x1c2bf4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c2bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c2bf8:
    // 0x1c2bf8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c2bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c2bfc:
    // 0x1c2bfc: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
label_1c2c00:
    if (ctx->pc == 0x1C2C00u) {
        ctx->pc = 0x1C2C00u;
            // 0x1c2c00: 0x2450108c  addiu       $s0, $v0, 0x108C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
        ctx->pc = 0x1C2C04u;
        goto label_1c2c04;
    }
    ctx->pc = 0x1C2BFCu;
    {
        const bool branch_taken_0x1c2bfc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C2C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2BFCu;
            // 0x1c2c00: 0x2450108c  addiu       $s0, $v0, 0x108C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2bfc) {
            ctx->pc = 0x1C2C28u;
            goto label_1c2c28;
        }
    }
    ctx->pc = 0x1C2C04u;
label_1c2c04:
    // 0x1c2c04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c2c08:
    // 0x1c2c08: 0xc070322  jal         func_1C0C88
label_1c2c0c:
    if (ctx->pc == 0x1C2C0Cu) {
        ctx->pc = 0x1C2C0Cu;
            // 0x1c2c0c: 0x2610003c  addiu       $s0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->pc = 0x1C2C10u;
        goto label_1c2c10;
    }
    ctx->pc = 0x1C2C08u;
    SET_GPR_U32(ctx, 31, 0x1C2C10u);
    ctx->pc = 0x1C2C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2C08u;
            // 0x1c2c0c: 0x2610003c  addiu       $s0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0C88u;
    if (runtime->hasFunction(0x1C0C88u)) {
        auto targetFn = runtime->lookupFunction(0x1C0C88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C10u; }
        if (ctx->pc != 0x1C2C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0C88_0x1c0c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C10u; }
        if (ctx->pc != 0x1C2C10u) { return; }
    }
    ctx->pc = 0x1C2C10u;
label_1c2c10:
    // 0x1c2c10: 0x8e43a4d8  lw          $v1, -0x5B28($s2)
    ctx->pc = 0x1c2c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943960)));
label_1c2c14:
    // 0x1c2c14: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c2c14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c2c18:
    // 0x1c2c18: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1c2c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1c2c1c:
    // 0x1c2c1c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1c2c1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c2c20:
    // 0x1c2c20: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1c2c24:
    if (ctx->pc == 0x1C2C24u) {
        ctx->pc = 0x1C2C24u;
            // 0x1c2c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C28u;
        goto label_1c2c28;
    }
    ctx->pc = 0x1C2C20u;
    {
        const bool branch_taken_0x1c2c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2C20u;
            // 0x1c2c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c20) {
            ctx->pc = 0x1C2C08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c2c08;
        }
    }
    ctx->pc = 0x1C2C28u;
label_1c2c28:
    // 0x1c2c28: 0x8e42a4d8  lw          $v0, -0x5B28($s2)
    ctx->pc = 0x1c2c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943960)));
label_1c2c2c:
    // 0x1c2c2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c2c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2c30:
    // 0x1c2c30: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c2c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1c2c34:
    // 0x1c2c34: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
label_1c2c38:
    if (ctx->pc == 0x1C2C38u) {
        ctx->pc = 0x1C2C38u;
            // 0x1c2c38: 0x8c500028  lw          $s0, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->pc = 0x1C2C3Cu;
        goto label_1c2c3c;
    }
    ctx->pc = 0x1C2C34u;
    {
        const bool branch_taken_0x1c2c34 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C2C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2C34u;
            // 0x1c2c38: 0x8c500028  lw          $s0, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c34) {
            ctx->pc = 0x1C2C60u;
            goto label_1c2c60;
        }
    }
    ctx->pc = 0x1C2C3Cu;
label_1c2c3c:
    // 0x1c2c3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c2c40:
    // 0x1c2c40: 0xc07093e  jal         func_1C24F8
label_1c2c44:
    if (ctx->pc == 0x1C2C44u) {
        ctx->pc = 0x1C2C44u;
            // 0x1c2c44: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->pc = 0x1C2C48u;
        goto label_1c2c48;
    }
    ctx->pc = 0x1C2C40u;
    SET_GPR_U32(ctx, 31, 0x1C2C48u);
    ctx->pc = 0x1C2C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2C40u;
            // 0x1c2c44: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C24F8u;
    if (runtime->hasFunction(0x1C24F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C24F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C48u; }
        if (ctx->pc != 0x1C2C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C24F8_0x1c24f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C48u; }
        if (ctx->pc != 0x1C2C48u) { return; }
    }
    ctx->pc = 0x1C2C48u;
label_1c2c48:
    // 0x1c2c48: 0x8e43a4d8  lw          $v1, -0x5B28($s2)
    ctx->pc = 0x1c2c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943960)));
label_1c2c4c:
    // 0x1c2c4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c2c4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c2c50:
    // 0x1c2c50: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1c2c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c2c54:
    // 0x1c2c54: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1c2c54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c2c58:
    // 0x1c2c58: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1c2c5c:
    if (ctx->pc == 0x1C2C5Cu) {
        ctx->pc = 0x1C2C5Cu;
            // 0x1c2c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C60u;
        goto label_1c2c60;
    }
    ctx->pc = 0x1C2C58u;
    {
        const bool branch_taken_0x1c2c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2C58u;
            // 0x1c2c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c58) {
            ctx->pc = 0x1C2C40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c2c40;
        }
    }
    ctx->pc = 0x1C2C60u;
label_1c2c60:
    // 0x1c2c60: 0x2650a4d8  addiu       $s0, $s2, -0x5B28
    ctx->pc = 0x1c2c60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943960));
label_1c2c64:
    // 0x1c2c64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c2c68:
    // 0x1c2c68: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x1c2c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1c2c6c:
    // 0x1c2c6c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1c2c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1c2c70:
    // 0x1c2c70: 0x80f809  jalr        $a0
label_1c2c74:
    if (ctx->pc == 0x1C2C74u) {
        ctx->pc = 0x1C2C78u;
        goto label_1c2c78;
    }
    ctx->pc = 0x1C2C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        SET_GPR_U32(ctx, 31, 0x1C2C78u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C2C78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C78u; }
            if (ctx->pc != 0x1C2C78u) { return; }
        }
        }
    }
    ctx->pc = 0x1C2C78u;
label_1c2c78:
    // 0x1c2c78: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c2c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c2c7c:
    // 0x1c2c7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2c80:
    // 0x1c2c80: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1c2c80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1c2c84:
    // 0x1c2c84: 0xc04a576  jal         func_1295D8
label_1c2c88:
    if (ctx->pc == 0x1C2C88u) {
        ctx->pc = 0x1C2C88u;
            // 0x1c2c88: 0x8c860010  lw          $a2, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->pc = 0x1C2C8Cu;
        goto label_1c2c8c;
    }
    ctx->pc = 0x1C2C84u;
    SET_GPR_U32(ctx, 31, 0x1C2C8Cu);
    ctx->pc = 0x1C2C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2C84u;
            // 0x1c2c88: 0x8c860010  lw          $a2, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C8Cu; }
        if (ctx->pc != 0x1C2C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C8Cu; }
        if (ctx->pc != 0x1C2C8Cu) { return; }
    }
    ctx->pc = 0x1C2C8Cu;
label_1c2c8c:
    // 0x1c2c8c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c2c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1c2c90:
    // 0x1c2c90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c2c90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2c94:
    // 0x1c2c94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c2c94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c2c98:
    // 0x1c2c98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c2c98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c2c9c:
    // 0x1c2c9c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c2c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c2ca0:
    // 0x1c2ca0: 0x3e00008  jr          $ra
label_1c2ca4:
    if (ctx->pc == 0x1C2CA4u) {
        ctx->pc = 0x1C2CA4u;
            // 0x1c2ca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C2CA8u;
        goto label_fallthrough_0x1c2ca0;
    }
    ctx->pc = 0x1C2CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2CA0u;
            // 0x1c2ca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1c2ca0:
    ctx->pc = 0x1C2CA8u;
}
