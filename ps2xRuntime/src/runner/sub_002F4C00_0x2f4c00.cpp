#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F4C00
// Address: 0x2f4c00 - 0x2f4d80
void sub_002F4C00_0x2f4c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4C00_0x2f4c00");
#endif

    switch (ctx->pc) {
        case 0x2f4c00u: goto label_2f4c00;
        case 0x2f4c04u: goto label_2f4c04;
        case 0x2f4c08u: goto label_2f4c08;
        case 0x2f4c0cu: goto label_2f4c0c;
        case 0x2f4c10u: goto label_2f4c10;
        case 0x2f4c14u: goto label_2f4c14;
        case 0x2f4c18u: goto label_2f4c18;
        case 0x2f4c1cu: goto label_2f4c1c;
        case 0x2f4c20u: goto label_2f4c20;
        case 0x2f4c24u: goto label_2f4c24;
        case 0x2f4c28u: goto label_2f4c28;
        case 0x2f4c2cu: goto label_2f4c2c;
        case 0x2f4c30u: goto label_2f4c30;
        case 0x2f4c34u: goto label_2f4c34;
        case 0x2f4c38u: goto label_2f4c38;
        case 0x2f4c3cu: goto label_2f4c3c;
        case 0x2f4c40u: goto label_2f4c40;
        case 0x2f4c44u: goto label_2f4c44;
        case 0x2f4c48u: goto label_2f4c48;
        case 0x2f4c4cu: goto label_2f4c4c;
        case 0x2f4c50u: goto label_2f4c50;
        case 0x2f4c54u: goto label_2f4c54;
        case 0x2f4c58u: goto label_2f4c58;
        case 0x2f4c5cu: goto label_2f4c5c;
        case 0x2f4c60u: goto label_2f4c60;
        case 0x2f4c64u: goto label_2f4c64;
        case 0x2f4c68u: goto label_2f4c68;
        case 0x2f4c6cu: goto label_2f4c6c;
        case 0x2f4c70u: goto label_2f4c70;
        case 0x2f4c74u: goto label_2f4c74;
        case 0x2f4c78u: goto label_2f4c78;
        case 0x2f4c7cu: goto label_2f4c7c;
        case 0x2f4c80u: goto label_2f4c80;
        case 0x2f4c84u: goto label_2f4c84;
        case 0x2f4c88u: goto label_2f4c88;
        case 0x2f4c8cu: goto label_2f4c8c;
        case 0x2f4c90u: goto label_2f4c90;
        case 0x2f4c94u: goto label_2f4c94;
        case 0x2f4c98u: goto label_2f4c98;
        case 0x2f4c9cu: goto label_2f4c9c;
        case 0x2f4ca0u: goto label_2f4ca0;
        case 0x2f4ca4u: goto label_2f4ca4;
        case 0x2f4ca8u: goto label_2f4ca8;
        case 0x2f4cacu: goto label_2f4cac;
        case 0x2f4cb0u: goto label_2f4cb0;
        case 0x2f4cb4u: goto label_2f4cb4;
        case 0x2f4cb8u: goto label_2f4cb8;
        case 0x2f4cbcu: goto label_2f4cbc;
        case 0x2f4cc0u: goto label_2f4cc0;
        case 0x2f4cc4u: goto label_2f4cc4;
        case 0x2f4cc8u: goto label_2f4cc8;
        case 0x2f4cccu: goto label_2f4ccc;
        case 0x2f4cd0u: goto label_2f4cd0;
        case 0x2f4cd4u: goto label_2f4cd4;
        case 0x2f4cd8u: goto label_2f4cd8;
        case 0x2f4cdcu: goto label_2f4cdc;
        case 0x2f4ce0u: goto label_2f4ce0;
        case 0x2f4ce4u: goto label_2f4ce4;
        case 0x2f4ce8u: goto label_2f4ce8;
        case 0x2f4cecu: goto label_2f4cec;
        case 0x2f4cf0u: goto label_2f4cf0;
        case 0x2f4cf4u: goto label_2f4cf4;
        case 0x2f4cf8u: goto label_2f4cf8;
        case 0x2f4cfcu: goto label_2f4cfc;
        case 0x2f4d00u: goto label_2f4d00;
        case 0x2f4d04u: goto label_2f4d04;
        case 0x2f4d08u: goto label_2f4d08;
        case 0x2f4d0cu: goto label_2f4d0c;
        case 0x2f4d10u: goto label_2f4d10;
        case 0x2f4d14u: goto label_2f4d14;
        case 0x2f4d18u: goto label_2f4d18;
        case 0x2f4d1cu: goto label_2f4d1c;
        case 0x2f4d20u: goto label_2f4d20;
        case 0x2f4d24u: goto label_2f4d24;
        case 0x2f4d28u: goto label_2f4d28;
        case 0x2f4d2cu: goto label_2f4d2c;
        case 0x2f4d30u: goto label_2f4d30;
        case 0x2f4d34u: goto label_2f4d34;
        case 0x2f4d38u: goto label_2f4d38;
        case 0x2f4d3cu: goto label_2f4d3c;
        case 0x2f4d40u: goto label_2f4d40;
        case 0x2f4d44u: goto label_2f4d44;
        case 0x2f4d48u: goto label_2f4d48;
        case 0x2f4d4cu: goto label_2f4d4c;
        case 0x2f4d50u: goto label_2f4d50;
        case 0x2f4d54u: goto label_2f4d54;
        case 0x2f4d58u: goto label_2f4d58;
        case 0x2f4d5cu: goto label_2f4d5c;
        case 0x2f4d60u: goto label_2f4d60;
        case 0x2f4d64u: goto label_2f4d64;
        case 0x2f4d68u: goto label_2f4d68;
        case 0x2f4d6cu: goto label_2f4d6c;
        case 0x2f4d70u: goto label_2f4d70;
        case 0x2f4d74u: goto label_2f4d74;
        case 0x2f4d78u: goto label_2f4d78;
        case 0x2f4d7cu: goto label_2f4d7c;
        default: break;
    }

    ctx->pc = 0x2f4c00u;

