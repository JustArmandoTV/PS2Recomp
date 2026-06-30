#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B1D80
// Address: 0x4b1d80 - 0x4b1fa0
void sub_004B1D80_0x4b1d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B1D80_0x4b1d80");
#endif

    switch (ctx->pc) {
        case 0x4b1e14u: goto label_4b1e14;
        case 0x4b1e74u: goto label_4b1e74;
        case 0x4b1ebcu: goto label_4b1ebc;
        case 0x4b1f48u: goto label_4b1f48;
        case 0x4b1f78u: goto label_4b1f78;
        default: break;
    }

    ctx->pc = 0x4b1d80u;

    // 0x4b1d80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4b1d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4b1d84: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4b1d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x4b1d88: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4b1d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x4b1d8c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4b1d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4b1d90: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4b1d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4b1d94: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4b1d94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1d98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4b1d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4b1d9c: 0x26b60004  addiu       $s6, $s5, 0x4
    ctx->pc = 0x4b1d9cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x4b1da0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b1da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4b1da4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b1da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4b1da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b1da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4b1dac: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x4b1dacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4b1db0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b1db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b1db4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B1DB4u;
    {
        const bool branch_taken_0x4b1db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1DB4u;
            // 0x4b1db8: 0x26b4012c  addiu       $s4, $s5, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1db4) {
            ctx->pc = 0x4B1DD4u;
            goto label_4b1dd4;
        }
    }
    ctx->pc = 0x4B1DBCu;
    // 0x4b1dbc: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x4b1dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b1dc0: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x4b1dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x4b1dc4: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x4b1dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b1dc8: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x4b1dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x4b1dcc: 0xc6c0000c  lwc1        $f0, 0xC($s6)
    ctx->pc = 0x4b1dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b1dd0: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x4b1dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_4b1dd4:
    // 0x4b1dd4: 0x92a202c4  lbu         $v0, 0x2C4($s5)
    ctx->pc = 0x4b1dd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 708)));
    // 0x4b1dd8: 0x26a602c4  addiu       $a2, $s5, 0x2C4
    ctx->pc = 0x4b1dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 708));
    // 0x4b1ddc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4B1DDCu;
    {
        const bool branch_taken_0x4b1ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1DDCu;
            // 0x4b1de0: 0x26a30344  addiu       $v1, $s5, 0x344 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 836));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1ddc) {
            ctx->pc = 0x4B1E1Cu;
            goto label_4b1e1c;
        }
    }
    ctx->pc = 0x4B1DE4u;
    // 0x4b1de4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b1de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b1de8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b1de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1dec: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x4b1decu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4b1df0: 0x24650008  addiu       $a1, $v1, 0x8
    ctx->pc = 0x4b1df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x4b1df4: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x4b1df4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x4b1df8: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x4b1df8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x4b1dfc: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x4b1dfcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x4b1e00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4b1e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4b1e04: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x4b1e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x4b1e08: 0x8c470354  lw          $a3, 0x354($v0)
    ctx->pc = 0x4b1e08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 852)));
    // 0x4b1e0c: 0xc12c954  jal         func_4B2550
    ctx->pc = 0x4B1E0Cu;
    SET_GPR_U32(ctx, 31, 0x4B1E14u);
    ctx->pc = 0x4B1E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1E0Cu;
            // 0x4b1e10: 0x2466000c  addiu       $a2, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B2550u;
    if (runtime->hasFunction(0x4B2550u)) {
        auto targetFn = runtime->lookupFunction(0x4B2550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1E14u; }
        if (ctx->pc != 0x4B1E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B2550_0x4b2550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1E14u; }
        if (ctx->pc != 0x4B1E14u) { return; }
    }
    ctx->pc = 0x4B1E14u;
label_4b1e14:
    // 0x4b1e14: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4B1E14u;
    {
        const bool branch_taken_0x4b1e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1E14u;
            // 0x4b1e18: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1e14) {
            ctx->pc = 0x4B1E6Cu;
            goto label_4b1e6c;
        }
    }
    ctx->pc = 0x4B1E1Cu;
