#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F2D30
// Address: 0x3f2d30 - 0x3f2f30
void sub_003F2D30_0x3f2d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2D30_0x3f2d30");
#endif

    switch (ctx->pc) {
        case 0x3f2d48u: goto label_3f2d48;
        case 0x3f2d50u: goto label_3f2d50;
        case 0x3f2d88u: goto label_3f2d88;
        case 0x3f2de0u: goto label_3f2de0;
        case 0x3f2e30u: goto label_3f2e30;
        case 0x3f2e40u: goto label_3f2e40;
        case 0x3f2e6cu: goto label_3f2e6c;
        case 0x3f2ed0u: goto label_3f2ed0;
        case 0x3f2ef0u: goto label_3f2ef0;
        case 0x3f2f00u: goto label_3f2f00;
        case 0x3f2f10u: goto label_3f2f10;
        default: break;
    }

    ctx->pc = 0x3f2d30u;

    // 0x3f2d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f2d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f2d34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f2d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f2d38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f2d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f2d3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f2d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2d40: 0xc0fc46c  jal         func_3F11B0
    ctx->pc = 0x3F2D40u;
    SET_GPR_U32(ctx, 31, 0x3F2D48u);
    ctx->pc = 0x3F2D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2D40u;
            // 0x3f2d44: 0x260401a0  addiu       $a0, $s0, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F11B0u;
    if (runtime->hasFunction(0x3F11B0u)) {
        auto targetFn = runtime->lookupFunction(0x3F11B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2D48u; }
        if (ctx->pc != 0x3F2D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F11B0_0x3f11b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2D48u; }
        if (ctx->pc != 0x3F2D48u) { return; }
    }
    ctx->pc = 0x3F2D48u;
label_3f2d48:
    // 0x3f2d48: 0xc0fc46c  jal         func_3F11B0
    ctx->pc = 0x3F2D48u;
    SET_GPR_U32(ctx, 31, 0x3F2D50u);
    ctx->pc = 0x3F2D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2D48u;
            // 0x3f2d4c: 0x260401fc  addiu       $a0, $s0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 508));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F11B0u;
    if (runtime->hasFunction(0x3F11B0u)) {
        auto targetFn = runtime->lookupFunction(0x3F11B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2D50u; }
        if (ctx->pc != 0x3F2D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F11B0_0x3f11b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2D50u; }
        if (ctx->pc != 0x3F2D50u) { return; }
    }
    ctx->pc = 0x3F2D50u;
label_3f2d50:
    // 0x3f2d50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f2d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f2d54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f2d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f2d58: 0x3e00008  jr          $ra
    ctx->pc = 0x3F2D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2D58u;
            // 0x3f2d5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F2D60u;
    // 0x3f2d60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3f2d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3f2d64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f2d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3f2d68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f2d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3f2d6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f2d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f2d70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f2d70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2d74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f2d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f2d78: 0x8cb00024  lw          $s0, 0x24($a1)
    ctx->pc = 0x3f2d78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x3f2d7c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3f2d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3f2d80: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F2D80u;
    {
        const bool branch_taken_0x3f2d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2D80u;
            // 0x3f2d84: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2d80) {
            ctx->pc = 0x3F2DA8u;
            goto label_3f2da8;
        }
    }
    ctx->pc = 0x3F2D88u;
label_3f2d88:
    // 0x3f2d88: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x3f2d88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3f2d8c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3f2d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3f2d90: 0x0  nop
    ctx->pc = 0x3f2d90u;
    // NOP
    // 0x3f2d94: 0x0  nop
    ctx->pc = 0x3f2d94u;
    // NOP
    // 0x3f2d98: 0x0  nop
    ctx->pc = 0x3f2d98u;
    // NOP
    // 0x3f2d9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3F2D9Cu;
    {
        const bool branch_taken_0x3f2d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f2d9c) {
            ctx->pc = 0x3F2D88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f2d88;
        }
    }
    ctx->pc = 0x3F2DA4u;
    // 0x3f2da4: 0x0  nop
    ctx->pc = 0x3f2da4u;
    // NOP
