#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00135CD0
// Address: 0x135cd0 - 0x135e30
void sub_00135CD0_0x135cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135CD0_0x135cd0");
#endif

    switch (ctx->pc) {
        case 0x135d58u: goto label_135d58;
        case 0x135d68u: goto label_135d68;
        case 0x135d78u: goto label_135d78;
        case 0x135decu: goto label_135dec;
        case 0x135dfcu: goto label_135dfc;
        case 0x135e0cu: goto label_135e0c;
        case 0x135e1cu: goto label_135e1c;
        default: break;
    }

    ctx->pc = 0x135cd0u;

    // 0x135cd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x135cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x135cd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x135cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x135cd8: 0x8f828368  lw          $v0, -0x7C98($gp)
    ctx->pc = 0x135cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935400)));
    // 0x135cdc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x135CDCu;
    {
        const bool branch_taken_0x135cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135cdc) {
            ctx->pc = 0x135CE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135CDCu;
            // 0x135ce0: 0x8ca90000  lw          $t1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135CECu;
            goto label_135cec;
        }
    }
    ctx->pc = 0x135CE4u;
    // 0x135ce4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x135CE4u;
    {
        const bool branch_taken_0x135ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135CE4u;
            // 0x135ce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135ce4) {
            ctx->pc = 0x135E20u;
            goto label_135e20;
        }
    }
    ctx->pc = 0x135CECu;
label_135cec:
    // 0x135cec: 0x3c03000c  lui         $v1, 0xC
    ctx->pc = 0x135cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12 << 16));
    // 0x135cf0: 0x8ca80024  lw          $t0, 0x24($a1)
    ctx->pc = 0x135cf0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x135cf4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x135cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x135cf8: 0x8ca7001c  lw          $a3, 0x1C($a1)
    ctx->pc = 0x135cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x135cfc: 0x24860008  addiu       $a2, $a0, 0x8
    ctx->pc = 0x135cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x135d00: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x135d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x135d04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x135d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x135d08: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x135D08u;
    {
        const bool branch_taken_0x135d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135D08u;
            // 0x135d0c: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135d08) {
            ctx->pc = 0x135D88u;
            goto label_135d88;
        }
    }
    ctx->pc = 0x135D10u;
    // 0x135d10: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x135d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x135d14: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x135d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x135d18: 0x30630e77  andi        $v1, $v1, 0xE77
    ctx->pc = 0x135d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3703);
    // 0x135d1c: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x135D1Cu;
    {
        const bool branch_taken_0x135d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x135d1c) {
            ctx->pc = 0x135D20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135D1Cu;
            // 0x135d20: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135D70u;
            goto label_135d70;
        }
    }
    ctx->pc = 0x135D24u;
    // 0x135d24: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x135d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x135d28: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x135D28u;
    {
        const bool branch_taken_0x135d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x135d28) {
            ctx->pc = 0x135D2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135D28u;
            // 0x135d2c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135D60u;
            goto label_135d60;
        }
    }
    ctx->pc = 0x135D30u;
    // 0x135d30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x135d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x135d34: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x135D34u;
    {
        const bool branch_taken_0x135d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x135d34) {
            ctx->pc = 0x135D38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135D34u;
            // 0x135d38: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135D50u;
            goto label_135d50;
        }
    }
    ctx->pc = 0x135D3Cu;
    // 0x135d3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x135d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135d40: 0x50620037  beql        $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x135D40u;
    {
        const bool branch_taken_0x135d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x135d40) {
            ctx->pc = 0x135D44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135D40u;
            // 0x135d44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135E20u;
            goto label_135e20;
        }
    }
    ctx->pc = 0x135D48u;
    // 0x135d48: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x135D48u;
    {
        const bool branch_taken_0x135d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135d48) {
            ctx->pc = 0x135E1Cu;
            goto label_135e1c;
        }
    }
    ctx->pc = 0x135D50u;
label_135d50:
    // 0x135d50: 0xc04e0b0  jal         func_1382C0
    ctx->pc = 0x135D50u;
    SET_GPR_U32(ctx, 31, 0x135D58u);
    ctx->pc = 0x135D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135D50u;
            // 0x135d54: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1382C0u;
    if (runtime->hasFunction(0x1382C0u)) {
        auto targetFn = runtime->lookupFunction(0x1382C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135D58u; }
        if (ctx->pc != 0x135D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001382C0_0x1382c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135D58u; }
        if (ctx->pc != 0x135D58u) { return; }
    }
    ctx->pc = 0x135D58u;
