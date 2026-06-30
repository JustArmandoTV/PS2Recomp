#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D0730
// Address: 0x4d0730 - 0x4d0790
void sub_004D0730_0x4d0730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D0730_0x4d0730");
#endif

    switch (ctx->pc) {
        case 0x4d0770u: goto label_4d0770;
        default: break;
    }

    ctx->pc = 0x4d0730u;

    // 0x4d0730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d0730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4d0734: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d0734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4d0738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d0738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d073c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d073cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0740: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4D0740u;
    {
        const bool branch_taken_0x4d0740 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0740) {
            ctx->pc = 0x4D0744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0740u;
            // 0x4d0744: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D0774u;
            goto label_4d0774;
        }
    }
    ctx->pc = 0x4D0748u;
    // 0x4d0748: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d0748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d074c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4d074cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4d0750: 0x24421f68  addiu       $v0, $v0, 0x1F68
    ctx->pc = 0x4d0750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8040));
    // 0x4d0754: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4d0754u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4d0758: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4d0758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4d075c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d075cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4d0760: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D0760u;
    {
        const bool branch_taken_0x4d0760 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4D0764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0760u;
            // 0x4d0764: 0xac40aa28  sw          $zero, -0x55D8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0760) {
            ctx->pc = 0x4D0770u;
            goto label_4d0770;
        }
    }
    ctx->pc = 0x4D0768u;
    // 0x4d0768: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4D0768u;
    SET_GPR_U32(ctx, 31, 0x4D0770u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0770u; }
        if (ctx->pc != 0x4D0770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0770u; }
        if (ctx->pc != 0x4D0770u) { return; }
    }
    ctx->pc = 0x4D0770u;
label_4d0770:
    // 0x4d0770: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d0770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d0774:
    // 0x4d0774: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d0774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d0778: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d0778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d077c: 0x3e00008  jr          $ra
    ctx->pc = 0x4D077Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D0780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D077Cu;
            // 0x4d0780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D0784u;
    // 0x4d0784: 0x0  nop
    ctx->pc = 0x4d0784u;
    // NOP
    // 0x4d0788: 0x0  nop
    ctx->pc = 0x4d0788u;
    // NOP
    // 0x4d078c: 0x0  nop
    ctx->pc = 0x4d078cu;
    // NOP
}
