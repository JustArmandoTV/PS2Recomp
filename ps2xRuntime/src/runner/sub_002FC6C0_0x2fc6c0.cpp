#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FC6C0
// Address: 0x2fc6c0 - 0x2fc780
void sub_002FC6C0_0x2fc6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC6C0_0x2fc6c0");
#endif

    switch (ctx->pc) {
        case 0x2fc70cu: goto label_2fc70c;
        default: break;
    }

    ctx->pc = 0x2fc6c0u;

    // 0x2fc6c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fc6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fc6c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fc6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2fc6c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fc6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fc6cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fc6ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fc6d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fc6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fc6d4: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2fc6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
    // 0x2fc6d8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2fc6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2fc6dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fc6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc6e0: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2fc6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2fc6e4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fc6e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2fc6e8: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2fc6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2fc6ec: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2fc6ecu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2fc6f0: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x2fc6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x2fc6f4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2fc6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2fc6f8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2fc6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2fc6fc: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2fc6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2fc700: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x2fc700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x2fc704: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2FC704u;
    SET_GPR_U32(ctx, 31, 0x2FC70Cu);
    ctx->pc = 0x2FC708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC704u;
            // 0x2fc708: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC70Cu; }
        if (ctx->pc != 0x2FC70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC70Cu; }
        if (ctx->pc != 0x2FC70Cu) { return; }
    }
    ctx->pc = 0x2FC70Cu;
label_2fc70c:
    // 0x2fc70c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2fc70cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x2fc710: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2fc710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2fc714: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x2fc714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x2fc718: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fc718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2fc71c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2fc71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc720: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x2fc720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x2fc724: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x2fc724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x2fc728: 0x3c06437f  lui         $a2, 0x437F
    ctx->pc = 0x2fc728u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17279 << 16));
    // 0x2fc72c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2fc72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x2fc730: 0x24a5aae0  addiu       $a1, $a1, -0x5520
    ctx->pc = 0x2fc730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945504));
    // 0x2fc734: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x2fc734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x2fc738: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2fc738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fc73c: 0xae060048  sw          $a2, 0x48($s0)
    ctx->pc = 0x2fc73cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 6));
    // 0x2fc740: 0x24633e70  addiu       $v1, $v1, 0x3E70
    ctx->pc = 0x2fc740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15984));
    // 0x2fc744: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2fc744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2fc748: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fc748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc74c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2fc74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2fc750: 0xae040050  sw          $a0, 0x50($s0)
    ctx->pc = 0x2fc750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 4));
    // 0x2fc754: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2fc754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2fc758: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2fc758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x2fc75c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2fc75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x2fc760: 0xa2000064  sb          $zero, 0x64($s0)
    ctx->pc = 0x2fc760u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fc764: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2fc764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2fc768: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fc768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc76c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fc76cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc770: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC770u;
            // 0x2fc774: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC778u;
    // 0x2fc778: 0x0  nop
    ctx->pc = 0x2fc778u;
    // NOP
    // 0x2fc77c: 0x0  nop
    ctx->pc = 0x2fc77cu;
    // NOP
}
