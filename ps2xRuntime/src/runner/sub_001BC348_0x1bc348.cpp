#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC348
// Address: 0x1bc348 - 0x1bc388
void sub_001BC348_0x1bc348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC348_0x1bc348");
#endif

    switch (ctx->pc) {
        case 0x1bc35cu: goto label_1bc35c;
        default: break;
    }

    ctx->pc = 0x1bc348u;

    // 0x1bc348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bc348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bc34c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bc34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bc350: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bc350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bc354: 0xc06f0e8  jal         func_1BC3A0
    ctx->pc = 0x1BC354u;
    SET_GPR_U32(ctx, 31, 0x1BC35Cu);
    ctx->pc = 0x1BC358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC354u;
            // 0x1bc358: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BC3A0u;
    if (runtime->hasFunction(0x1BC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC35Cu; }
        if (ctx->pc != 0x1BC35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC3A0_0x1bc3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC35Cu; }
        if (ctx->pc != 0x1BC35Cu) { return; }
    }
    ctx->pc = 0x1BC35Cu;
label_1bc35c:
    // 0x1bc35c: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x1bc35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1bc360: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC360u;
    {
        const bool branch_taken_0x1bc360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BC364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC360u;
            // 0x1bc364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc360) {
            ctx->pc = 0x1BC378u;
            goto label_1bc378;
        }
    }
    ctx->pc = 0x1BC368u;
    // 0x1bc368: 0x92030020  lbu         $v1, 0x20($s0)
    ctx->pc = 0x1bc368u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1bc36c: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x1bc36cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bc370: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x1bc370u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bc374: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1bc374u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1bc378:
    // 0x1bc378: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc37c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bc37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bc380: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC380u;
            // 0x1bc384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC388u;
}
