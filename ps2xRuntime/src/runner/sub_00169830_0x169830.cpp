#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00169830
// Address: 0x169830 - 0x169898
void sub_00169830_0x169830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169830_0x169830");
#endif

    switch (ctx->pc) {
        case 0x16984cu: goto label_16984c;
        case 0x169884u: goto label_169884;
        default: break;
    }

    ctx->pc = 0x169830u;

    // 0x169830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169834: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x169834u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169838: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x169838u;
    {
        const bool branch_taken_0x169838 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x16983Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169838u;
            // 0x16983c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169838) {
            ctx->pc = 0x169858u;
            goto label_169858;
        }
    }
    ctx->pc = 0x169840u;
    // 0x169840: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x169840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x169844: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x169844u;
    SET_GPR_U32(ctx, 31, 0x16984Cu);
    ctx->pc = 0x169848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169844u;
            // 0x169848: 0x24843698  addiu       $a0, $a0, 0x3698 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16984Cu; }
        if (ctx->pc != 0x16984Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16984Cu; }
        if (ctx->pc != 0x16984Cu) { return; }
    }
    ctx->pc = 0x16984Cu;
label_16984c:
    // 0x16984c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x16984Cu;
    {
        const bool branch_taken_0x16984c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16984Cu;
            // 0x169850: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16984c) {
            ctx->pc = 0x169888u;
            goto label_169888;
        }
    }
    ctx->pc = 0x169854u;
    // 0x169854: 0x0  nop
    ctx->pc = 0x169854u;
    // NOP
label_169858:
    // 0x169858: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x169858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x16985c: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x16985cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x169860: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x169860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x169864: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x169864u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x169868: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x169868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x16986c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16986cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169870: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x169870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x169874: 0x8407c  dsll32      $t0, $t0, 1
    ctx->pc = 0x169874u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 1));
    // 0x169878: 0x845ba  dsrl        $t0, $t0, 22
    ctx->pc = 0x169878u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 22);
    // 0x16987c: 0xc05c22e  jal         func_1708B8
    ctx->pc = 0x16987Cu;
    SET_GPR_U32(ctx, 31, 0x169884u);
    ctx->pc = 0x169880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16987Cu;
            // 0x169880: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1708B8u;
    if (runtime->hasFunction(0x1708B8u)) {
        auto targetFn = runtime->lookupFunction(0x1708B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169884u; }
        if (ctx->pc != 0x169884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001708B8_0x1708b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169884u; }
        if (ctx->pc != 0x169884u) { return; }
    }
    ctx->pc = 0x169884u;
label_169884:
    // 0x169884: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x169884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169888:
    // 0x169888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16988c: 0x3e00008  jr          $ra
    ctx->pc = 0x16988Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16988Cu;
            // 0x169890: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169894u;
    // 0x169894: 0x0  nop
    ctx->pc = 0x169894u;
    // NOP
}
