#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047E1F0
// Address: 0x47e1f0 - 0x47e260
void sub_0047E1F0_0x47e1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047E1F0_0x47e1f0");
#endif

    switch (ctx->pc) {
        case 0x47e230u: goto label_47e230;
        case 0x47e248u: goto label_47e248;
        default: break;
    }

    ctx->pc = 0x47e1f0u;

    // 0x47e1f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47e1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x47e1f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47e1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x47e1f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47e1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47e1fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47e1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47e200: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x47e200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e204: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x47E204u;
    {
        const bool branch_taken_0x47e204 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47E204u;
            // 0x47e208: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e204) {
            ctx->pc = 0x47E248u;
            goto label_47e248;
        }
    }
    ctx->pc = 0x47E20Cu;
    // 0x47e20c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x47E20Cu;
    {
        const bool branch_taken_0x47e20c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e20c) {
            ctx->pc = 0x47E210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47E20Cu;
            // 0x47e210: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47E234u;
            goto label_47e234;
        }
    }
    ctx->pc = 0x47E214u;
    // 0x47e214: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x47E214u;
    {
        const bool branch_taken_0x47e214 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e214) {
            ctx->pc = 0x47E230u;
            goto label_47e230;
        }
    }
    ctx->pc = 0x47E21Cu;
    // 0x47e21c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x47e21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x47e220: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x47E220u;
    {
        const bool branch_taken_0x47e220 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e220) {
            ctx->pc = 0x47E230u;
            goto label_47e230;
        }
    }
    ctx->pc = 0x47E228u;
    // 0x47e228: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x47E228u;
    SET_GPR_U32(ctx, 31, 0x47E230u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E230u; }
        if (ctx->pc != 0x47E230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E230u; }
        if (ctx->pc != 0x47E230u) { return; }
    }
    ctx->pc = 0x47E230u;
label_47e230:
    // 0x47e230: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x47e230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_47e234:
    // 0x47e234: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47e234u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x47e238: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47E238u;
    {
        const bool branch_taken_0x47e238 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x47e238) {
            ctx->pc = 0x47E23Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47E238u;
            // 0x47e23c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47E24Cu;
            goto label_47e24c;
        }
    }
    ctx->pc = 0x47E240u;
    // 0x47e240: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x47E240u;
    SET_GPR_U32(ctx, 31, 0x47E248u);
    ctx->pc = 0x47E244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E240u;
            // 0x47e244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E248u; }
        if (ctx->pc != 0x47E248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E248u; }
        if (ctx->pc != 0x47E248u) { return; }
    }
    ctx->pc = 0x47E248u;
label_47e248:
    // 0x47e248: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x47e248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47e24c:
    // 0x47e24c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47e24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47e250: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47e250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47e254: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47e254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47e258: 0x3e00008  jr          $ra
    ctx->pc = 0x47E258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47E25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47E258u;
            // 0x47e25c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47E260u;
}
