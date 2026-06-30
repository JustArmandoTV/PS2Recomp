#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053A4C0
// Address: 0x53a4c0 - 0x53a530
void sub_0053A4C0_0x53a4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053A4C0_0x53a4c0");
#endif

    switch (ctx->pc) {
        case 0x53a500u: goto label_53a500;
        case 0x53a518u: goto label_53a518;
        default: break;
    }

    ctx->pc = 0x53a4c0u;

    // 0x53a4c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x53a4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x53a4c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x53a4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x53a4c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53a4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x53a4cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53a4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x53a4d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x53a4d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53a4d4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x53A4D4u;
    {
        const bool branch_taken_0x53a4d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x53A4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A4D4u;
            // 0x53a4d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53a4d4) {
            ctx->pc = 0x53A518u;
            goto label_53a518;
        }
    }
    ctx->pc = 0x53A4DCu;
    // 0x53a4dc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x53A4DCu;
    {
        const bool branch_taken_0x53a4dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x53a4dc) {
            ctx->pc = 0x53A4E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53A4DCu;
            // 0x53a4e0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53A504u;
            goto label_53a504;
        }
    }
    ctx->pc = 0x53A4E4u;
    // 0x53a4e4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x53A4E4u;
    {
        const bool branch_taken_0x53a4e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x53a4e4) {
            ctx->pc = 0x53A500u;
            goto label_53a500;
        }
    }
    ctx->pc = 0x53A4ECu;
    // 0x53a4ec: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x53a4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x53a4f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x53A4F0u;
    {
        const bool branch_taken_0x53a4f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x53a4f0) {
            ctx->pc = 0x53A500u;
            goto label_53a500;
        }
    }
    ctx->pc = 0x53A4F8u;
    // 0x53a4f8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x53A4F8u;
    SET_GPR_U32(ctx, 31, 0x53A500u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A500u; }
        if (ctx->pc != 0x53A500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A500u; }
        if (ctx->pc != 0x53A500u) { return; }
    }
    ctx->pc = 0x53A500u;
label_53a500:
    // 0x53a500: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x53a500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_53a504:
    // 0x53a504: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x53a504u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x53a508: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x53A508u;
    {
        const bool branch_taken_0x53a508 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x53a508) {
            ctx->pc = 0x53A50Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53A508u;
            // 0x53a50c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53A51Cu;
            goto label_53a51c;
        }
    }
    ctx->pc = 0x53A510u;
    // 0x53a510: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x53A510u;
    SET_GPR_U32(ctx, 31, 0x53A518u);
    ctx->pc = 0x53A514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A510u;
            // 0x53a514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A518u; }
        if (ctx->pc != 0x53A518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A518u; }
        if (ctx->pc != 0x53A518u) { return; }
    }
    ctx->pc = 0x53A518u;
label_53a518:
    // 0x53a518: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x53a518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53a51c:
    // 0x53a51c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x53a51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x53a520: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53a520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x53a524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53a524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x53a528: 0x3e00008  jr          $ra
    ctx->pc = 0x53A528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53A52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A528u;
            // 0x53a52c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53A530u;
}
