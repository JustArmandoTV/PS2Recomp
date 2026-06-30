#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D1D30
// Address: 0x2d1d30 - 0x2d1f80
void sub_002D1D30_0x2d1d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1D30_0x2d1d30");
#endif

    switch (ctx->pc) {
        case 0x2d1d78u: goto label_2d1d78;
        case 0x2d1d8cu: goto label_2d1d8c;
        case 0x2d1d98u: goto label_2d1d98;
        case 0x2d1da4u: goto label_2d1da4;
        case 0x2d1dacu: goto label_2d1dac;
        case 0x2d1dbcu: goto label_2d1dbc;
        case 0x2d1ddcu: goto label_2d1ddc;
        case 0x2d1df0u: goto label_2d1df0;
        case 0x2d1dfcu: goto label_2d1dfc;
        case 0x2d1e08u: goto label_2d1e08;
        case 0x2d1e10u: goto label_2d1e10;
        case 0x2d1e20u: goto label_2d1e20;
        case 0x2d1e2cu: goto label_2d1e2c;
        case 0x2d1e34u: goto label_2d1e34;
        case 0x2d1e48u: goto label_2d1e48;
        case 0x2d1e74u: goto label_2d1e74;
        case 0x2d1e88u: goto label_2d1e88;
        case 0x2d1e94u: goto label_2d1e94;
        case 0x2d1ea0u: goto label_2d1ea0;
        case 0x2d1ea8u: goto label_2d1ea8;
        case 0x2d1eb8u: goto label_2d1eb8;
        case 0x2d1ed8u: goto label_2d1ed8;
        case 0x2d1eecu: goto label_2d1eec;
        case 0x2d1ef8u: goto label_2d1ef8;
        case 0x2d1f04u: goto label_2d1f04;
        case 0x2d1f0cu: goto label_2d1f0c;
        case 0x2d1f1cu: goto label_2d1f1c;
        case 0x2d1f28u: goto label_2d1f28;
        case 0x2d1f30u: goto label_2d1f30;
        case 0x2d1f44u: goto label_2d1f44;
        case 0x2d1f5cu: goto label_2d1f5c;
        default: break;
    }

    ctx->pc = 0x2d1d30u;

label_2d1d30:
    // 0x2d1d30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d1d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d1d34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d1d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d1d38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d1d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d1d3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d1d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d1d40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d1d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d1d44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d1d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d1d48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d1d48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d4c: 0x8cb30000  lw          $s3, 0x0($a1)
    ctx->pc = 0x2d1d4cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d1d50: 0x1260003d  beqz        $s3, . + 4 + (0x3D << 2)
    ctx->pc = 0x2D1D50u;
    {
        const bool branch_taken_0x2d1d50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1D50u;
            // 0x2d1d54: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1d50) {
            ctx->pc = 0x2D1E48u;
            goto label_2d1e48;
        }
    }
    ctx->pc = 0x2D1D58u;
    // 0x2d1d58: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x2d1d58u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d1d5c: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D1D5Cu;
    {
        const bool branch_taken_0x2d1d5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1d5c) {
            ctx->pc = 0x2D1D60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1D5Cu;
            // 0x2d1d60: 0x8e720004  lw          $s2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1DC0u;
            goto label_2d1dc0;
        }
    }
    ctx->pc = 0x2D1D64u;
    // 0x2d1d64: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d1d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d1d68: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1D68u;
    {
        const bool branch_taken_0x2d1d68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1d68) {
            ctx->pc = 0x2D1D6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1D68u;
            // 0x2d1d6c: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1D7Cu;
            goto label_2d1d7c;
        }
    }
    ctx->pc = 0x2D1D70u;
    // 0x2d1d70: 0xc0b474c  jal         func_2D1D30
    ctx->pc = 0x2D1D70u;
    SET_GPR_U32(ctx, 31, 0x2D1D78u);
    ctx->pc = 0x2D1D30u;
    goto label_2d1d30;
    ctx->pc = 0x2D1D78u;
