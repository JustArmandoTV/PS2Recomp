#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F3D30
// Address: 0x2f3d30 - 0x2f4190
void sub_002F3D30_0x2f3d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3D30_0x2f3d30");
#endif

    switch (ctx->pc) {
        case 0x2f3d9cu: goto label_2f3d9c;
        case 0x2f3e0cu: goto label_2f3e0c;
        case 0x2f3ea4u: goto label_2f3ea4;
        case 0x2f3ed0u: goto label_2f3ed0;
        case 0x2f3f60u: goto label_2f3f60;
        case 0x2f3fa8u: goto label_2f3fa8;
        case 0x2f4074u: goto label_2f4074;
        case 0x2f4178u: goto label_2f4178;
        default: break;
    }

    ctx->pc = 0x2f3d30u;

    // 0x2f3d30: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2f3d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3d34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f3d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3d38: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2f3d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2f3d3c: 0x80751b8  j           func_1D46E0
    ctx->pc = 0x2F3D3Cu;
    ctx->pc = 0x2F3D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3D3Cu;
            // 0x2f3d40: 0x24841d08  addiu       $a0, $a0, 0x1D08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2F3D44u;
    // 0x2f3d44: 0x0  nop
    ctx->pc = 0x2f3d44u;
    // NOP
    // 0x2f3d48: 0x0  nop
    ctx->pc = 0x2f3d48u;
    // NOP
    // 0x2f3d4c: 0x0  nop
    ctx->pc = 0x2f3d4cu;
    // NOP
    // 0x2f3d50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f3d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f3d54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f3d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f3d58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f3d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f3d5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f3d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3d60: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2F3D60u;
    {
        const bool branch_taken_0x2f3d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3d60) {
            ctx->pc = 0x2F3D64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3D60u;
            // 0x2f3d64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F3DA0u;
            goto label_2f3da0;
        }
    }
    ctx->pc = 0x2F3D68u;
    // 0x2f3d68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2f3d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2f3d6c: 0x24423250  addiu       $v0, $v0, 0x3250
    ctx->pc = 0x2f3d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12880));
    // 0x2f3d70: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3D70u;
    {
        const bool branch_taken_0x2f3d70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3D70u;
            // 0x2f3d74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d70) {
            ctx->pc = 0x2F3D84u;
            goto label_2f3d84;
        }
    }
    ctx->pc = 0x2F3D78u;
    // 0x2f3d78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2f3d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2f3d7c: 0x24423270  addiu       $v0, $v0, 0x3270
    ctx->pc = 0x2f3d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12912));
    // 0x2f3d80: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2f3d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2f3d84:
    // 0x2f3d84: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2f3d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2f3d88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2f3d88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2f3d8c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3D8Cu;
    {
        const bool branch_taken_0x2f3d8c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2f3d8c) {
            ctx->pc = 0x2F3D9Cu;
            goto label_2f3d9c;
        }
    }
    ctx->pc = 0x2F3D94u;
    // 0x2f3d94: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2F3D94u;
    SET_GPR_U32(ctx, 31, 0x2F3D9Cu);
    ctx->pc = 0x2F3D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3D94u;
            // 0x2f3d98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3D9Cu; }
        if (ctx->pc != 0x2F3D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3D9Cu; }
        if (ctx->pc != 0x2F3D9Cu) { return; }
    }
    ctx->pc = 0x2F3D9Cu;
