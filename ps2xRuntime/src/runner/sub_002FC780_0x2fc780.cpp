#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FC780
// Address: 0x2fc780 - 0x2fc840
void sub_002FC780_0x2fc780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC780_0x2fc780");
#endif

    switch (ctx->pc) {
        case 0x2fc7ccu: goto label_2fc7cc;
        default: break;
    }

    ctx->pc = 0x2fc780u;

    // 0x2fc780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fc780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fc784: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fc784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2fc788: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fc788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fc78c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fc78cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fc790: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fc790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fc794: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2fc794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
    // 0x2fc798: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2fc798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2fc79c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fc79cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc7a0: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2fc7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2fc7a4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fc7a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2fc7a8: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2fc7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2fc7ac: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2fc7acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2fc7b0: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x2fc7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x2fc7b4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2fc7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2fc7b8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2fc7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2fc7bc: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2fc7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2fc7c0: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x2fc7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x2fc7c4: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2FC7C4u;
    SET_GPR_U32(ctx, 31, 0x2FC7CCu);
    ctx->pc = 0x2FC7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC7C4u;
            // 0x2fc7c8: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC7CCu; }
        if (ctx->pc != 0x2FC7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC7CCu; }
        if (ctx->pc != 0x2FC7CCu) { return; }
    }
    ctx->pc = 0x2FC7CCu;
label_2fc7cc:
    // 0x2fc7cc: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2fc7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x2fc7d0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2fc7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2fc7d4: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x2fc7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x2fc7d8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fc7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2fc7dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2fc7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc7e0: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x2fc7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x2fc7e4: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x2fc7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x2fc7e8: 0x3c06437f  lui         $a2, 0x437F
    ctx->pc = 0x2fc7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17279 << 16));
    // 0x2fc7ec: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2fc7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x2fc7f0: 0x24a5aae0  addiu       $a1, $a1, -0x5520
    ctx->pc = 0x2fc7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945504));
    // 0x2fc7f4: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x2fc7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x2fc7f8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2fc7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fc7fc: 0xae060048  sw          $a2, 0x48($s0)
    ctx->pc = 0x2fc7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 6));
    // 0x2fc800: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x2fc800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
    // 0x2fc804: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2fc804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2fc808: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fc808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc80c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2fc80cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2fc810: 0xae040050  sw          $a0, 0x50($s0)
    ctx->pc = 0x2fc810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 4));
    // 0x2fc814: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2fc814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2fc818: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2fc818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x2fc81c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2fc81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x2fc820: 0xa2000064  sb          $zero, 0x64($s0)
    ctx->pc = 0x2fc820u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fc824: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2fc824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2fc828: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fc828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc82c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fc82cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc830: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC830u;
            // 0x2fc834: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC838u;
    // 0x2fc838: 0x0  nop
    ctx->pc = 0x2fc838u;
    // NOP
    // 0x2fc83c: 0x0  nop
    ctx->pc = 0x2fc83cu;
    // NOP
}
