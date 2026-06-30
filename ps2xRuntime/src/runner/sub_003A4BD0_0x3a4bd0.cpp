#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A4BD0
// Address: 0x3a4bd0 - 0x3a4df0
void sub_003A4BD0_0x3a4bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4BD0_0x3a4bd0");
#endif

    switch (ctx->pc) {
        case 0x3a4bd0u: goto label_3a4bd0;
        case 0x3a4bd4u: goto label_3a4bd4;
        case 0x3a4bd8u: goto label_3a4bd8;
        case 0x3a4bdcu: goto label_3a4bdc;
        case 0x3a4be0u: goto label_3a4be0;
        case 0x3a4be4u: goto label_3a4be4;
        case 0x3a4be8u: goto label_3a4be8;
        case 0x3a4becu: goto label_3a4bec;
        case 0x3a4bf0u: goto label_3a4bf0;
        case 0x3a4bf4u: goto label_3a4bf4;
        case 0x3a4bf8u: goto label_3a4bf8;
        case 0x3a4bfcu: goto label_3a4bfc;
        case 0x3a4c00u: goto label_3a4c00;
        case 0x3a4c04u: goto label_3a4c04;
        case 0x3a4c08u: goto label_3a4c08;
        case 0x3a4c0cu: goto label_3a4c0c;
        case 0x3a4c10u: goto label_3a4c10;
        case 0x3a4c14u: goto label_3a4c14;
        case 0x3a4c18u: goto label_3a4c18;
        case 0x3a4c1cu: goto label_3a4c1c;
        case 0x3a4c20u: goto label_3a4c20;
        case 0x3a4c24u: goto label_3a4c24;
        case 0x3a4c28u: goto label_3a4c28;
        case 0x3a4c2cu: goto label_3a4c2c;
        case 0x3a4c30u: goto label_3a4c30;
        case 0x3a4c34u: goto label_3a4c34;
        case 0x3a4c38u: goto label_3a4c38;
        case 0x3a4c3cu: goto label_3a4c3c;
        case 0x3a4c40u: goto label_3a4c40;
        case 0x3a4c44u: goto label_3a4c44;
        case 0x3a4c48u: goto label_3a4c48;
        case 0x3a4c4cu: goto label_3a4c4c;
        case 0x3a4c50u: goto label_3a4c50;
        case 0x3a4c54u: goto label_3a4c54;
        case 0x3a4c58u: goto label_3a4c58;
        case 0x3a4c5cu: goto label_3a4c5c;
        case 0x3a4c60u: goto label_3a4c60;
        case 0x3a4c64u: goto label_3a4c64;
        case 0x3a4c68u: goto label_3a4c68;
        case 0x3a4c6cu: goto label_3a4c6c;
        case 0x3a4c70u: goto label_3a4c70;
        case 0x3a4c74u: goto label_3a4c74;
        case 0x3a4c78u: goto label_3a4c78;
        case 0x3a4c7cu: goto label_3a4c7c;
        case 0x3a4c80u: goto label_3a4c80;
        case 0x3a4c84u: goto label_3a4c84;
        case 0x3a4c88u: goto label_3a4c88;
        case 0x3a4c8cu: goto label_3a4c8c;
        case 0x3a4c90u: goto label_3a4c90;
        case 0x3a4c94u: goto label_3a4c94;
        case 0x3a4c98u: goto label_3a4c98;
        case 0x3a4c9cu: goto label_3a4c9c;
        case 0x3a4ca0u: goto label_3a4ca0;
        case 0x3a4ca4u: goto label_3a4ca4;
        case 0x3a4ca8u: goto label_3a4ca8;
        case 0x3a4cacu: goto label_3a4cac;
        case 0x3a4cb0u: goto label_3a4cb0;
        case 0x3a4cb4u: goto label_3a4cb4;
        case 0x3a4cb8u: goto label_3a4cb8;
        case 0x3a4cbcu: goto label_3a4cbc;
        case 0x3a4cc0u: goto label_3a4cc0;
        case 0x3a4cc4u: goto label_3a4cc4;
        case 0x3a4cc8u: goto label_3a4cc8;
        case 0x3a4cccu: goto label_3a4ccc;
        case 0x3a4cd0u: goto label_3a4cd0;
        case 0x3a4cd4u: goto label_3a4cd4;
        case 0x3a4cd8u: goto label_3a4cd8;
        case 0x3a4cdcu: goto label_3a4cdc;
        case 0x3a4ce0u: goto label_3a4ce0;
        case 0x3a4ce4u: goto label_3a4ce4;
        case 0x3a4ce8u: goto label_3a4ce8;
        case 0x3a4cecu: goto label_3a4cec;
        case 0x3a4cf0u: goto label_3a4cf0;
        case 0x3a4cf4u: goto label_3a4cf4;
        case 0x3a4cf8u: goto label_3a4cf8;
        case 0x3a4cfcu: goto label_3a4cfc;
        case 0x3a4d00u: goto label_3a4d00;
        case 0x3a4d04u: goto label_3a4d04;
        case 0x3a4d08u: goto label_3a4d08;
        case 0x3a4d0cu: goto label_3a4d0c;
        case 0x3a4d10u: goto label_3a4d10;
        case 0x3a4d14u: goto label_3a4d14;
        case 0x3a4d18u: goto label_3a4d18;
        case 0x3a4d1cu: goto label_3a4d1c;
        case 0x3a4d20u: goto label_3a4d20;
        case 0x3a4d24u: goto label_3a4d24;
        case 0x3a4d28u: goto label_3a4d28;
        case 0x3a4d2cu: goto label_3a4d2c;
        case 0x3a4d30u: goto label_3a4d30;
        case 0x3a4d34u: goto label_3a4d34;
        case 0x3a4d38u: goto label_3a4d38;
        case 0x3a4d3cu: goto label_3a4d3c;
        case 0x3a4d40u: goto label_3a4d40;
        case 0x3a4d44u: goto label_3a4d44;
        case 0x3a4d48u: goto label_3a4d48;
        case 0x3a4d4cu: goto label_3a4d4c;
        case 0x3a4d50u: goto label_3a4d50;
        case 0x3a4d54u: goto label_3a4d54;
        case 0x3a4d58u: goto label_3a4d58;
        case 0x3a4d5cu: goto label_3a4d5c;
        case 0x3a4d60u: goto label_3a4d60;
        case 0x3a4d64u: goto label_3a4d64;
        case 0x3a4d68u: goto label_3a4d68;
        case 0x3a4d6cu: goto label_3a4d6c;
        case 0x3a4d70u: goto label_3a4d70;
        case 0x3a4d74u: goto label_3a4d74;
        case 0x3a4d78u: goto label_3a4d78;
        case 0x3a4d7cu: goto label_3a4d7c;
        case 0x3a4d80u: goto label_3a4d80;
        case 0x3a4d84u: goto label_3a4d84;
        case 0x3a4d88u: goto label_3a4d88;
        case 0x3a4d8cu: goto label_3a4d8c;
        case 0x3a4d90u: goto label_3a4d90;
        case 0x3a4d94u: goto label_3a4d94;
        case 0x3a4d98u: goto label_3a4d98;
        case 0x3a4d9cu: goto label_3a4d9c;
        case 0x3a4da0u: goto label_3a4da0;
        case 0x3a4da4u: goto label_3a4da4;
        case 0x3a4da8u: goto label_3a4da8;
        case 0x3a4dacu: goto label_3a4dac;
        case 0x3a4db0u: goto label_3a4db0;
        case 0x3a4db4u: goto label_3a4db4;
        case 0x3a4db8u: goto label_3a4db8;
        case 0x3a4dbcu: goto label_3a4dbc;
        case 0x3a4dc0u: goto label_3a4dc0;
        case 0x3a4dc4u: goto label_3a4dc4;
        case 0x3a4dc8u: goto label_3a4dc8;
        case 0x3a4dccu: goto label_3a4dcc;
        case 0x3a4dd0u: goto label_3a4dd0;
        case 0x3a4dd4u: goto label_3a4dd4;
        case 0x3a4dd8u: goto label_3a4dd8;
        case 0x3a4ddcu: goto label_3a4ddc;
        case 0x3a4de0u: goto label_3a4de0;
        case 0x3a4de4u: goto label_3a4de4;
        case 0x3a4de8u: goto label_3a4de8;
        case 0x3a4decu: goto label_3a4dec;
        default: break;
    }

    ctx->pc = 0x3a4bd0u;

