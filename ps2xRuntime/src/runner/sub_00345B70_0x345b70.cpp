#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00345B70
// Address: 0x345b70 - 0x3460f0
void sub_00345B70_0x345b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345B70_0x345b70");
#endif

    switch (ctx->pc) {
        case 0x345c18u: goto label_345c18;
        case 0x345c48u: goto label_345c48;
        case 0x345c58u: goto label_345c58;
        case 0x345ca4u: goto label_345ca4;
        case 0x345cb4u: goto label_345cb4;
        case 0x345cc4u: goto label_345cc4;
        case 0x345cdcu: goto label_345cdc;
        case 0x345cecu: goto label_345cec;
        case 0x345d40u: goto label_345d40;
        case 0x345d50u: goto label_345d50;
        case 0x345d60u: goto label_345d60;
        case 0x345dacu: goto label_345dac;
        case 0x345dbcu: goto label_345dbc;
        case 0x345dccu: goto label_345dcc;
        case 0x345de4u: goto label_345de4;
        case 0x345df4u: goto label_345df4;
        case 0x345e48u: goto label_345e48;
        case 0x345e58u: goto label_345e58;
        case 0x345e68u: goto label_345e68;
        case 0x345eb4u: goto label_345eb4;
        case 0x345ec4u: goto label_345ec4;
        case 0x345ed4u: goto label_345ed4;
        case 0x345eecu: goto label_345eec;
        case 0x345efcu: goto label_345efc;
        case 0x345f50u: goto label_345f50;
        case 0x345f60u: goto label_345f60;
        case 0x345f70u: goto label_345f70;
        case 0x345fbcu: goto label_345fbc;
        case 0x345fccu: goto label_345fcc;
        case 0x345fdcu: goto label_345fdc;
        case 0x345ff4u: goto label_345ff4;
        case 0x346004u: goto label_346004;
        case 0x346058u: goto label_346058;
        case 0x346070u: goto label_346070;
        case 0x346084u: goto label_346084;
        default: break;
    }

    ctx->pc = 0x345b70u;

    // 0x345b70: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x345b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x345b74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x345b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x345b78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x345b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x345b7c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x345b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x345b80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x345b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x345b84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x345b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345b88: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x345b88u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x345b8c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x345b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x345b90: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x345b90u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x345b94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x345b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345b98: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x345b98u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x345b9c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x345b9cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x345ba0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x345ba0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x345ba4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x345ba4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x345ba8: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x345ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x345bac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x345bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x345bb0: 0xa3a000e0  sb          $zero, 0xE0($sp)
    ctx->pc = 0x345bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 224), (uint8_t)GPR_U32(ctx, 0));
    // 0x345bb4: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x345bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x345bb8: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x345bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x345bbc: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x345bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x345bc0: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x345bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x345bc4: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x345bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x345bc8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x345bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x345bcc: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x345bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x345bd0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x345bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x345bd4: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x345bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345bd8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x345bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345bdc: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x345bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x345be0: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x345be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x345be4: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x345be4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x345be8: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x345be8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x345bec: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x345becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x345bf0: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x345bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345bf4: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x345bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345bf8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x345bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x345bfc: 0xafa800e4  sw          $t0, 0xE4($sp)
    ctx->pc = 0x345bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 8));
    // 0x345c00: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x345c00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x345c04: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x345c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x345c08: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x345c08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x345c0c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x345c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x345c10: 0xc08d1ac  jal         func_2346B0
    ctx->pc = 0x345C10u;
    SET_GPR_U32(ctx, 31, 0x345C18u);
    ctx->pc = 0x345C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345C10u;
            // 0x345c14: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2346B0u;
    if (runtime->hasFunction(0x2346B0u)) {
        auto targetFn = runtime->lookupFunction(0x2346B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345C18u; }
        if (ctx->pc != 0x345C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002346B0_0x2346b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345C18u; }
        if (ctx->pc != 0x345C18u) { return; }
    }
    ctx->pc = 0x345C18u;
label_345c18:
    // 0x345c18: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x345c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x345c1c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x345c1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x345c20: 0x50400128  beql        $v0, $zero, . + 4 + (0x128 << 2)
    ctx->pc = 0x345C20u;
    {
        const bool branch_taken_0x345c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x345c20) {
            ctx->pc = 0x345C24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x345C20u;
            // 0x345c24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3460C4u;
            goto label_3460c4;
        }
    }
    ctx->pc = 0x345C28u;
    // 0x345c28: 0xc7b50070  lwc1        $f21, 0x70($sp)
    ctx->pc = 0x345c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x345c2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x345c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x345c30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345c34: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x345c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x345c38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x345c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345c3c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x345c3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345c40: 0xc094498  jal         func_251260
    ctx->pc = 0x345C40u;
    SET_GPR_U32(ctx, 31, 0x345C48u);
    ctx->pc = 0x345C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345C40u;
            // 0x345c44: 0x46150501  sub.s       $f20, $f0, $f21 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345C48u; }
        if (ctx->pc != 0x345C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345C48u; }
        if (ctx->pc != 0x345C48u) { return; }
    }
    ctx->pc = 0x345C48u;
