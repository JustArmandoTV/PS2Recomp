#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B7BE0
// Address: 0x2b7be0 - 0x2b7cc0
void sub_002B7BE0_0x2b7be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7BE0_0x2b7be0");
#endif

    switch (ctx->pc) {
        case 0x2b7c88u: goto label_2b7c88;
        case 0x2b7c98u: goto label_2b7c98;
        case 0x2b7ca8u: goto label_2b7ca8;
        default: break;
    }

    ctx->pc = 0x2b7be0u;

    // 0x2b7be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b7be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b7be4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2b7be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2b7be8: 0xc4418318  lwc1        $f1, -0x7CE8($v0)
    ctx->pc = 0x2b7be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7bec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b7becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b7bf0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b7bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b7bf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b7bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b7bf8: 0x2463cfc0  addiu       $v1, $v1, -0x3040
    ctx->pc = 0x2b7bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954944));
    // 0x2b7bfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b7bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7c00: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2b7c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2b7c04: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2b7c04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2b7c08: 0xc4408320  lwc1        $f0, -0x7CE0($v0)
    ctx->pc = 0x2b7c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7c0c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2b7c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2b7c10: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2b7c10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b7c14: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b7c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b7c18: 0x246329d0  addiu       $v1, $v1, 0x29D0
    ctx->pc = 0x2b7c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10704));
    // 0x2b7c1c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2b7c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b7c20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b7c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b7c24: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2b7c24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2b7c28: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2b7c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2b7c2c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2b7c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2b7c30: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x2b7c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x2b7c34: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x2b7c34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x2b7c38: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2b7c38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2b7c3c: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x2b7c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x2b7c40: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x2b7c40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x2b7c44: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x2b7c44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x2b7c48: 0xa0800058  sb          $zero, 0x58($a0)
    ctx->pc = 0x2b7c48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7c4c: 0xa0800059  sb          $zero, 0x59($a0)
    ctx->pc = 0x2b7c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 89), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7c50: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x2b7c50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x2b7c54: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x2b7c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x2b7c58: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x2b7c58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x2b7c5c: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x2b7c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x2b7c60: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x2b7c60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x2b7c64: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x2b7c64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x2b7c68: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x2b7c68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x2b7c6c: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x2b7c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x2b7c70: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x2b7c70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x2b7c74: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x2b7c74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x2b7c78: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x2b7c78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x2b7c7c: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x2b7c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    // 0x2b7c80: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2B7C80u;
    SET_GPR_U32(ctx, 31, 0x2B7C88u);
    ctx->pc = 0x2B7C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7C80u;
            // 0x2b7c84: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7C88u; }
        if (ctx->pc != 0x2B7C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7C88u; }
        if (ctx->pc != 0x2B7C88u) { return; }
    }
    ctx->pc = 0x2B7C88u;
label_2b7c88:
    // 0x2b7c88: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b7c88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b7c8c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2b7c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2b7c90: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B7C90u;
    SET_GPR_U32(ctx, 31, 0x2B7C98u);
    ctx->pc = 0x2B7C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7C90u;
            // 0x2b7c94: 0x24a518d0  addiu       $a1, $a1, 0x18D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7C98u; }
        if (ctx->pc != 0x2B7C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7C98u; }
        if (ctx->pc != 0x2B7C98u) { return; }
    }
    ctx->pc = 0x2B7C98u;
label_2b7c98:
    // 0x2b7c98: 0x260400a4  addiu       $a0, $s0, 0xA4
    ctx->pc = 0x2b7c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
    // 0x2b7c9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b7c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7ca0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2B7CA0u;
    SET_GPR_U32(ctx, 31, 0x2B7CA8u);
    ctx->pc = 0x2B7CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7CA0u;
            // 0x2b7ca4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7CA8u; }
        if (ctx->pc != 0x2B7CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7CA8u; }
        if (ctx->pc != 0x2B7CA8u) { return; }
    }
    ctx->pc = 0x2B7CA8u;
label_2b7ca8:
    // 0x2b7ca8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b7ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7cac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b7cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7cb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b7cb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7CB4u;
            // 0x2b7cb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B7CBCu;
    // 0x2b7cbc: 0x0  nop
    ctx->pc = 0x2b7cbcu;
    // NOP
}
