#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187C88
// Address: 0x187c88 - 0x187dd0
void sub_00187C88_0x187c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187C88_0x187c88");
#endif

    switch (ctx->pc) {
        case 0x187c88u: goto label_187c88;
        case 0x187c8cu: goto label_187c8c;
        case 0x187c90u: goto label_187c90;
        case 0x187c94u: goto label_187c94;
        case 0x187c98u: goto label_187c98;
        case 0x187c9cu: goto label_187c9c;
        case 0x187ca0u: goto label_187ca0;
        case 0x187ca4u: goto label_187ca4;
        case 0x187ca8u: goto label_187ca8;
        case 0x187cacu: goto label_187cac;
        case 0x187cb0u: goto label_187cb0;
        case 0x187cb4u: goto label_187cb4;
        case 0x187cb8u: goto label_187cb8;
        case 0x187cbcu: goto label_187cbc;
        case 0x187cc0u: goto label_187cc0;
        case 0x187cc4u: goto label_187cc4;
        case 0x187cc8u: goto label_187cc8;
        case 0x187cccu: goto label_187ccc;
        case 0x187cd0u: goto label_187cd0;
        case 0x187cd4u: goto label_187cd4;
        case 0x187cd8u: goto label_187cd8;
        case 0x187cdcu: goto label_187cdc;
        case 0x187ce0u: goto label_187ce0;
        case 0x187ce4u: goto label_187ce4;
        case 0x187ce8u: goto label_187ce8;
        case 0x187cecu: goto label_187cec;
        case 0x187cf0u: goto label_187cf0;
        case 0x187cf4u: goto label_187cf4;
        case 0x187cf8u: goto label_187cf8;
        case 0x187cfcu: goto label_187cfc;
        case 0x187d00u: goto label_187d00;
        case 0x187d04u: goto label_187d04;
        case 0x187d08u: goto label_187d08;
        case 0x187d0cu: goto label_187d0c;
        case 0x187d10u: goto label_187d10;
        case 0x187d14u: goto label_187d14;
        case 0x187d18u: goto label_187d18;
        case 0x187d1cu: goto label_187d1c;
        case 0x187d20u: goto label_187d20;
        case 0x187d24u: goto label_187d24;
        case 0x187d28u: goto label_187d28;
        case 0x187d2cu: goto label_187d2c;
        case 0x187d30u: goto label_187d30;
        case 0x187d34u: goto label_187d34;
        case 0x187d38u: goto label_187d38;
        case 0x187d3cu: goto label_187d3c;
        case 0x187d40u: goto label_187d40;
        case 0x187d44u: goto label_187d44;
        case 0x187d48u: goto label_187d48;
        case 0x187d4cu: goto label_187d4c;
        case 0x187d50u: goto label_187d50;
        case 0x187d54u: goto label_187d54;
        case 0x187d58u: goto label_187d58;
        case 0x187d5cu: goto label_187d5c;
        case 0x187d60u: goto label_187d60;
        case 0x187d64u: goto label_187d64;
        case 0x187d68u: goto label_187d68;
        case 0x187d6cu: goto label_187d6c;
        case 0x187d70u: goto label_187d70;
        case 0x187d74u: goto label_187d74;
        case 0x187d78u: goto label_187d78;
        case 0x187d7cu: goto label_187d7c;
        case 0x187d80u: goto label_187d80;
        case 0x187d84u: goto label_187d84;
        case 0x187d88u: goto label_187d88;
        case 0x187d8cu: goto label_187d8c;
        case 0x187d90u: goto label_187d90;
        case 0x187d94u: goto label_187d94;
        case 0x187d98u: goto label_187d98;
        case 0x187d9cu: goto label_187d9c;
        case 0x187da0u: goto label_187da0;
        case 0x187da4u: goto label_187da4;
        case 0x187da8u: goto label_187da8;
        case 0x187dacu: goto label_187dac;
        case 0x187db0u: goto label_187db0;
        case 0x187db4u: goto label_187db4;
        case 0x187db8u: goto label_187db8;
        case 0x187dbcu: goto label_187dbc;
        case 0x187dc0u: goto label_187dc0;
        case 0x187dc4u: goto label_187dc4;
        case 0x187dc8u: goto label_187dc8;
        case 0x187dccu: goto label_187dcc;
        default: break;
    }

    ctx->pc = 0x187c88u;

label_187c88:
    // 0x187c88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_187c8c:
    // 0x187c8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x187c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187c90:
    // 0x187c90: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x187c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_187c94:
    // 0x187c94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x187c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_187c98:
    // 0x187c98: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x187c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_187c9c:
    // 0x187c9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x187c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_187ca0:
    // 0x187ca0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x187ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187ca4:
    // 0x187ca4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x187ca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187ca8:
    // 0x187ca8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x187ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_187cac:
    // 0x187cac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x187cacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187cb0:
    // 0x187cb0: 0xc05f1dc  jal         func_17C770