label_345c48:
    // 0x345c48: 0xc4560000  lwc1        $f22, 0x0($v0)
    ctx->pc = 0x345c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x345c4c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x345c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x345c50: 0xc094498  jal         func_251260
    ctx->pc = 0x345C50u;
    SET_GPR_U32(ctx, 31, 0x345C58u);
    ctx->pc = 0x345C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345C50u;
            // 0x345c54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345C58u; }
        if (ctx->pc != 0x345C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345C58u; }
        if (ctx->pc != 0x345C58u) { return; }
    }
    ctx->pc = 0x345C58u;
label_345c58:
    // 0x345c58: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x345c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345c5c: 0x4600b032  c.eq.s      $f22, $f0
    ctx->pc = 0x345c5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x345c60: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x345C60u;
    {
        const bool branch_taken_0x345c60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x345C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345C60u;
            // 0x345c64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345c60) {
            ctx->pc = 0x345C6Cu;
            goto label_345c6c;
        }
    }
    ctx->pc = 0x345C68u;
    // 0x345c68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x345c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345c6c:
    // 0x345c6c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x345C6Cu;
    {
        const bool branch_taken_0x345c6c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x345c6c) {
            ctx->pc = 0x345C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x345C6Cu;
            // 0x345c70: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x345C80u;
            goto label_345c80;
        }
    }
    ctx->pc = 0x345C74u;
    // 0x345c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345c78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x345C78u;
    {
        const bool branch_taken_0x345c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345C78u;
            // 0x345c7c: 0x46800660  cvt.s.w     $f25, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345c78) {
            ctx->pc = 0x345C98u;
            goto label_345c98;
        }
    }
    ctx->pc = 0x345C80u;
label_345c80:
    // 0x345c80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x345c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x345c84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x345c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x345c88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x345c88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345c8c: 0x0  nop
    ctx->pc = 0x345c8cu;
    // NOP
    // 0x345c90: 0x46800660  cvt.s.w     $f25, $f0
    ctx->pc = 0x345c90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
    // 0x345c94: 0x4619ce40  add.s       $f25, $f25, $f25
    ctx->pc = 0x345c94u;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[25]);
label_345c98:
    // 0x345c98: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x345c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x345c9c: 0xc094498  jal         func_251260
    ctx->pc = 0x345C9Cu;
    SET_GPR_U32(ctx, 31, 0x345CA4u);
    ctx->pc = 0x345CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345C9Cu;
            // 0x345ca0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345CA4u; }
        if (ctx->pc != 0x345CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345CA4u; }
        if (ctx->pc != 0x345CA4u) { return; }
    }
    ctx->pc = 0x345CA4u;
label_345ca4:
    // 0x345ca4: 0xc4580000  lwc1        $f24, 0x0($v0)
    ctx->pc = 0x345ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x345ca8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x345ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x345cac: 0xc094498  jal         func_251260
    ctx->pc = 0x345CACu;
    SET_GPR_U32(ctx, 31, 0x345CB4u);
    ctx->pc = 0x345CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345CACu;
            // 0x345cb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345CB4u; }
        if (ctx->pc != 0x345CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345CB4u; }
        if (ctx->pc != 0x345CB4u) { return; }
    }
    ctx->pc = 0x345CB4u;
label_345cb4:
    // 0x345cb4: 0xc4560000  lwc1        $f22, 0x0($v0)
    ctx->pc = 0x345cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x345cb8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x345cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x345cbc: 0xc094498  jal         func_251260
    ctx->pc = 0x345CBCu;
    SET_GPR_U32(ctx, 31, 0x345CC4u);
    ctx->pc = 0x345CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345CBCu;
            // 0x345cc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345CC4u; }
        if (ctx->pc != 0x345CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345CC4u; }
        if (ctx->pc != 0x345CC4u) { return; }
    }
    ctx->pc = 0x345CC4u;
label_345cc4:
    // 0x345cc4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x345cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345cc8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x345cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x345ccc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x345cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345cd0: 0x4600a81a  mula.s      $f21, $f0
    ctx->pc = 0x345cd0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x345cd4: 0xc094498  jal         func_251260
    ctx->pc = 0x345CD4u;
    SET_GPR_U32(ctx, 31, 0x345CDCu);
    ctx->pc = 0x345CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345CD4u;
            // 0x345cd8: 0x4616a5dc  madd.s      $f23, $f20, $f22 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[22]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345CDCu; }
        if (ctx->pc != 0x345CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345CDCu; }
        if (ctx->pc != 0x345CDCu) { return; }
    }
    ctx->pc = 0x345CDCu;