label_2f3d9c:
    // 0x2f3d9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f3d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f3da0:
    // 0x2f3da0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f3da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3da4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f3da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3da8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3DA8u;
            // 0x2f3dac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F3DB0u;
    // 0x2f3db0: 0x94860020  lhu         $a2, 0x20($a0)
    ctx->pc = 0x2f3db0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2f3db4: 0x94850022  lhu         $a1, 0x22($a0)
    ctx->pc = 0x2f3db4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x2f3db8: 0x94830024  lhu         $v1, 0x24($a0)
    ctx->pc = 0x2f3db8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2f3dbc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2f3dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2f3dc0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2f3dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f3dc4: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x2f3dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x2f3dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3DC8u;
            // 0x2f3dcc: 0xa4830026  sh          $v1, 0x26($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 38), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F3DD0u;
    // 0x2f3dd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f3dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f3dd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f3dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f3dd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f3dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f3ddc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f3ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f3de0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f3de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3de4: 0xc4a001b0  lwc1        $f0, 0x1B0($a1)
    ctx->pc = 0x2f3de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3de8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f3de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3dec: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2f3decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2f3df0: 0xc4a001b4  lwc1        $f0, 0x1B4($a1)
    ctx->pc = 0x2f3df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3df4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2f3df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2f3df8: 0xc4a001b8  lwc1        $f0, 0x1B8($a1)
    ctx->pc = 0x2f3df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3dfc: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2f3dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2f3e00: 0x260501bc  addiu       $a1, $s0, 0x1BC
    ctx->pc = 0x2f3e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x2f3e04: 0xc04cb44  jal         func_132D10
    ctx->pc = 0x2F3E04u;
    SET_GPR_U32(ctx, 31, 0x2F3E0Cu);
    ctx->pc = 0x2F3E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3E04u;
            // 0x2f3e08: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132D10u;
    if (runtime->hasFunction(0x132D10u)) {
        auto targetFn = runtime->lookupFunction(0x132D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3E0Cu; }
        if (ctx->pc != 0x2F3E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132D10_0x132d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3E0Cu; }
        if (ctx->pc != 0x2F3E0Cu) { return; }
    }
    ctx->pc = 0x2F3E0Cu;
label_2f3e0c:
    // 0x2f3e0c: 0x96250020  lhu         $a1, 0x20($s1)
    ctx->pc = 0x2f3e0cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2f3e10: 0x96240026  lhu         $a0, 0x26($s1)
    ctx->pc = 0x2f3e10u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x2f3e14: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2f3e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2f3e18: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x2f3e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2f3e1c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2f3e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f3e20: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x2F3E20u;
    {
        const bool branch_taken_0x2f3e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3e20) {
            ctx->pc = 0x2F3E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3E20u;
            // 0x2f3e24: 0x96220022  lhu         $v0, 0x22($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F3EACu;
            goto label_2f3eac;
        }
    }
    ctx->pc = 0x2F3E28u;
    // 0x2f3e28: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x2f3e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f3e2c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3E2Cu;
    {
        const bool branch_taken_0x2f3e2c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f3e2c) {
            ctx->pc = 0x2F3E30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3E2Cu;
            // 0x2f3e30: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F3E40u;
            goto label_2f3e40;
        }
    }
    ctx->pc = 0x2F3E34u;
    // 0x2f3e34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3e38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F3E38u;
    {
        const bool branch_taken_0x2f3e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3E38u;
            // 0x2f3e3c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e38) {
            ctx->pc = 0x2F3E58u;
            goto label_2f3e58;
        }
    }
    ctx->pc = 0x2F3E40u;
label_2f3e40:
    // 0x2f3e40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f3e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f3e44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f3e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f3e48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f3e48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3e4c: 0x0  nop
    ctx->pc = 0x2f3e4cu;
    // NOP
    // 0x2f3e50: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2f3e50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f3e54: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2f3e54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2f3e58:
    // 0x2f3e58: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3E58u;
    {
        const bool branch_taken_0x2f3e58 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x2f3e58) {
            ctx->pc = 0x2F3E5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3E58u;
            // 0x2f3e5c: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F3E6Cu;
            goto label_2f3e6c;
        }
    }
    ctx->pc = 0x2F3E60u;
    // 0x2f3e60: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2f3e60u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3e64: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F3E64u;
    {
        const bool branch_taken_0x2f3e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3E64u;
            // 0x2f3e68: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e64) {
            ctx->pc = 0x2F3E84u;
            goto label_2f3e84;
        }
    }
    ctx->pc = 0x2F3E6Cu;