label_2f4c00:
    // 0x2f4c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f4c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2f4c04:
    // 0x2f4c04: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2f4c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_2f4c08:
    // 0x2f4c08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f4c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2f4c0c:
    // 0x2f4c0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f4c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f4c10:
    // 0x2f4c10: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x2f4c10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_2f4c14:
    // 0x2f4c14: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x2f4c14u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_2f4c18:
    // 0x2f4c18: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2f4c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f4c1c:
    // 0x2f4c1c: 0x10a3002e  beq         $a1, $v1, . + 4 + (0x2E << 2)
label_2f4c20:
    if (ctx->pc == 0x2F4C20u) {
        ctx->pc = 0x2F4C20u;
            // 0x2f4c20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F4C24u;
        goto label_2f4c24;
    }
    ctx->pc = 0x2F4C1Cu;
    {
        const bool branch_taken_0x2f4c1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F4C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4C1Cu;
            // 0x2f4c20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c1c) {
            ctx->pc = 0x2F4CD8u;
            goto label_2f4cd8;
        }
    }
    ctx->pc = 0x2F4C24u;
label_2f4c24:
    // 0x2f4c24: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f4c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f4c28:
    // 0x2f4c28: 0x50a30028  beql        $a1, $v1, . + 4 + (0x28 << 2)
label_2f4c2c:
    if (ctx->pc == 0x2F4C2Cu) {
        ctx->pc = 0x2F4C2Cu;
            // 0x2f4c2c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x2F4C30u;
        goto label_2f4c30;
    }
    ctx->pc = 0x2F4C28u;
    {
        const bool branch_taken_0x2f4c28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f4c28) {
            ctx->pc = 0x2F4C2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4C28u;
            // 0x2f4c2c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F4CCCu;
            goto label_2f4ccc;
        }
    }
    ctx->pc = 0x2F4C30u;
label_2f4c30:
    // 0x2f4c30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f4c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f4c34:
    // 0x2f4c34: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_2f4c38:
    if (ctx->pc == 0x2F4C38u) {
        ctx->pc = 0x2F4C38u;
            // 0x2f4c38: 0x8cc40cb4  lw          $a0, 0xCB4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
        ctx->pc = 0x2F4C3Cu;
        goto label_2f4c3c;
    }
    ctx->pc = 0x2F4C34u;
    {
        const bool branch_taken_0x2f4c34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f4c34) {
            ctx->pc = 0x2F4C38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4C34u;
            // 0x2f4c38: 0x8cc40cb4  lw          $a0, 0xCB4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F4C44u;
            goto label_2f4c44;
        }
    }
    ctx->pc = 0x2F4C3Cu;