label_2d1d78:
    // 0x2d1d78: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x2d1d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2d1d7c:
    // 0x2d1d7c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1D7Cu;
    {
        const bool branch_taken_0x2d1d7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1d7c) {
            ctx->pc = 0x2D1D80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1D7Cu;
            // 0x2d1d80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1D90u;
            goto label_2d1d90;
        }
    }
    ctx->pc = 0x2D1D84u;
    // 0x2d1d84: 0xc0b474c  jal         func_2D1D30
    ctx->pc = 0x2D1D84u;
    SET_GPR_U32(ctx, 31, 0x2D1D8Cu);
    ctx->pc = 0x2D1D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1D84u;
            // 0x2d1d88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D30u;
    goto label_2d1d30;
    ctx->pc = 0x2D1D8Cu;
label_2d1d8c:
    // 0x2d1d8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d1d90:
    // 0x2d1d90: 0xc0b47f0  jal         func_2D1FC0
    ctx->pc = 0x2D1D90u;
    SET_GPR_U32(ctx, 31, 0x2D1D98u);
    ctx->pc = 0x2D1FC0u;
    if (runtime->hasFunction(0x2D1FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D1FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1D98u; }
        if (ctx->pc != 0x2D1D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1FC0_0x2d1fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1D98u; }
        if (ctx->pc != 0x2D1D98u) { return; }
    }
    ctx->pc = 0x2D1D98u;
label_2d1d98:
    // 0x2d1d98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d9c: 0xc0b47ec  jal         func_2D1FB0
    ctx->pc = 0x2D1D9Cu;
    SET_GPR_U32(ctx, 31, 0x2D1DA4u);
    ctx->pc = 0x2D1DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1D9Cu;
            // 0x2d1da0: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1FB0u;
    if (runtime->hasFunction(0x2D1FB0u)) {
        auto targetFn = runtime->lookupFunction(0x2D1FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1DA4u; }
        if (ctx->pc != 0x2D1DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1FB0_0x2d1fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1DA4u; }
        if (ctx->pc != 0x2D1DA4u) { return; }
    }
    ctx->pc = 0x2D1DA4u;
label_2d1da4:
    // 0x2d1da4: 0xc0b47e8  jal         func_2D1FA0
    ctx->pc = 0x2D1DA4u;
    SET_GPR_U32(ctx, 31, 0x2D1DACu);
    ctx->pc = 0x2D1DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1DA4u;
            // 0x2d1da8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1FA0u;
    if (runtime->hasFunction(0x2D1FA0u)) {
        auto targetFn = runtime->lookupFunction(0x2D1FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1DACu; }
        if (ctx->pc != 0x2D1DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1FA0_0x2d1fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1DACu; }
        if (ctx->pc != 0x2D1DACu) { return; }
    }
    ctx->pc = 0x2D1DACu;
label_2d1dac:
    // 0x2d1dac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1db0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d1db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1db4: 0xc0b47e0  jal         func_2D1F80
    ctx->pc = 0x2D1DB4u;
    SET_GPR_U32(ctx, 31, 0x2D1DBCu);
    ctx->pc = 0x2D1DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1DB4u;
            // 0x2d1db8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1F80u;
    if (runtime->hasFunction(0x2D1F80u)) {
        auto targetFn = runtime->lookupFunction(0x2D1F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1DBCu; }
        if (ctx->pc != 0x2D1DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1F80_0x2d1f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1DBCu; }
        if (ctx->pc != 0x2D1DBCu) { return; }
    }
    ctx->pc = 0x2D1DBCu;
