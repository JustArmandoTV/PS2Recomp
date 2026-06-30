#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3240
// Address: 0x1b3240 - 0x1b32b0
void sub_001B3240_0x1b3240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3240_0x1b3240");
#endif

    switch (ctx->pc) {
        case 0x1b3274u: goto label_1b3274;
        case 0x1b3294u: goto label_1b3294;
        default: break;
    }

    ctx->pc = 0x1b3240u;

    // 0x1b3240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b3240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b3244: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1b3244u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3248: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b3248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b324c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x1b324cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1b3250: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1b3250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1b3254: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b3254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3258: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b3258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b325c: 0x8c700a5c  lw          $s0, 0xA5C($v1)
    ctx->pc = 0x1b325cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2652)));
    // 0x1b3260: 0x1205000d  beq         $s0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1B3260u;
    {
        const bool branch_taken_0x1b3260 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x1B3264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3260u;
            // 0x1b3264: 0x8c710a60  lw          $s1, 0xA60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3260) {
            ctx->pc = 0x1B3298u;
            goto label_1b3298;
        }
    }
    ctx->pc = 0x1B3268u;
    // 0x1b3268: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1b3268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1b326c: 0xc06dbb6  jal         func_1B6ED8
    ctx->pc = 0x1B326Cu;
    SET_GPR_U32(ctx, 31, 0x1B3274u);
    ctx->pc = 0x1B3270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B326Cu;
            // 0x1b3270: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6ED8u;
    if (runtime->hasFunction(0x1B6ED8u)) {
        auto targetFn = runtime->lookupFunction(0x1B6ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3274u; }
        if (ctx->pc != 0x1B3274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6ED8_0x1b6ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3274u; }
        if (ctx->pc != 0x1B3274u) { return; }
    }
    ctx->pc = 0x1B3274u;
label_1b3274:
    // 0x1b3274: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b3274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3278: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b3278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b327c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b327cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3280: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b3280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3284: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3284u;
    {
        const bool branch_taken_0x1b3284 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1B3288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3284u;
            // 0x1b3288: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3284) {
            ctx->pc = 0x1B3298u;
            goto label_1b3298;
        }
    }
    ctx->pc = 0x1B328Cu;
    // 0x1b328c: 0xc062890  jal         func_18A240
    ctx->pc = 0x1B328Cu;
    SET_GPR_U32(ctx, 31, 0x1B3294u);
    ctx->pc = 0x1B3290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B328Cu;
            // 0x1b3290: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A240u;
    if (runtime->hasFunction(0x18A240u)) {
        auto targetFn = runtime->lookupFunction(0x18A240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3294u; }
        if (ctx->pc != 0x1B3294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A240_0x18a240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3294u; }
        if (ctx->pc != 0x1B3294u) { return; }
    }
    ctx->pc = 0x1B3294u;
label_1b3294:
    // 0x1b3294: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b3294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b3298:
    // 0x1b3298: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b3298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b329c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1b329cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b32a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b32a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b32a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B32A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B32A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B32A4u;
            // 0x1b32a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B32ACu;
    // 0x1b32ac: 0x0  nop
    ctx->pc = 0x1b32acu;
    // NOP
}