label_2f4c3c:
    // 0x2f4c3c: 0x1000004c  b           . + 4 + (0x4C << 2)
label_2f4c40:
    if (ctx->pc == 0x2F4C40u) {
        ctx->pc = 0x2F4C44u;
        goto label_2f4c44;
    }
    ctx->pc = 0x2F4C3Cu;
    {
        const bool branch_taken_0x2f4c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4c3c) {
            ctx->pc = 0x2F4D70u;
            goto label_2f4d70;
        }
    }
    ctx->pc = 0x2F4C44u;
label_2f4c44:
    // 0x2f4c44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f4c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4c48:
    // 0x2f4c48: 0x10830049  beq         $a0, $v1, . + 4 + (0x49 << 2)
label_2f4c4c:
    if (ctx->pc == 0x2F4C4Cu) {
        ctx->pc = 0x2F4C50u;
        goto label_2f4c50;
    }
    ctx->pc = 0x2F4C48u;
    {
        const bool branch_taken_0x2f4c48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f4c48) {
            ctx->pc = 0x2F4D70u;
            goto label_2f4d70;
        }
    }
    ctx->pc = 0x2F4C50u;
label_2f4c50:
    // 0x2f4c50: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x2f4c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2f4c54:
    // 0x2f4c54: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2f4c58:
    if (ctx->pc == 0x2F4C58u) {
        ctx->pc = 0x2F4C5Cu;
        goto label_2f4c5c;
    }
    ctx->pc = 0x2F4C54u;
    {
        const bool branch_taken_0x2f4c54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4c54) {
            ctx->pc = 0x2F4C64u;
            goto label_2f4c64;
        }
    }
    ctx->pc = 0x2F4C5Cu;
label_2f4c5c:
    // 0x2f4c5c: 0xc074a24  jal         func_1D2890
label_2f4c60:
    if (ctx->pc == 0x2F4C60u) {
        ctx->pc = 0x2F4C64u;
        goto label_2f4c64;
    }
    ctx->pc = 0x2F4C5Cu;
    SET_GPR_U32(ctx, 31, 0x2F4C64u);
    ctx->pc = 0x1D2890u;
    if (runtime->hasFunction(0x1D2890u)) {
        auto targetFn = runtime->lookupFunction(0x1D2890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4C64u; }
        if (ctx->pc != 0x2F4C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2890_0x1d2890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4C64u; }
        if (ctx->pc != 0x2F4C64u) { return; }
    }
    ctx->pc = 0x2F4C64u;
label_2f4c64:
    // 0x2f4c64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f4c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f4c68:
    // 0x2f4c68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f4c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4c6c:
    // 0x2f4c6c: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x2f4c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_2f4c70:
    // 0x2f4c70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f4c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4c74:
    // 0x2f4c74: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x2f4c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_2f4c78:
    // 0x2f4c78: 0x8c420150  lw          $v0, 0x150($v0)
    ctx->pc = 0x2f4c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_2f4c7c:
    // 0x2f4c7c: 0x2446027c  addiu       $a2, $v0, 0x27C
    ctx->pc = 0x2f4c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 636));
label_2f4c80:
    // 0x2f4c80: 0xae0604b4  sw          $a2, 0x4B4($s0)
    ctx->pc = 0x2f4c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1204), GPR_U32(ctx, 6));
label_2f4c84:
    // 0x2f4c84: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2f4c84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2f4c88:
    // 0x2f4c88: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_2f4c8c:
    if (ctx->pc == 0x2F4C8Cu) {
        ctx->pc = 0x2F4C8Cu;
            // 0x2f4c8c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x2F4C90u;
        goto label_2f4c90;
    }
    ctx->pc = 0x2F4C88u;
    {
        const bool branch_taken_0x2f4c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f4c88) {
            ctx->pc = 0x2F4C8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4C88u;
            // 0x2f4c8c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F4C98u;
            goto label_2f4c98;
        }
    }
    ctx->pc = 0x2F4C90u;
label_2f4c90:
    // 0x2f4c90: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f4c94:
    if (ctx->pc == 0x2F4C94u) {
        ctx->pc = 0x2F4C94u;
            // 0x2f4c94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F4C98u;
        goto label_2f4c98;
    }
    ctx->pc = 0x2F4C90u;
    {
        const bool branch_taken_0x2f4c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4C90u;
            // 0x2f4c94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c90) {
            ctx->pc = 0x2F4CA8u;
            goto label_2f4ca8;
        }
    }
    ctx->pc = 0x2F4C98u;
