#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00446910
// Address: 0x446910 - 0x446970
void sub_00446910_0x446910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00446910_0x446910");
#endif

    switch (ctx->pc) {
        case 0x446950u: goto label_446950;
        default: break;
    }

    ctx->pc = 0x446910u;

    // 0x446910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x446910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x446914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x446914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x446918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x446918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x44691c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44691cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446920: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x446920u;
    {
        const bool branch_taken_0x446920 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x446920) {
            ctx->pc = 0x446924u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x446920u;
            // 0x446924: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x446954u;
            goto label_446954;
        }
    }
    ctx->pc = 0x446928u;
    // 0x446928: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x446928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x44692c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x44692cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x446930: 0x2442d5c8  addiu       $v0, $v0, -0x2A38
    ctx->pc = 0x446930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956488));
    // 0x446934: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x446934u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x446938: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x446938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x44693c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44693cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x446940: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x446940u;
    {
        const bool branch_taken_0x446940 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x446944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446940u;
            // 0x446944: 0xac407538  sw          $zero, 0x7538($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 30008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446940) {
            ctx->pc = 0x446950u;
            goto label_446950;
        }
    }
    ctx->pc = 0x446948u;
    // 0x446948: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x446948u;
    SET_GPR_U32(ctx, 31, 0x446950u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446950u; }
        if (ctx->pc != 0x446950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446950u; }
        if (ctx->pc != 0x446950u) { return; }
    }
    ctx->pc = 0x446950u;
label_446950:
    // 0x446950: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x446950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_446954:
    // 0x446954: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x446954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x446958: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x446958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44695c: 0x3e00008  jr          $ra
    ctx->pc = 0x44695Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x446960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44695Cu;
            // 0x446960: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x446964u;
    // 0x446964: 0x0  nop
    ctx->pc = 0x446964u;
    // NOP
    // 0x446968: 0x0  nop
    ctx->pc = 0x446968u;
    // NOP
    // 0x44696c: 0x0  nop
    ctx->pc = 0x44696cu;
    // NOP
}