label_345cdc:
    // 0x345cdc: 0xc4560000  lwc1        $f22, 0x0($v0)
    ctx->pc = 0x345cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x345ce0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x345ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x345ce4: 0xc094498  jal         func_251260
    ctx->pc = 0x345CE4u;
    SET_GPR_U32(ctx, 31, 0x345CECu);
    ctx->pc = 0x345CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345CE4u;
            // 0x345ce8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345CECu; }
        if (ctx->pc != 0x345CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345CECu; }
        if (ctx->pc != 0x345CECu) { return; }
    }
    ctx->pc = 0x345CECu;
label_345cec:
    // 0x345cec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x345cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345cf0: 0x4600b032  c.eq.s      $f22, $f0
    ctx->pc = 0x345cf0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x345cf4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x345CF4u;
    {
        const bool branch_taken_0x345cf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x345CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345CF4u;
            // 0x345cf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345cf4) {
            ctx->pc = 0x345D00u;
            goto label_345d00;
        }
    }
    ctx->pc = 0x345CFCu;
    // 0x345cfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x345cfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345d00:
    // 0x345d00: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x345D00u;
    {
        const bool branch_taken_0x345d00 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x345d00) {
            ctx->pc = 0x345D04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x345D00u;
            // 0x345d04: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x345D14u;
            goto label_345d14;
        }
    }
    ctx->pc = 0x345D08u;
    // 0x345d08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345d0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x345D0Cu;
    {
        const bool branch_taken_0x345d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345D0Cu;
            // 0x345d10: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345d0c) {
            ctx->pc = 0x345D2Cu;
            goto label_345d2c;
        }
    }
    ctx->pc = 0x345D14u;
label_345d14:
    // 0x345d14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x345d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x345d18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x345d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x345d1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x345d1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345d20: 0x0  nop
    ctx->pc = 0x345d20u;
    // NOP
    // 0x345d24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x345d24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x345d28: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x345d28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_345d2c:
    // 0x345d2c: 0x4600b81a  mula.s      $f23, $f0
    ctx->pc = 0x345d2cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x345d30: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x345d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x345d34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x345d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345d38: 0xc0b6d90  jal         func_2DB640
    ctx->pc = 0x345D38u;
    SET_GPR_U32(ctx, 31, 0x345D40u);
    ctx->pc = 0x345D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345D38u;
            // 0x345d3c: 0x4619c59c  madd.s      $f22, $f24, $f25 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[25]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB640u;
    if (runtime->hasFunction(0x2DB640u)) {
        auto targetFn = runtime->lookupFunction(0x2DB640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345D40u; }
        if (ctx->pc != 0x345D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB640_0x2db640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345D40u; }
        if (ctx->pc != 0x345D40u) { return; }
    }
    ctx->pc = 0x345D40u;
label_345d40:
    // 0x345d40: 0xe4560000  swc1        $f22, 0x0($v0)
    ctx->pc = 0x345d40u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x345d44: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x345d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x345d48: 0xc094498  jal         func_251260
    ctx->pc = 0x345D48u;
    SET_GPR_U32(ctx, 31, 0x345D50u);
    ctx->pc = 0x345D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345D48u;
            // 0x345d4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345D50u; }
        if (ctx->pc != 0x345D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345D50u; }
        if (ctx->pc != 0x345D50u) { return; }
    }
    ctx->pc = 0x345D50u;
label_345d50:
    // 0x345d50: 0xc4560000  lwc1        $f22, 0x0($v0)
    ctx->pc = 0x345d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x345d54: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x345d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x345d58: 0xc094498  jal         func_251260
    ctx->pc = 0x345D58u;
    SET_GPR_U32(ctx, 31, 0x345D60u);
    ctx->pc = 0x345D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345D58u;
            // 0x345d5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345D60u; }
        if (ctx->pc != 0x345D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345D60u; }
        if (ctx->pc != 0x345D60u) { return; }
    }
    ctx->pc = 0x345D60u;
label_345d60:
    // 0x345d60: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x345d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345d64: 0x4600b032  c.eq.s      $f22, $f0
    ctx->pc = 0x345d64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x345d68: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x345D68u;
    {
        const bool branch_taken_0x345d68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x345D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345D68u;
            // 0x345d6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345d68) {
            ctx->pc = 0x345D74u;
            goto label_345d74;
        }
    }
    ctx->pc = 0x345D70u;
    // 0x345d70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x345d70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345d74:
    // 0x345d74: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x345D74u;
    {
        const bool branch_taken_0x345d74 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x345d74) {
            ctx->pc = 0x345D78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x345D74u;
            // 0x345d78: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x345D88u;
            goto label_345d88;
        }
    }
    ctx->pc = 0x345D7Cu;
    // 0x345d7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345d80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x345D80u;
    {
        const bool branch_taken_0x345d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345D80u;
            // 0x345d84: 0x46800660  cvt.s.w     $f25, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345d80) {
            ctx->pc = 0x345DA0u;
            goto label_345da0;
        }
    }
    ctx->pc = 0x345D88u;