label_3a4bd0:
    // 0x3a4bd0: 0x3e00008  jr          $ra
label_3a4bd4:
    if (ctx->pc == 0x3A4BD4u) {
        ctx->pc = 0x3A4BD4u;
            // 0x3a4bd4: 0x90820116  lbu         $v0, 0x116($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 278)));
        ctx->pc = 0x3A4BD8u;
        goto label_3a4bd8;
    }
    ctx->pc = 0x3A4BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4BD0u;
            // 0x3a4bd4: 0x90820116  lbu         $v0, 0x116($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 278)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A4BD8u;
label_3a4bd8:
    // 0x3a4bd8: 0x0  nop
    ctx->pc = 0x3a4bd8u;
    // NOP
label_3a4bdc:
    // 0x3a4bdc: 0x0  nop
    ctx->pc = 0x3a4bdcu;
    // NOP
label_3a4be0:
    // 0x3a4be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a4be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a4be4:
    // 0x3a4be4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a4be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a4be8:
    // 0x3a4be8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a4be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3a4bec:
    // 0x3a4bec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a4becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a4bf0:
    // 0x3a4bf0: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x3a4bf0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3a4bf4:
    // 0x3a4bf4: 0x10c30079  beq         $a2, $v1, . + 4 + (0x79 << 2)
label_3a4bf8:
    if (ctx->pc == 0x3A4BF8u) {
        ctx->pc = 0x3A4BF8u;
            // 0x3a4bf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A4BFCu;
        goto label_3a4bfc;
    }
    ctx->pc = 0x3A4BF4u;
    {
        const bool branch_taken_0x3a4bf4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A4BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4BF4u;
            // 0x3a4bf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4bf4) {
            ctx->pc = 0x3A4DDCu;
            goto label_3a4ddc;
        }
    }
    ctx->pc = 0x3A4BFCu;
label_3a4bfc:
    // 0x3a4bfc: 0x50c00074  beql        $a2, $zero, . + 4 + (0x74 << 2)