label_2d1dbc:
    // 0x2d1dbc: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x2d1dbcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2d1dc0:
    // 0x2d1dc0: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D1DC0u;
    {
        const bool branch_taken_0x2d1dc0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1dc0) {
            ctx->pc = 0x2D1DC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1DC0u;
            // 0x2d1dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1E24u;
            goto label_2d1e24;
        }
    }
    ctx->pc = 0x2D1DC8u;
    // 0x2d1dc8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d1dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d1dcc: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1DCCu;
    {
        const bool branch_taken_0x2d1dcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1dcc) {
            ctx->pc = 0x2D1DD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1DCCu;
            // 0x2d1dd0: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1DE0u;
            goto label_2d1de0;
        }
    }
    ctx->pc = 0x2D1DD4u;
    // 0x2d1dd4: 0xc0b474c  jal         func_2D1D30
    ctx->pc = 0x2D1DD4u;
    SET_GPR_U32(ctx, 31, 0x2D1DDCu);
    ctx->pc = 0x2D1DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1DD4u;
            // 0x2d1dd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D30u;
    goto label_2d1d30;
    ctx->pc = 0x2D1DDCu;
label_2d1ddc:
    // 0x2d1ddc: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x2d1ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2d1de0:
    // 0x2d1de0: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1DE0u;
    {
        const bool branch_taken_0x2d1de0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1de0) {
            ctx->pc = 0x2D1DE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1DE0u;
            // 0x2d1de4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1DF4u;
            goto label_2d1df4;
        }
    }
    ctx->pc = 0x2D1DE8u;
    // 0x2d1de8: 0xc0b474c  jal         func_2D1D30
    ctx->pc = 0x2D1DE8u;
    SET_GPR_U32(ctx, 31, 0x2D1DF0u);
    ctx->pc = 0x2D1DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1DE8u;
            // 0x2d1dec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D30u;
    goto label_2d1d30;
    ctx->pc = 0x2D1DF0u;
label_2d1df0:
    // 0x2d1df0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d1df4:
    // 0x2d1df4: 0xc0b47f0  jal         func_2D1FC0
    ctx->pc = 0x2D1DF4u;
    SET_GPR_U32(ctx, 31, 0x2D1DFCu);
    ctx->pc = 0x2D1FC0u;
    if (runtime->hasFunction(0x2D1FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D1FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1DFCu; }
        if (ctx->pc != 0x2D1DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1FC0_0x2d1fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1DFCu; }
        if (ctx->pc != 0x2D1DFCu) { return; }
    }
    ctx->pc = 0x2D1DFCu;
label_2d1dfc:
    // 0x2d1dfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1e00: 0xc0b47ec  jal         func_2D1FB0
    ctx->pc = 0x2D1E00u;
    SET_GPR_U32(ctx, 31, 0x2D1E08u);
    ctx->pc = 0x2D1E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1E00u;
            // 0x2d1e04: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1FB0u;
    if (runtime->hasFunction(0x2D1FB0u)) {
        auto targetFn = runtime->lookupFunction(0x2D1FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1E08u; }
        if (ctx->pc != 0x2D1E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1FB0_0x2d1fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1E08u; }
        if (ctx->pc != 0x2D1E08u) { return; }
    }
    ctx->pc = 0x2D1E08u;
label_2d1e08:
    // 0x2d1e08: 0xc0b47e8  jal         func_2D1FA0
    ctx->pc = 0x2D1E08u;
    SET_GPR_U32(ctx, 31, 0x2D1E10u);
    ctx->pc = 0x2D1E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1E08u;
            // 0x2d1e0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1FA0u;
    if (runtime->hasFunction(0x2D1FA0u)) {
        auto targetFn = runtime->lookupFunction(0x2D1FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1E10u; }
        if (ctx->pc != 0x2D1E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1FA0_0x2d1fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1E10u; }
        if (ctx->pc != 0x2D1E10u) { return; }
    }
    ctx->pc = 0x2D1E10u;
