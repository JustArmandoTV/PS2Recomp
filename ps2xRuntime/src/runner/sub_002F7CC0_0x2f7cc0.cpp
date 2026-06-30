#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F7CC0
// Address: 0x2f7cc0 - 0x2f7e50
void sub_002F7CC0_0x2f7cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7CC0_0x2f7cc0");
#endif

    switch (ctx->pc) {
        case 0x2f7cc0u: goto label_2f7cc0;
        case 0x2f7cc4u: goto label_2f7cc4;
        case 0x2f7cc8u: goto label_2f7cc8;
        case 0x2f7cccu: goto label_2f7ccc;
        case 0x2f7cd0u: goto label_2f7cd0;
        case 0x2f7cd4u: goto label_2f7cd4;
        case 0x2f7cd8u: goto label_2f7cd8;
        case 0x2f7cdcu: goto label_2f7cdc;
        case 0x2f7ce0u: goto label_2f7ce0;
        case 0x2f7ce4u: goto label_2f7ce4;
        case 0x2f7ce8u: goto label_2f7ce8;
        case 0x2f7cecu: goto label_2f7cec;
        case 0x2f7cf0u: goto label_2f7cf0;
        case 0x2f7cf4u: goto label_2f7cf4;
        case 0x2f7cf8u: goto label_2f7cf8;
        case 0x2f7cfcu: goto label_2f7cfc;
        case 0x2f7d00u: goto label_2f7d00;
        case 0x2f7d04u: goto label_2f7d04;
        case 0x2f7d08u: goto label_2f7d08;
        case 0x2f7d0cu: goto label_2f7d0c;
        case 0x2f7d10u: goto label_2f7d10;
        case 0x2f7d14u: goto label_2f7d14;
        case 0x2f7d18u: goto label_2f7d18;
        case 0x2f7d1cu: goto label_2f7d1c;
        case 0x2f7d20u: goto label_2f7d20;
        case 0x2f7d24u: goto label_2f7d24;
        case 0x2f7d28u: goto label_2f7d28;
        case 0x2f7d2cu: goto label_2f7d2c;
        case 0x2f7d30u: goto label_2f7d30;
        case 0x2f7d34u: goto label_2f7d34;
        case 0x2f7d38u: goto label_2f7d38;
        case 0x2f7d3cu: goto label_2f7d3c;
        case 0x2f7d40u: goto label_2f7d40;
        case 0x2f7d44u: goto label_2f7d44;
        case 0x2f7d48u: goto label_2f7d48;
        case 0x2f7d4cu: goto label_2f7d4c;
        case 0x2f7d50u: goto label_2f7d50;
        case 0x2f7d54u: goto label_2f7d54;
        case 0x2f7d58u: goto label_2f7d58;
        case 0x2f7d5cu: goto label_2f7d5c;
        case 0x2f7d60u: goto label_2f7d60;
        case 0x2f7d64u: goto label_2f7d64;
        case 0x2f7d68u: goto label_2f7d68;
        case 0x2f7d6cu: goto label_2f7d6c;
        case 0x2f7d70u: goto label_2f7d70;
        case 0x2f7d74u: goto label_2f7d74;
        case 0x2f7d78u: goto label_2f7d78;
        case 0x2f7d7cu: goto label_2f7d7c;
        case 0x2f7d80u: goto label_2f7d80;
        case 0x2f7d84u: goto label_2f7d84;
        case 0x2f7d88u: goto label_2f7d88;
        case 0x2f7d8cu: goto label_2f7d8c;
        case 0x2f7d90u: goto label_2f7d90;
        case 0x2f7d94u: goto label_2f7d94;
        case 0x2f7d98u: goto label_2f7d98;
        case 0x2f7d9cu: goto label_2f7d9c;
        case 0x2f7da0u: goto label_2f7da0;
        case 0x2f7da4u: goto label_2f7da4;
        case 0x2f7da8u: goto label_2f7da8;
        case 0x2f7dacu: goto label_2f7dac;
        case 0x2f7db0u: goto label_2f7db0;
        case 0x2f7db4u: goto label_2f7db4;
        case 0x2f7db8u: goto label_2f7db8;
        case 0x2f7dbcu: goto label_2f7dbc;
        case 0x2f7dc0u: goto label_2f7dc0;
        case 0x2f7dc4u: goto label_2f7dc4;
        case 0x2f7dc8u: goto label_2f7dc8;
        case 0x2f7dccu: goto label_2f7dcc;
        case 0x2f7dd0u: goto label_2f7dd0;
        case 0x2f7dd4u: goto label_2f7dd4;
        case 0x2f7dd8u: goto label_2f7dd8;
        case 0x2f7ddcu: goto label_2f7ddc;
        case 0x2f7de0u: goto label_2f7de0;
        case 0x2f7de4u: goto label_2f7de4;
        case 0x2f7de8u: goto label_2f7de8;
        case 0x2f7decu: goto label_2f7dec;
        case 0x2f7df0u: goto label_2f7df0;
        case 0x2f7df4u: goto label_2f7df4;
        case 0x2f7df8u: goto label_2f7df8;
        case 0x2f7dfcu: goto label_2f7dfc;
        case 0x2f7e00u: goto label_2f7e00;
        case 0x2f7e04u: goto label_2f7e04;
        case 0x2f7e08u: goto label_2f7e08;
        case 0x2f7e0cu: goto label_2f7e0c;
        case 0x2f7e10u: goto label_2f7e10;
        case 0x2f7e14u: goto label_2f7e14;
        case 0x2f7e18u: goto label_2f7e18;
        case 0x2f7e1cu: goto label_2f7e1c;
        case 0x2f7e20u: goto label_2f7e20;
        case 0x2f7e24u: goto label_2f7e24;
        case 0x2f7e28u: goto label_2f7e28;
        case 0x2f7e2cu: goto label_2f7e2c;
        case 0x2f7e30u: goto label_2f7e30;
        case 0x2f7e34u: goto label_2f7e34;
        case 0x2f7e38u: goto label_2f7e38;
        case 0x2f7e3cu: goto label_2f7e3c;
        case 0x2f7e40u: goto label_2f7e40;
        case 0x2f7e44u: goto label_2f7e44;
        case 0x2f7e48u: goto label_2f7e48;
        case 0x2f7e4cu: goto label_2f7e4c;
        default: break;
    }

    ctx->pc = 0x2f7cc0u;