label_3f2da8:
    // 0x3f2da8: 0x82030018  lb          $v1, 0x18($s0)
    ctx->pc = 0x3f2da8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3f2dac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f2dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f2db0: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F2DB0u;
    {
        const bool branch_taken_0x3f2db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f2db0) {
            ctx->pc = 0x3F2DB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2DB0u;
            // 0x3f2db4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F2DC0u;
            goto label_3f2dc0;
        }
    }
    ctx->pc = 0x3F2DB8u;
    // 0x3f2db8: 0x82020010  lb          $v0, 0x10($s0)
    ctx->pc = 0x3f2db8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3f2dbc: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x3f2dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3f2dc0:
    // 0x3f2dc0: 0x5080004c  beql        $a0, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x3F2DC0u;
    {
        const bool branch_taken_0x3f2dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2dc0) {
            ctx->pc = 0x3F2DC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2DC0u;
            // 0x3f2dc4: 0x264401a0  addiu       $a0, $s2, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F2EF4u;
            goto label_3f2ef4;
        }
    }
    ctx->pc = 0x3F2DC8u;
    // 0x3f2dc8: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x3f2dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x3f2dcc: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3F2DCCu;
    {
        const bool branch_taken_0x3f2dcc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3F2DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2DCCu;
            // 0x3f2dd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2dcc) {
            ctx->pc = 0x3F2E08u;
            goto label_3f2e08;
        }
    }
    ctx->pc = 0x3F2DD4u;
    // 0x3f2dd4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3f2dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3f2dd8: 0x8c85004c  lw          $a1, 0x4C($a0)
    ctx->pc = 0x3f2dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x3f2ddc: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x3f2ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_3f2de0:
    // 0x3f2de0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3f2de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f2de4: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F2DE4u;
    {
        const bool branch_taken_0x3f2de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f2de4) {
            ctx->pc = 0x3F2DE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2DE4u;
            // 0x3f2de8: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F2DF4u;
            goto label_3f2df4;
        }
    }
    ctx->pc = 0x3F2DECu;
    // 0x3f2dec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F2DECu;
    {
        const bool branch_taken_0x3f2dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2DECu;
            // 0x3f2df0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2dec) {
            ctx->pc = 0x3F2E0Cu;
            goto label_3f2e0c;
        }
    }
    ctx->pc = 0x3F2DF4u;
label_3f2df4:
    // 0x3f2df4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3f2df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3f2df8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x3f2df8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3f2dfc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3F2DFCu;
    {
        const bool branch_taken_0x3f2dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F2E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2DFCu;
            // 0x3f2e00: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2dfc) {
            ctx->pc = 0x3F2DE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f2de0;
        }
    }
    ctx->pc = 0x3F2E04u;
    // 0x3f2e04: 0x0  nop
    ctx->pc = 0x3f2e04u;
    // NOP
label_3f2e08:
    // 0x3f2e08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f2e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f2e0c:
    // 0x3f2e0c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x3f2e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3f2e10: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3f2e10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x3f2e14: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3F2E14u;
    {
        const bool branch_taken_0x3f2e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2e14) {
            ctx->pc = 0x3F2E18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2E14u;
            // 0x3f2e18: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F2E5Cu;
            goto label_3f2e5c;
        }
    }
    ctx->pc = 0x3F2E1Cu;
    // 0x3f2e1c: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x3f2e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3f2e20: 0xc62d0014  lwc1        $f13, 0x14($s1)
    ctx->pc = 0x3f2e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3f2e24: 0xc62e0018  lwc1        $f14, 0x18($s1)
    ctx->pc = 0x3f2e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3f2e28: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3F2E28u;
    SET_GPR_U32(ctx, 31, 0x3F2E30u);
    ctx->pc = 0x3F2E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2E28u;
            // 0x3f2e2c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2E30u; }
        if (ctx->pc != 0x3F2E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2E30u; }
        if (ctx->pc != 0x3F2E30u) { return; }
    }
    ctx->pc = 0x3F2E30u;