label_3a4c00:
    if (ctx->pc == 0x3A4C00u) {
        ctx->pc = 0x3A4C00u;
            // 0x3a4c00: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3A4C04u;
        goto label_3a4c04;
    }
    ctx->pc = 0x3A4BFCu;
    {
        const bool branch_taken_0x3a4bfc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4bfc) {
            ctx->pc = 0x3A4C00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4BFCu;
            // 0x3a4c00: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A4DD0u;
            goto label_3a4dd0;
        }
    }
    ctx->pc = 0x3A4C04u;
label_3a4c04:
    // 0x3a4c04: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3a4c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a4c08:
    // 0x3a4c08: 0x10c5002e  beq         $a2, $a1, . + 4 + (0x2E << 2)
label_3a4c0c:
    if (ctx->pc == 0x3A4C0Cu) {
        ctx->pc = 0x3A4C10u;
        goto label_3a4c10;
    }
    ctx->pc = 0x3A4C08u;
    {
        const bool branch_taken_0x3a4c08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x3a4c08) {
            ctx->pc = 0x3A4CC4u;
            goto label_3a4cc4;
        }
    }
    ctx->pc = 0x3A4C10u;
label_3a4c10:
    // 0x3a4c10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a4c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a4c14:
    // 0x3a4c14: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
label_3a4c18:
    if (ctx->pc == 0x3A4C18u) {
        ctx->pc = 0x3A4C1Cu;
        goto label_3a4c1c;
    }
    ctx->pc = 0x3A4C14u;
    {
        const bool branch_taken_0x3a4c14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a4c14) {
            ctx->pc = 0x3A4C24u;
            goto label_3a4c24;
        }
    }
    ctx->pc = 0x3A4C1Cu;
label_3a4c1c:
    // 0x3a4c1c: 0x10000070  b           . + 4 + (0x70 << 2)
label_3a4c20:
    if (ctx->pc == 0x3A4C20u) {
        ctx->pc = 0x3A4C20u;
            // 0x3a4c20: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3A4C24u;
        goto label_3a4c24;
    }
    ctx->pc = 0x3A4C1Cu;
    {
        const bool branch_taken_0x3a4c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4C1Cu;
            // 0x3a4c20: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4c1c) {
            ctx->pc = 0x3A4DE0u;
            goto label_3a4de0;
        }
    }
    ctx->pc = 0x3A4C24u;
label_3a4c24:
    // 0x3a4c24: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3a4c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3a4c28:
    // 0x3a4c28: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3a4c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3a4c2c:
    // 0x3a4c2c: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3a4c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3a4c30:
    // 0x3a4c30: 0x28630005  slti        $v1, $v1, 0x5
    ctx->pc = 0x3a4c30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_3a4c34:
    // 0x3a4c34: 0x14600069  bnez        $v1, . + 4 + (0x69 << 2)
label_3a4c38:
    if (ctx->pc == 0x3A4C38u) {
        ctx->pc = 0x3A4C3Cu;
        goto label_3a4c3c;
    }
    ctx->pc = 0x3A4C34u;
    {
        const bool branch_taken_0x3a4c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4c34) {
            ctx->pc = 0x3A4DDCu;
            goto label_3a4ddc;
        }
    }
    ctx->pc = 0x3A4C3Cu;
label_3a4c3c:
    // 0x3a4c3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a4c3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a4c40:
    // 0x3a4c40: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3a4c40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3a4c44:
    // 0x3a4c44: 0x320f809  jalr        $t9
label_3a4c48:
    if (ctx->pc == 0x3A4C48u) {
        ctx->pc = 0x3A4C4Cu;
        goto label_3a4c4c;
    }
    ctx->pc = 0x3A4C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A4C4Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A4C4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A4C4Cu; }
            if (ctx->pc != 0x3A4C4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3A4C4Cu;
label_3a4c4c:
    // 0x3a4c4c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3a4c4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a4c50:
    // 0x3a4c50: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x3a4c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_3a4c54:
    // 0x3a4c54: 0xa04000e4  sb          $zero, 0xE4($v0)
    ctx->pc = 0x3a4c54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 228), (uint8_t)GPR_U32(ctx, 0));
label_3a4c58:
    // 0x3a4c58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a4c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3a4c5c:
    // 0x3a4c5c: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x3a4c5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3a4c60:
    // 0x3a4c60: 0x0  nop
    ctx->pc = 0x3a4c60u;
    // NOP
label_3a4c64:
    // 0x3a4c64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3a4c68:
    if (ctx->pc == 0x3A4C68u) {
        ctx->pc = 0x3A4C6Cu;
        goto label_3a4c6c;
    }
    ctx->pc = 0x3A4C64u;
    {
        const bool branch_taken_0x3a4c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4c64) {
            ctx->pc = 0x3A4C50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a4c50;
        }
    }
    ctx->pc = 0x3A4C6Cu;
label_3a4c6c:
    // 0x3a4c6c: 0xc0eb00c  jal         func_3AC030
