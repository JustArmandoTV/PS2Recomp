#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00536A10
// Address: 0x536a10 - 0x536af0
void sub_00536A10_0x536a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00536A10_0x536a10");
#endif

    switch (ctx->pc) {
        case 0x536a98u: goto label_536a98;
        case 0x536aa0u: goto label_536aa0;
        default: break;
    }

    ctx->pc = 0x536a10u;

    // 0x536a10: 0x80788fc  j           func_1E23F0
    ctx->pc = 0x536A10u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x536A18u;
    // 0x536a18: 0x0  nop
    ctx->pc = 0x536a18u;
    // NOP
    // 0x536a1c: 0x0  nop
    ctx->pc = 0x536a1cu;
    // NOP
    // 0x536a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x536a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x536a24: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x536a24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x536a28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x536a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x536a2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x536a2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x536a30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x536a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x536a34: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x536a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x536a38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x536a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x536a3c: 0x24a5cfe0  addiu       $a1, $a1, -0x3020
    ctx->pc = 0x536a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954976));
    // 0x536a40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x536a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x536a44: 0x246324a0  addiu       $v1, $v1, 0x24A0
    ctx->pc = 0x536a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9376));
    // 0x536a48: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x536a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x536a4c: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x536a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
    // 0x536a50: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x536a50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x536a54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x536a54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x536a58: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x536a58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x536a5c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x536a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x536a60: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x536a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x536a64: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x536a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x536a68: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x536a68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x536a6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x536a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x536a70: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x536a70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x536a74: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x536a74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x536a78: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x536a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x536a7c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x536a7cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x536a80: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x536a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x536a84: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x536a84u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x536a88: 0xa080005d  sb          $zero, 0x5D($a0)
    ctx->pc = 0x536a88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x536a8c: 0xa082005e  sb          $v0, 0x5E($a0)
    ctx->pc = 0x536a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 94), (uint8_t)GPR_U32(ctx, 2));
    // 0x536a90: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x536A90u;
    SET_GPR_U32(ctx, 31, 0x536A98u);
    ctx->pc = 0x536A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536A90u;
            // 0x536a94: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536A98u; }
        if (ctx->pc != 0x536A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536A98u; }
        if (ctx->pc != 0x536A98u) { return; }
    }
    ctx->pc = 0x536A98u;
label_536a98:
    // 0x536a98: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x536A98u;
    SET_GPR_U32(ctx, 31, 0x536AA0u);
    ctx->pc = 0x536A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536A98u;
            // 0x536a9c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536AA0u; }
        if (ctx->pc != 0x536AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536AA0u; }
        if (ctx->pc != 0x536AA0u) { return; }
    }
    ctx->pc = 0x536AA0u;
label_536aa0:
    // 0x536aa0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x536aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x536aa4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x536aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x536aa8: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x536aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x536aac: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x536aacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x536ab0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x536ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x536ab4: 0x24a5c560  addiu       $a1, $a1, -0x3AA0
    ctx->pc = 0x536ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952288));
    // 0x536ab8: 0x24846e90  addiu       $a0, $a0, 0x6E90
    ctx->pc = 0x536ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28304));
    // 0x536abc: 0x24636ec4  addiu       $v1, $v1, 0x6EC4
    ctx->pc = 0x536abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28356));
    // 0x536ac0: 0x8cc60788  lw          $a2, 0x788($a2)
    ctx->pc = 0x536ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1928)));
    // 0x536ac4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x536ac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x536ac8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x536ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x536acc: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x536accu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x536ad0: 0xa205004d  sb          $a1, 0x4D($s0)
    ctx->pc = 0x536ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 5));
    // 0x536ad4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x536ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x536ad8: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x536ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x536adc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x536adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x536ae0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x536ae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x536ae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x536ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x536ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x536AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x536AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536AE8u;
            // 0x536aec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x536AF0u;
}
