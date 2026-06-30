#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C72E0
// Address: 0x2c72e0 - 0x2c7350
void sub_002C72E0_0x2c72e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C72E0_0x2c72e0");
#endif

    switch (ctx->pc) {
        case 0x2c7320u: goto label_2c7320;
        case 0x2c7338u: goto label_2c7338;
        default: break;
    }

    ctx->pc = 0x2c72e0u;

    // 0x2c72e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c72e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c72e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c72e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c72e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c72e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c72ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c72ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c72f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c72f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c72f4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C72F4u;
    {
        const bool branch_taken_0x2c72f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C72F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C72F4u;
            // 0x2c72f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c72f4) {
            ctx->pc = 0x2C7338u;
            goto label_2c7338;
        }
    }
    ctx->pc = 0x2C72FCu;
    // 0x2c72fc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C72FCu;
    {
        const bool branch_taken_0x2c72fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c72fc) {
            ctx->pc = 0x2C7300u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C72FCu;
            // 0x2c7300: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C7324u;
            goto label_2c7324;
        }
    }
    ctx->pc = 0x2C7304u;
    // 0x2c7304: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C7304u;
    {
        const bool branch_taken_0x2c7304 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7304) {
            ctx->pc = 0x2C7320u;
            goto label_2c7320;
        }
    }
    ctx->pc = 0x2C730Cu;
    // 0x2c730c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c730cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c7310: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7310u;
    {
        const bool branch_taken_0x2c7310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7310) {
            ctx->pc = 0x2C7320u;
            goto label_2c7320;
        }
    }
    ctx->pc = 0x2C7318u;
    // 0x2c7318: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C7318u;
    SET_GPR_U32(ctx, 31, 0x2C7320u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7320u; }
        if (ctx->pc != 0x2C7320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7320u; }
        if (ctx->pc != 0x2C7320u) { return; }
    }
    ctx->pc = 0x2C7320u;
label_2c7320:
    // 0x2c7320: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c7320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c7324:
    // 0x2c7324: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c7324u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c7328: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7328u;
    {
        const bool branch_taken_0x2c7328 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c7328) {
            ctx->pc = 0x2C732Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7328u;
            // 0x2c732c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C733Cu;
            goto label_2c733c;
        }
    }
    ctx->pc = 0x2C7330u;
    // 0x2c7330: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C7330u;
    SET_GPR_U32(ctx, 31, 0x2C7338u);
    ctx->pc = 0x2C7334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7330u;
            // 0x2c7334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7338u; }
        if (ctx->pc != 0x2C7338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7338u; }
        if (ctx->pc != 0x2C7338u) { return; }
    }
    ctx->pc = 0x2C7338u;
label_2c7338:
    // 0x2c7338: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c7338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c733c:
    // 0x2c733c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c733cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c7340: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c7340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c7344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7348: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C734Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7348u;
            // 0x2c734c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C7350u;
}