label_3a4c70:
    if (ctx->pc == 0x3A4C70u) {
        ctx->pc = 0x3A4C70u;
            // 0x3a4c70: 0x8e0400ec  lw          $a0, 0xEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
        ctx->pc = 0x3A4C74u;
        goto label_3a4c74;
    }
    ctx->pc = 0x3A4C6Cu;
    SET_GPR_U32(ctx, 31, 0x3A4C74u);
    ctx->pc = 0x3A4C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4C6Cu;
            // 0x3a4c70: 0x8e0400ec  lw          $a0, 0xEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AC030u;
    if (runtime->hasFunction(0x3AC030u)) {
        auto targetFn = runtime->lookupFunction(0x3AC030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4C74u; }
        if (ctx->pc != 0x3A4C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AC030_0x3ac030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4C74u; }
        if (ctx->pc != 0x3A4C74u) { return; }
    }
    ctx->pc = 0x3A4C74u;
label_3a4c74:
    // 0x3a4c74: 0xc0ec39c  jal         func_3B0E70
label_3a4c78:
    if (ctx->pc == 0x3A4C78u) {
        ctx->pc = 0x3A4C78u;
            // 0x3a4c78: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->pc = 0x3A4C7Cu;
        goto label_3a4c7c;
    }
    ctx->pc = 0x3A4C74u;
    SET_GPR_U32(ctx, 31, 0x3A4C7Cu);
    ctx->pc = 0x3A4C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4C74u;
            // 0x3a4c78: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B0E70u;
    if (runtime->hasFunction(0x3B0E70u)) {
        auto targetFn = runtime->lookupFunction(0x3B0E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4C7Cu; }
        if (ctx->pc != 0x3A4C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B0E70_0x3b0e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4C7Cu; }
        if (ctx->pc != 0x3A4C7Cu) { return; }
    }
    ctx->pc = 0x3A4C7Cu;
label_3a4c7c:
    // 0x3a4c7c: 0xc0e9b44  jal         func_3A6D10
label_3a4c80:
    if (ctx->pc == 0x3A4C80u) {
        ctx->pc = 0x3A4C80u;
            // 0x3a4c80: 0x8e0400f4  lw          $a0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->pc = 0x3A4C84u;
        goto label_3a4c84;
    }
    ctx->pc = 0x3A4C7Cu;
    SET_GPR_U32(ctx, 31, 0x3A4C84u);
    ctx->pc = 0x3A4C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4C7Cu;
            // 0x3a4c80: 0x8e0400f4  lw          $a0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A6D10u;
    if (runtime->hasFunction(0x3A6D10u)) {
        auto targetFn = runtime->lookupFunction(0x3A6D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4C84u; }
        if (ctx->pc != 0x3A4C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A6D10_0x3a6d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4C84u; }
        if (ctx->pc != 0x3A4C84u) { return; }
    }
    ctx->pc = 0x3A4C84u;
label_3a4c84:
    // 0x3a4c84: 0xc0ecf3c  jal         func_3B3CF0
label_3a4c88:
    if (ctx->pc == 0x3A4C88u) {
        ctx->pc = 0x3A4C88u;
            // 0x3a4c88: 0x8e0400fc  lw          $a0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->pc = 0x3A4C8Cu;
        goto label_3a4c8c;
    }
    ctx->pc = 0x3A4C84u;
    SET_GPR_U32(ctx, 31, 0x3A4C8Cu);
    ctx->pc = 0x3A4C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4C84u;
            // 0x3a4c88: 0x8e0400fc  lw          $a0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B3CF0u;
    if (runtime->hasFunction(0x3B3CF0u)) {
        auto targetFn = runtime->lookupFunction(0x3B3CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4C8Cu; }
        if (ctx->pc != 0x3A4C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B3CF0_0x3b3cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4C8Cu; }
        if (ctx->pc != 0x3A4C8Cu) { return; }
    }
    ctx->pc = 0x3A4C8Cu;
label_3a4c8c:
    // 0x3a4c8c: 0xc13ac20  jal         func_4EB080
label_3a4c90:
    if (ctx->pc == 0x3A4C90u) {
        ctx->pc = 0x3A4C90u;
            // 0x3a4c90: 0x8e040108  lw          $a0, 0x108($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->pc = 0x3A4C94u;
        goto label_3a4c94;
    }
    ctx->pc = 0x3A4C8Cu;
    SET_GPR_U32(ctx, 31, 0x3A4C94u);
    ctx->pc = 0x3A4C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4C8Cu;
            // 0x3a4c90: 0x8e040108  lw          $a0, 0x108($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EB080u;
    if (runtime->hasFunction(0x4EB080u)) {
        auto targetFn = runtime->lookupFunction(0x4EB080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4C94u; }
        if (ctx->pc != 0x3A4C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EB080_0x4eb080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4C94u; }
        if (ctx->pc != 0x3A4C94u) { return; }
    }
    ctx->pc = 0x3A4C94u;
label_3a4c94:
    // 0x3a4c94: 0xc1319b4  jal         func_4C66D0
label_3a4c98:
    if (ctx->pc == 0x3A4C98u) {
        ctx->pc = 0x3A4C98u;
            // 0x3a4c98: 0x8e040104  lw          $a0, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->pc = 0x3A4C9Cu;
        goto label_3a4c9c;
    }
    ctx->pc = 0x3A4C94u;
    SET_GPR_U32(ctx, 31, 0x3A4C9Cu);
    ctx->pc = 0x3A4C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4C94u;
            // 0x3a4c98: 0x8e040104  lw          $a0, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C66D0u;
    if (runtime->hasFunction(0x4C66D0u)) {
        auto targetFn = runtime->lookupFunction(0x4C66D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4C9Cu; }
        if (ctx->pc != 0x3A4C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C66D0_0x4c66d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4C9Cu; }
        if (ctx->pc != 0x3A4C9Cu) { return; }
    }
    ctx->pc = 0x3A4C9Cu;