label_3f2e30:
    // 0x3f2e30: 0x8e420258  lw          $v0, 0x258($s2)
    ctx->pc = 0x3f2e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
    // 0x3f2e34: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3f2e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3f2e38: 0xc04cc08  jal         func_133020
    ctx->pc = 0x3F2E38u;
    SET_GPR_U32(ctx, 31, 0x3F2E40u);
    ctx->pc = 0x3F2E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2E38u;
            // 0x3f2e3c: 0x244405d0  addiu       $a0, $v0, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2E40u; }
        if (ctx->pc != 0x3F2E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2E40u; }
        if (ctx->pc != 0x3F2E40u) { return; }
    }
    ctx->pc = 0x3F2E40u;
label_3f2e40:
    // 0x3f2e40: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3f2e40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f2e44: 0x0  nop
    ctx->pc = 0x3f2e44u;
    // NOP
    // 0x3f2e48: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3f2e48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f2e4c: 0x45020026  bc1fl       . + 4 + (0x26 << 2)
    ctx->pc = 0x3F2E4Cu;
    {
        const bool branch_taken_0x3f2e4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f2e4c) {
            ctx->pc = 0x3F2E50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2E4Cu;
            // 0x3f2e50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F2EE8u;
            goto label_3f2ee8;
        }
    }
    ctx->pc = 0x3F2E54u;
    // 0x3f2e54: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x3F2E54u;
    {
        const bool branch_taken_0x3f2e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2E54u;
            // 0x3f2e58: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2e54) {
            ctx->pc = 0x3F2F14u;
            goto label_3f2f14;
        }
    }
    ctx->pc = 0x3F2E5Cu;
label_3f2e5c:
    // 0x3f2e5c: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3F2E5Cu;
    {
        const bool branch_taken_0x3f2e5c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3F2E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2E5Cu;
            // 0x3f2e60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2e5c) {
            ctx->pc = 0x3F2E90u;
            goto label_3f2e90;
        }
    }
    ctx->pc = 0x3F2E64u;
    // 0x3f2e64: 0x8c85004c  lw          $a1, 0x4C($a0)
    ctx->pc = 0x3f2e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x3f2e68: 0x24030848  addiu       $v1, $zero, 0x848
    ctx->pc = 0x3f2e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2120));
label_3f2e6c:
    // 0x3f2e6c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3f2e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f2e70: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F2E70u;
    {
        const bool branch_taken_0x3f2e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f2e70) {
            ctx->pc = 0x3F2E74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2E70u;
            // 0x3f2e74: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F2E80u;
            goto label_3f2e80;
        }
    }
    ctx->pc = 0x3F2E78u;
    // 0x3f2e78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3F2E78u;
    {
        const bool branch_taken_0x3f2e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2E78u;
            // 0x3f2e7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2e78) {
            ctx->pc = 0x3F2E94u;
            goto label_3f2e94;
        }
    }
    ctx->pc = 0x3F2E80u;
label_3f2e80:
    // 0x3f2e80: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3f2e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3f2e84: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x3f2e84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3f2e88: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3F2E88u;
    {
        const bool branch_taken_0x3f2e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F2E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2E88u;
            // 0x3f2e8c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2e88) {
            ctx->pc = 0x3F2E6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f2e6c;
        }
    }
    ctx->pc = 0x3F2E90u;
label_3f2e90:
    // 0x3f2e90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f2e90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f2e94:
    // 0x3f2e94: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x3f2e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3f2e98: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3f2e98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x3f2e9c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3F2E9Cu;
    {
        const bool branch_taken_0x3f2e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2e9c) {
            ctx->pc = 0x3F2EE4u;
            goto label_3f2ee4;
        }
    }
    ctx->pc = 0x3F2EA4u;
    // 0x3f2ea4: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x3f2ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3f2ea8: 0x80820010  lb          $v0, 0x10($a0)
    ctx->pc = 0x3f2ea8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3f2eac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3f2eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3f2eb0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F2EB0u;
    {
        const bool branch_taken_0x3f2eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2EB0u;
            // 0x3f2eb4: 0x8e430258  lw          $v1, 0x258($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2eb0) {
            ctx->pc = 0x3F2EC0u;
            goto label_3f2ec0;
        }
    }
    ctx->pc = 0x3F2EB8u;
    // 0x3f2eb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3F2EB8u;
    {
        const bool branch_taken_0x3f2eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2EB8u;
            // 0x3f2ebc: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2eb8) {
            ctx->pc = 0x3F2EC4u;
            goto label_3f2ec4;
        }
    }
    ctx->pc = 0x3F2EC0u;
