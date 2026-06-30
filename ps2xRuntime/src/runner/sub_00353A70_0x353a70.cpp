#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00353A70
// Address: 0x353a70 - 0x353b70
void sub_00353A70_0x353a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353A70_0x353a70");
#endif

    switch (ctx->pc) {
        case 0x353ad0u: goto label_353ad0;
        case 0x353ad8u: goto label_353ad8;
        default: break;
    }

    ctx->pc = 0x353a70u;

    // 0x353a70: 0x80788fc  j           func_1E23F0
    ctx->pc = 0x353A70u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x353A78u;
    // 0x353a78: 0x0  nop
    ctx->pc = 0x353a78u;
    // NOP
    // 0x353a7c: 0x0  nop
    ctx->pc = 0x353a7cu;
    // NOP
    // 0x353a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x353a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x353a84: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x353a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x353a88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x353a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x353a8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x353a8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x353a90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x353a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x353a94: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x353a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x353a98: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x353a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x353a9c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x353a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x353aa0: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x353aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x353aa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x353aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353aa8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x353aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x353aac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x353aacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353ab0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x353ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x353ab4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x353ab4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x353ab8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x353ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x353abc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x353abcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x353ac0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x353ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x353ac4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x353ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x353ac8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x353AC8u;
    SET_GPR_U32(ctx, 31, 0x353AD0u);
    ctx->pc = 0x353ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353AC8u;
            // 0x353acc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353AD0u; }
        if (ctx->pc != 0x353AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353AD0u; }
        if (ctx->pc != 0x353AD0u) { return; }
    }
    ctx->pc = 0x353AD0u;
label_353ad0:
    // 0x353ad0: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x353AD0u;
    SET_GPR_U32(ctx, 31, 0x353AD8u);
    ctx->pc = 0x353AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353AD0u;
            // 0x353ad4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353AD8u; }
        if (ctx->pc != 0x353AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353AD8u; }
        if (ctx->pc != 0x353AD8u) { return; }
    }
    ctx->pc = 0x353AD8u;
label_353ad8:
    // 0x353ad8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x353ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x353adc: 0x3c090064  lui         $t1, 0x64
    ctx->pc = 0x353adcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)100 << 16));
    // 0x353ae0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x353ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x353ae4: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x353ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
    // 0x353ae8: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x353ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x353aec: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x353aecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x353af0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x353af0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x353af4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x353af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x353af8: 0x8c4a0788  lw          $t2, 0x788($v0)
    ctx->pc = 0x353af8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
    // 0x353afc: 0x2529c560  addiu       $t1, $t1, -0x3AA0
    ctx->pc = 0x353afcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952288));
    // 0x353b00: 0x25082660  addiu       $t0, $t0, 0x2660
    ctx->pc = 0x353b00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9824));
    // 0x353b04: 0x24e72670  addiu       $a3, $a3, 0x2670
    ctx->pc = 0x353b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9840));
    // 0x353b08: 0x24c626b0  addiu       $a2, $a2, 0x26B0
    ctx->pc = 0x353b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9904));
    // 0x353b0c: 0x24a55dc0  addiu       $a1, $a1, 0x5DC0
    ctx->pc = 0x353b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24000));
    // 0x353b10: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x353b10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x353b14: 0x24845e00  addiu       $a0, $a0, 0x5E00
    ctx->pc = 0x353b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24064));
    // 0x353b18: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x353b18u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x353b1c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x353b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x353b20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x353b20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353b24: 0xa209004d  sb          $t1, 0x4D($s0)
    ctx->pc = 0x353b24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 9));
    // 0x353b28: 0xae080054  sw          $t0, 0x54($s0)
    ctx->pc = 0x353b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 8));
    // 0x353b2c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x353b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x353b30: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x353b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x353b34: 0xae060054  sw          $a2, 0x54($s0)
    ctx->pc = 0x353b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 6));
    // 0x353b38: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x353b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x353b3c: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x353b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x353b40: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x353b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x353b44: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x353b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x353b48: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x353b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x353b4c: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x353b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x353b50: 0xae03009c  sw          $v1, 0x9C($s0)
    ctx->pc = 0x353b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
    // 0x353b54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x353b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353b58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x353b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x353b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x353B5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353B5Cu;
            // 0x353b60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x353B64u;
    // 0x353b64: 0x0  nop
    ctx->pc = 0x353b64u;
    // NOP
    // 0x353b68: 0x0  nop
    ctx->pc = 0x353b68u;
    // NOP
    // 0x353b6c: 0x0  nop
    ctx->pc = 0x353b6cu;
    // NOP
}