label_3a4c9c:
    // 0x3a4c9c: 0xc11ec64  jal         func_47B190
label_3a4ca0:
    if (ctx->pc == 0x3A4CA0u) {
        ctx->pc = 0x3A4CA4u;
        goto label_3a4ca4;
    }
    ctx->pc = 0x3A4C9Cu;
    SET_GPR_U32(ctx, 31, 0x3A4CA4u);
    ctx->pc = 0x47B190u;
    if (runtime->hasFunction(0x47B190u)) {
        auto targetFn = runtime->lookupFunction(0x47B190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4CA4u; }
        if (ctx->pc != 0x3A4CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047B190_0x47b190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4CA4u; }
        if (ctx->pc != 0x3A4CA4u) { return; }
    }
    ctx->pc = 0x3A4CA4u;
label_3a4ca4:
    // 0x3a4ca4: 0xc0f3318  jal         func_3CCC60
label_3a4ca8:
    if (ctx->pc == 0x3A4CA8u) {
        ctx->pc = 0x3A4CACu;
        goto label_3a4cac;
    }
    ctx->pc = 0x3A4CA4u;
    SET_GPR_U32(ctx, 31, 0x3A4CACu);
    ctx->pc = 0x3CCC60u;
    if (runtime->hasFunction(0x3CCC60u)) {
        auto targetFn = runtime->lookupFunction(0x3CCC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4CACu; }
        if (ctx->pc != 0x3A4CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CCC60_0x3ccc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4CACu; }
        if (ctx->pc != 0x3A4CACu) { return; }
    }
    ctx->pc = 0x3A4CACu;
label_3a4cac:
    // 0x3a4cac: 0xc0f3ed0  jal         func_3CFB40
label_3a4cb0:
    if (ctx->pc == 0x3A4CB0u) {
        ctx->pc = 0x3A4CB4u;
        goto label_3a4cb4;
    }
    ctx->pc = 0x3A4CACu;
    SET_GPR_U32(ctx, 31, 0x3A4CB4u);
    ctx->pc = 0x3CFB40u;
    if (runtime->hasFunction(0x3CFB40u)) {
        auto targetFn = runtime->lookupFunction(0x3CFB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4CB4u; }
        if (ctx->pc != 0x3A4CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CFB40_0x3cfb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4CB4u; }
        if (ctx->pc != 0x3A4CB4u) { return; }
    }
    ctx->pc = 0x3A4CB4u;
label_3a4cb4:
    // 0x3a4cb4: 0xc0f21e0  jal         func_3C8780
label_3a4cb8:
    if (ctx->pc == 0x3A4CB8u) {
        ctx->pc = 0x3A4CBCu;
        goto label_3a4cbc;
    }
    ctx->pc = 0x3A4CB4u;
    SET_GPR_U32(ctx, 31, 0x3A4CBCu);
    ctx->pc = 0x3C8780u;
    if (runtime->hasFunction(0x3C8780u)) {
        auto targetFn = runtime->lookupFunction(0x3C8780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4CBCu; }
        if (ctx->pc != 0x3A4CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C8780_0x3c8780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4CBCu; }
        if (ctx->pc != 0x3A4CBCu) { return; }
    }
    ctx->pc = 0x3A4CBCu;
label_3a4cbc:
    // 0x3a4cbc: 0x10000047  b           . + 4 + (0x47 << 2)
label_3a4cc0:
    if (ctx->pc == 0x3A4CC0u) {
        ctx->pc = 0x3A4CC4u;
        goto label_3a4cc4;
    }
    ctx->pc = 0x3A4CBCu;
    {
        const bool branch_taken_0x3a4cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4cbc) {
            ctx->pc = 0x3A4DDCu;
            goto label_3a4ddc;
        }
    }
    ctx->pc = 0x3A4CC4u;
label_3a4cc4:
    // 0x3a4cc4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a4cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a4cc8:
    // 0x3a4cc8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3a4cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3a4ccc:
    // 0x3a4ccc: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3a4cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3a4cd0:
    // 0x3a4cd0: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x3a4cd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_3a4cd4:
    // 0x3a4cd4: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3a4cd8:
    if (ctx->pc == 0x3A4CD8u) {
        ctx->pc = 0x3A4CD8u;
            // 0x3a4cd8: 0x8e0400ec  lw          $a0, 0xEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
        ctx->pc = 0x3A4CDCu;
        goto label_3a4cdc;
    }
    ctx->pc = 0x3A4CD4u;
    {
        const bool branch_taken_0x3a4cd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4cd4) {
            ctx->pc = 0x3A4CD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4CD4u;
            // 0x3a4cd8: 0x8e0400ec  lw          $a0, 0xEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A4CF4u;
            goto label_3a4cf4;
        }
    }
    ctx->pc = 0x3A4CDCu;
