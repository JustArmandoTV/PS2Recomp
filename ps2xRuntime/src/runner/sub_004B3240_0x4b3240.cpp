#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B3240
// Address: 0x4b3240 - 0x4b32b0
void sub_004B3240_0x4b3240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3240_0x4b3240");
#endif

    switch (ctx->pc) {
        case 0x4b3280u: goto label_4b3280;
        case 0x4b3298u: goto label_4b3298;
        default: break;
    }

    ctx->pc = 0x4b3240u;

    // 0x4b3240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b3240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b3244: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b3244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4b3248: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b3248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4b324c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b324cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4b3250: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b3250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3254: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4B3254u;
    {
        const bool branch_taken_0x4b3254 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3254u;
            // 0x4b3258: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3254) {
            ctx->pc = 0x4B3298u;
            goto label_4b3298;
        }
    }
    ctx->pc = 0x4B325Cu;
    // 0x4b325c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B325Cu;
    {
        const bool branch_taken_0x4b325c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b325c) {
            ctx->pc = 0x4B3260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B325Cu;
            // 0x4b3260: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B3284u;
            goto label_4b3284;
        }
    }
    ctx->pc = 0x4B3264u;
    // 0x4b3264: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B3264u;
    {
        const bool branch_taken_0x4b3264 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b3264) {
            ctx->pc = 0x4B3280u;
            goto label_4b3280;
        }
    }
    ctx->pc = 0x4B326Cu;
    // 0x4b326c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4b326cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4b3270: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B3270u;
    {
        const bool branch_taken_0x4b3270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b3270) {
            ctx->pc = 0x4B3280u;
            goto label_4b3280;
        }
    }
    ctx->pc = 0x4B3278u;
    // 0x4b3278: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4B3278u;
    SET_GPR_U32(ctx, 31, 0x4B3280u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3280u; }
        if (ctx->pc != 0x4B3280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3280u; }
        if (ctx->pc != 0x4B3280u) { return; }
    }
    ctx->pc = 0x4B3280u;
label_4b3280:
    // 0x4b3280: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4b3280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4b3284:
    // 0x4b3284: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4b3284u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4b3288: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B3288u;
    {
        const bool branch_taken_0x4b3288 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4b3288) {
            ctx->pc = 0x4B328Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3288u;
            // 0x4b328c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B329Cu;
            goto label_4b329c;
        }
    }
    ctx->pc = 0x4B3290u;
    // 0x4b3290: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4B3290u;
    SET_GPR_U32(ctx, 31, 0x4B3298u);
    ctx->pc = 0x4B3294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3290u;
            // 0x4b3294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3298u; }
        if (ctx->pc != 0x4B3298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3298u; }
        if (ctx->pc != 0x4B3298u) { return; }
    }
    ctx->pc = 0x4B3298u;
label_4b3298:
    // 0x4b3298: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b3298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b329c:
    // 0x4b329c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b329cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b32a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b32a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b32a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b32a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b32a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B32A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B32ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B32A8u;
            // 0x4b32ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B32B0u;
}