label_2f3e6c:
    // 0x2f3e6c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2f3e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2f3e70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f3e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f3e74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f3e74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3e78: 0x0  nop
    ctx->pc = 0x2f3e78u;
    // NOP
    // 0x2f3e7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f3e7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f3e80: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f3e80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f3e84:
    // 0x2f3e84: 0x0  nop
    ctx->pc = 0x2f3e84u;
    // NOP
    // 0x2f3e88: 0x0  nop
    ctx->pc = 0x2f3e88u;
    // NOP
    // 0x2f3e8c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2f3e8cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x2f3e90: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2f3e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f3e94: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f3e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3e98: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2f3e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3e9c: 0xc04cb6c  jal         func_132DB0
    ctx->pc = 0x2F3E9Cu;
    SET_GPR_U32(ctx, 31, 0x2F3EA4u);
    ctx->pc = 0x2F3EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3E9Cu;
            // 0x2f3ea0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DB0u;
    if (runtime->hasFunction(0x132DB0u)) {
        auto targetFn = runtime->lookupFunction(0x132DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3EA4u; }
        if (ctx->pc != 0x2F3EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DB0_0x132db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3EA4u; }
        if (ctx->pc != 0x2F3EA4u) { return; }
    }
    ctx->pc = 0x2F3EA4u;
label_2f3ea4:
    // 0x2f3ea4: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x2F3EA4u;
    {
        const bool branch_taken_0x2f3ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3EA4u;
            // 0x2f3ea8: 0xc6250004  lwc1        $f5, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ea4) {
            ctx->pc = 0x2F40A8u;
            goto label_2f40a8;
        }
    }
    ctx->pc = 0x2F3EACu;
label_2f3eac:
    // 0x2f3eac: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2f3eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2f3eb0: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2f3eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f3eb4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2f3eb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f3eb8: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x2F3EB8u;
    {
        const bool branch_taken_0x2f3eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3eb8) {
            ctx->pc = 0x2F3EBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3EB8u;
            // 0x2f3ebc: 0xc6210014  lwc1        $f1, 0x14($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F3F94u;
            goto label_2f3f94;
        }
    }
    ctx->pc = 0x2F3EC0u;
    // 0x2f3ec0: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x2f3ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f3ec4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2f3ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f3ec8: 0xc04cb6c  jal         func_132DB0
    ctx->pc = 0x2F3EC8u;
    SET_GPR_U32(ctx, 31, 0x2F3ED0u);
    ctx->pc = 0x2F3ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3EC8u;
            // 0x2f3ecc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DB0u;
    if (runtime->hasFunction(0x132DB0u)) {
        auto targetFn = runtime->lookupFunction(0x132DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3ED0u; }
        if (ctx->pc != 0x2F3ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DB0_0x132db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3ED0u; }
        if (ctx->pc != 0x2F3ED0u) { return; }
    }
    ctx->pc = 0x2F3ED0u;
label_2f3ed0:
    // 0x2f3ed0: 0x96240026  lhu         $a0, 0x26($s1)
    ctx->pc = 0x2f3ed0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x2f3ed4: 0x96230020  lhu         $v1, 0x20($s1)
    ctx->pc = 0x2f3ed4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2f3ed8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2f3ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2f3edc: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2f3edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f3ee0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2f3ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f3ee4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3EE4u;
    {
        const bool branch_taken_0x2f3ee4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f3ee4) {
            ctx->pc = 0x2F3EE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3EE4u;
            // 0x2f3ee8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F3EF8u;
            goto label_2f3ef8;
        }
    }
    ctx->pc = 0x2F3EECu;
    // 0x2f3eec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3ef0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F3EF0u;
    {
        const bool branch_taken_0x2f3ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3EF0u;
            // 0x2f3ef4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ef0) {
            ctx->pc = 0x2F3F10u;
            goto label_2f3f10;
        }
    }
    ctx->pc = 0x2F3EF8u;