label_3a4cdc:
    // 0x3a4cdc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a4cdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a4ce0:
    // 0x3a4ce0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3a4ce0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3a4ce4:
    // 0x3a4ce4: 0x320f809  jalr        $t9
label_3a4ce8:
    if (ctx->pc == 0x3A4CE8u) {
        ctx->pc = 0x3A4CE8u;
            // 0x3a4ce8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3A4CECu;
        goto label_3a4cec;
    }
    ctx->pc = 0x3A4CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A4CECu);
        ctx->pc = 0x3A4CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4CE4u;
            // 0x3a4ce8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A4CECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A4CECu; }
            if (ctx->pc != 0x3A4CECu) { return; }
        }
        }
    }
    ctx->pc = 0x3A4CECu;
label_3a4cec:
    // 0x3a4cec: 0x1000003b  b           . + 4 + (0x3B << 2)
label_3a4cf0:
    if (ctx->pc == 0x3A4CF0u) {
        ctx->pc = 0x3A4CF4u;
        goto label_3a4cf4;
    }
    ctx->pc = 0x3A4CECu;
    {
        const bool branch_taken_0x3a4cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4cec) {
            ctx->pc = 0x3A4DDCu;
            goto label_3a4ddc;
        }
    }
    ctx->pc = 0x3A4CF4u;
label_3a4cf4:
    // 0x3a4cf4: 0xc0eafd4  jal         func_3ABF50
label_3a4cf8:
    if (ctx->pc == 0x3A4CF8u) {
        ctx->pc = 0x3A4CFCu;
        goto label_3a4cfc;
    }
    ctx->pc = 0x3A4CF4u;
    SET_GPR_U32(ctx, 31, 0x3A4CFCu);
    ctx->pc = 0x3ABF50u;
    if (runtime->hasFunction(0x3ABF50u)) {
        auto targetFn = runtime->lookupFunction(0x3ABF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4CFCu; }
        if (ctx->pc != 0x3A4CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003ABF50_0x3abf50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4CFCu; }
        if (ctx->pc != 0x3A4CFCu) { return; }
    }
    ctx->pc = 0x3A4CFCu;
label_3a4cfc:
    // 0x3a4cfc: 0xc0ec1a4  jal         func_3B0690
label_3a4d00:
    if (ctx->pc == 0x3A4D00u) {
        ctx->pc = 0x3A4D00u;
            // 0x3a4d00: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->pc = 0x3A4D04u;
        goto label_3a4d04;
    }
    ctx->pc = 0x3A4CFCu;
    SET_GPR_U32(ctx, 31, 0x3A4D04u);
    ctx->pc = 0x3A4D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4CFCu;
            // 0x3a4d00: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B0690u;
    if (runtime->hasFunction(0x3B0690u)) {
        auto targetFn = runtime->lookupFunction(0x3B0690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4D04u; }
        if (ctx->pc != 0x3A4D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B0690_0x3b0690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4D04u; }
        if (ctx->pc != 0x3A4D04u) { return; }
    }
    ctx->pc = 0x3A4D04u;
label_3a4d04:
    // 0x3a4d04: 0xc0e9acc  jal         func_3A6B30
label_3a4d08:
    if (ctx->pc == 0x3A4D08u) {
        ctx->pc = 0x3A4D08u;
            // 0x3a4d08: 0x8e0400f4  lw          $a0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->pc = 0x3A4D0Cu;
        goto label_3a4d0c;
    }
    ctx->pc = 0x3A4D04u;
    SET_GPR_U32(ctx, 31, 0x3A4D0Cu);
    ctx->pc = 0x3A4D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4D04u;
            // 0x3a4d08: 0x8e0400f4  lw          $a0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A6B30u;
    if (runtime->hasFunction(0x3A6B30u)) {
        auto targetFn = runtime->lookupFunction(0x3A6B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4D0Cu; }
        if (ctx->pc != 0x3A4D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A6B30_0x3a6b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4D0Cu; }
        if (ctx->pc != 0x3A4D0Cu) { return; }
    }
    ctx->pc = 0x3A4D0Cu;
label_3a4d0c:
    // 0x3a4d0c: 0xc0e9f5c  jal         func_3A7D70
label_3a4d10:
    if (ctx->pc == 0x3A4D10u) {
        ctx->pc = 0x3A4D10u;
            // 0x3a4d10: 0x8e0400f8  lw          $a0, 0xF8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->pc = 0x3A4D14u;
        goto label_3a4d14;
    }
    ctx->pc = 0x3A4D0Cu;
    SET_GPR_U32(ctx, 31, 0x3A4D14u);
    ctx->pc = 0x3A4D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4D0Cu;
            // 0x3a4d10: 0x8e0400f8  lw          $a0, 0xF8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A7D70u;
    if (runtime->hasFunction(0x3A7D70u)) {
        auto targetFn = runtime->lookupFunction(0x3A7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4D14u; }
        if (ctx->pc != 0x3A4D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A7D70_0x3a7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4D14u; }
        if (ctx->pc != 0x3A4D14u) { return; }
    }
    ctx->pc = 0x3A4D14u;
label_3a4d14:
    // 0x3a4d14: 0xc0eceac  jal         func_3B3AB0