label_2f7cc0:
    // 0x2f7cc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f7cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2f7cc4:
    // 0x2f7cc4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2f7cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2f7cc8:
    // 0x2f7cc8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f7cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2f7ccc:
    // 0x2f7ccc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f7cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2f7cd0:
    // 0x2f7cd0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f7cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2f7cd4:
    // 0x2f7cd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f7cd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f7cd8:
    // 0x2f7cd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f7cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2f7cdc:
    // 0x2f7cdc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f7cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f7ce0:
    // 0x2f7ce0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2f7ce0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2f7ce4:
    // 0x2f7ce4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2f7ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f7ce8:
    // 0x2f7ce8: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x2f7ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_2f7cec:
    // 0x2f7cec: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x2f7cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2f7cf0:
    // 0x2f7cf0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2f7cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2f7cf4:
    // 0x2f7cf4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_2f7cf8:
    if (ctx->pc == 0x2F7CF8u) {
        ctx->pc = 0x2F7CF8u;
            // 0x2f7cf8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2F7CFCu;
        goto label_2f7cfc;
    }
    ctx->pc = 0x2F7CF4u;
    {
        const bool branch_taken_0x2f7cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F7CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7CF4u;
            // 0x2f7cf8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7cf4) {
            ctx->pc = 0x2F7D2Cu;
            goto label_2f7d2c;
        }
    }
    ctx->pc = 0x2F7CFCu;
label_2f7cfc:
    // 0x2f7cfc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2f7cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f7d00:
    // 0x2f7d00: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f7d00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f7d04:
    // 0x2f7d04: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f7d04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f7d08:
    // 0x2f7d08: 0x320f809  jalr        $t9
label_2f7d0c:
    if (ctx->pc == 0x2F7D0Cu) {
        ctx->pc = 0x2F7D10u;
        goto label_2f7d10;
    }
    ctx->pc = 0x2F7D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F7D10u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F7D10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F7D10u; }
            if (ctx->pc != 0x2F7D10u) { return; }
        }
        }
    }
    ctx->pc = 0x2F7D10u;
label_2f7d10:
    // 0x2f7d10: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2f7d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f7d14:
    // 0x2f7d14: 0x5443003a  bnel        $v0, $v1, . + 4 + (0x3A << 2)