label_135d58:
    // 0x135d58: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x135D58u;
    {
        const bool branch_taken_0x135d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135d58) {
            ctx->pc = 0x135E1Cu;
            goto label_135e1c;
        }
    }
    ctx->pc = 0x135D60u;
label_135d60:
    // 0x135d60: 0xc04e094  jal         func_138250
    ctx->pc = 0x135D60u;
    SET_GPR_U32(ctx, 31, 0x135D68u);
    ctx->pc = 0x135D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135D60u;
            // 0x135d64: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138250u;
    if (runtime->hasFunction(0x138250u)) {
        auto targetFn = runtime->lookupFunction(0x138250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135D68u; }
        if (ctx->pc != 0x135D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138250_0x138250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135D68u; }
        if (ctx->pc != 0x135D68u) { return; }
    }
    ctx->pc = 0x135D68u;
label_135d68:
    // 0x135d68: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x135D68u;
    {
        const bool branch_taken_0x135d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135d68) {
            ctx->pc = 0x135E1Cu;
            goto label_135e1c;
        }
    }
    ctx->pc = 0x135D70u;
label_135d70:
    // 0x135d70: 0xc04e108  jal         func_138420
    ctx->pc = 0x135D70u;
    SET_GPR_U32(ctx, 31, 0x135D78u);
    ctx->pc = 0x135D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135D70u;
            // 0x135d74: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138420u;
    if (runtime->hasFunction(0x138420u)) {
        auto targetFn = runtime->lookupFunction(0x138420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135D78u; }
        if (ctx->pc != 0x135D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138420_0x138420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135D78u; }
        if (ctx->pc != 0x135D78u) { return; }
    }
    ctx->pc = 0x135D78u;
label_135d78:
    // 0x135d78: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x135D78u;
    {
        const bool branch_taken_0x135d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135d78) {
            ctx->pc = 0x135E1Cu;
            goto label_135e1c;
        }
    }
    ctx->pc = 0x135D80u;
    // 0x135d80: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x135D80u;
    {
        const bool branch_taken_0x135d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135D80u;
            // 0x135d84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135d80) {
            ctx->pc = 0x135E20u;
            goto label_135e20;
        }
    }
    ctx->pc = 0x135D88u;
label_135d88:
    // 0x135d88: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x135d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x135d8c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x135d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x135d90: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x135D90u;
    {
        const bool branch_taken_0x135d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135d90) {
            ctx->pc = 0x135E1Cu;
            goto label_135e1c;
        }
    }
    ctx->pc = 0x135D98u;
    // 0x135d98: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x135d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x135d9c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x135d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x135da0: 0x30630e77  andi        $v1, $v1, 0xE77
    ctx->pc = 0x135da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3703);
    // 0x135da4: 0x5062001b  beql        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x135DA4u;
    {
        const bool branch_taken_0x135da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x135da4) {
            ctx->pc = 0x135DA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135DA4u;
            // 0x135da8: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135E14u;
            goto label_135e14;
        }
    }
    ctx->pc = 0x135DACu;
    // 0x135dac: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x135dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x135db0: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x135DB0u;
    {
        const bool branch_taken_0x135db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x135db0) {
            ctx->pc = 0x135DB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135DB0u;
            // 0x135db4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135E04u;
            goto label_135e04;
        }
    }
    ctx->pc = 0x135DB8u;
    // 0x135db8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x135db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x135dbc: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x135DBCu;
    {
        const bool branch_taken_0x135dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x135dbc) {
            ctx->pc = 0x135DC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135DBCu;
            // 0x135dc0: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135DF4u;
            goto label_135df4;
        }
    }
    ctx->pc = 0x135DC4u;
    // 0x135dc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x135dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x135dc8: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x135DC8u;
    {
        const bool branch_taken_0x135dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x135dc8) {
            ctx->pc = 0x135DCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135DC8u;
            // 0x135dcc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135DE4u;
            goto label_135de4;
        }
    }
    ctx->pc = 0x135DD0u;
    // 0x135dd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x135dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135dd4: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x135DD4u;
    {
        const bool branch_taken_0x135dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x135dd4) {
            ctx->pc = 0x135E1Cu;
            goto label_135e1c;
        }
    }
    ctx->pc = 0x135DDCu;
    // 0x135ddc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x135DDCu;
    {
        const bool branch_taken_0x135ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135ddc) {
            ctx->pc = 0x135E1Cu;
            goto label_135e1c;
        }
    }
    ctx->pc = 0x135DE4u;