label_2f3ef8:
    // 0x2f3ef8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f3ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f3efc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f3efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f3f00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f3f00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3f04: 0x0  nop
    ctx->pc = 0x2f3f04u;
    // NOP
    // 0x2f3f08: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2f3f08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f3f0c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2f3f0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2f3f10:
    // 0x2f3f10: 0x96220022  lhu         $v0, 0x22($s1)
    ctx->pc = 0x2f3f10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x2f3f14: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3F14u;
    {
        const bool branch_taken_0x2f3f14 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f3f14) {
            ctx->pc = 0x2F3F18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3F14u;
            // 0x2f3f18: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F3F28u;
            goto label_2f3f28;
        }
    }
    ctx->pc = 0x2F3F1Cu;
    // 0x2f3f1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3f20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F3F20u;
    {
        const bool branch_taken_0x2f3f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3F20u;
            // 0x2f3f24: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f20) {
            ctx->pc = 0x2F3F40u;
            goto label_2f3f40;
        }
    }
    ctx->pc = 0x2F3F28u;
label_2f3f28:
    // 0x2f3f28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f3f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f3f2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f3f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f3f30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f3f30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3f34: 0x0  nop
    ctx->pc = 0x2f3f34u;
    // NOP
    // 0x2f3f38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f3f38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f3f3c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f3f3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f3f40:
    // 0x2f3f40: 0x0  nop
    ctx->pc = 0x2f3f40u;
    // NOP
    // 0x2f3f44: 0x0  nop
    ctx->pc = 0x2f3f44u;
    // NOP
    // 0x2f3f48: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2f3f48u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x2f3f4c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2f3f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f3f50: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f3f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3f54: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2f3f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3f58: 0xc04cb6c  jal         func_132DB0
    ctx->pc = 0x2F3F58u;
    SET_GPR_U32(ctx, 31, 0x2F3F60u);
    ctx->pc = 0x2F3F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3F58u;
            // 0x2f3f5c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DB0u;
    if (runtime->hasFunction(0x132DB0u)) {
        auto targetFn = runtime->lookupFunction(0x132DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3F60u; }
        if (ctx->pc != 0x2F3F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DB0_0x132db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3F60u; }
        if (ctx->pc != 0x2F3F60u) { return; }
    }
    ctx->pc = 0x2F3F60u;
label_2f3f60:
    // 0x2f3f60: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2f3f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f3f64: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2f3f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3f68: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x2f3f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f3f6c: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x2f3f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f3f70: 0x46000900  add.s       $f4, $f1, $f0
    ctx->pc = 0x2f3f70u;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f3f74: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2f3f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f3f78: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2f3f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3f7c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x2f3f7cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2f3f80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f3f80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f3f84: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x2f3f84u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2f3f88: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x2f3f88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2f3f8c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2F3F8Cu;
    {
        const bool branch_taken_0x2f3f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3F8Cu;
            // 0x2f3f90: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f8c) {
            ctx->pc = 0x2F40A4u;
            goto label_2f40a4;
        }
    }
    ctx->pc = 0x2F3F94u;
label_2f3f94:
    // 0x2f3f94: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2f3f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f3f98: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2f3f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3f9c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2f3f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f3fa0: 0xc04cb6c  jal         func_132DB0
    ctx->pc = 0x2F3FA0u;
    SET_GPR_U32(ctx, 31, 0x2F3FA8u);
    ctx->pc = 0x2F3FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3FA0u;
            // 0x2f3fa4: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DB0u;
    if (runtime->hasFunction(0x132DB0u)) {
        auto targetFn = runtime->lookupFunction(0x132DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3FA8u; }
        if (ctx->pc != 0x2F3FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DB0_0x132db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3FA8u; }
        if (ctx->pc != 0x2F3FA8u) { return; }
    }
    ctx->pc = 0x2F3FA8u;
label_2f3fa8:
    // 0x2f3fa8: 0x96250020  lhu         $a1, 0x20($s1)
    ctx->pc = 0x2f3fa8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2f3fac: 0x96240022  lhu         $a0, 0x22($s1)
    ctx->pc = 0x2f3facu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x2f3fb0: 0x96230026  lhu         $v1, 0x26($s1)
    ctx->pc = 0x2f3fb0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x2f3fb4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2f3fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2f3fb8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2f3fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2f3fbc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2f3fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f3fc0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2f3fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f3fc4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3FC4u;
    {
        const bool branch_taken_0x2f3fc4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2F3FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3FC4u;
            // 0x2f3fc8: 0x96260024  lhu         $a2, 0x24($s1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3fc4) {
            ctx->pc = 0x2F3FD8u;
            goto label_2f3fd8;
        }
    }
    ctx->pc = 0x2F3FCCu;
    // 0x2f3fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3fd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F3FD0u;
    {
        const bool branch_taken_0x2f3fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3FD0u;
            // 0x2f3fd4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3fd0) {
            ctx->pc = 0x2F3FF4u;
            goto label_2f3ff4;
        }
    }
    ctx->pc = 0x2F3FD8u;
