#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FC600
// Address: 0x2fc600 - 0x2fc6c0
void sub_002FC600_0x2fc600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC600_0x2fc600");
#endif

    switch (ctx->pc) {
        case 0x2fc64cu: goto label_2fc64c;
        case 0x2fc6acu: goto label_2fc6ac;
        default: break;
    }

    ctx->pc = 0x2fc600u;

    // 0x2fc600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fc600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fc604: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fc604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2fc608: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fc608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fc60c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fc60cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fc610: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fc610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fc614: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2fc614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
    // 0x2fc618: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2fc618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2fc61c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fc61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc620: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2fc620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2fc624: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fc624u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2fc628: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2fc628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2fc62c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2fc62cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2fc630: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x2fc630u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x2fc634: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2fc634u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2fc638: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2fc638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2fc63c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2fc63cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2fc640: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x2fc640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x2fc644: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2FC644u;
    SET_GPR_U32(ctx, 31, 0x2FC64Cu);
    ctx->pc = 0x2FC648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC644u;
            // 0x2fc648: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC64Cu; }
        if (ctx->pc != 0x2FC64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC64Cu; }
        if (ctx->pc != 0x2FC64Cu) { return; }
    }
    ctx->pc = 0x2FC64Cu;
label_2fc64c:
    // 0x2fc64c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2fc64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x2fc650: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2fc650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2fc654: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x2fc654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x2fc658: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fc658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2fc65c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2fc65cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc660: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x2fc660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x2fc664: 0xae04003c  sw          $a0, 0x3C($s0)
    ctx->pc = 0x2fc664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
    // 0x2fc668: 0x3c06437f  lui         $a2, 0x437F
    ctx->pc = 0x2fc668u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17279 << 16));
    // 0x2fc66c: 0xae040040  sw          $a0, 0x40($s0)
    ctx->pc = 0x2fc66cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
    // 0x2fc670: 0x24a5aae0  addiu       $a1, $a1, -0x5520
    ctx->pc = 0x2fc670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945504));
    // 0x2fc674: 0xae040044  sw          $a0, 0x44($s0)
    ctx->pc = 0x2fc674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x2fc678: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2fc678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fc67c: 0xae060048  sw          $a2, 0x48($s0)
    ctx->pc = 0x2fc67cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 6));
    // 0x2fc680: 0x24429140  addiu       $v0, $v0, -0x6EC0
    ctx->pc = 0x2fc680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938944));
    // 0x2fc684: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2fc684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2fc688: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x2fc688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2fc68c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2fc68cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2fc690: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x2fc690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x2fc694: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2fc694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2fc698: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2fc698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x2fc69c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2fc69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x2fc6a0: 0xa2000064  sb          $zero, 0x64($s0)
    ctx->pc = 0x2fc6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fc6a4: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2FC6A4u;
    SET_GPR_U32(ctx, 31, 0x2FC6ACu);
    ctx->pc = 0x2FC6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC6A4u;
            // 0x2fc6a8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC6ACu; }
        if (ctx->pc != 0x2FC6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC6ACu; }
        if (ctx->pc != 0x2FC6ACu) { return; }
    }
    ctx->pc = 0x2FC6ACu;
label_2fc6ac:
    // 0x2fc6ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fc6acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc6b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fc6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc6b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fc6b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC6B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC6B8u;
            // 0x2fc6bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC6C0u;
}