label_4b1e1c:
    // 0x4b1e1c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x4b1e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x4b1e20: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x4b1e20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b1e24: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4b1e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4b1e28: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4B1E28u;
    {
        const bool branch_taken_0x4b1e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b1e28) {
            ctx->pc = 0x4B1E68u;
            goto label_4b1e68;
        }
    }
    ctx->pc = 0x4B1E30u;
    // 0x4b1e30: 0xc6c00010  lwc1        $f0, 0x10($s6)
    ctx->pc = 0x4b1e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b1e34: 0xe6800010  swc1        $f0, 0x10($s4)
    ctx->pc = 0x4b1e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    // 0x4b1e38: 0xc6c00014  lwc1        $f0, 0x14($s6)
    ctx->pc = 0x4b1e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b1e3c: 0xe6800014  swc1        $f0, 0x14($s4)
    ctx->pc = 0x4b1e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
    // 0x4b1e40: 0xc6c00018  lwc1        $f0, 0x18($s6)
    ctx->pc = 0x4b1e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b1e44: 0xe6800018  swc1        $f0, 0x18($s4)
    ctx->pc = 0x4b1e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
    // 0x4b1e48: 0xc6c0001c  lwc1        $f0, 0x1C($s6)
    ctx->pc = 0x4b1e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b1e4c: 0xe680001c  swc1        $f0, 0x1C($s4)
    ctx->pc = 0x4b1e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
    // 0x4b1e50: 0xc6c00020  lwc1        $f0, 0x20($s6)
    ctx->pc = 0x4b1e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b1e54: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x4b1e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
    // 0x4b1e58: 0xc6c00024  lwc1        $f0, 0x24($s6)
    ctx->pc = 0x4b1e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b1e5c: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x4b1e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
    // 0x4b1e60: 0xc6c00028  lwc1        $f0, 0x28($s6)
    ctx->pc = 0x4b1e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b1e64: 0xe6800028  swc1        $f0, 0x28($s4)
    ctx->pc = 0x4b1e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
label_4b1e68:
    // 0x4b1e68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4b1e68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b1e6c:
    // 0x4b1e6c: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x4b1e6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1e70: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x4b1e70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4b1e74:
    // 0x4b1e74: 0x92220254  lbu         $v0, 0x254($s1)
    ctx->pc = 0x4b1e74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x4b1e78: 0x2645002c  addiu       $a1, $s2, 0x2C
    ctx->pc = 0x4b1e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    // 0x4b1e7c: 0x2684002c  addiu       $a0, $s4, 0x2C
    ctx->pc = 0x4b1e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
    // 0x4b1e80: 0x26300254  addiu       $s0, $s1, 0x254
    ctx->pc = 0x4b1e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 596));
    // 0x4b1e84: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4B1E84u;
    {
        const bool branch_taken_0x4b1e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1E84u;
            // 0x4b1e88: 0x262302d4  addiu       $v1, $s1, 0x2D4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 724));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1e84) {
            ctx->pc = 0x4B1EC8u;
            goto label_4b1ec8;
        }
    }
    ctx->pc = 0x4B1E8Cu;
    // 0x4b1e8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b1e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b1e90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b1e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1e94: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x4b1e94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4b1e98: 0x24650008  addiu       $a1, $v1, 0x8
    ctx->pc = 0x4b1e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x4b1e9c: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x4b1e9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x4b1ea0: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x4b1ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x4b1ea4: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x4b1ea4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x4b1ea8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4b1ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4b1eac: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x4b1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x4b1eb0: 0x8c470354  lw          $a3, 0x354($v0)
    ctx->pc = 0x4b1eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 852)));
    // 0x4b1eb4: 0xc12c954  jal         func_4B2550
    ctx->pc = 0x4B1EB4u;
    SET_GPR_U32(ctx, 31, 0x4B1EBCu);
    ctx->pc = 0x4B1EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1EB4u;
            // 0x4b1eb8: 0x2466000c  addiu       $a2, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B2550u;
    if (runtime->hasFunction(0x4B2550u)) {
        auto targetFn = runtime->lookupFunction(0x4B2550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1EBCu; }
        if (ctx->pc != 0x4B1EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B2550_0x4b2550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1EBCu; }
        if (ctx->pc != 0x4B1EBCu) { return; }
    }
    ctx->pc = 0x4B1EBCu;