label_345d88:
    // 0x345d88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x345d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x345d8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x345d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x345d90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x345d90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345d94: 0x0  nop
    ctx->pc = 0x345d94u;
    // NOP
    // 0x345d98: 0x46800660  cvt.s.w     $f25, $f0
    ctx->pc = 0x345d98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
    // 0x345d9c: 0x4619ce40  add.s       $f25, $f25, $f25
    ctx->pc = 0x345d9cu;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[25]);
label_345da0:
    // 0x345da0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x345da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x345da4: 0xc094498  jal         func_251260
    ctx->pc = 0x345DA4u;
    SET_GPR_U32(ctx, 31, 0x345DACu);
    ctx->pc = 0x345DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345DA4u;
            // 0x345da8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345DACu; }
        if (ctx->pc != 0x345DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345DACu; }
        if (ctx->pc != 0x345DACu) { return; }
    }
    ctx->pc = 0x345DACu;
label_345dac:
    // 0x345dac: 0xc4580000  lwc1        $f24, 0x0($v0)
    ctx->pc = 0x345dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x345db0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x345db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x345db4: 0xc094498  jal         func_251260
    ctx->pc = 0x345DB4u;
    SET_GPR_U32(ctx, 31, 0x345DBCu);
    ctx->pc = 0x345DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345DB4u;
            // 0x345db8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345DBCu; }
        if (ctx->pc != 0x345DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345DBCu; }
        if (ctx->pc != 0x345DBCu) { return; }
    }
    ctx->pc = 0x345DBCu;
label_345dbc:
    // 0x345dbc: 0xc4560000  lwc1        $f22, 0x0($v0)
    ctx->pc = 0x345dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x345dc0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x345dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x345dc4: 0xc094498  jal         func_251260
    ctx->pc = 0x345DC4u;
    SET_GPR_U32(ctx, 31, 0x345DCCu);
    ctx->pc = 0x345DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345DC4u;
            // 0x345dc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345DCCu; }
        if (ctx->pc != 0x345DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345DCCu; }
        if (ctx->pc != 0x345DCCu) { return; }
    }
    ctx->pc = 0x345DCCu;
label_345dcc:
    // 0x345dcc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x345dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345dd0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x345dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x345dd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x345dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345dd8: 0x4600a81a  mula.s      $f21, $f0
    ctx->pc = 0x345dd8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x345ddc: 0xc094498  jal         func_251260
    ctx->pc = 0x345DDCu;
    SET_GPR_U32(ctx, 31, 0x345DE4u);
    ctx->pc = 0x345DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345DDCu;
            // 0x345de0: 0x4616a5dc  madd.s      $f23, $f20, $f22 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[22]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345DE4u; }
        if (ctx->pc != 0x345DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345DE4u; }
        if (ctx->pc != 0x345DE4u) { return; }
    }
    ctx->pc = 0x345DE4u;
label_345de4:
    // 0x345de4: 0xc4560000  lwc1        $f22, 0x0($v0)
    ctx->pc = 0x345de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x345de8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x345de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x345dec: 0xc094498  jal         func_251260
    ctx->pc = 0x345DECu;
    SET_GPR_U32(ctx, 31, 0x345DF4u);
    ctx->pc = 0x345DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345DECu;
            // 0x345df0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345DF4u; }
        if (ctx->pc != 0x345DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345DF4u; }
        if (ctx->pc != 0x345DF4u) { return; }
    }
    ctx->pc = 0x345DF4u;
label_345df4:
    // 0x345df4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x345df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345df8: 0x4600b032  c.eq.s      $f22, $f0
    ctx->pc = 0x345df8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x345dfc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x345DFCu;
    {
        const bool branch_taken_0x345dfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x345E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345DFCu;
            // 0x345e00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345dfc) {
            ctx->pc = 0x345E08u;
            goto label_345e08;
        }
    }
    ctx->pc = 0x345E04u;
    // 0x345e04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x345e04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345e08:
    // 0x345e08: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x345E08u;
    {
        const bool branch_taken_0x345e08 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x345e08) {
            ctx->pc = 0x345E0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x345E08u;
            // 0x345e0c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x345E1Cu;
            goto label_345e1c;
        }
    }
    ctx->pc = 0x345E10u;
    // 0x345e10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345e10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345e14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x345E14u;
    {
        const bool branch_taken_0x345e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345E14u;
            // 0x345e18: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345e14) {
            ctx->pc = 0x345E34u;
            goto label_345e34;
        }
    }
    ctx->pc = 0x345E1Cu;
