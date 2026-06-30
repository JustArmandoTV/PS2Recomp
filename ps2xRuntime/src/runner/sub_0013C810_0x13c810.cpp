#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013C810
// Address: 0x13c810 - 0x13c880
void sub_0013C810_0x13c810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C810_0x13c810");
#endif

    switch (ctx->pc) {
        case 0x13c838u: goto label_13c838;
        case 0x13c864u: goto label_13c864;
        default: break;
    }

    ctx->pc = 0x13c810u;

    // 0x13c810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13c810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13c814: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x13C814u;
    {
        const bool branch_taken_0x13c814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C814u;
            // 0x13c818: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c814) {
            ctx->pc = 0x13C840u;
            goto label_13c840;
        }
    }
    ctx->pc = 0x13C81Cu;
    // 0x13c81c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13c81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13c820: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13c820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13c824: 0x0  nop
    ctx->pc = 0x13c824u;
    // NOP
    // 0x13c828: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x13c828u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x13c82c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x13c82cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x13c830: 0xc057224  jal         func_15C890
    ctx->pc = 0x13C830u;
    SET_GPR_U32(ctx, 31, 0x13C838u);
    ctx->pc = 0x13C834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C830u;
            // 0x13c834: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C890u;
    if (runtime->hasFunction(0x15C890u)) {
        auto targetFn = runtime->lookupFunction(0x15C890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C838u; }
        if (ctx->pc != 0x13C838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C890_0x15c890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C838u; }
        if (ctx->pc != 0x13C838u) { return; }
    }
    ctx->pc = 0x13C838u;
label_13c838:
    // 0x13c838: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13C838u;
    {
        const bool branch_taken_0x13c838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C838u;
            // 0x13c83c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c838) {
            ctx->pc = 0x13C868u;
            goto label_13c868;
        }
    }
    ctx->pc = 0x13C840u;
label_13c840:
    // 0x13c840: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13c840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13c844: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c848: 0xc46c54c8  lwc1        $f12, 0x54C8($v1)
    ctx->pc = 0x13c848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 21704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13c84c: 0xc44d54cc  lwc1        $f13, 0x54CC($v0)
    ctx->pc = 0x13c84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x13c850: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13c850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13c854: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c858: 0xc44f54d4  lwc1        $f15, 0x54D4($v0)
    ctx->pc = 0x13c858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x13c85c: 0xc057224  jal         func_15C890
    ctx->pc = 0x13C85Cu;
    SET_GPR_U32(ctx, 31, 0x13C864u);
    ctx->pc = 0x13C860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C85Cu;
            // 0x13c860: 0xc46e54d0  lwc1        $f14, 0x54D0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 21712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C890u;
    if (runtime->hasFunction(0x15C890u)) {
        auto targetFn = runtime->lookupFunction(0x15C890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C864u; }
        if (ctx->pc != 0x13C864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C890_0x15c890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C864u; }
        if (ctx->pc != 0x13C864u) { return; }
    }
    ctx->pc = 0x13C864u;
label_13c864:
    // 0x13c864: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13c864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c868:
    // 0x13c868: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13c868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13c86c: 0xac6454dc  sw          $a0, 0x54DC($v1)
    ctx->pc = 0x13c86cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21724), GPR_U32(ctx, 4));
    // 0x13c870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c874: 0x3e00008  jr          $ra
    ctx->pc = 0x13C874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C874u;
            // 0x13c878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13C87Cu;
    // 0x13c87c: 0x0  nop
    ctx->pc = 0x13c87cu;
    // NOP
}