label_135de4:
    // 0x135de4: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x135DE4u;
    SET_GPR_U32(ctx, 31, 0x135DECu);
    ctx->pc = 0x135DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135DE4u;
            // 0x135de8: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (runtime->hasFunction(0x1361A0u)) {
        auto targetFn = runtime->lookupFunction(0x1361A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135DECu; }
        if (ctx->pc != 0x135DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001361A0_0x1361a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135DECu; }
        if (ctx->pc != 0x135DECu) { return; }
    }
    ctx->pc = 0x135DECu;
label_135dec:
    // 0x135dec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x135DECu;
    {
        const bool branch_taken_0x135dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135dec) {
            ctx->pc = 0x135E1Cu;
            goto label_135e1c;
        }
    }
    ctx->pc = 0x135DF4u;
label_135df4:
    // 0x135df4: 0xc04d7ac  jal         func_135EB0
    ctx->pc = 0x135DF4u;
    SET_GPR_U32(ctx, 31, 0x135DFCu);
    ctx->pc = 0x135DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135DF4u;
            // 0x135df8: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135EB0u;
    if (runtime->hasFunction(0x135EB0u)) {
        auto targetFn = runtime->lookupFunction(0x135EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135DFCu; }
        if (ctx->pc != 0x135DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135EB0_0x135eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135DFCu; }
        if (ctx->pc != 0x135DFCu) { return; }
    }
    ctx->pc = 0x135DFCu;
label_135dfc:
    // 0x135dfc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x135DFCu;
    {
        const bool branch_taken_0x135dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135dfc) {
            ctx->pc = 0x135E1Cu;
            goto label_135e1c;
        }
    }
    ctx->pc = 0x135E04u;
label_135e04:
    // 0x135e04: 0xc04da74  jal         func_1369D0
    ctx->pc = 0x135E04u;
    SET_GPR_U32(ctx, 31, 0x135E0Cu);
    ctx->pc = 0x135E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135E04u;
            // 0x135e08: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1369D0u;
    if (runtime->hasFunction(0x1369D0u)) {
        auto targetFn = runtime->lookupFunction(0x1369D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135E0Cu; }
        if (ctx->pc != 0x135E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001369D0_0x1369d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135E0Cu; }
        if (ctx->pc != 0x135E0Cu) { return; }
    }
    ctx->pc = 0x135E0Cu;
label_135e0c:
    // 0x135e0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x135E0Cu;
    {
        const bool branch_taken_0x135e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135e0c) {
            ctx->pc = 0x135E1Cu;
            goto label_135e1c;
        }
    }
    ctx->pc = 0x135E14u;
label_135e14:
    // 0x135e14: 0xc04dfb0  jal         func_137EC0
    ctx->pc = 0x135E14u;
    SET_GPR_U32(ctx, 31, 0x135E1Cu);
    ctx->pc = 0x135E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135E14u;
            // 0x135e18: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137EC0u;
    if (runtime->hasFunction(0x137EC0u)) {
        auto targetFn = runtime->lookupFunction(0x137EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135E1Cu; }
        if (ctx->pc != 0x135E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137EC0_0x137ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135E1Cu; }
        if (ctx->pc != 0x135E1Cu) { return; }
    }
    ctx->pc = 0x135E1Cu;
label_135e1c:
    // 0x135e1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x135e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_135e20:
    // 0x135e20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x135e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135e24: 0x3e00008  jr          $ra
    ctx->pc = 0x135E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135E24u;
            // 0x135e28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135E2Cu;
    // 0x135e2c: 0x0  nop
    ctx->pc = 0x135e2cu;
    // NOP
}
