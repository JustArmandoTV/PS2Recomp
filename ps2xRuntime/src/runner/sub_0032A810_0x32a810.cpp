#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032A810
// Address: 0x32a810 - 0x32a870
void sub_0032A810_0x32a810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A810_0x32a810");
#endif

    switch (ctx->pc) {
        case 0x32a850u: goto label_32a850;
        default: break;
    }

    ctx->pc = 0x32a810u;

    // 0x32a810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32a810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32a814: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32a814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32a818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32a818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32a81c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32a81cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a820: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x32A820u;
    {
        const bool branch_taken_0x32a820 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a820) {
            ctx->pc = 0x32A824u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32A820u;
            // 0x32a824: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32A854u;
            goto label_32a854;
        }
    }
    ctx->pc = 0x32A828u;
    // 0x32a828: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32a828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x32a82c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x32a82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x32a830: 0x244246f8  addiu       $v0, $v0, 0x46F8
    ctx->pc = 0x32a830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18168));
    // 0x32a834: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32a834u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32a838: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32a838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32a83c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x32a840: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32A840u;
    {
        const bool branch_taken_0x32a840 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x32A844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A840u;
            // 0x32a844: 0xac403e48  sw          $zero, 0x3E48($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 15944), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a840) {
            ctx->pc = 0x32A850u;
            goto label_32a850;
        }
    }
    ctx->pc = 0x32A848u;
    // 0x32a848: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x32A848u;
    SET_GPR_U32(ctx, 31, 0x32A850u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A850u; }
        if (ctx->pc != 0x32A850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A850u; }
        if (ctx->pc != 0x32A850u) { return; }
    }
    ctx->pc = 0x32A850u;
label_32a850:
    // 0x32a850: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32a850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32a854:
    // 0x32a854: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32a854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a858: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32a858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a85c: 0x3e00008  jr          $ra
    ctx->pc = 0x32A85Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A85Cu;
            // 0x32a860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32A864u;
    // 0x32a864: 0x0  nop
    ctx->pc = 0x32a864u;
    // NOP
    // 0x32a868: 0x0  nop
    ctx->pc = 0x32a868u;
    // NOP
    // 0x32a86c: 0x0  nop
    ctx->pc = 0x32a86cu;
    // NOP
}