label_2d1e10:
    // 0x2d1e10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1e14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d1e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1e18: 0xc0b47e0  jal         func_2D1F80
    ctx->pc = 0x2D1E18u;
    SET_GPR_U32(ctx, 31, 0x2D1E20u);
    ctx->pc = 0x2D1E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1E18u;
            // 0x2d1e1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1F80u;
    if (runtime->hasFunction(0x2D1F80u)) {
        auto targetFn = runtime->lookupFunction(0x2D1F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1E20u; }
        if (ctx->pc != 0x2D1E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1F80_0x2d1f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1E20u; }
        if (ctx->pc != 0x2D1E20u) { return; }
    }
    ctx->pc = 0x2D1E20u;
label_2d1e20:
    // 0x2d1e20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d1e24:
    // 0x2d1e24: 0xc0b47f0  jal         func_2D1FC0
    ctx->pc = 0x2D1E24u;
    SET_GPR_U32(ctx, 31, 0x2D1E2Cu);
    ctx->pc = 0x2D1FC0u;
    if (runtime->hasFunction(0x2D1FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D1FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1E2Cu; }
        if (ctx->pc != 0x2D1E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1FC0_0x2d1fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1E2Cu; }
        if (ctx->pc != 0x2D1E2Cu) { return; }
    }
    ctx->pc = 0x2D1E2Cu;
label_2d1e2c:
    // 0x2d1e2c: 0xc0b47e8  jal         func_2D1FA0
    ctx->pc = 0x2D1E2Cu;
    SET_GPR_U32(ctx, 31, 0x2D1E34u);
    ctx->pc = 0x2D1E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1E2Cu;
            // 0x2d1e30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1FA0u;
    if (runtime->hasFunction(0x2D1FA0u)) {
        auto targetFn = runtime->lookupFunction(0x2D1FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1E34u; }
        if (ctx->pc != 0x2D1E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1FA0_0x2d1fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1E34u; }
        if (ctx->pc != 0x2D1E34u) { return; }
    }
    ctx->pc = 0x2D1E34u;
label_2d1e34:
    // 0x2d1e34: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1E34u;
    {
        const bool branch_taken_0x2d1e34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1e34) {
            ctx->pc = 0x2D1E38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1E34u;
            // 0x2d1e38: 0x8e130004  lw          $s3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1E4Cu;
            goto label_2d1e4c;
        }
    }
    ctx->pc = 0x2D1E3Cu;
    // 0x2d1e3c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d1e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1e40: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x2D1E40u;
    SET_GPR_U32(ctx, 31, 0x2D1E48u);
    ctx->pc = 0x2D1E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1E40u;
            // 0x2d1e44: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1E48u; }
        if (ctx->pc != 0x2D1E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1E48u; }
        if (ctx->pc != 0x2D1E48u) { return; }
    }
    ctx->pc = 0x2D1E48u;
label_2d1e48:
    // 0x2d1e48: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x2d1e48u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d1e4c:
    // 0x2d1e4c: 0x5260003e  beql        $s3, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x2D1E4Cu;
    {
        const bool branch_taken_0x2d1e4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1e4c) {
            ctx->pc = 0x2D1E50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1E4Cu;
            // 0x2d1e50: 0x26230008  addiu       $v1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1F48u;
            goto label_2d1f48;
        }
    }
    ctx->pc = 0x2D1E54u;
    // 0x2d1e54: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x2d1e54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d1e58: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D1E58u;
    {
        const bool branch_taken_0x2d1e58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1e58) {
            ctx->pc = 0x2D1E5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1E58u;
            // 0x2d1e5c: 0x8e720004  lw          $s2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1EBCu;
            goto label_2d1ebc;
        }
    }
    ctx->pc = 0x2D1E60u;
    // 0x2d1e60: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d1e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d1e64: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1E64u;
    {
        const bool branch_taken_0x2d1e64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1e64) {
            ctx->pc = 0x2D1E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1E64u;
            // 0x2d1e68: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1E78u;
            goto label_2d1e78;
        }
    }
    ctx->pc = 0x2D1E6Cu;
    // 0x2d1e6c: 0xc0b474c  jal         func_2D1D30
    ctx->pc = 0x2D1E6Cu;
    SET_GPR_U32(ctx, 31, 0x2D1E74u);
    ctx->pc = 0x2D1E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1E6Cu;
            // 0x2d1e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D30u;
    goto label_2d1d30;
    ctx->pc = 0x2D1E74u;
