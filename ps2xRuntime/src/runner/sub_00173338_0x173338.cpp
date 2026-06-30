#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173338
// Address: 0x173338 - 0x173398
void sub_00173338_0x173338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173338_0x173338");
#endif

    switch (ctx->pc) {
        case 0x173350u: goto label_173350;
        case 0x17337cu: goto label_17337c;
        case 0x173384u: goto label_173384;
        default: break;
    }

    ctx->pc = 0x173338u;

    // 0x173338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17333c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17333Cu;
    {
        const bool branch_taken_0x17333c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x173340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17333Cu;
            // 0x173340: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17333c) {
            ctx->pc = 0x173358u;
            goto label_173358;
        }
    }
    ctx->pc = 0x173344u;
    // 0x173344: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x173344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x173348: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x173348u;
    SET_GPR_U32(ctx, 31, 0x173350u);
    ctx->pc = 0x17334Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173348u;
            // 0x17334c: 0x248441c8  addiu       $a0, $a0, 0x41C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173350u; }
        if (ctx->pc != 0x173350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173350u; }
        if (ctx->pc != 0x173350u) { return; }
    }
    ctx->pc = 0x173350u;
label_173350:
    // 0x173350: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x173350u;
    {
        const bool branch_taken_0x173350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173350u;
            // 0x173354: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173350) {
            ctx->pc = 0x17335Cu;
            goto label_17335c;
        }
    }
    ctx->pc = 0x173358u;
label_173358:
    // 0x173358: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x173358u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_17335c:
    // 0x17335c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17335cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173360: 0x3e00008  jr          $ra
    ctx->pc = 0x173360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173360u;
            // 0x173364: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173368u;
    // 0x173368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17336c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17336cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173370: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x173370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x173374: 0xc0599de  jal         func_166778
    ctx->pc = 0x173374u;
    SET_GPR_U32(ctx, 31, 0x17337Cu);
    ctx->pc = 0x173378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173374u;
            // 0x173378: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17337Cu; }
        if (ctx->pc != 0x17337Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17337Cu; }
        if (ctx->pc != 0x17337Cu) { return; }
    }
    ctx->pc = 0x17337Cu;
label_17337c:
    // 0x17337c: 0xc05cce6  jal         func_173398
    ctx->pc = 0x17337Cu;
    SET_GPR_U32(ctx, 31, 0x173384u);
    ctx->pc = 0x173380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17337Cu;
            // 0x173380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173398u;
    if (runtime->hasFunction(0x173398u)) {
        auto targetFn = runtime->lookupFunction(0x173398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173384u; }
        if (ctx->pc != 0x173384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173398_0x173398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173384u; }
        if (ctx->pc != 0x173384u) { return; }
    }
    ctx->pc = 0x173384u;
label_173384:
    // 0x173384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173388: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x173388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17338c: 0x80599e0  j           func_166780
    ctx->pc = 0x17338Cu;
    ctx->pc = 0x173390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17338Cu;
            // 0x173390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x173394u;
    // 0x173394: 0x0  nop
    ctx->pc = 0x173394u;
    // NOP
}
