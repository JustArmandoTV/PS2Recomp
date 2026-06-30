#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00353910
// Address: 0x353910 - 0x353980
void sub_00353910_0x353910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353910_0x353910");
#endif

    switch (ctx->pc) {
        case 0x353940u: goto label_353940;
        case 0x353950u: goto label_353950;
        case 0x353968u: goto label_353968;
        default: break;
    }

    ctx->pc = 0x353910u;

    // 0x353910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x353910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x353914: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x353914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x353918: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x353918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35391c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35391cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x353920: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x353920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353924: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x353924u;
    {
        const bool branch_taken_0x353924 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x353928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353924u;
            // 0x353928: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353924) {
            ctx->pc = 0x353968u;
            goto label_353968;
        }
    }
    ctx->pc = 0x35392Cu;
    // 0x35392c: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x35392cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x353930: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x353930u;
    {
        const bool branch_taken_0x353930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353930) {
            ctx->pc = 0x353940u;
            goto label_353940;
        }
    }
    ctx->pc = 0x353938u;
    // 0x353938: 0xc07507c  jal         func_1D41F0
    ctx->pc = 0x353938u;
    SET_GPR_U32(ctx, 31, 0x353940u);
    ctx->pc = 0x35393Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353938u;
            // 0x35393c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353940u; }
        if (ctx->pc != 0x353940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353940u; }
        if (ctx->pc != 0x353940u) { return; }
    }
    ctx->pc = 0x353940u;
label_353940:
    // 0x353940: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x353940u;
    {
        const bool branch_taken_0x353940 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x353940) {
            ctx->pc = 0x353944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x353940u;
            // 0x353944: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x353954u;
            goto label_353954;
        }
    }
    ctx->pc = 0x353948u;
    // 0x353948: 0xc07507c  jal         func_1D41F0
    ctx->pc = 0x353948u;
    SET_GPR_U32(ctx, 31, 0x353950u);
    ctx->pc = 0x35394Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353948u;
            // 0x35394c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353950u; }
        if (ctx->pc != 0x353950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353950u; }
        if (ctx->pc != 0x353950u) { return; }
    }
    ctx->pc = 0x353950u;
label_353950:
    // 0x353950: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x353950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_353954:
    // 0x353954: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x353954u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x353958: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x353958u;
    {
        const bool branch_taken_0x353958 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x353958) {
            ctx->pc = 0x35395Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x353958u;
            // 0x35395c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35396Cu;
            goto label_35396c;
        }
    }
    ctx->pc = 0x353960u;
    // 0x353960: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x353960u;
    SET_GPR_U32(ctx, 31, 0x353968u);
    ctx->pc = 0x353964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353960u;
            // 0x353964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353968u; }
        if (ctx->pc != 0x353968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353968u; }
        if (ctx->pc != 0x353968u) { return; }
    }
    ctx->pc = 0x353968u;
label_353968:
    // 0x353968: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x353968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35396c:
    // 0x35396c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35396cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x353970: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x353970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x353974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x353978: 0x3e00008  jr          $ra
    ctx->pc = 0x353978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35397Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353978u;
            // 0x35397c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x353980u;
}
