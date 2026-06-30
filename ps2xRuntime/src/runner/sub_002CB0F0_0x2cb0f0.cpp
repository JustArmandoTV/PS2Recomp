#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CB0F0
// Address: 0x2cb0f0 - 0x2cb150
void sub_002CB0F0_0x2cb0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB0F0_0x2cb0f0");
#endif

    switch (ctx->pc) {
        case 0x2cb130u: goto label_2cb130;
        default: break;
    }

    ctx->pc = 0x2cb0f0u;

    // 0x2cb0f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cb0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cb0f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cb0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cb0f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cb0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cb0fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cb0fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb100: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CB100u;
    {
        const bool branch_taken_0x2cb100 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb100) {
            ctx->pc = 0x2CB104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB100u;
            // 0x2cb104: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB134u;
            goto label_2cb134;
        }
    }
    ctx->pc = 0x2CB108u;
    // 0x2cb108: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cb108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cb10c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2cb10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2cb110: 0x24420208  addiu       $v0, $v0, 0x208
    ctx->pc = 0x2cb110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x2cb114: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2cb114u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2cb118: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2cb118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2cb11c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cb11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2cb120: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB120u;
    {
        const bool branch_taken_0x2cb120 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2CB124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB120u;
            // 0x2cb124: 0xac400e18  sw          $zero, 0xE18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb120) {
            ctx->pc = 0x2CB130u;
            goto label_2cb130;
        }
    }
    ctx->pc = 0x2CB128u;
    // 0x2cb128: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2CB128u;
    SET_GPR_U32(ctx, 31, 0x2CB130u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB130u; }
        if (ctx->pc != 0x2CB130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB130u; }
        if (ctx->pc != 0x2CB130u) { return; }
    }
    ctx->pc = 0x2CB130u;
label_2cb130:
    // 0x2cb130: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cb130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cb134:
    // 0x2cb134: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cb134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cb138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb13c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB13Cu;
            // 0x2cb140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CB144u;
    // 0x2cb144: 0x0  nop
    ctx->pc = 0x2cb144u;
    // NOP
    // 0x2cb148: 0x0  nop
    ctx->pc = 0x2cb148u;
    // NOP
    // 0x2cb14c: 0x0  nop
    ctx->pc = 0x2cb14cu;
    // NOP
}
