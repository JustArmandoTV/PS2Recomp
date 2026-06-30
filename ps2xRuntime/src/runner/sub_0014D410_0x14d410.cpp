#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014D410
// Address: 0x14d410 - 0x14d4d0
void sub_0014D410_0x14d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D410_0x14d410");
#endif

    switch (ctx->pc) {
        case 0x14d430u: goto label_14d430;
        case 0x14d440u: goto label_14d440;
        case 0x14d460u: goto label_14d460;
        case 0x14d470u: goto label_14d470;
        case 0x14d4a0u: goto label_14d4a0;
        case 0x14d4a8u: goto label_14d4a8;
        case 0x14d4b0u: goto label_14d4b0;
        case 0x14d4b8u: goto label_14d4b8;
        default: break;
    }

    ctx->pc = 0x14d410u;

    // 0x14d410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d414: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14d414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14d418: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14d418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14d41c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d420: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x14d420u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x14d424: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x14d424u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x14d428: 0xc04e5e0  jal         func_139780
    ctx->pc = 0x14D428u;
    SET_GPR_U32(ctx, 31, 0x14D430u);
    ctx->pc = 0x14D42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D428u;
            // 0x14d42c: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139780u;
    if (runtime->hasFunction(0x139780u)) {
        auto targetFn = runtime->lookupFunction(0x139780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D430u; }
        if (ctx->pc != 0x14D430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139780_0x139780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D430u; }
        if (ctx->pc != 0x14D430u) { return; }
    }
    ctx->pc = 0x14D430u;
label_14d430:
    // 0x14d430: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14d430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14d434: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14d434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14d438: 0xc04e5dc  jal         func_139770
    ctx->pc = 0x14D438u;
    SET_GPR_U32(ctx, 31, 0x14D440u);
    ctx->pc = 0x139770u;
    if (runtime->hasFunction(0x139770u)) {
        auto targetFn = runtime->lookupFunction(0x139770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D440u; }
        if (ctx->pc != 0x14D440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139770_0x139770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D440u; }
        if (ctx->pc != 0x14D440u) { return; }
    }
    ctx->pc = 0x14D440u;
label_14d440:
    // 0x14d440: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x14d440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x14d444: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x14d444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x14d448: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x14d448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14d44c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x14d44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x14d450: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x14d450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x14d454: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x14d454u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x14d458: 0xc04e564  jal         func_139590
    ctx->pc = 0x14D458u;
    SET_GPR_U32(ctx, 31, 0x14D460u);
    ctx->pc = 0x14D45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D458u;
            // 0x14d45c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139590u;
    if (runtime->hasFunction(0x139590u)) {
        auto targetFn = runtime->lookupFunction(0x139590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D460u; }
        if (ctx->pc != 0x14D460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139590_0x139590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D460u; }
        if (ctx->pc != 0x14D460u) { return; }
    }
    ctx->pc = 0x14D460u;
label_14d460:
    // 0x14d460: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14d460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14d464: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14d464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14d468: 0xc04e5d8  jal         func_139760
    ctx->pc = 0x14D468u;
    SET_GPR_U32(ctx, 31, 0x14D470u);
    ctx->pc = 0x139760u;
    if (runtime->hasFunction(0x139760u)) {
        auto targetFn = runtime->lookupFunction(0x139760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D470u; }
        if (ctx->pc != 0x14D470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139760_0x139760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D470u; }
        if (ctx->pc != 0x14D470u) { return; }
    }
    ctx->pc = 0x14D470u;
label_14d470:
    // 0x14d470: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d474: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d478: 0xac405864  sw          $zero, 0x5864($v0)
    ctx->pc = 0x14d478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22628), GPR_U32(ctx, 0));
    // 0x14d47c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14d47cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14d480: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d484: 0xac605824  sw          $zero, 0x5824($v1)
    ctx->pc = 0x14d484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22564), GPR_U32(ctx, 0));
    // 0x14d488: 0xac405868  sw          $zero, 0x5868($v0)
    ctx->pc = 0x14d488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22632), GPR_U32(ctx, 0));
    // 0x14d48c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x14d48cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x14d490: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14d490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14d494: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14d494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14d498: 0xc057470  jal         func_15D1C0
    ctx->pc = 0x14D498u;
    SET_GPR_U32(ctx, 31, 0x14D4A0u);
    ctx->pc = 0x14D49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D498u;
            // 0x14d49c: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D1C0u;
    if (runtime->hasFunction(0x15D1C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D4A0u; }
        if (ctx->pc != 0x14D4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D1C0_0x15d1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D4A0u; }
        if (ctx->pc != 0x14D4A0u) { return; }
    }
    ctx->pc = 0x14D4A0u;
label_14d4a0:
    // 0x14d4a0: 0xc057480  jal         func_15D200
    ctx->pc = 0x14D4A0u;
    SET_GPR_U32(ctx, 31, 0x14D4A8u);
    ctx->pc = 0x15D200u;
    if (runtime->hasFunction(0x15D200u)) {
        auto targetFn = runtime->lookupFunction(0x15D200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D4A8u; }
        if (ctx->pc != 0x14D4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D200_0x15d200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D4A8u; }
        if (ctx->pc != 0x14D4A8u) { return; }
    }
    ctx->pc = 0x14D4A8u;
label_14d4a8:
    // 0x14d4a8: 0xc05395c  jal         func_14E570
    ctx->pc = 0x14D4A8u;
    SET_GPR_U32(ctx, 31, 0x14D4B0u);
    ctx->pc = 0x14D4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D4A8u;
            // 0x14d4ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E570u;
    if (runtime->hasFunction(0x14E570u)) {
        auto targetFn = runtime->lookupFunction(0x14E570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D4B0u; }
        if (ctx->pc != 0x14D4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E570_0x14e570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D4B0u; }
        if (ctx->pc != 0x14D4B0u) { return; }
    }
    ctx->pc = 0x14D4B0u;
label_14d4b0:
    // 0x14d4b0: 0xc050110  jal         func_140440
    ctx->pc = 0x14D4B0u;
    SET_GPR_U32(ctx, 31, 0x14D4B8u);
    ctx->pc = 0x14D4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D4B0u;
            // 0x14d4b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140440u;
    if (runtime->hasFunction(0x140440u)) {
        auto targetFn = runtime->lookupFunction(0x140440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D4B8u; }
        if (ctx->pc != 0x14D4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140440_0x140440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D4B8u; }
        if (ctx->pc != 0x14D4B8u) { return; }
    }
    ctx->pc = 0x14D4B8u;
label_14d4b8:
    // 0x14d4b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x14D4BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D4BCu;
            // 0x14d4c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14D4C4u;
    // 0x14d4c4: 0x0  nop
    ctx->pc = 0x14d4c4u;
    // NOP
    // 0x14d4c8: 0x0  nop
    ctx->pc = 0x14d4c8u;
    // NOP
    // 0x14d4cc: 0x0  nop
    ctx->pc = 0x14d4ccu;
    // NOP
}
