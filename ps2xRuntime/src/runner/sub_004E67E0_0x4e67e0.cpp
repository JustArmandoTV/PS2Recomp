#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E67E0
// Address: 0x4e67e0 - 0x4e6840
void sub_004E67E0_0x4e67e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E67E0_0x4e67e0");
#endif

    switch (ctx->pc) {
        case 0x4e6820u: goto label_4e6820;
        default: break;
    }

    ctx->pc = 0x4e67e0u;

    // 0x4e67e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e67e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4e67e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e67e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4e67e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e67e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4e67ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e67ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e67f0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4E67F0u;
    {
        const bool branch_taken_0x4e67f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e67f0) {
            ctx->pc = 0x4E67F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E67F0u;
            // 0x4e67f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E6824u;
            goto label_4e6824;
        }
    }
    ctx->pc = 0x4E67F8u;
    // 0x4e67f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e67f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4e67fc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4e67fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4e6800: 0x24423a58  addiu       $v0, $v0, 0x3A58
    ctx->pc = 0x4e6800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14936));
    // 0x4e6804: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4e6804u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4e6808: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e6808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e680c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e680cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4e6810: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E6810u;
    {
        const bool branch_taken_0x4e6810 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4E6814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6810u;
            // 0x4e6814: 0xac40aaa0  sw          $zero, -0x5560($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6810) {
            ctx->pc = 0x4E6820u;
            goto label_4e6820;
        }
    }
    ctx->pc = 0x4E6818u;
    // 0x4e6818: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4E6818u;
    SET_GPR_U32(ctx, 31, 0x4E6820u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6820u; }
        if (ctx->pc != 0x4E6820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6820u; }
        if (ctx->pc != 0x4E6820u) { return; }
    }
    ctx->pc = 0x4E6820u;
label_4e6820:
    // 0x4e6820: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e6820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e6824:
    // 0x4e6824: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e6824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e6828: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e6828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e682c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E682Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E6830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E682Cu;
            // 0x4e6830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E6834u;
    // 0x4e6834: 0x0  nop
    ctx->pc = 0x4e6834u;
    // NOP
    // 0x4e6838: 0x0  nop
    ctx->pc = 0x4e6838u;
    // NOP
    // 0x4e683c: 0x0  nop
    ctx->pc = 0x4e683cu;
    // NOP
}