label_2f7d18:
    if (ctx->pc == 0x2F7D18u) {
        ctx->pc = 0x2F7D18u;
            // 0x2f7d18: 0x11182b  sltu        $v1, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->pc = 0x2F7D1Cu;
        goto label_2f7d1c;
    }
    ctx->pc = 0x2F7D14u;
    {
        const bool branch_taken_0x2f7d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f7d14) {
            ctx->pc = 0x2F7D18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7D14u;
            // 0x2f7d18: 0x11182b  sltu        $v1, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7E00u;
            goto label_2f7e00;
        }
    }
    ctx->pc = 0x2F7D1Cu;
label_2f7d1c:
    // 0x2f7d1c: 0x16200037  bnez        $s1, . + 4 + (0x37 << 2)
label_2f7d20:
    if (ctx->pc == 0x2F7D20u) {
        ctx->pc = 0x2F7D24u;
        goto label_2f7d24;
    }
    ctx->pc = 0x2F7D1Cu;
    {
        const bool branch_taken_0x2f7d1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7d1c) {
            ctx->pc = 0x2F7DFCu;
            goto label_2f7dfc;
        }
    }
    ctx->pc = 0x2F7D24u;
label_2f7d24:
    // 0x2f7d24: 0x10000042  b           . + 4 + (0x42 << 2)
label_2f7d28:
    if (ctx->pc == 0x2F7D28u) {
        ctx->pc = 0x2F7D28u;
            // 0x2f7d28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7D2Cu;
        goto label_2f7d2c;
    }
    ctx->pc = 0x2F7D24u;
    {
        const bool branch_taken_0x2f7d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7D24u;
            // 0x2f7d28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7d24) {
            ctx->pc = 0x2F7E30u;
            goto label_2f7e30;
        }
    }
    ctx->pc = 0x2F7D2Cu;
label_2f7d2c:
    // 0x2f7d2c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2f7d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f7d30:
    // 0x2f7d30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f7d30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f7d34:
    // 0x2f7d34: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f7d34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f7d38:
    // 0x2f7d38: 0x320f809  jalr        $t9
label_2f7d3c:
    if (ctx->pc == 0x2F7D3Cu) {
        ctx->pc = 0x2F7D40u;
        goto label_2f7d40;
    }
    ctx->pc = 0x2F7D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F7D40u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F7D40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F7D40u; }
            if (ctx->pc != 0x2F7D40u) { return; }
        }
        }
    }
    ctx->pc = 0x2F7D40u;
label_2f7d40:
    // 0x2f7d40: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2f7d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f7d44:
    // 0x2f7d44: 0x1443002d  bne         $v0, $v1, . + 4 + (0x2D << 2)
label_2f7d48:
    if (ctx->pc == 0x2F7D48u) {
        ctx->pc = 0x2F7D4Cu;
        goto label_2f7d4c;
    }
    ctx->pc = 0x2F7D44u;
    {
        const bool branch_taken_0x2f7d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f7d44) {
            ctx->pc = 0x2F7DFCu;
            goto label_2f7dfc;
        }
    }
    ctx->pc = 0x2F7D4Cu;
label_2f7d4c:
    // 0x2f7d4c: 0x1620002b  bnez        $s1, . + 4 + (0x2B << 2)
label_2f7d50:
    if (ctx->pc == 0x2F7D50u) {
        ctx->pc = 0x2F7D54u;
        goto label_2f7d54;
    }
    ctx->pc = 0x2F7D4Cu;
    {
        const bool branch_taken_0x2f7d4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7d4c) {
            ctx->pc = 0x2F7DFCu;
            goto label_2f7dfc;
        }
    }
    ctx->pc = 0x2F7D54u;
label_2f7d54:
    // 0x2f7d54: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f7d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f7d58:
    // 0x2f7d58: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2f7d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_2f7d5c:
    // 0x2f7d5c: 0x8c420964  lw          $v0, 0x964($v0)
    ctx->pc = 0x2f7d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2404)));
label_2f7d60:
    // 0x2f7d60: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2f7d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_2f7d64:
    // 0x2f7d64: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_2f7d68:
    if (ctx->pc == 0x2F7D68u) {
        ctx->pc = 0x2F7D68u;
            // 0x2f7d68: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F7D6Cu;
        goto label_2f7d6c;
    }
    ctx->pc = 0x2F7D64u;
    {
        const bool branch_taken_0x2f7d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7d64) {
            ctx->pc = 0x2F7D68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7D64u;
            // 0x2f7d68: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7DC0u;
            goto label_2f7dc0;
        }
    }
    ctx->pc = 0x2F7D6Cu;
