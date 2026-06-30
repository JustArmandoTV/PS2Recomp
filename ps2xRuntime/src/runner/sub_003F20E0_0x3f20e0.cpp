#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F20E0
// Address: 0x3f20e0 - 0x3f2150
void sub_003F20E0_0x3f20e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F20E0_0x3f20e0");
#endif

    switch (ctx->pc) {
        case 0x3f2120u: goto label_3f2120;
        case 0x3f2138u: goto label_3f2138;
        default: break;
    }

    ctx->pc = 0x3f20e0u;

    // 0x3f20e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f20e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f20e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f20e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3f20e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f20e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f20ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f20ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f20f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f20f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f20f4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F20F4u;
    {
        const bool branch_taken_0x3f20f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F20F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F20F4u;
            // 0x3f20f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f20f4) {
            ctx->pc = 0x3F2138u;
            goto label_3f2138;
        }
    }
    ctx->pc = 0x3F20FCu;
    // 0x3f20fc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F20FCu;
    {
        const bool branch_taken_0x3f20fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f20fc) {
            ctx->pc = 0x3F2100u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F20FCu;
            // 0x3f2100: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F2124u;
            goto label_3f2124;
        }
    }
    ctx->pc = 0x3F2104u;
    // 0x3f2104: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F2104u;
    {
        const bool branch_taken_0x3f2104 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2104) {
            ctx->pc = 0x3F2120u;
            goto label_3f2120;
        }
    }
    ctx->pc = 0x3F210Cu;
    // 0x3f210c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3f210cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3f2110: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F2110u;
    {
        const bool branch_taken_0x3f2110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2110) {
            ctx->pc = 0x3F2120u;
            goto label_3f2120;
        }
    }
    ctx->pc = 0x3F2118u;
    // 0x3f2118: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3F2118u;
    SET_GPR_U32(ctx, 31, 0x3F2120u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2120u; }
        if (ctx->pc != 0x3F2120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2120u; }
        if (ctx->pc != 0x3F2120u) { return; }
    }
    ctx->pc = 0x3F2120u;
label_3f2120:
    // 0x3f2120: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3f2120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3f2124:
    // 0x3f2124: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3f2124u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3f2128: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F2128u;
    {
        const bool branch_taken_0x3f2128 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3f2128) {
            ctx->pc = 0x3F212Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2128u;
            // 0x3f212c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F213Cu;
            goto label_3f213c;
        }
    }
    ctx->pc = 0x3F2130u;
    // 0x3f2130: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3F2130u;
    SET_GPR_U32(ctx, 31, 0x3F2138u);
    ctx->pc = 0x3F2134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2130u;
            // 0x3f2134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2138u; }
        if (ctx->pc != 0x3F2138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2138u; }
        if (ctx->pc != 0x3F2138u) { return; }
    }
    ctx->pc = 0x3F2138u;
label_3f2138:
    // 0x3f2138: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3f2138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f213c:
    // 0x3f213c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f213cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f2140: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f2140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f2144: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f2144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f2148: 0x3e00008  jr          $ra
    ctx->pc = 0x3F2148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F214Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2148u;
            // 0x3f214c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F2150u;
}