label_3f2ec0:
    // 0x3f2ec0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f2ec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f2ec4:
    // 0x3f2ec4: 0x246403d0  addiu       $a0, $v1, 0x3D0
    ctx->pc = 0x3f2ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 976));
    // 0x3f2ec8: 0xc04cc08  jal         func_133020
    ctx->pc = 0x3F2EC8u;
    SET_GPR_U32(ctx, 31, 0x3F2ED0u);
    ctx->pc = 0x3F2ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2EC8u;
            // 0x3f2ecc: 0x244500e0  addiu       $a1, $v0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2ED0u; }
        if (ctx->pc != 0x3F2ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2ED0u; }
        if (ctx->pc != 0x3F2ED0u) { return; }
    }
    ctx->pc = 0x3F2ED0u;
label_3f2ed0:
    // 0x3f2ed0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3f2ed0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f2ed4: 0x0  nop
    ctx->pc = 0x3f2ed4u;
    // NOP
    // 0x3f2ed8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3f2ed8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f2edc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x3F2EDCu;
    {
        const bool branch_taken_0x3f2edc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f2edc) {
            ctx->pc = 0x3F2F10u;
            goto label_3f2f10;
        }
    }
    ctx->pc = 0x3F2EE4u;
label_3f2ee4:
    // 0x3f2ee4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f2ee8:
    // 0x3f2ee8: 0xc07f7dc  jal         func_1FDF70
    ctx->pc = 0x3F2EE8u;
    SET_GPR_U32(ctx, 31, 0x3F2EF0u);
    ctx->pc = 0x3F2EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2EE8u;
            // 0x3f2eec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDF70u;
    if (runtime->hasFunction(0x1FDF70u)) {
        auto targetFn = runtime->lookupFunction(0x1FDF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2EF0u; }
        if (ctx->pc != 0x3F2EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDF70_0x1fdf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2EF0u; }
        if (ctx->pc != 0x3F2EF0u) { return; }
    }
    ctx->pc = 0x3F2EF0u;
label_3f2ef0:
    // 0x3f2ef0: 0x264401a0  addiu       $a0, $s2, 0x1A0
    ctx->pc = 0x3f2ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
label_3f2ef4:
    // 0x3f2ef4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f2ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2ef8: 0xc0fc47c  jal         func_3F11F0
    ctx->pc = 0x3F2EF8u;
    SET_GPR_U32(ctx, 31, 0x3F2F00u);
    ctx->pc = 0x3F2EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2EF8u;
            // 0x3f2efc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F11F0u;
    if (runtime->hasFunction(0x3F11F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F11F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2F00u; }
        if (ctx->pc != 0x3F2F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F11F0_0x3f11f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2F00u; }
        if (ctx->pc != 0x3F2F00u) { return; }
    }
    ctx->pc = 0x3F2F00u;
label_3f2f00:
    // 0x3f2f00: 0x264401fc  addiu       $a0, $s2, 0x1FC
    ctx->pc = 0x3f2f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 508));
    // 0x3f2f04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f2f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2f08: 0xc0fc47c  jal         func_3F11F0
    ctx->pc = 0x3F2F08u;
    SET_GPR_U32(ctx, 31, 0x3F2F10u);
    ctx->pc = 0x3F2F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2F08u;
            // 0x3f2f0c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F11F0u;
    if (runtime->hasFunction(0x3F11F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F11F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2F10u; }
        if (ctx->pc != 0x3F2F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F11F0_0x3f11f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2F10u; }
        if (ctx->pc != 0x3F2F10u) { return; }
    }
    ctx->pc = 0x3F2F10u;
label_3f2f10:
    // 0x3f2f10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f2f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3f2f14:
    // 0x3f2f14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f2f14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f2f18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f2f18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f2f1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f2f1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f2f20: 0x3e00008  jr          $ra
    ctx->pc = 0x3F2F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2F20u;
            // 0x3f2f24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F2F28u;
    // 0x3f2f28: 0x0  nop
    ctx->pc = 0x3f2f28u;
    // NOP
    // 0x3f2f2c: 0x0  nop
    ctx->pc = 0x3f2f2cu;
    // NOP
}