label_2d1e74:
    // 0x2d1e74: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x2d1e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2d1e78:
    // 0x2d1e78: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1E78u;
    {
        const bool branch_taken_0x2d1e78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1e78) {
            ctx->pc = 0x2D1E7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1E78u;
            // 0x2d1e7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1E8Cu;
            goto label_2d1e8c;
        }
    }
    ctx->pc = 0x2D1E80u;
    // 0x2d1e80: 0xc0b474c  jal         func_2D1D30
    ctx->pc = 0x2D1E80u;
    SET_GPR_U32(ctx, 31, 0x2D1E88u);
    ctx->pc = 0x2D1E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1E80u;
            // 0x2d1e84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D30u;
    goto label_2d1d30;
    ctx->pc = 0x2D1E88u;
label_2d1e88:
    // 0x2d1e88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d1e8c:
    // 0x2d1e8c: 0xc0b47f0  jal         func_2D1FC0
    ctx->pc = 0x2D1E8Cu;
    SET_GPR_U32(ctx, 31, 0x2D1E94u);
    ctx->pc = 0x2D1FC0u;
    if (runtime->hasFunction(0x2D1FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D1FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1E94u; }
        if (ctx->pc != 0x2D1E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1FC0_0x2d1fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1E94u; }
        if (ctx->pc != 0x2D1E94u) { return; }
    }
    ctx->pc = 0x2D1E94u;
label_2d1e94:
    // 0x2d1e94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1e98: 0xc0b47ec  jal         func_2D1FB0
    ctx->pc = 0x2D1E98u;
    SET_GPR_U32(ctx, 31, 0x2D1EA0u);
    ctx->pc = 0x2D1E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1E98u;
            // 0x2d1e9c: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1FB0u;
    if (runtime->hasFunction(0x2D1FB0u)) {
        auto targetFn = runtime->lookupFunction(0x2D1FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1EA0u; }
        if (ctx->pc != 0x2D1EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1FB0_0x2d1fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1EA0u; }
        if (ctx->pc != 0x2D1EA0u) { return; }
    }
    ctx->pc = 0x2D1EA0u;
label_2d1ea0:
    // 0x2d1ea0: 0xc0b47e8  jal         func_2D1FA0
    ctx->pc = 0x2D1EA0u;
    SET_GPR_U32(ctx, 31, 0x2D1EA8u);
    ctx->pc = 0x2D1EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1EA0u;
            // 0x2d1ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1FA0u;
    if (runtime->hasFunction(0x2D1FA0u)) {
        auto targetFn = runtime->lookupFunction(0x2D1FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1EA8u; }
        if (ctx->pc != 0x2D1EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1FA0_0x2d1fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1EA8u; }
        if (ctx->pc != 0x2D1EA8u) { return; }
    }
    ctx->pc = 0x2D1EA8u;
label_2d1ea8:
    // 0x2d1ea8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1eac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d1eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1eb0: 0xc0b47e0  jal         func_2D1F80
    ctx->pc = 0x2D1EB0u;
    SET_GPR_U32(ctx, 31, 0x2D1EB8u);
    ctx->pc = 0x2D1EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1EB0u;
            // 0x2d1eb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1F80u;
    if (runtime->hasFunction(0x2D1F80u)) {
        auto targetFn = runtime->lookupFunction(0x2D1F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1EB8u; }
        if (ctx->pc != 0x2D1EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1F80_0x2d1f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1EB8u; }
        if (ctx->pc != 0x2D1EB8u) { return; }
    }
    ctx->pc = 0x2D1EB8u;