label_345e1c:
    // 0x345e1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x345e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x345e20: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x345e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x345e24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x345e24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345e28: 0x0  nop
    ctx->pc = 0x345e28u;
    // NOP
    // 0x345e2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x345e2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x345e30: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x345e30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_345e34:
    // 0x345e34: 0x4600b81a  mula.s      $f23, $f0
    ctx->pc = 0x345e34u;
    ctx->f[31] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x345e38: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x345e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x345e3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x345e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345e40: 0xc0b6d90  jal         func_2DB640
    ctx->pc = 0x345E40u;
    SET_GPR_U32(ctx, 31, 0x345E48u);
    ctx->pc = 0x345E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345E40u;
            // 0x345e44: 0x4619c59c  madd.s      $f22, $f24, $f25 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[25]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB640u;
    if (runtime->hasFunction(0x2DB640u)) {
        auto targetFn = runtime->lookupFunction(0x2DB640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345E48u; }
        if (ctx->pc != 0x345E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB640_0x2db640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345E48u; }
        if (ctx->pc != 0x345E48u) { return; }
    }
    ctx->pc = 0x345E48u;
label_345e48:
    // 0x345e48: 0xe4560000  swc1        $f22, 0x0($v0)
    ctx->pc = 0x345e48u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x345e4c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x345e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x345e50: 0xc094498  jal         func_251260
    ctx->pc = 0x345E50u;
    SET_GPR_U32(ctx, 31, 0x345E58u);
    ctx->pc = 0x345E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345E50u;
            // 0x345e54: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345E58u; }
        if (ctx->pc != 0x345E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345E58u; }
        if (ctx->pc != 0x345E58u) { return; }
    }
    ctx->pc = 0x345E58u;
label_345e58:
    // 0x345e58: 0xc4560000  lwc1        $f22, 0x0($v0)
    ctx->pc = 0x345e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x345e5c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x345e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x345e60: 0xc094498  jal         func_251260
    ctx->pc = 0x345E60u;
    SET_GPR_U32(ctx, 31, 0x345E68u);
    ctx->pc = 0x345E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345E60u;
            // 0x345e64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345E68u; }
        if (ctx->pc != 0x345E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345E68u; }
        if (ctx->pc != 0x345E68u) { return; }
    }
    ctx->pc = 0x345E68u;
label_345e68:
    // 0x345e68: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x345e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345e6c: 0x4600b032  c.eq.s      $f22, $f0
    ctx->pc = 0x345e6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x345e70: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x345E70u;
    {
        const bool branch_taken_0x345e70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x345E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345E70u;
            // 0x345e74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345e70) {
            ctx->pc = 0x345E7Cu;
            goto label_345e7c;
        }
    }
    ctx->pc = 0x345E78u;
    // 0x345e78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x345e78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345e7c:
    // 0x345e7c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x345E7Cu;
    {
        const bool branch_taken_0x345e7c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x345e7c) {
            ctx->pc = 0x345E80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x345E7Cu;
            // 0x345e80: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x345E90u;
            goto label_345e90;
        }
    }
    ctx->pc = 0x345E84u;
    // 0x345e84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345e88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x345E88u;
    {
        const bool branch_taken_0x345e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345E88u;
            // 0x345e8c: 0x46800660  cvt.s.w     $f25, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345e88) {
            ctx->pc = 0x345EA8u;
            goto label_345ea8;
        }
    }
    ctx->pc = 0x345E90u;
label_345e90:
    // 0x345e90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x345e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x345e94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x345e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x345e98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x345e98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345e9c: 0x0  nop
    ctx->pc = 0x345e9cu;
    // NOP
    // 0x345ea0: 0x46800660  cvt.s.w     $f25, $f0
    ctx->pc = 0x345ea0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
    // 0x345ea4: 0x4619ce40  add.s       $f25, $f25, $f25
    ctx->pc = 0x345ea4u;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[25]);
label_345ea8:
    // 0x345ea8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x345ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x345eac: 0xc094498  jal         func_251260
    ctx->pc = 0x345EACu;
    SET_GPR_U32(ctx, 31, 0x345EB4u);
    ctx->pc = 0x345EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345EACu;
            // 0x345eb0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345EB4u; }
        if (ctx->pc != 0x345EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345EB4u; }
        if (ctx->pc != 0x345EB4u) { return; }
    }
    ctx->pc = 0x345EB4u;
label_345eb4:
    // 0x345eb4: 0xc4580000  lwc1        $f24, 0x0($v0)
    ctx->pc = 0x345eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x345eb8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x345eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x345ebc: 0xc094498  jal         func_251260
    ctx->pc = 0x345EBCu;
    SET_GPR_U32(ctx, 31, 0x345EC4u);
    ctx->pc = 0x345EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345EBCu;
            // 0x345ec0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345EC4u; }
        if (ctx->pc != 0x345EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345EC4u; }
        if (ctx->pc != 0x345EC4u) { return; }
    }
    ctx->pc = 0x345EC4u;
