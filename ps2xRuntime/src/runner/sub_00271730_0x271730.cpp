#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00271730
// Address: 0x271730 - 0x2717c0
void sub_00271730_0x271730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271730_0x271730");
#endif

    switch (ctx->pc) {
        case 0x271750u: goto label_271750;
        case 0x27175cu: goto label_27175c;
        default: break;
    }

    ctx->pc = 0x271730u;

    // 0x271730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x271730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x271734: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x271734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x271738: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x271738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27173c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27173cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x271740: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x271740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271744: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x271744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271748: 0xc09d4c0  jal         func_275300
    ctx->pc = 0x271748u;
    SET_GPR_U32(ctx, 31, 0x271750u);
    ctx->pc = 0x27174Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271748u;
            // 0x27174c: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x275300u;
    if (runtime->hasFunction(0x275300u)) {
        auto targetFn = runtime->lookupFunction(0x275300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271750u; }
        if (ctx->pc != 0x271750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00275300_0x275300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271750u; }
        if (ctx->pc != 0x271750u) { return; }
    }
    ctx->pc = 0x271750u;
label_271750:
    // 0x271750: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x271750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271754: 0xc09cc58  jal         func_273160
    ctx->pc = 0x271754u;
    SET_GPR_U32(ctx, 31, 0x27175Cu);
    ctx->pc = 0x271758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271754u;
            // 0x271758: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x273160u;
    if (runtime->hasFunction(0x273160u)) {
        auto targetFn = runtime->lookupFunction(0x273160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27175Cu; }
        if (ctx->pc != 0x27175Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00273160_0x273160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27175Cu; }
        if (ctx->pc != 0x27175Cu) { return; }
    }
    ctx->pc = 0x27175Cu;
label_27175c:
    // 0x27175c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x27175cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x271760: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x271760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x271764: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x271764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x271768: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x271768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x27176c: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x27176cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x271770: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x271770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x271774: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x271774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x271778: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x271778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27177c: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x27177cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x271780: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x271780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x271784: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x271784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x271788: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x271788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x27178c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x27178cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x271790: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x271790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x271794: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x271794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271798: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x271798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x27179c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27179cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2717a0: 0xa2030064  sb          $v1, 0x64($s0)
    ctx->pc = 0x2717a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 3));
    // 0x2717a4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2717a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2717a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2717a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2717ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2717acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2717b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2717b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2717b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2717B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2717B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2717B4u;
            // 0x2717b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2717BCu;
    // 0x2717bc: 0x0  nop
    ctx->pc = 0x2717bcu;
    // NOP
}