label_2f4c98:
    // 0x2f4c98: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2f4c98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_2f4c9c:
    // 0x2f4c9c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2f4ca0:
    if (ctx->pc == 0x2F4CA0u) {
        ctx->pc = 0x2F4CA0u;
            // 0x2f4ca0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x2F4CA4u;
        goto label_2f4ca4;
    }
    ctx->pc = 0x2F4C9Cu;
    {
        const bool branch_taken_0x2f4c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4C9Cu;
            // 0x2f4ca0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c9c) {
            ctx->pc = 0x2F4C84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f4c84;
        }
    }
    ctx->pc = 0x2F4CA4u;
label_2f4ca4:
    // 0x2f4ca4: 0x0  nop
    ctx->pc = 0x2f4ca4u;
    // NOP
label_2f4ca8:
    // 0x2f4ca8: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
label_2f4cac:
    if (ctx->pc == 0x2F4CACu) {
        ctx->pc = 0x2F4CACu;
            // 0x2f4cac: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2F4CB0u;
        goto label_2f4cb0;
    }
    ctx->pc = 0x2F4CA8u;
    {
        const bool branch_taken_0x2f4ca8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4ca8) {
            ctx->pc = 0x2F4CACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4CA8u;
            // 0x2f4cac: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F4CB8u;
            goto label_2f4cb8;
        }
    }
    ctx->pc = 0x2F4CB0u;
label_2f4cb0:
    // 0x2f4cb0: 0xae0004b4  sw          $zero, 0x4B4($s0)
    ctx->pc = 0x2f4cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1204), GPR_U32(ctx, 0));
label_2f4cb4:
    // 0x2f4cb4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2f4cb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f4cb8:
    // 0x2f4cb8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2f4cb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2f4cbc:
    // 0x2f4cbc: 0x320f809  jalr        $t9
label_2f4cc0:
    if (ctx->pc == 0x2F4CC0u) {
        ctx->pc = 0x2F4CC0u;
            // 0x2f4cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F4CC4u;
        goto label_2f4cc4;
    }
    ctx->pc = 0x2F4CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F4CC4u);
        ctx->pc = 0x2F4CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4CBCu;
            // 0x2f4cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F4CC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F4CC4u; }
            if (ctx->pc != 0x2F4CC4u) { return; }
        }
        }
    }
    ctx->pc = 0x2F4CC4u;
label_2f4cc4:
    // 0x2f4cc4: 0x1000002a  b           . + 4 + (0x2A << 2)
label_2f4cc8:
    if (ctx->pc == 0x2F4CC8u) {
        ctx->pc = 0x2F4CCCu;
        goto label_2f4ccc;
    }
    ctx->pc = 0x2F4CC4u;
    {
        const bool branch_taken_0x2f4cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4cc4) {
            ctx->pc = 0x2F4D70u;
            goto label_2f4d70;
        }
    }
    ctx->pc = 0x2F4CCCu;
label_2f4ccc:
    // 0x2f4ccc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2f4cccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2f4cd0:
    // 0x2f4cd0: 0x320f809  jalr        $t9
label_2f4cd4:
    if (ctx->pc == 0x2F4CD4u) {
        ctx->pc = 0x2F4CD8u;
        goto label_2f4cd8;
    }
    ctx->pc = 0x2F4CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F4CD8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F4CD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F4CD8u; }
            if (ctx->pc != 0x2F4CD8u) { return; }
        }
        }
    }
    ctx->pc = 0x2F4CD8u;
label_2f4cd8:
    // 0x2f4cd8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2f4cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_2f4cdc:
    // 0x2f4cdc: 0x8e040454  lw          $a0, 0x454($s0)
    ctx->pc = 0x2f4cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1108)));
label_2f4ce0:
    // 0x2f4ce0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x2f4ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_2f4ce4:
    // 0x2f4ce4: 0x26050154  addiu       $a1, $s0, 0x154
    ctx->pc = 0x2f4ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 340));
label_2f4ce8:
    // 0x2f4ce8: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x2f4ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f4cec:
    // 0x2f4cec: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2f4cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2f4cf0:
    // 0x2f4cf0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_2f4cf4:
    if (ctx->pc == 0x2F4CF4u) {
        ctx->pc = 0x2F4CF8u;
        goto label_2f4cf8;
    }
    ctx->pc = 0x2F4CF0u;
    {
        const bool branch_taken_0x2f4cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4cf0) {
            ctx->pc = 0x2F4D28u;
            goto label_2f4d28;
        }
    }
    ctx->pc = 0x2F4CF8u;