label_345ec4:
    // 0x345ec4: 0xc4560000  lwc1        $f22, 0x0($v0)
    ctx->pc = 0x345ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x345ec8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x345ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x345ecc: 0xc094498  jal         func_251260
    ctx->pc = 0x345ECCu;
    SET_GPR_U32(ctx, 31, 0x345ED4u);
    ctx->pc = 0x345ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345ECCu;
            // 0x345ed0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345ED4u; }
        if (ctx->pc != 0x345ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345ED4u; }
        if (ctx->pc != 0x345ED4u) { return; }
    }
    ctx->pc = 0x345ED4u;
label_345ed4:
    // 0x345ed4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x345ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345ed8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x345ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x345edc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x345edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345ee0: 0x4600a81a  mula.s      $f21, $f0
    ctx->pc = 0x345ee0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x345ee4: 0xc094498  jal         func_251260
    ctx->pc = 0x345EE4u;
    SET_GPR_U32(ctx, 31, 0x345EECu);
    ctx->pc = 0x345EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345EE4u;
            // 0x345ee8: 0x4616a5dc  madd.s      $f23, $f20, $f22 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[22]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345EECu; }
        if (ctx->pc != 0x345EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345EECu; }
        if (ctx->pc != 0x345EECu) { return; }
    }
    ctx->pc = 0x345EECu;
label_345eec:
    // 0x345eec: 0xc4560000  lwc1        $f22, 0x0($v0)
    ctx->pc = 0x345eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x345ef0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x345ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x345ef4: 0xc094498  jal         func_251260
    ctx->pc = 0x345EF4u;
    SET_GPR_U32(ctx, 31, 0x345EFCu);
    ctx->pc = 0x345EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345EF4u;
            // 0x345ef8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345EFCu; }
        if (ctx->pc != 0x345EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345EFCu; }
        if (ctx->pc != 0x345EFCu) { return; }
    }
    ctx->pc = 0x345EFCu;
label_345efc:
    // 0x345efc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x345efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345f00: 0x4600b032  c.eq.s      $f22, $f0
    ctx->pc = 0x345f00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x345f04: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x345F04u;
    {
        const bool branch_taken_0x345f04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x345F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345F04u;
            // 0x345f08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345f04) {
            ctx->pc = 0x345F10u;
            goto label_345f10;
        }
    }
    ctx->pc = 0x345F0Cu;
    // 0x345f0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x345f0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345f10:
    // 0x345f10: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x345F10u;
    {
        const bool branch_taken_0x345f10 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x345f10) {
            ctx->pc = 0x345F14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x345F10u;
            // 0x345f14: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x345F24u;
            goto label_345f24;
        }
    }
    ctx->pc = 0x345F18u;
    // 0x345f18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345f1c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x345F1Cu;
    {
        const bool branch_taken_0x345f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345F1Cu;
            // 0x345f20: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345f1c) {
            ctx->pc = 0x345F3Cu;
            goto label_345f3c;
        }
    }
    ctx->pc = 0x345F24u;
label_345f24:
    // 0x345f24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x345f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x345f28: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x345f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x345f2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x345f2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345f30: 0x0  nop
    ctx->pc = 0x345f30u;
    // NOP
    // 0x345f34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x345f34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x345f38: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x345f38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_345f3c:
    // 0x345f3c: 0x4600b81a  mula.s      $f23, $f0
    ctx->pc = 0x345f3cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x345f40: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x345f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x345f44: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x345f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345f48: 0xc0b6d90  jal         func_2DB640
    ctx->pc = 0x345F48u;
    SET_GPR_U32(ctx, 31, 0x345F50u);
    ctx->pc = 0x345F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345F48u;
            // 0x345f4c: 0x4619c59c  madd.s      $f22, $f24, $f25 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[25]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB640u;
    if (runtime->hasFunction(0x2DB640u)) {
        auto targetFn = runtime->lookupFunction(0x2DB640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345F50u; }
        if (ctx->pc != 0x345F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB640_0x2db640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345F50u; }
        if (ctx->pc != 0x345F50u) { return; }
    }
    ctx->pc = 0x345F50u;
label_345f50:
    // 0x345f50: 0xe4560000  swc1        $f22, 0x0($v0)
    ctx->pc = 0x345f50u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x345f54: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x345f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x345f58: 0xc094498  jal         func_251260
    ctx->pc = 0x345F58u;
    SET_GPR_U32(ctx, 31, 0x345F60u);
    ctx->pc = 0x345F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345F58u;
            // 0x345f5c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345F60u; }
        if (ctx->pc != 0x345F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345F60u; }
        if (ctx->pc != 0x345F60u) { return; }
    }
    ctx->pc = 0x345F60u;
label_345f60:
    // 0x345f60: 0xc4560000  lwc1        $f22, 0x0($v0)
    ctx->pc = 0x345f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x345f64: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x345f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x345f68: 0xc094498  jal         func_251260
    ctx->pc = 0x345F68u;
    SET_GPR_U32(ctx, 31, 0x345F70u);
    ctx->pc = 0x345F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345F68u;
            // 0x345f6c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345F70u; }
        if (ctx->pc != 0x345F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345F70u; }
        if (ctx->pc != 0x345F70u) { return; }
    }
    ctx->pc = 0x345F70u;