label_2f7d6c:
    // 0x2f7d6c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2f7d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f7d70:
    // 0x2f7d70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f7d70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f7d74:
    // 0x2f7d74: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f7d74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f7d78:
    // 0x2f7d78: 0x320f809  jalr        $t9
label_2f7d7c:
    if (ctx->pc == 0x2F7D7Cu) {
        ctx->pc = 0x2F7D80u;
        goto label_2f7d80;
    }
    ctx->pc = 0x2F7D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F7D80u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F7D80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F7D80u; }
            if (ctx->pc != 0x2F7D80u) { return; }
        }
        }
    }
    ctx->pc = 0x2F7D80u;
label_2f7d80:
    // 0x2f7d80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f7d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f7d84:
    // 0x2f7d84: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_2f7d88:
    if (ctx->pc == 0x2F7D88u) {
        ctx->pc = 0x2F7D8Cu;
        goto label_2f7d8c;
    }
    ctx->pc = 0x2F7D84u;
    {
        const bool branch_taken_0x2f7d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f7d84) {
            ctx->pc = 0x2F7DACu;
            goto label_2f7dac;
        }
    }
    ctx->pc = 0x2F7D8Cu;
label_2f7d8c:
    // 0x2f7d8c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2f7d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f7d90:
    // 0x2f7d90: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f7d90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f7d94:
    // 0x2f7d94: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f7d94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f7d98:
    // 0x2f7d98: 0x320f809  jalr        $t9
label_2f7d9c:
    if (ctx->pc == 0x2F7D9Cu) {
        ctx->pc = 0x2F7DA0u;
        goto label_2f7da0;
    }
    ctx->pc = 0x2F7D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F7DA0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F7DA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F7DA0u; }
            if (ctx->pc != 0x2F7DA0u) { return; }
        }
        }
    }
    ctx->pc = 0x2F7DA0u;
label_2f7da0:
    // 0x2f7da0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2f7da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f7da4:
    // 0x2f7da4: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_2f7da8:
    if (ctx->pc == 0x2F7DA8u) {
        ctx->pc = 0x2F7DACu;
        goto label_2f7dac;
    }
    ctx->pc = 0x2F7DA4u;
    {
        const bool branch_taken_0x2f7da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f7da4) {
            ctx->pc = 0x2F7DBCu;
            goto label_2f7dbc;
        }
    }
    ctx->pc = 0x2F7DACu;
label_2f7dac:
    // 0x2f7dac: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_2f7db0:
    if (ctx->pc == 0x2F7DB0u) {
        ctx->pc = 0x2F7DB4u;
        goto label_2f7db4;
    }
    ctx->pc = 0x2F7DACu;
    {
        const bool branch_taken_0x2f7dac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7dac) {
            ctx->pc = 0x2F7DBCu;
            goto label_2f7dbc;
        }
    }
    ctx->pc = 0x2F7DB4u;
label_2f7db4:
    // 0x2f7db4: 0x1000000f  b           . + 4 + (0xF << 2)
label_2f7db8:
    if (ctx->pc == 0x2F7DB8u) {
        ctx->pc = 0x2F7DB8u;
            // 0x2f7db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7DBCu;
        goto label_2f7dbc;
    }
    ctx->pc = 0x2F7DB4u;
    {
        const bool branch_taken_0x2f7db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7DB4u;
            // 0x2f7db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7db4) {
            ctx->pc = 0x2F7DF4u;
            goto label_2f7df4;
        }
    }
    ctx->pc = 0x2F7DBCu;
label_2f7dbc:
    // 0x2f7dbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f7dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f7dc0:
    // 0x2f7dc0: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x2f7dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_2f7dc4:
    // 0x2f7dc4: 0xa24300dd  sb          $v1, 0xDD($s2)
    ctx->pc = 0x2f7dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 221), (uint8_t)GPR_U32(ctx, 3));
label_2f7dc8:
    // 0x2f7dc8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f7dc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2f7dcc:
    // 0x2f7dcc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2f7dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2f7dd0:
    // 0x2f7dd0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f7dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f7dd4:
    // 0x2f7dd4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2f7dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_2f7dd8:
    // 0x2f7dd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f7dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f7ddc:
    // 0x2f7ddc: 0x244222f8  addiu       $v0, $v0, 0x22F8
    ctx->pc = 0x2f7ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8952));