label_4b1ebc:
    // 0x4b1ebc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x4B1EBCu;
    {
        const bool branch_taken_0x4b1ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b1ebc) {
            ctx->pc = 0x4B1F38u;
            goto label_4b1f38;
        }
    }
    ctx->pc = 0x4B1EC4u;
    // 0x4b1ec4: 0x0  nop
    ctx->pc = 0x4b1ec4u;
    // NOP
label_4b1ec8:
    // 0x4b1ec8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x4b1ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x4b1ecc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4b1eccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b1ed0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4B1ED0u;
    {
        const bool branch_taken_0x4b1ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b1ed0) {
            ctx->pc = 0x4B1F38u;
            goto label_4b1f38;
        }
    }
    ctx->pc = 0x4B1ED8u;
    // 0x4b1ed8: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x4b1ed8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x4b1edc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B1EDCu;
    {
        const bool branch_taken_0x4b1edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b1edc) {
            ctx->pc = 0x4B1EF0u;
            goto label_4b1ef0;
        }
    }
    ctx->pc = 0x4B1EE4u;
    // 0x4b1ee4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4B1EE4u;
    {
        const bool branch_taken_0x4b1ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1EE4u;
            // 0x4b1ee8: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1ee4) {
            ctx->pc = 0x4B1F38u;
            goto label_4b1f38;
        }
    }
    ctx->pc = 0x4B1EECu;
    // 0x4b1eec: 0x0  nop
    ctx->pc = 0x4b1eecu;
    // NOP
label_4b1ef0:
    // 0x4b1ef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b1ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b1ef4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x4b1ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4b1ef8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x4b1ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b1efc: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x4b1efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4b1f00: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x4b1f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b1f04: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x4b1f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4b1f08: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x4b1f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b1f0c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x4b1f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x4b1f10: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x4b1f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b1f14: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x4b1f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x4b1f18: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x4b1f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b1f1c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x4b1f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x4b1f20: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x4b1f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b1f24: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x4b1f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x4b1f28: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x4b1f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b1f2c: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x4b1f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x4b1f30: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x4b1f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b1f34: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x4b1f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_4b1f38:
    // 0x4b1f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b1f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1f3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b1f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1f40: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4B1F40u;
    SET_GPR_U32(ctx, 31, 0x4B1F48u);
    ctx->pc = 0x4B1F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1F40u;
            // 0x4b1f44: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1F48u; }
        if (ctx->pc != 0x4B1F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1F48u; }
        if (ctx->pc != 0x4B1F48u) { return; }
    }
    ctx->pc = 0x4B1F48u;
label_4b1f48:
    // 0x4b1f48: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4b1f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x4b1f4c: 0x2a620007  slti        $v0, $s3, 0x7
    ctx->pc = 0x4b1f4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x4b1f50: 0x26520024  addiu       $s2, $s2, 0x24
    ctx->pc = 0x4b1f50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x4b1f54: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x4b1f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x4b1f58: 0x26940024  addiu       $s4, $s4, 0x24
    ctx->pc = 0x4b1f58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
    // 0x4b1f5c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x4b1f5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4b1f60: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x4B1F60u;
    {
        const bool branch_taken_0x4b1f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B1F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1F60u;
            // 0x4b1f64: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1f60) {
            ctx->pc = 0x4B1E74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b1e74;
        }
    }
    ctx->pc = 0x4B1F68u;
    // 0x4b1f68: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4b1f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1f6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b1f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1f70: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4B1F70u;
    SET_GPR_U32(ctx, 31, 0x4B1F78u);
    ctx->pc = 0x4B1F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1F70u;
            // 0x4b1f74: 0x24060128  addiu       $a2, $zero, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1F78u; }
        if (ctx->pc != 0x4B1F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1F78u; }
        if (ctx->pc != 0x4B1F78u) { return; }
    }
    ctx->pc = 0x4B1F78u;
label_4b1f78:
    // 0x4b1f78: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4b1f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4b1f7c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4b1f7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b1f80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4b1f80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b1f84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4b1f84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b1f88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4b1f88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b1f8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b1f8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b1f90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b1f90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b1f94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b1f94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1f98: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1F98u;
            // 0x4b1f9c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B1FA0u;
}