label_345f70:
    // 0x345f70: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x345f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345f74: 0x4600b032  c.eq.s      $f22, $f0
    ctx->pc = 0x345f74u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x345f78: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x345F78u;
    {
        const bool branch_taken_0x345f78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x345F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345F78u;
            // 0x345f7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345f78) {
            ctx->pc = 0x345F84u;
            goto label_345f84;
        }
    }
    ctx->pc = 0x345F80u;
    // 0x345f80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x345f80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345f84:
    // 0x345f84: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x345F84u;
    {
        const bool branch_taken_0x345f84 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x345f84) {
            ctx->pc = 0x345F88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x345F84u;
            // 0x345f88: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x345F98u;
            goto label_345f98;
        }
    }
    ctx->pc = 0x345F8Cu;
    // 0x345f8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345f90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x345F90u;
    {
        const bool branch_taken_0x345f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345F90u;
            // 0x345f94: 0x46800620  cvt.s.w     $f24, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345f90) {
            ctx->pc = 0x345FB0u;
            goto label_345fb0;
        }
    }
    ctx->pc = 0x345F98u;
label_345f98:
    // 0x345f98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x345f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x345f9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x345f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x345fa0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x345fa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345fa4: 0x0  nop
    ctx->pc = 0x345fa4u;
    // NOP
    // 0x345fa8: 0x46800620  cvt.s.w     $f24, $f0
    ctx->pc = 0x345fa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
    // 0x345fac: 0x4618c600  add.s       $f24, $f24, $f24
    ctx->pc = 0x345facu;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[24]);
label_345fb0:
    // 0x345fb0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x345fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x345fb4: 0xc094498  jal         func_251260
    ctx->pc = 0x345FB4u;
    SET_GPR_U32(ctx, 31, 0x345FBCu);
    ctx->pc = 0x345FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345FB4u;
            // 0x345fb8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345FBCu; }
        if (ctx->pc != 0x345FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345FBCu; }
        if (ctx->pc != 0x345FBCu) { return; }
    }
    ctx->pc = 0x345FBCu;
label_345fbc:
    // 0x345fbc: 0xc4570000  lwc1        $f23, 0x0($v0)
    ctx->pc = 0x345fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x345fc0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x345fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x345fc4: 0xc094498  jal         func_251260
    ctx->pc = 0x345FC4u;
    SET_GPR_U32(ctx, 31, 0x345FCCu);
    ctx->pc = 0x345FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345FC4u;
            // 0x345fc8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345FCCu; }
        if (ctx->pc != 0x345FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345FCCu; }
        if (ctx->pc != 0x345FCCu) { return; }
    }
    ctx->pc = 0x345FCCu;
label_345fcc:
    // 0x345fcc: 0xc4560000  lwc1        $f22, 0x0($v0)
    ctx->pc = 0x345fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x345fd0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x345fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x345fd4: 0xc094498  jal         func_251260
    ctx->pc = 0x345FD4u;
    SET_GPR_U32(ctx, 31, 0x345FDCu);
    ctx->pc = 0x345FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345FD4u;
            // 0x345fd8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345FDCu; }
        if (ctx->pc != 0x345FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345FDCu; }
        if (ctx->pc != 0x345FDCu) { return; }
    }
    ctx->pc = 0x345FDCu;
label_345fdc:
    // 0x345fdc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x345fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345fe0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x345fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x345fe4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x345fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x345fe8: 0x4600a81a  mula.s      $f21, $f0
    ctx->pc = 0x345fe8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x345fec: 0xc094498  jal         func_251260
    ctx->pc = 0x345FECu;
    SET_GPR_U32(ctx, 31, 0x345FF4u);
    ctx->pc = 0x345FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345FECu;
            // 0x345ff0: 0x4616a55c  madd.s      $f21, $f20, $f22 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[22]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345FF4u; }
        if (ctx->pc != 0x345FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345FF4u; }
        if (ctx->pc != 0x345FF4u) { return; }
    }
    ctx->pc = 0x345FF4u;
label_345ff4:
    // 0x345ff4: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x345ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x345ff8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x345ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x345ffc: 0xc094498  jal         func_251260
    ctx->pc = 0x345FFCu;
    SET_GPR_U32(ctx, 31, 0x346004u);
    ctx->pc = 0x346000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345FFCu;
            // 0x346000: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251260u;
    if (runtime->hasFunction(0x251260u)) {
        auto targetFn = runtime->lookupFunction(0x251260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346004u; }
        if (ctx->pc != 0x346004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251260_0x251260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346004u; }
        if (ctx->pc != 0x346004u) { return; }
    }
    ctx->pc = 0x346004u;