label_187cb4:
    if (ctx->pc == 0x187CB4u) {
        ctx->pc = 0x187CB4u;
            // 0x187cb4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x187CB8u;
        goto label_187cb8;
    }
    ctx->pc = 0x187CB0u;
    SET_GPR_U32(ctx, 31, 0x187CB8u);
    ctx->pc = 0x187CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187CB0u;
            // 0x187cb4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C770u;
    if (runtime->hasFunction(0x17C770u)) {
        auto targetFn = runtime->lookupFunction(0x17C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187CB8u; }
        if (ctx->pc != 0x187CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C770_0x17c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187CB8u; }
        if (ctx->pc != 0x187CB8u) { return; }
    }
    ctx->pc = 0x187CB8u;
label_187cb8:
    // 0x187cb8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x187cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_187cbc:
    // 0x187cbc: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x187cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_187cc0:
    // 0x187cc0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x187cc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_187cc4:
    // 0x187cc4: 0x3e00008  jr          $ra
label_187cc8:
    if (ctx->pc == 0x187CC8u) {
        ctx->pc = 0x187CC8u;
            // 0x187cc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x187CCCu;
        goto label_187ccc;
    }
    ctx->pc = 0x187CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187CC4u;
            // 0x187cc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187CCCu;
label_187ccc:
    // 0x187ccc: 0x0  nop
    ctx->pc = 0x187cccu;
    // NOP
label_187cd0:
    // 0x187cd0: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x187cd0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_187cd4:
    // 0x187cd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x187cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_187cd8:
    // 0x187cd8: 0x3e00008  jr          $ra
label_187cdc:
    if (ctx->pc == 0x187CDCu) {
        ctx->pc = 0x187CDCu;
            // 0x187cdc: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x187CE0u;
        goto label_187ce0;
    }
    ctx->pc = 0x187CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187CD8u;
            // 0x187cdc: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187CE0u;
label_187ce0:
    // 0x187ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_187ce4:
    // 0x187ce4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x187ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_187ce8:
    // 0x187ce8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_187cec:
    // 0x187cec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x187cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_187cf0:
    // 0x187cf0: 0x2442fe20  addiu       $v0, $v0, -0x1E0
    ctx->pc = 0x187cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966816));
label_187cf4:
    // 0x187cf4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x187cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_187cf8:
    // 0x187cf8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_187cfc:
    if (ctx->pc == 0x187CFCu) {
        ctx->pc = 0x187CFCu;
            // 0x187cfc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x187D00u;
        goto label_187d00;
    }
    ctx->pc = 0x187CF8u;
    {
        const bool branch_taken_0x187cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x187CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187CF8u;
            // 0x187cfc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187cf8) {
            ctx->pc = 0x187D30u;
            goto label_187d30;
        }
    }
    ctx->pc = 0x187D00u;
label_187d00:
    // 0x187d00: 0x60f809  jalr        $v1
label_187d04:
    if (ctx->pc == 0x187D04u) {
        ctx->pc = 0x187D04u;
            // 0x187d04: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x187D08u;
        goto label_187d08;
    }
    ctx->pc = 0x187D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x187D08u);
        ctx->pc = 0x187D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187D00u;
            // 0x187d04: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x187D08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x187D08u; }
            if (ctx->pc != 0x187D08u) { return; }
        }
        }
    }
    ctx->pc = 0x187D08u;
label_187d08:
    // 0x187d08: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x187d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_187d0c:
    // 0x187d0c: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x187d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_187d10:
    // 0x187d10: 0x24446914  addiu       $a0, $v0, 0x6914
    ctx->pc = 0x187d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26900));
label_187d14:
    // 0x187d14: 0x24636910  addiu       $v1, $v1, 0x6910
    ctx->pc = 0x187d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26896));
label_187d18:
    // 0x187d18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x187d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_187d1c:
    // 0x187d1c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_187d20:
    if (ctx->pc == 0x187D20u) {
        ctx->pc = 0x187D20u;
            // 0x187d20: 0xac900000  sw          $s0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
        ctx->pc = 0x187D24u;
        goto label_187d24;
    }
    ctx->pc = 0x187D1Cu;
    {
        const bool branch_taken_0x187d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187d1c) {
            ctx->pc = 0x187D20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x187D1Cu;
            // 0x187d20: 0xac900000  sw          $s0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x187D24u;
            goto label_187d24;
        }
    }
    ctx->pc = 0x187D24u;
label_187d24:
    // 0x187d24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x187d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_187d28:
    // 0x187d28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x187d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_187d2c:
    // 0x187d2c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x187d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_187d30:
    // 0x187d30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187d34:
    // 0x187d34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x187d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_187d38:
    // 0x187d38: 0x3e00008  jr          $ra
label_187d3c:
    if (ctx->pc == 0x187D3Cu) {
        ctx->pc = 0x187D3Cu;
            // 0x187d3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x187D40u;
        goto label_187d40;
    }
    ctx->pc = 0x187D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187D38u;
            // 0x187d3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187D40u;
label_187d40:
    // 0x187d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_187d44:
    // 0x187d44: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x187d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_187d48:
    // 0x187d48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x187d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_187d4c:
    // 0x187d4c: 0x3c11006d  lui         $s1, 0x6D
    ctx->pc = 0x187d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)109 << 16));
