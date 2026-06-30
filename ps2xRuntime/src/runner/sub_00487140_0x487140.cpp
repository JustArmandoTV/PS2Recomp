#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00487140
// Address: 0x487140 - 0x4871a0
void sub_00487140_0x487140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487140_0x487140");
#endif

    switch (ctx->pc) {
        case 0x487180u: goto label_487180;
        default: break;
    }

    ctx->pc = 0x487140u;

    // 0x487140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x487140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x487144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x487144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x487148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x487148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48714c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48714cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487150: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x487150u;
    {
        const bool branch_taken_0x487150 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x487150) {
            ctx->pc = 0x487154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x487150u;
            // 0x487154: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x487184u;
            goto label_487184;
        }
    }
    ctx->pc = 0x487158u;
    // 0x487158: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x487158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x48715c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x48715cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x487160: 0x2442f620  addiu       $v0, $v0, -0x9E0
    ctx->pc = 0x487160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964768));
    // 0x487164: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x487164u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x487168: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x487168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x48716c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x48716cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x487170: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x487170u;
    {
        const bool branch_taken_0x487170 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x487174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x487170u;
            // 0x487174: 0xac407ba8  sw          $zero, 0x7BA8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 31656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487170) {
            ctx->pc = 0x487180u;
            goto label_487180;
        }
    }
    ctx->pc = 0x487178u;
    // 0x487178: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x487178u;
    SET_GPR_U32(ctx, 31, 0x487180u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487180u; }
        if (ctx->pc != 0x487180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487180u; }
        if (ctx->pc != 0x487180u) { return; }
    }
    ctx->pc = 0x487180u;
label_487180:
    // 0x487180: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x487180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_487184:
    // 0x487184: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x487184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x487188: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x487188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48718c: 0x3e00008  jr          $ra
    ctx->pc = 0x48718Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x487190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48718Cu;
            // 0x487190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x487194u;
    // 0x487194: 0x0  nop
    ctx->pc = 0x487194u;
    // NOP
    // 0x487198: 0x0  nop
    ctx->pc = 0x487198u;
    // NOP
    // 0x48719c: 0x0  nop
    ctx->pc = 0x48719cu;
    // NOP
}