label_3a4d18:
    if (ctx->pc == 0x3A4D18u) {
        ctx->pc = 0x3A4D18u;
            // 0x3a4d18: 0x8e0400fc  lw          $a0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->pc = 0x3A4D1Cu;
        goto label_3a4d1c;
    }
    ctx->pc = 0x3A4D14u;
    SET_GPR_U32(ctx, 31, 0x3A4D1Cu);
    ctx->pc = 0x3A4D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4D14u;
            // 0x3a4d18: 0x8e0400fc  lw          $a0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B3AB0u;
    if (runtime->hasFunction(0x3B3AB0u)) {
        auto targetFn = runtime->lookupFunction(0x3B3AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4D1Cu; }
        if (ctx->pc != 0x3A4D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B3AB0_0x3b3ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4D1Cu; }
        if (ctx->pc != 0x3A4D1Cu) { return; }
    }
    ctx->pc = 0x3A4D1Cu;
label_3a4d1c:
    // 0x3a4d1c: 0xc0ec880  jal         func_3B2200
label_3a4d20:
    if (ctx->pc == 0x3A4D20u) {
        ctx->pc = 0x3A4D20u;
            // 0x3a4d20: 0x8e040100  lw          $a0, 0x100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->pc = 0x3A4D24u;
        goto label_3a4d24;
    }
    ctx->pc = 0x3A4D1Cu;
    SET_GPR_U32(ctx, 31, 0x3A4D24u);
    ctx->pc = 0x3A4D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4D1Cu;
            // 0x3a4d20: 0x8e040100  lw          $a0, 0x100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B2200u;
    if (runtime->hasFunction(0x3B2200u)) {
        auto targetFn = runtime->lookupFunction(0x3B2200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4D24u; }
        if (ctx->pc != 0x3A4D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B2200_0x3b2200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4D24u; }
        if (ctx->pc != 0x3A4D24u) { return; }
    }
    ctx->pc = 0x3A4D24u;
label_3a4d24:
    // 0x3a4d24: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x3a4d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_3a4d28:
    // 0x3a4d28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a4d28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a4d2c:
    // 0x3a4d2c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3a4d2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3a4d30:
    // 0x3a4d30: 0x320f809  jalr        $t9
label_3a4d34:
    if (ctx->pc == 0x3A4D34u) {
        ctx->pc = 0x3A4D38u;
        goto label_3a4d38;
    }
    ctx->pc = 0x3A4D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A4D38u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A4D38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A4D38u; }
            if (ctx->pc != 0x3A4D38u) { return; }
        }
        }
    }
    ctx->pc = 0x3A4D38u;
label_3a4d38:
    // 0x3a4d38: 0xc13abf0  jal         func_4EAFC0
label_3a4d3c:
    if (ctx->pc == 0x3A4D3Cu) {
        ctx->pc = 0x3A4D3Cu;
            // 0x3a4d3c: 0x8e040108  lw          $a0, 0x108($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->pc = 0x3A4D40u;
        goto label_3a4d40;
    }
    ctx->pc = 0x3A4D38u;
    SET_GPR_U32(ctx, 31, 0x3A4D40u);
    ctx->pc = 0x3A4D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4D38u;
            // 0x3a4d3c: 0x8e040108  lw          $a0, 0x108($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EAFC0u;
    if (runtime->hasFunction(0x4EAFC0u)) {
        auto targetFn = runtime->lookupFunction(0x4EAFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4D40u; }
        if (ctx->pc != 0x3A4D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EAFC0_0x4eafc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4D40u; }
        if (ctx->pc != 0x3A4D40u) { return; }
    }
    ctx->pc = 0x3A4D40u;
label_3a4d40:
    // 0x3a4d40: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3a4d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3a4d44:
    // 0x3a4d44: 0x3c0440c0  lui         $a0, 0x40C0
    ctx->pc = 0x3a4d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16576 << 16));
label_3a4d48:
    // 0x3a4d48: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x3a4d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3a4d4c:
    // 0x3a4d4c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3a4d4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a4d50:
    // 0x3a4d50: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x3a4d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a4d54:
    // 0x3a4d54: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3a4d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3a4d58:
    // 0x3a4d58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a4d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a4d5c:
    // 0x3a4d5c: 0x0  nop
    ctx->pc = 0x3a4d5cu;
    // NOP
label_3a4d60:
    // 0x3a4d60: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3a4d60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3a4d64:
    // 0x3a4d64: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3a4d64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a4d68:
    // 0x3a4d68: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3a4d6c:
    if (ctx->pc == 0x3A4D6Cu) {
        ctx->pc = 0x3A4D6Cu;
            // 0x3a4d6c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3A4D70u;
        goto label_3a4d70;
    }
    ctx->pc = 0x3A4D68u;
    {
        const bool branch_taken_0x3a4d68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a4d68) {
            ctx->pc = 0x3A4D6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4D68u;
            // 0x3a4d6c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A4D80u;
            goto label_3a4d80;
        }
    }
    ctx->pc = 0x3A4D70u;
label_3a4d70:
    // 0x3a4d70: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a4d70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a4d74:
    // 0x3a4d74: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3a4d74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3a4d78:
    // 0x3a4d78: 0x10000007  b           . + 4 + (0x7 << 2)