label_187d50:
    // 0x187d50: 0x8e22fe28  lw          $v0, -0x1D8($s1)
    ctx->pc = 0x187d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294966824)));
label_187d54:
    // 0x187d54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_187d58:
    // 0x187d58: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_187d5c:
    if (ctx->pc == 0x187D5Cu) {
        ctx->pc = 0x187D5Cu;
            // 0x187d5c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x187D60u;
        goto label_187d60;
    }
    ctx->pc = 0x187D58u;
    {
        const bool branch_taken_0x187d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187D58u;
            // 0x187d5c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d58) {
            ctx->pc = 0x187DB8u;
            goto label_187db8;
        }
    }
    ctx->pc = 0x187D60u;
label_187d60:
    // 0x187d60: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x187d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_187d64:
    // 0x187d64: 0x24426910  addiu       $v0, $v0, 0x6910
    ctx->pc = 0x187d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26896));
label_187d68:
    // 0x187d68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x187d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_187d6c:
    // 0x187d6c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x187d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_187d70:
    // 0x187d70: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x187d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_187d74:
    // 0x187d74: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x187d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_187d78:
    // 0x187d78: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
label_187d7c:
    if (ctx->pc == 0x187D7Cu) {
        ctx->pc = 0x187D7Cu;
            // 0x187d7c: 0x2623fe28  addiu       $v1, $s1, -0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966824));
        ctx->pc = 0x187D80u;
        goto label_187d80;
    }
    ctx->pc = 0x187D78u;
    {
        const bool branch_taken_0x187d78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x187D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187D78u;
            // 0x187d7c: 0x2623fe28  addiu       $v1, $s1, -0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d78) {
            ctx->pc = 0x187DACu;
            goto label_187dac;
        }
    }
    ctx->pc = 0x187D80u;
label_187d80:
    // 0x187d80: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x187d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_187d84:
    // 0x187d84: 0x24506914  addiu       $s0, $v0, 0x6914
    ctx->pc = 0x187d84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 26900));
label_187d88:
    // 0x187d88: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x187d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_187d8c:
    // 0x187d8c: 0x10660005  beq         $v1, $a2, . + 4 + (0x5 << 2)
label_187d90:
    if (ctx->pc == 0x187D90u) {
        ctx->pc = 0x187D94u;
        goto label_187d94;
    }
    ctx->pc = 0x187D8Cu;
    {
        const bool branch_taken_0x187d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x187d8c) {
            ctx->pc = 0x187DA4u;
            goto label_187da4;
        }
    }
    ctx->pc = 0x187D94u;
label_187d94:
    // 0x187d94: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x187d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_187d98:
    // 0x187d98: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x187d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_187d9c:
    // 0x187d9c: 0xc061fc0  jal         func_187F00
label_187da0:
    if (ctx->pc == 0x187DA0u) {
        ctx->pc = 0x187DA0u;
            // 0x187da0: 0x24847f30  addiu       $a0, $a0, 0x7F30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32560));
        ctx->pc = 0x187DA4u;
        goto label_187da4;
    }
    ctx->pc = 0x187D9Cu;
    SET_GPR_U32(ctx, 31, 0x187DA4u);
    ctx->pc = 0x187DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187D9Cu;
            // 0x187da0: 0x24847f30  addiu       $a0, $a0, 0x7F30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187F00u;
    if (runtime->hasFunction(0x187F00u)) {
        auto targetFn = runtime->lookupFunction(0x187F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187DA4u; }
        if (ctx->pc != 0x187DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187F00_0x187f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187DA4u; }
        if (ctx->pc != 0x187DA4u) { return; }
    }
    ctx->pc = 0x187DA4u;
label_187da4:
    // 0x187da4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x187da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_187da8:
    // 0x187da8: 0x2623fe28  addiu       $v1, $s1, -0x1D8
    ctx->pc = 0x187da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966824));
label_187dac:
    // 0x187dac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x187dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_187db0:
    // 0x187db0: 0x40f809  jalr        $v0
label_187db4:
    if (ctx->pc == 0x187DB4u) {
        ctx->pc = 0x187DB4u;
            // 0x187db4: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = 0x187DB8u;
        goto label_187db8;
    }
    ctx->pc = 0x187DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187DB8u);
        ctx->pc = 0x187DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187DB0u;
            // 0x187db4: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x187DB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x187DB8u; }
            if (ctx->pc != 0x187DB8u) { return; }
        }
        }
    }
    ctx->pc = 0x187DB8u;
label_187db8:
    // 0x187db8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187dbc:
    // 0x187dbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x187dbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_187dc0:
    // 0x187dc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x187dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_187dc4:
    // 0x187dc4: 0x3e00008  jr          $ra
label_187dc8:
    if (ctx->pc == 0x187DC8u) {
        ctx->pc = 0x187DC8u;
            // 0x187dc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x187DCCu;
        goto label_187dcc;
    }
    ctx->pc = 0x187DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187DC4u;
            // 0x187dc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187DCCu;
label_187dcc:
    // 0x187dcc: 0x0  nop
    ctx->pc = 0x187dccu;
    // NOP
}
