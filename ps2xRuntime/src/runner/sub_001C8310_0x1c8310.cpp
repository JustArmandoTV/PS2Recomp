#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C8310
// Address: 0x1c8310 - 0x1c8398
void sub_001C8310_0x1c8310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8310_0x1c8310");
#endif

    switch (ctx->pc) {
        case 0x1c8340u: goto label_1c8340;
        case 0x1c835cu: goto label_1c835c;
        case 0x1c8368u: goto label_1c8368;
        default: break;
    }

    ctx->pc = 0x1c8310u;

    // 0x1c8310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c8310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c8314: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c8314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c8318: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1c8318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1c831c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c831cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c8320: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c8320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8324: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c8324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c8328: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c8328u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c832c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1c832cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1c8330: 0x27b30004  addiu       $s3, $sp, 0x4
    ctx->pc = 0x1c8330u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1c8334: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1c8334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1c8338: 0x27b40002  addiu       $s4, $sp, 0x2
    ctx->pc = 0x1c8338u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    // 0x1c833c: 0x2518021  addu        $s0, $s2, $s1
    ctx->pc = 0x1c833cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_1c8340:
    // 0x1c8340: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1c8340u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1c8344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8348: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c8348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c834c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c834cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8350: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1c8350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8354: 0xc071fd4  jal         func_1C7F50
    ctx->pc = 0x1C8354u;
    SET_GPR_U32(ctx, 31, 0x1C835Cu);
    ctx->pc = 0x1C8358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8354u;
            // 0x1c8358: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7F50u;
    if (runtime->hasFunction(0x1C7F50u)) {
        auto targetFn = runtime->lookupFunction(0x1C7F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C835Cu; }
        if (ctx->pc != 0x1C835Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7F50_0x1c7f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C835Cu; }
        if (ctx->pc != 0x1C835Cu) { return; }
    }
    ctx->pc = 0x1C835Cu;
label_1c835c:
    // 0x1c835c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c835cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8360: 0xc072066  jal         func_1C8198
    ctx->pc = 0x1C8360u;
    SET_GPR_U32(ctx, 31, 0x1C8368u);
    ctx->pc = 0x1C8364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8360u;
            // 0x1c8364: 0x97a40000  lhu         $a0, 0x0($sp) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8198u;
    if (runtime->hasFunction(0x1C8198u)) {
        auto targetFn = runtime->lookupFunction(0x1C8198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8368u; }
        if (ctx->pc != 0x1C8368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8198_0x1c8198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8368u; }
        if (ctx->pc != 0x1C8368u) { return; }
    }
    ctx->pc = 0x1C8368u;
label_1c8368:
    // 0x1c8368: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x1c8368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c836c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1C836Cu;
    {
        const bool branch_taken_0x1c836c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C836Cu;
            // 0x1c8370: 0x2518021  addu        $s0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c836c) {
            ctx->pc = 0x1C8340u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8340;
        }
    }
    ctx->pc = 0x1C8374u;
    // 0x1c8374: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c8374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8378: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c8378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c837c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c837cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8380: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1c8380u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c8384: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1c8384u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c8388: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1c8388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c838c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C838Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C838Cu;
            // 0x1c8390: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8394u;
    // 0x1c8394: 0x0  nop
    ctx->pc = 0x1c8394u;
    // NOP
}