label_2f4cf8:
    // 0x2f4cf8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2f4cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4cfc:
    // 0x2f4cfc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2f4cfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2f4d00:
    // 0x2f4d00: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x2f4d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_2f4d04:
    // 0x2f4d04: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2f4d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2f4d08:
    // 0x2f4d08: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2f4d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4d0c:
    // 0x2f4d0c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2f4d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f4d10:
    // 0x2f4d10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f4d10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f4d14:
    // 0x2f4d14: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2f4d18:
    if (ctx->pc == 0x2F4D18u) {
        ctx->pc = 0x2F4D1Cu;
        goto label_2f4d1c;
    }
    ctx->pc = 0x2F4D14u;
    {
        const bool branch_taken_0x2f4d14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f4d14) {
            ctx->pc = 0x2F4D28u;
            goto label_2f4d28;
        }
    }
    ctx->pc = 0x2F4D1Cu;
label_2f4d1c:
    // 0x2f4d1c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f4d1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2f4d20:
    // 0x2f4d20: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x2f4d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_2f4d24:
    // 0x2f4d24: 0x0  nop
    ctx->pc = 0x2f4d24u;
    // NOP
label_2f4d28:
    // 0x2f4d28: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x2f4d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_2f4d2c:
    // 0x2f4d2c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_2f4d30:
    if (ctx->pc == 0x2F4D30u) {
        ctx->pc = 0x2F4D34u;
        goto label_2f4d34;
    }
    ctx->pc = 0x2F4D2Cu;
    {
        const bool branch_taken_0x2f4d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4d2c) {
            ctx->pc = 0x2F4D60u;
            goto label_2f4d60;
        }
    }
    ctx->pc = 0x2F4D34u;
label_2f4d34:
    // 0x2f4d34: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x2f4d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4d38:
    // 0x2f4d38: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2f4d38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2f4d3c:
    // 0x2f4d3c: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x2f4d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_2f4d40:
    // 0x2f4d40: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x2f4d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_2f4d44:
    // 0x2f4d44: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x2f4d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4d48:
    // 0x2f4d48: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2f4d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f4d4c:
    // 0x2f4d4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f4d4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f4d50:
    // 0x2f4d50: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2f4d54:
    if (ctx->pc == 0x2F4D54u) {
        ctx->pc = 0x2F4D58u;
        goto label_2f4d58;
    }
    ctx->pc = 0x2F4D50u;
    {
        const bool branch_taken_0x2f4d50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f4d50) {
            ctx->pc = 0x2F4D60u;
            goto label_2f4d60;
        }
    }
    ctx->pc = 0x2F4D58u;
label_2f4d58:
    // 0x2f4d58: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f4d58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2f4d5c:
    // 0x2f4d5c: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x2f4d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_2f4d60:
    // 0x2f4d60: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2f4d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2f4d64:
    // 0x2f4d64: 0x1480ffe1  bnez        $a0, . + 4 + (-0x1F << 2)
label_2f4d68:
    if (ctx->pc == 0x2F4D68u) {
        ctx->pc = 0x2F4D68u;
            // 0x2f4d68: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->pc = 0x2F4D6Cu;
        goto label_2f4d6c;
    }
    ctx->pc = 0x2F4D64u;
    {
        const bool branch_taken_0x2f4d64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4D64u;
            // 0x2f4d68: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4d64) {
            ctx->pc = 0x2F4CECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f4cec;
        }
    }
    ctx->pc = 0x2F4D6Cu;
label_2f4d6c:
    // 0x2f4d6c: 0x0  nop
    ctx->pc = 0x2f4d6cu;
    // NOP
label_2f4d70:
    // 0x2f4d70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f4d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f4d74:
    // 0x2f4d74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f4d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f4d78:
    // 0x2f4d78: 0x3e00008  jr          $ra
label_2f4d7c:
    if (ctx->pc == 0x2F4D7Cu) {
        ctx->pc = 0x2F4D7Cu;
            // 0x2f4d7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2F4D80u;
        goto label_fallthrough_0x2f4d78;
    }
    ctx->pc = 0x2F4D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4D78u;
            // 0x2f4d7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2f4d78:
    ctx->pc = 0x2F4D80u;
}