label_2f3fd8:
    // 0x2f3fd8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2f3fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2f3fdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f3fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f3fe0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f3fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f3fe4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f3fe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3fe8: 0x0  nop
    ctx->pc = 0x2f3fe8u;
    // NOP
    // 0x2f3fec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2f3fecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f3ff0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2f3ff0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2f3ff4:
    // 0x2f3ff4: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3FF4u;
    {
        const bool branch_taken_0x2f3ff4 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x2f3ff4) {
            ctx->pc = 0x2F3FF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3FF4u;
            // 0x2f3ff8: 0x61842  srl         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F4008u;
            goto label_2f4008;
        }
    }
    ctx->pc = 0x2F3FFCu;
    // 0x2f3ffc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2f3ffcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4000: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F4000u;
    {
        const bool branch_taken_0x2f4000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4000u;
            // 0x2f4004: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4000) {
            ctx->pc = 0x2F4020u;
            goto label_2f4020;
        }
    }
    ctx->pc = 0x2F4008u;
label_2f4008:
    // 0x2f4008: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x2f4008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2f400c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f400cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f4010: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f4010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4014: 0x0  nop
    ctx->pc = 0x2f4014u;
    // NOP
    // 0x2f4018: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f4018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f401c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f401cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f4020:
    // 0x2f4020: 0x0  nop
    ctx->pc = 0x2f4020u;
    // NOP
    // 0x2f4024: 0x0  nop
    ctx->pc = 0x2f4024u;
    // NOP
    // 0x2f4028: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2f4028u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x2f402c: 0x0  nop
    ctx->pc = 0x2f402cu;
    // NOP
    // 0x2f4030: 0x0  nop
    ctx->pc = 0x2f4030u;
    // NOP
    // 0x2f4034: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4034u;
    {
        const bool branch_taken_0x2f4034 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x2f4034) {
            ctx->pc = 0x2F4048u;
            goto label_2f4048;
        }
    }
    ctx->pc = 0x2F403Cu;
    // 0x2f403c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2f403cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4040: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F4040u;
    {
        const bool branch_taken_0x2f4040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4040u;
            // 0x2f4044: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4040) {
            ctx->pc = 0x2F4064u;
            goto label_2f4064;
        }
    }
    ctx->pc = 0x2F4048u;
label_2f4048:
    // 0x2f4048: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x2f4048u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x2f404c: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x2f404cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2f4050: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f4050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f4054: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f4054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4058: 0x0  nop
    ctx->pc = 0x2f4058u;
    // NOP
    // 0x2f405c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f405cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f4060: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f4060u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f4064:
    // 0x2f4064: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2f4064u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f4068: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2f4068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f406c: 0xc04cb6c  jal         func_132DB0
    ctx->pc = 0x2F406Cu;
    SET_GPR_U32(ctx, 31, 0x2F4074u);
    ctx->pc = 0x2F4070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F406Cu;
            // 0x2f4070: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DB0u;
    if (runtime->hasFunction(0x132DB0u)) {
        auto targetFn = runtime->lookupFunction(0x132DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4074u; }
        if (ctx->pc != 0x2F4074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DB0_0x132db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4074u; }
        if (ctx->pc != 0x2F4074u) { return; }
    }
    ctx->pc = 0x2F4074u;