label_2d1eb8:
    // 0x2d1eb8: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x2d1eb8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2d1ebc:
    // 0x2d1ebc: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D1EBCu;
    {
        const bool branch_taken_0x2d1ebc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1ebc) {
            ctx->pc = 0x2D1EC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1EBCu;
            // 0x2d1ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1F20u;
            goto label_2d1f20;
        }
    }
    ctx->pc = 0x2D1EC4u;
    // 0x2d1ec4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d1ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d1ec8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1EC8u;
    {
        const bool branch_taken_0x2d1ec8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1ec8) {
            ctx->pc = 0x2D1ECCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1EC8u;
            // 0x2d1ecc: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1EDCu;
            goto label_2d1edc;
        }
    }
    ctx->pc = 0x2D1ED0u;
    // 0x2d1ed0: 0xc0b474c  jal         func_2D1D30
    ctx->pc = 0x2D1ED0u;
    SET_GPR_U32(ctx, 31, 0x2D1ED8u);
    ctx->pc = 0x2D1ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1ED0u;
            // 0x2d1ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D30u;
    goto label_2d1d30;
    ctx->pc = 0x2D1ED8u;
label_2d1ed8:
    // 0x2d1ed8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x2d1ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2d1edc:
    // 0x2d1edc: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1EDCu;
    {
        const bool branch_taken_0x2d1edc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1edc) {
            ctx->pc = 0x2D1EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1EDCu;
            // 0x2d1ee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1EF0u;
            goto label_2d1ef0;
        }
    }
    ctx->pc = 0x2D1EE4u;
    // 0x2d1ee4: 0xc0b474c  jal         func_2D1D30
    ctx->pc = 0x2D1EE4u;
    SET_GPR_U32(ctx, 31, 0x2D1EECu);
    ctx->pc = 0x2D1EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1EE4u;
            // 0x2d1ee8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D30u;
    goto label_2d1d30;
    ctx->pc = 0x2D1EECu;
label_2d1eec:
    // 0x2d1eec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d1ef0:
    // 0x2d1ef0: 0xc0b47f0  jal         func_2D1FC0
    ctx->pc = 0x2D1EF0u;
    SET_GPR_U32(ctx, 31, 0x2D1EF8u);
    ctx->pc = 0x2D1FC0u;
    if (runtime->hasFunction(0x2D1FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D1FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1EF8u; }
        if (ctx->pc != 0x2D1EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1FC0_0x2d1fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1EF8u; }
        if (ctx->pc != 0x2D1EF8u) { return; }
    }
    ctx->pc = 0x2D1EF8u;
label_2d1ef8:
    // 0x2d1ef8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1efc: 0xc0b47ec  jal         func_2D1FB0
    ctx->pc = 0x2D1EFCu;
    SET_GPR_U32(ctx, 31, 0x2D1F04u);
    ctx->pc = 0x2D1F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1EFCu;
            // 0x2d1f00: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1FB0u;
    if (runtime->hasFunction(0x2D1FB0u)) {
        auto targetFn = runtime->lookupFunction(0x2D1FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F04u; }
        if (ctx->pc != 0x2D1F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1FB0_0x2d1fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F04u; }
        if (ctx->pc != 0x2D1F04u) { return; }
    }
    ctx->pc = 0x2D1F04u;
label_2d1f04:
    // 0x2d1f04: 0xc0b47e8  jal         func_2D1FA0
    ctx->pc = 0x2D1F04u;
    SET_GPR_U32(ctx, 31, 0x2D1F0Cu);
    ctx->pc = 0x2D1F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1F04u;
            // 0x2d1f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1FA0u;
    if (runtime->hasFunction(0x2D1FA0u)) {
        auto targetFn = runtime->lookupFunction(0x2D1FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F0Cu; }
        if (ctx->pc != 0x2D1F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1FA0_0x2d1fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F0Cu; }
        if (ctx->pc != 0x2D1F0Cu) { return; }
    }
    ctx->pc = 0x2D1F0Cu;