label_346004:
    // 0x346004: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x346004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346008: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x346008u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34600c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x34600Cu;
    {
        const bool branch_taken_0x34600c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x346010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34600Cu;
            // 0x346010: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34600c) {
            ctx->pc = 0x346018u;
            goto label_346018;
        }
    }
    ctx->pc = 0x346014u;
    // 0x346014: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x346014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346018:
    // 0x346018: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x346018u;
    {
        const bool branch_taken_0x346018 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x346018) {
            ctx->pc = 0x34601Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346018u;
            // 0x34601c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34602Cu;
            goto label_34602c;
        }
    }
    ctx->pc = 0x346020u;
    // 0x346020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346024: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x346024u;
    {
        const bool branch_taken_0x346024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346024u;
            // 0x346028: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346024) {
            ctx->pc = 0x346044u;
            goto label_346044;
        }
    }
    ctx->pc = 0x34602Cu;
label_34602c:
    // 0x34602c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34602cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x346030: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x346030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x346034: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x346034u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346038: 0x0  nop
    ctx->pc = 0x346038u;
    // NOP
    // 0x34603c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34603cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346040: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346040u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_346044:
    // 0x346044: 0x4600a81a  mula.s      $f21, $f0
    ctx->pc = 0x346044u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x346048: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x346048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34604c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x34604cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x346050: 0xc0b6d90  jal         func_2DB640
    ctx->pc = 0x346050u;
    SET_GPR_U32(ctx, 31, 0x346058u);
    ctx->pc = 0x346054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346050u;
            // 0x346054: 0x4618bd1c  madd.s      $f20, $f23, $f24 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[23], ctx->f[24]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB640u;
    if (runtime->hasFunction(0x2DB640u)) {
        auto targetFn = runtime->lookupFunction(0x2DB640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346058u; }
        if (ctx->pc != 0x346058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB640_0x2db640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346058u; }
        if (ctx->pc != 0x346058u) { return; }
    }
    ctx->pc = 0x346058u;
label_346058:
    // 0x346058: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x346058u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x34605c: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x34605cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x346060: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x346060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x346064: 0xc7ae0058  lwc1        $f14, 0x58($sp)
    ctx->pc = 0x346064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x346068: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x346068u;
    SET_GPR_U32(ctx, 31, 0x346070u);
    ctx->pc = 0x34606Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346068u;
            // 0x34606c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346070u; }
        if (ctx->pc != 0x346070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346070u; }
        if (ctx->pc != 0x346070u) { return; }
    }
    ctx->pc = 0x346070u;
label_346070:
    // 0x346070: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x346070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x346074: 0xc7ad0064  lwc1        $f13, 0x64($sp)
    ctx->pc = 0x346074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x346078: 0xc7ae0068  lwc1        $f14, 0x68($sp)
    ctx->pc = 0x346078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x34607c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x34607Cu;
    SET_GPR_U32(ctx, 31, 0x346084u);
    ctx->pc = 0x346080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34607Cu;
            // 0x346080: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346084u; }
        if (ctx->pc != 0x346084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346084u; }
        if (ctx->pc != 0x346084u) { return; }
    }
    ctx->pc = 0x346084u;
label_346084:
    // 0x346084: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x346084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x346088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x346088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34608c: 0x80830018  lb          $v1, 0x18($a0)
    ctx->pc = 0x34608cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x346090: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x346090u;
    {
        const bool branch_taken_0x346090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x346090) {
            ctx->pc = 0x346094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346090u;
            // 0x346094: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3460A0u;
            goto label_3460a0;
        }
    }
    ctx->pc = 0x346098u;
    // 0x346098: 0x80820010  lb          $v0, 0x10($a0)
    ctx->pc = 0x346098u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x34609c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x34609cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3460a0:
    // 0x3460a0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3460A0u;
    {
        const bool branch_taken_0x3460a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3460a0) {
            ctx->pc = 0x3460C0u;
            goto label_3460c0;
        }
    }
    ctx->pc = 0x3460A8u;
    // 0x3460a8: 0x8c620200  lw          $v0, 0x200($v1)
    ctx->pc = 0x3460a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x3460ac: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3460ACu;
    {
        const bool branch_taken_0x3460ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3460ac) {
            ctx->pc = 0x3460B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3460ACu;
            // 0x3460b0: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3460BCu;
            goto label_3460bc;
        }
    }
    ctx->pc = 0x3460B4u;
    // 0x3460b4: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x3460b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x3460b8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3460b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3460bc:
    // 0x3460bc: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x3460bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_3460c0:
    // 0x3460c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3460c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3460c4:
    // 0x3460c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3460c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3460c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3460c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3460cc: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x3460ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x3460d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3460d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3460d4: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x3460d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3460d8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3460d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3460dc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3460dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3460e0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3460e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3460e4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3460e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3460e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3460E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3460ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3460E8u;
            // 0x3460ec: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3460F0u;
}