label_2f4074:
    // 0x2f4074: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2f4074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f4078: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2f4078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f407c: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x2f407cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f4080: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x2f4080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f4084: 0x46000900  add.s       $f4, $f1, $f0
    ctx->pc = 0x2f4084u;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f4088: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2f4088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f408c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2f408cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4090: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x2f4090u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2f4094: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f4094u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f4098: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x2f4098u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2f409c: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x2f409cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2f40a0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2f40a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2f40a4:
    // 0x2f40a4: 0xc6250004  lwc1        $f5, 0x4($s1)
    ctx->pc = 0x2f40a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2f40a8:
    // 0x2f40a8: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x2f40a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2f40ac: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x2f40acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f40b0: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x2f40b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f40b4: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x2f40b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f40b8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2f40b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f40bc: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x2f40bcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x2f40c0: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x2f40c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2f40c4: 0xe60401b0  swc1        $f4, 0x1B0($s0)
    ctx->pc = 0x2f40c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x2f40c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f40c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f40cc: 0xe60201b4  swc1        $f2, 0x1B4($s0)
    ctx->pc = 0x2f40ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 436), bits); }
    // 0x2f40d0: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x2f40d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
    // 0x2f40d4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2f40d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2f40d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f40d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f40dc: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x2f40dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x2f40e0: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x2f40e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x2f40e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f40e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f40e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f40e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f40ec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2f40ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2f40f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f40f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f40f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F40F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F40F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F40F4u;
            // 0x2f40f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F40FCu;
    // 0x2f40fc: 0x0  nop
    ctx->pc = 0x2f40fcu;
    // NOP
    // 0x2f4100: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2f4100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2f4104: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2F4104u;
    {
        const bool branch_taken_0x2f4104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4104) {
            ctx->pc = 0x2F4108u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4104u;
            // 0x2f4108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F4134u;
            goto label_2f4134;
        }
    }
    ctx->pc = 0x2F410Cu;
    // 0x2f410c: 0x94820026  lhu         $v0, 0x26($a0)
    ctx->pc = 0x2f410cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x2f4110: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F4110u;
    {
        const bool branch_taken_0x2f4110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f4110) {
            ctx->pc = 0x2F4130u;
            goto label_2f4130;
        }
    }
    ctx->pc = 0x2F4118u;
    // 0x2f4118: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2f4118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f411c: 0xe4a001b0  swc1        $f0, 0x1B0($a1)
    ctx->pc = 0x2f411cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 432), bits); }
    // 0x2f4120: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2f4120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4124: 0xe4a001b4  swc1        $f0, 0x1B4($a1)
    ctx->pc = 0x2f4124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 436), bits); }
    // 0x2f4128: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2f4128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f412c: 0xe4a001b8  swc1        $f0, 0x1B8($a1)
    ctx->pc = 0x2f412cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 440), bits); }
label_2f4130:
    // 0x2f4130: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f4130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4134:
    // 0x2f4134: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F413Cu;
    // 0x2f413c: 0x0  nop
    ctx->pc = 0x2f413cu;
    // NOP
    // 0x2f4140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f4140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f4144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f4144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f4148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f4148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f414c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f414cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4150: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2F4150u;
    {
        const bool branch_taken_0x2f4150 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4150) {
            ctx->pc = 0x2F4154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4150u;
            // 0x2f4154: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F417Cu;
            goto label_2f417c;
        }
    }
    ctx->pc = 0x2F4158u;
    // 0x2f4158: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2f4158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2f415c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2f415cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2f4160: 0x24633270  addiu       $v1, $v1, 0x3270
    ctx->pc = 0x2f4160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12912));
    // 0x2f4164: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2f4164u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2f4168: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4168u;
    {
        const bool branch_taken_0x2f4168 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F416Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4168u;
            // 0x2f416c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4168) {
            ctx->pc = 0x2F4178u;
            goto label_2f4178;
        }
    }
    ctx->pc = 0x2F4170u;
    // 0x2f4170: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2F4170u;
    SET_GPR_U32(ctx, 31, 0x2F4178u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4178u; }
        if (ctx->pc != 0x2F4178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4178u; }
        if (ctx->pc != 0x2F4178u) { return; }
    }
    ctx->pc = 0x2F4178u;
label_2f4178:
    // 0x2f4178: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f4178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f417c:
    // 0x2f417c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f417cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4180: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f4180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4184: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4184u;
            // 0x2f4188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F418Cu;
    // 0x2f418c: 0x0  nop
    ctx->pc = 0x2f418cu;
    // NOP
}
