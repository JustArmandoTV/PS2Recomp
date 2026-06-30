#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004FDE60
// Address: 0x4fde60 - 0x4fdf40
void sub_004FDE60_0x4fde60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FDE60_0x4fde60");
#endif

    switch (ctx->pc) {
        case 0x4fdec0u: goto label_4fdec0;
        case 0x4fdec8u: goto label_4fdec8;
        default: break;
    }

    ctx->pc = 0x4fde60u;

    // 0x4fde60: 0x80788fc  j           func_1E23F0
    ctx->pc = 0x4FDE60u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4FDE68u;
    // 0x4fde68: 0x0  nop
    ctx->pc = 0x4fde68u;
    // NOP
    // 0x4fde6c: 0x0  nop
    ctx->pc = 0x4fde6cu;
    // NOP
    // 0x4fde70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4fde70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4fde74: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4fde74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4fde78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4fde78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4fde7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4fde7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4fde80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4fde80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4fde84: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4fde84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x4fde88: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4fde88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4fde8c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4fde8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4fde90: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x4fde90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x4fde94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4fde94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4fde98: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4fde98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4fde9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4fde9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fdea0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x4fdea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x4fdea4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4fdea4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4fdea8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x4fdea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x4fdeac: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4fdeacu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x4fdeb0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x4fdeb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x4fdeb4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x4fdeb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x4fdeb8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x4FDEB8u;
    SET_GPR_U32(ctx, 31, 0x4FDEC0u);
    ctx->pc = 0x4FDEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDEB8u;
            // 0x4fdebc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDEC0u; }
        if (ctx->pc != 0x4FDEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDEC0u; }
        if (ctx->pc != 0x4FDEC0u) { return; }
    }
    ctx->pc = 0x4FDEC0u;
label_4fdec0:
    // 0x4fdec0: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x4FDEC0u;
    SET_GPR_U32(ctx, 31, 0x4FDEC8u);
    ctx->pc = 0x4FDEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDEC0u;
            // 0x4fdec4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDEC8u; }
        if (ctx->pc != 0x4FDEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDEC8u; }
        if (ctx->pc != 0x4FDEC8u) { return; }
    }
    ctx->pc = 0x4FDEC8u;
label_4fdec8:
    // 0x4fdec8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4fdec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4fdecc: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x4fdeccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
    // 0x4fded0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4fded0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x4fded4: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x4fded4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x4fded8: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x4fded8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x4fdedc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x4fdedcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x4fdee0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x4fdee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x4fdee4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4fdee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4fdee8: 0x8c490788  lw          $t1, 0x788($v0)
    ctx->pc = 0x4fdee8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
    // 0x4fdeec: 0x2508c560  addiu       $t0, $t0, -0x3AA0
    ctx->pc = 0x4fdeecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952288));
    // 0x4fdef0: 0x24e72660  addiu       $a3, $a3, 0x2660
    ctx->pc = 0x4fdef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9824));
    // 0x4fdef4: 0x24c62670  addiu       $a2, $a2, 0x2670
    ctx->pc = 0x4fdef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9840));
    // 0x4fdef8: 0x24a526b0  addiu       $a1, $a1, 0x26B0
    ctx->pc = 0x4fdef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
    // 0x4fdefc: 0x24844690  addiu       $a0, $a0, 0x4690
    ctx->pc = 0x4fdefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18064));
    // 0x4fdf00: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x4fdf00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x4fdf04: 0x246346d0  addiu       $v1, $v1, 0x46D0
    ctx->pc = 0x4fdf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18128));
    // 0x4fdf08: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x4fdf08u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4fdf0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4fdf0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fdf10: 0xa208004d  sb          $t0, 0x4D($s0)
    ctx->pc = 0x4fdf10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 8));
    // 0x4fdf14: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x4fdf14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
    // 0x4fdf18: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4fdf18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x4fdf1c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4fdf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x4fdf20: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x4fdf20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
    // 0x4fdf24: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4fdf24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4fdf28: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4fdf28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x4fdf2c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x4fdf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x4fdf30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4fdf30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4fdf34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4fdf34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fdf38: 0x3e00008  jr          $ra
    ctx->pc = 0x4FDF38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FDF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDF38u;
            // 0x4fdf3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FDF40u;
}
