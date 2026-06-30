#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B31E0
// Address: 0x4b31e0 - 0x4b3240
void sub_004B31E0_0x4b31e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B31E0_0x4b31e0");
#endif

    switch (ctx->pc) {
        case 0x4b3220u: goto label_4b3220;
        default: break;
    }

    ctx->pc = 0x4b31e0u;

    // 0x4b31e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b31e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b31e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b31e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b31e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b31e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4b31ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b31ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b31f0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4B31F0u;
    {
        const bool branch_taken_0x4b31f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b31f0) {
            ctx->pc = 0x4B31F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B31F0u;
            // 0x4b31f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B3224u;
            goto label_4b3224;
        }
    }
    ctx->pc = 0x4B31F8u;
    // 0x4b31f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b31f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4b31fc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4b31fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4b3200: 0x244207a0  addiu       $v0, $v0, 0x7A0
    ctx->pc = 0x4b3200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1952));
    // 0x4b3204: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4b3204u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4b3208: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b3208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b320c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4b320cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4b3210: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B3210u;
    {
        const bool branch_taken_0x4b3210 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4B3214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3210u;
            // 0x4b3214: 0xac40a998  sw          $zero, -0x5668($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3210) {
            ctx->pc = 0x4B3220u;
            goto label_4b3220;
        }
    }
    ctx->pc = 0x4B3218u;
    // 0x4b3218: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4B3218u;
    SET_GPR_U32(ctx, 31, 0x4B3220u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3220u; }
        if (ctx->pc != 0x4B3220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3220u; }
        if (ctx->pc != 0x4B3220u) { return; }
    }
    ctx->pc = 0x4B3220u;
label_4b3220:
    // 0x4b3220: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b3220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b3224:
    // 0x4b3224: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b3224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b3228: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b3228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b322c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B322Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B322Cu;
            // 0x4b3230: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B3234u;
    // 0x4b3234: 0x0  nop
    ctx->pc = 0x4b3234u;
    // NOP
    // 0x4b3238: 0x0  nop
    ctx->pc = 0x4b3238u;
    // NOP
    // 0x4b323c: 0x0  nop
    ctx->pc = 0x4b323cu;
    // NOP
}
