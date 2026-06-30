#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BF200
// Address: 0x2bf200 - 0x2bf260
void sub_002BF200_0x2bf200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF200_0x2bf200");
#endif

    switch (ctx->pc) {
        case 0x2bf240u: goto label_2bf240;
        default: break;
    }

    ctx->pc = 0x2bf200u;

    // 0x2bf200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bf200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bf204: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bf204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bf208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bf208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bf20c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bf20cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf210: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2BF210u;
    {
        const bool branch_taken_0x2bf210 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf210) {
            ctx->pc = 0x2BF214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF210u;
            // 0x2bf214: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BF244u;
            goto label_2bf244;
        }
    }
    ctx->pc = 0x2BF218u;
    // 0x2bf218: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bf218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bf21c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2bf21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2bf220: 0x24421ad0  addiu       $v0, $v0, 0x1AD0
    ctx->pc = 0x2bf220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6864));
    // 0x2bf224: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2bf224u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2bf228: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2bf228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2bf22c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bf22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2bf230: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF230u;
    {
        const bool branch_taken_0x2bf230 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2BF234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF230u;
            // 0x2bf234: 0xac400d30  sw          $zero, 0xD30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf230) {
            ctx->pc = 0x2BF240u;
            goto label_2bf240;
        }
    }
    ctx->pc = 0x2BF238u;
    // 0x2bf238: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BF238u;
    SET_GPR_U32(ctx, 31, 0x2BF240u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF240u; }
        if (ctx->pc != 0x2BF240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF240u; }
        if (ctx->pc != 0x2BF240u) { return; }
    }
    ctx->pc = 0x2BF240u;
label_2bf240:
    // 0x2bf240: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bf240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bf244:
    // 0x2bf244: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bf244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf248: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bf248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf24c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF24Cu;
            // 0x2bf250: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BF254u;
    // 0x2bf254: 0x0  nop
    ctx->pc = 0x2bf254u;
    // NOP
    // 0x2bf258: 0x0  nop
    ctx->pc = 0x2bf258u;
    // NOP
    // 0x2bf25c: 0x0  nop
    ctx->pc = 0x2bf25cu;
    // NOP
}