label_3a4d7c:
    if (ctx->pc == 0x3A4D7Cu) {
        ctx->pc = 0x3A4D7Cu;
            // 0x3a4d7c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x3A4D80u;
        goto label_3a4d80;
    }
    ctx->pc = 0x3A4D78u;
    {
        const bool branch_taken_0x3a4d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4D78u;
            // 0x3a4d7c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4d78) {
            ctx->pc = 0x3A4D98u;
            goto label_3a4d98;
        }
    }
    ctx->pc = 0x3A4D80u;
label_3a4d80:
    // 0x3a4d80: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3a4d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3a4d84:
    // 0x3a4d84: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a4d84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a4d88:
    // 0x3a4d88: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3a4d88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3a4d8c:
    // 0x3a4d8c: 0x0  nop
    ctx->pc = 0x3a4d8cu;
    // NOP
label_3a4d90:
    // 0x3a4d90: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3a4d90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3a4d94:
    // 0x3a4d94: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x3a4d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_3a4d98:
    // 0x3a4d98: 0x96030114  lhu         $v1, 0x114($s0)
    ctx->pc = 0x3a4d98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
label_3a4d9c:
    // 0x3a4d9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a4d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3a4da0:
    // 0x3a4da0: 0xa6030114  sh          $v1, 0x114($s0)
    ctx->pc = 0x3a4da0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 276), (uint16_t)GPR_U32(ctx, 3));
label_3a4da4:
    // 0x3a4da4: 0x96030114  lhu         $v1, 0x114($s0)
    ctx->pc = 0x3a4da4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
label_3a4da8:
    // 0x3a4da8: 0x28610201  slti        $at, $v1, 0x201
    ctx->pc = 0x3a4da8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)513) ? 1 : 0);
label_3a4dac:
    // 0x3a4dac: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_3a4db0:
    if (ctx->pc == 0x3A4DB0u) {
        ctx->pc = 0x3A4DB0u;
            // 0x3a4db0: 0x8203011b  lb          $v1, 0x11B($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 283)));
        ctx->pc = 0x3A4DB4u;
        goto label_3a4db4;
    }
    ctx->pc = 0x3A4DACu;
    {
        const bool branch_taken_0x3a4dac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4dac) {
            ctx->pc = 0x3A4DB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4DACu;
            // 0x3a4db0: 0x8203011b  lb          $v1, 0x11B($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 283)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A4DBCu;
            goto label_3a4dbc;
        }
    }
    ctx->pc = 0x3A4DB4u;
label_3a4db4:
    // 0x3a4db4: 0xa6000114  sh          $zero, 0x114($s0)
    ctx->pc = 0x3a4db4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 276), (uint16_t)GPR_U32(ctx, 0));
label_3a4db8:
    // 0x3a4db8: 0x8203011b  lb          $v1, 0x11B($s0)
    ctx->pc = 0x3a4db8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 283)));
label_3a4dbc:
    // 0x3a4dbc: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
label_3a4dc0:
    if (ctx->pc == 0x3A4DC0u) {
        ctx->pc = 0x3A4DC4u;
        goto label_3a4dc4;
    }
    ctx->pc = 0x3A4DBCu;
    {
        const bool branch_taken_0x3a4dbc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3a4dbc) {
            ctx->pc = 0x3A4DDCu;
            goto label_3a4ddc;
        }
    }
    ctx->pc = 0x3A4DC4u;
label_3a4dc4:
    // 0x3a4dc4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3a4dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3a4dc8:
    // 0x3a4dc8: 0x10000004  b           . + 4 + (0x4 << 2)
label_3a4dcc:
    if (ctx->pc == 0x3A4DCCu) {
        ctx->pc = 0x3A4DCCu;
            // 0x3a4dcc: 0xa203011b  sb          $v1, 0x11B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 283), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3A4DD0u;
        goto label_3a4dd0;
    }
    ctx->pc = 0x3A4DC8u;
    {
        const bool branch_taken_0x3a4dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4DC8u;
            // 0x3a4dcc: 0xa203011b  sb          $v1, 0x11B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 283), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4dc8) {
            ctx->pc = 0x3A4DDCu;
            goto label_3a4ddc;
        }
    }
    ctx->pc = 0x3A4DD0u;
label_3a4dd0:
    // 0x3a4dd0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3a4dd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3a4dd4:
    // 0x3a4dd4: 0x320f809  jalr        $t9
label_3a4dd8:
    if (ctx->pc == 0x3A4DD8u) {
        ctx->pc = 0x3A4DDCu;
        goto label_3a4ddc;
    }
    ctx->pc = 0x3A4DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A4DDCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A4DDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A4DDCu; }
            if (ctx->pc != 0x3A4DDCu) { return; }
        }
        }
    }
    ctx->pc = 0x3A4DDCu;
label_3a4ddc:
    // 0x3a4ddc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a4ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a4de0:
    // 0x3a4de0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a4de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a4de4:
    // 0x3a4de4: 0x3e00008  jr          $ra
label_3a4de8:
    if (ctx->pc == 0x3A4DE8u) {
        ctx->pc = 0x3A4DE8u;
            // 0x3a4de8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3A4DECu;
        goto label_3a4dec;
    }
    ctx->pc = 0x3A4DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4DE4u;
            // 0x3a4de8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A4DECu;
label_3a4dec:
    // 0x3a4dec: 0x0  nop
    ctx->pc = 0x3a4decu;
    // NOP
}
