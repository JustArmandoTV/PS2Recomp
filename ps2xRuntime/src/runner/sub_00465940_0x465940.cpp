#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00465940
// Address: 0x465940 - 0x4659b0
void sub_00465940_0x465940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465940_0x465940");
#endif

    switch (ctx->pc) {
        case 0x465980u: goto label_465980;
        case 0x465998u: goto label_465998;
        default: break;
    }

    ctx->pc = 0x465940u;

    // 0x465940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x465940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x465944: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x465944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x465948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x465948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46594c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46594cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x465950: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x465950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465954: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x465954u;
    {
        const bool branch_taken_0x465954 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x465958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465954u;
            // 0x465958: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465954) {
            ctx->pc = 0x465998u;
            goto label_465998;
        }
    }
    ctx->pc = 0x46595Cu;
    // 0x46595c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x46595Cu;
    {
        const bool branch_taken_0x46595c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x46595c) {
            ctx->pc = 0x465960u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46595Cu;
            // 0x465960: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x465984u;
            goto label_465984;
        }
    }
    ctx->pc = 0x465964u;
    // 0x465964: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x465964u;
    {
        const bool branch_taken_0x465964 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x465964) {
            ctx->pc = 0x465980u;
            goto label_465980;
        }
    }
    ctx->pc = 0x46596Cu;
    // 0x46596c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x46596cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x465970: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x465970u;
    {
        const bool branch_taken_0x465970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x465970) {
            ctx->pc = 0x465980u;
            goto label_465980;
        }
    }
    ctx->pc = 0x465978u;
    // 0x465978: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x465978u;
    SET_GPR_U32(ctx, 31, 0x465980u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465980u; }
        if (ctx->pc != 0x465980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465980u; }
        if (ctx->pc != 0x465980u) { return; }
    }
    ctx->pc = 0x465980u;
label_465980:
    // 0x465980: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x465980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_465984:
    // 0x465984: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x465984u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x465988: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x465988u;
    {
        const bool branch_taken_0x465988 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x465988) {
            ctx->pc = 0x46598Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x465988u;
            // 0x46598c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46599Cu;
            goto label_46599c;
        }
    }
    ctx->pc = 0x465990u;
    // 0x465990: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x465990u;
    SET_GPR_U32(ctx, 31, 0x465998u);
    ctx->pc = 0x465994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x465990u;
            // 0x465994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465998u; }
        if (ctx->pc != 0x465998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465998u; }
        if (ctx->pc != 0x465998u) { return; }
    }
    ctx->pc = 0x465998u;
label_465998:
    // 0x465998: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x465998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46599c:
    // 0x46599c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x46599cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4659a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4659a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4659a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4659a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4659a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4659A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4659ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4659A8u;
            // 0x4659ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4659B0u;
}