label_2f7de0:
    // 0x2f7de0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f7de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f7de4:
    // 0x2f7de4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2f7de4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f7de8:
    // 0x2f7de8: 0xc0bdfd4  jal         func_2F7F50
label_2f7dec:
    if (ctx->pc == 0x2F7DECu) {
        ctx->pc = 0x2F7DECu;
            // 0x2f7dec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7DF0u;
        goto label_2f7df0;
    }
    ctx->pc = 0x2F7DE8u;
    SET_GPR_U32(ctx, 31, 0x2F7DF0u);
    ctx->pc = 0x2F7DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7DE8u;
            // 0x2f7dec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7F50u;
    if (runtime->hasFunction(0x2F7F50u)) {
        auto targetFn = runtime->lookupFunction(0x2F7F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7DF0u; }
        if (ctx->pc != 0x2F7DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7F50_0x2f7f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7DF0u; }
        if (ctx->pc != 0x2F7DF0u) { return; }
    }
    ctx->pc = 0x2F7DF0u;
label_2f7df0:
    // 0x2f7df0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f7df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f7df4:
    // 0x2f7df4: 0x1000000f  b           . + 4 + (0xF << 2)
label_2f7df8:
    if (ctx->pc == 0x2F7DF8u) {
        ctx->pc = 0x2F7DF8u;
            // 0x2f7df8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x2F7DFCu;
        goto label_2f7dfc;
    }
    ctx->pc = 0x2F7DF4u;
    {
        const bool branch_taken_0x2f7df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7DF4u;
            // 0x2f7df8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7df4) {
            ctx->pc = 0x2F7E34u;
            goto label_2f7e34;
        }
    }
    ctx->pc = 0x2F7DFCu;
label_2f7dfc:
    // 0x2f7dfc: 0x11182b  sltu        $v1, $zero, $s1
    ctx->pc = 0x2f7dfcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_2f7e00:
    // 0x2f7e00: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x2f7e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_2f7e04:
    // 0x2f7e04: 0xa24300dd  sb          $v1, 0xDD($s2)
    ctx->pc = 0x2f7e04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 221), (uint8_t)GPR_U32(ctx, 3));
label_2f7e08:
    // 0x2f7e08: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f7e08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2f7e0c:
    // 0x2f7e0c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2f7e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2f7e10:
    // 0x2f7e10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f7e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f7e14:
    // 0x2f7e14: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2f7e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_2f7e18:
    // 0x2f7e18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f7e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f7e1c:
    // 0x2f7e1c: 0x24422308  addiu       $v0, $v0, 0x2308
    ctx->pc = 0x2f7e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8968));
label_2f7e20:
    // 0x2f7e20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f7e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f7e24:
    // 0x2f7e24: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2f7e24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f7e28:
    // 0x2f7e28: 0xc0bdfd4  jal         func_2F7F50
label_2f7e2c:
    if (ctx->pc == 0x2F7E2Cu) {
        ctx->pc = 0x2F7E2Cu;
            // 0x2f7e2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7E30u;
        goto label_2f7e30;
    }
    ctx->pc = 0x2F7E28u;
    SET_GPR_U32(ctx, 31, 0x2F7E30u);
    ctx->pc = 0x2F7E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7E28u;
            // 0x2f7e2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7F50u;
    if (runtime->hasFunction(0x2F7F50u)) {
        auto targetFn = runtime->lookupFunction(0x2F7F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7E30u; }
        if (ctx->pc != 0x2F7E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7F50_0x2f7f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7E30u; }
        if (ctx->pc != 0x2F7E30u) { return; }
    }
    ctx->pc = 0x2F7E30u;
label_2f7e30:
    // 0x2f7e30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f7e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f7e34:
    // 0x2f7e34: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2f7e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f7e38:
    // 0x2f7e38: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f7e38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f7e3c:
    // 0x2f7e3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f7e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f7e40:
    // 0x2f7e40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f7e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f7e44:
    // 0x2f7e44: 0x3e00008  jr          $ra
label_2f7e48:
    if (ctx->pc == 0x2F7E48u) {
        ctx->pc = 0x2F7E48u;
            // 0x2f7e48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2F7E4Cu;
        goto label_2f7e4c;
    }
    ctx->pc = 0x2F7E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7E44u;
            // 0x2f7e48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F7E4Cu;
label_2f7e4c:
    // 0x2f7e4c: 0x0  nop
    ctx->pc = 0x2f7e4cu;
    // NOP
}
