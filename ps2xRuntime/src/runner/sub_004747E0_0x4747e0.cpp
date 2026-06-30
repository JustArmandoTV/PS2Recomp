#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004747E0
// Address: 0x4747e0 - 0x474840
void sub_004747E0_0x4747e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004747E0_0x4747e0");
#endif

    switch (ctx->pc) {
        case 0x474820u: goto label_474820;
        default: break;
    }

    ctx->pc = 0x4747e0u;

    // 0x4747e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4747e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4747e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4747e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4747e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4747e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4747ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4747ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4747f0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4747F0u;
    {
        const bool branch_taken_0x4747f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4747f0) {
            ctx->pc = 0x4747F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4747F0u;
            // 0x4747f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x474824u;
            goto label_474824;
        }
    }
    ctx->pc = 0x4747F8u;
    // 0x4747f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4747f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4747fc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4747fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x474800: 0x2442ea68  addiu       $v0, $v0, -0x1598
    ctx->pc = 0x474800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961768));
    // 0x474804: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x474804u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x474808: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x474808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x47480c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47480cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x474810: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x474810u;
    {
        const bool branch_taken_0x474810 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x474814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x474810u;
            // 0x474814: 0xac407608  sw          $zero, 0x7608($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 30216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474810) {
            ctx->pc = 0x474820u;
            goto label_474820;
        }
    }
    ctx->pc = 0x474818u;
    // 0x474818: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x474818u;
    SET_GPR_U32(ctx, 31, 0x474820u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474820u; }
        if (ctx->pc != 0x474820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474820u; }
        if (ctx->pc != 0x474820u) { return; }
    }
    ctx->pc = 0x474820u;
label_474820:
    // 0x474820: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x474820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_474824:
    // 0x474824: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x474824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x474828: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x474828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47482c: 0x3e00008  jr          $ra
    ctx->pc = 0x47482Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x474830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47482Cu;
            // 0x474830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x474834u;
    // 0x474834: 0x0  nop
    ctx->pc = 0x474834u;
    // NOP
    // 0x474838: 0x0  nop
    ctx->pc = 0x474838u;
    // NOP
    // 0x47483c: 0x0  nop
    ctx->pc = 0x47483cu;
    // NOP
}