label_2d1f0c:
    // 0x2d1f0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1f10: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d1f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1f14: 0xc0b47e0  jal         func_2D1F80
    ctx->pc = 0x2D1F14u;
    SET_GPR_U32(ctx, 31, 0x2D1F1Cu);
    ctx->pc = 0x2D1F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1F14u;
            // 0x2d1f18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1F80u;
    if (runtime->hasFunction(0x2D1F80u)) {
        auto targetFn = runtime->lookupFunction(0x2D1F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F1Cu; }
        if (ctx->pc != 0x2D1F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1F80_0x2d1f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F1Cu; }
        if (ctx->pc != 0x2D1F1Cu) { return; }
    }
    ctx->pc = 0x2D1F1Cu;
label_2d1f1c:
    // 0x2d1f1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d1f20:
    // 0x2d1f20: 0xc0b47f0  jal         func_2D1FC0
    ctx->pc = 0x2D1F20u;
    SET_GPR_U32(ctx, 31, 0x2D1F28u);
    ctx->pc = 0x2D1FC0u;
    if (runtime->hasFunction(0x2D1FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D1FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F28u; }
        if (ctx->pc != 0x2D1F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1FC0_0x2d1fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F28u; }
        if (ctx->pc != 0x2D1F28u) { return; }
    }
    ctx->pc = 0x2D1F28u;
label_2d1f28:
    // 0x2d1f28: 0xc0b47e8  jal         func_2D1FA0
    ctx->pc = 0x2D1F28u;
    SET_GPR_U32(ctx, 31, 0x2D1F30u);
    ctx->pc = 0x2D1F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1F28u;
            // 0x2d1f2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1FA0u;
    if (runtime->hasFunction(0x2D1FA0u)) {
        auto targetFn = runtime->lookupFunction(0x2D1FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F30u; }
        if (ctx->pc != 0x2D1F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1FA0_0x2d1fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F30u; }
        if (ctx->pc != 0x2D1F30u) { return; }
    }
    ctx->pc = 0x2D1F30u;
label_2d1f30:
    // 0x2d1f30: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1F30u;
    {
        const bool branch_taken_0x2d1f30 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1f30) {
            ctx->pc = 0x2D1F44u;
            goto label_2d1f44;
        }
    }
    ctx->pc = 0x2D1F38u;
    // 0x2d1f38: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d1f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1f3c: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x2D1F3Cu;
    SET_GPR_U32(ctx, 31, 0x2D1F44u);
    ctx->pc = 0x2D1F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1F3Cu;
            // 0x2d1f40: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F44u; }
        if (ctx->pc != 0x2D1F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F44u; }
        if (ctx->pc != 0x2D1F44u) { return; }
    }
    ctx->pc = 0x2D1F44u;
label_2d1f44:
    // 0x2d1f44: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x2d1f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_2d1f48:
    // 0x2d1f48: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1F48u;
    {
        const bool branch_taken_0x2d1f48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1f48) {
            ctx->pc = 0x2D1F4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1F48u;
            // 0x2d1f4c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1F60u;
            goto label_2d1f60;
        }
    }
    ctx->pc = 0x2D1F50u;
    // 0x2d1f50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d1f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d1f54: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x2D1F54u;
    SET_GPR_U32(ctx, 31, 0x2D1F5Cu);
    ctx->pc = 0x2D1F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1F54u;
            // 0x2d1f58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F5Cu; }
        if (ctx->pc != 0x2D1F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F5Cu; }
        if (ctx->pc != 0x2D1F5Cu) { return; }
    }
    ctx->pc = 0x2D1F5Cu;
label_2d1f5c:
    // 0x2d1f5c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d1f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d1f60:
    // 0x2d1f60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d1f60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1f64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d1f64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1f68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d1f68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1f6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1f6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1f70: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1F70u;
            // 0x2d1f74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1F78u;
    // 0x2d1f78: 0x0  nop
    ctx->pc = 0x2d1f78u;
    // NOP
    // 0x2d1f7c: 0x0  nop
    ctx->pc = 0x2d1f7cu;
    // NOP
}
