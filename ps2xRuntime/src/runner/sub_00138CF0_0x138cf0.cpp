#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00138CF0
// Address: 0x138cf0 - 0x138e30
void sub_00138CF0_0x138cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138CF0_0x138cf0");
#endif

    switch (ctx->pc) {
        case 0x138d3cu: goto label_138d3c;
        case 0x138d50u: goto label_138d50;
        case 0x138d6cu: goto label_138d6c;
        case 0x138da4u: goto label_138da4;
        default: break;
    }

    ctx->pc = 0x138cf0u;

    // 0x138cf0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x138cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x138cf4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x138cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x138cf8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x138cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x138cfc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x138cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x138d00: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x138d00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138d04: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x138d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x138d08: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x138d08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138d0c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x138d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x138d10: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x138d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x138d14: 0xe7ac008c  swc1        $f12, 0x8C($sp)
    ctx->pc = 0x138d14u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x138d18: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x138d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x138d1c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x138d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x138d20: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x138D20u;
    {
        const bool branch_taken_0x138d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x138D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138D20u;
            // 0x138d24: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d20) {
            ctx->pc = 0x138E10u;
            goto label_138e10;
        }
    }
    ctx->pc = 0x138D28u;
    // 0x138d28: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x138d28u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x138d2c: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x138d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x138d30: 0xc64d0008  lwc1        $f13, 0x8($s2)
    ctx->pc = 0x138d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x138d34: 0xc04d03c  jal         func_1340F0
    ctx->pc = 0x138D34u;
    SET_GPR_U32(ctx, 31, 0x138D3Cu);
    ctx->pc = 0x138D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138D34u;
            // 0x138d38: 0x27a4008c  addiu       $a0, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1340F0u;
    if (runtime->hasFunction(0x1340F0u)) {
        auto targetFn = runtime->lookupFunction(0x1340F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138D3Cu; }
        if (ctx->pc != 0x138D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001340F0_0x1340f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138D3Cu; }
        if (ctx->pc != 0x138D3Cu) { return; }
    }
    ctx->pc = 0x138D3Cu;
label_138d3c:
    // 0x138d3c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x138D3Cu;
    {
        const bool branch_taken_0x138d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138d3c) {
            ctx->pc = 0x138D40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138D3Cu;
            // 0x138d40: 0xaf938100  sw          $s3, -0x7F00($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934784), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138D58u;
            goto label_138d58;
        }
    }
    ctx->pc = 0x138D44u;
    // 0x138d44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x138d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138d48: 0xc04e1e0  jal         func_138780
    ctx->pc = 0x138D48u;
    SET_GPR_U32(ctx, 31, 0x138D50u);
    ctx->pc = 0x138D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138D48u;
            // 0x138d4c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138780u;
    if (runtime->hasFunction(0x138780u)) {
        auto targetFn = runtime->lookupFunction(0x138780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138D50u; }
        if (ctx->pc != 0x138D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138780_0x138780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138D50u; }
        if (ctx->pc != 0x138D50u) { return; }
    }
    ctx->pc = 0x138D50u;
label_138d50:
    // 0x138d50: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x138D50u;
    {
        const bool branch_taken_0x138d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138D50u;
            // 0x138d54: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d50) {
            ctx->pc = 0x138E14u;
            goto label_138e14;
        }
    }
    ctx->pc = 0x138D58u;
label_138d58:
    // 0x138d58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138d58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138d5c: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x138d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x138d60: 0x1860002b  blez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x138D60u;
    {
        const bool branch_taken_0x138d60 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x138D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138D60u;
            // 0x138d64: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d60) {
            ctx->pc = 0x138E10u;
            goto label_138e10;
        }
    }
    ctx->pc = 0x138D68u;
    // 0x138d68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x138d68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138d6c:
    // 0x138d6c: 0xffb10000  sd          $s1, 0x0($sp)
    ctx->pc = 0x138d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 17));
    // 0x138d70: 0x27a400cc  addiu       $a0, $sp, 0xCC
    ctx->pc = 0x138d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x138d74: 0xffb20008  sd          $s2, 0x8($sp)
    ctx->pc = 0x138d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    // 0x138d78: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x138d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x138d7c: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x138d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x138d80: 0x27a700b8  addiu       $a3, $sp, 0xB8
    ctx->pc = 0x138d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x138d84: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x138d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x138d88: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x138d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x138d8c: 0x27a600c4  addiu       $a2, $sp, 0xC4
    ctx->pc = 0x138d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x138d90: 0x27a800a8  addiu       $t0, $sp, 0xA8
    ctx->pc = 0x138d90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x138d94: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x138d94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x138d98: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x138d98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138d9c: 0xc04e23c  jal         func_1388F0
    ctx->pc = 0x138D9Cu;
    SET_GPR_U32(ctx, 31, 0x138DA4u);
    ctx->pc = 0x138DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138D9Cu;
            // 0x138da0: 0x505821  addu        $t3, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1388F0u;
    if (runtime->hasFunction(0x1388F0u)) {
        auto targetFn = runtime->lookupFunction(0x1388F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138DA4u; }
        if (ctx->pc != 0x138DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001388F0_0x1388f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138DA4u; }
        if (ctx->pc != 0x138DA4u) { return; }
    }
    ctx->pc = 0x138DA4u;
label_138da4:
    // 0x138da4: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x138da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138da8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x138da8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x138dac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x138dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138db0: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x138db0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x138db4: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x138db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x138db8: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x138db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138dbc: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x138dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x138dc0: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x138dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138dc4: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x138dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x138dc8: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x138dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138dcc: 0xe6800010  swc1        $f0, 0x10($s4)
    ctx->pc = 0x138dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    // 0x138dd0: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x138dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138dd4: 0xe6800014  swc1        $f0, 0x14($s4)
    ctx->pc = 0x138dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
    // 0x138dd8: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x138dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138ddc: 0xe6800018  swc1        $f0, 0x18($s4)
    ctx->pc = 0x138ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
    // 0x138de0: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x138de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138de4: 0xe680001c  swc1        $f0, 0x1C($s4)
    ctx->pc = 0x138de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
    // 0x138de8: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x138de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138dec: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x138decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
    // 0x138df0: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x138df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138df4: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x138df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
    // 0x138df8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x138df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138dfc: 0xe6800028  swc1        $f0, 0x28($s4)
    ctx->pc = 0x138dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
    // 0x138e00: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x138e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x138e04: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x138e04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x138e08: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x138E08u;
    {
        const bool branch_taken_0x138e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x138E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138E08u;
            // 0x138e0c: 0x26940030  addiu       $s4, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138e08) {
            ctx->pc = 0x138D6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_138d6c;
        }
    }
    ctx->pc = 0x138E10u;
label_138e10:
    // 0x138e10: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x138e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_138e14:
    // 0x138e14: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x138e14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x138e18: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x138e18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x138e1c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x138e1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x138e20: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x138e20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x138e24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x138e24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138e28: 0x3e00008  jr          $ra
    ctx->pc = 0x138E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138E28u;
            // 0x138e2c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x138E30u;
}
