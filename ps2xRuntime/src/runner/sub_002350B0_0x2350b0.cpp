#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002350B0
// Address: 0x2350b0 - 0x235120
void sub_002350B0_0x2350b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002350B0_0x2350b0");
#endif

    switch (ctx->pc) {
        case 0x2350e8u: goto label_2350e8;
        default: break;
    }

    ctx->pc = 0x2350b0u;

    // 0x2350b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2350b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2350b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2350b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2350b8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2350b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2350bc: 0x50a0000d  beql        $a1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2350BCu;
    {
        const bool branch_taken_0x2350bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2350bc) {
            ctx->pc = 0x2350C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2350BCu;
            // 0x2350c0: 0x94830004  lhu         $v1, 0x4($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2350F4u;
            goto label_2350f4;
        }
    }
    ctx->pc = 0x2350C4u;
    // 0x2350c4: 0x8ca30084  lw          $v1, 0x84($a1)
    ctx->pc = 0x2350c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x2350c8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2350C8u;
    {
        const bool branch_taken_0x2350c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2350c8) {
            ctx->pc = 0x2350F0u;
            goto label_2350f0;
        }
    }
    ctx->pc = 0x2350D0u;
    // 0x2350d0: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x2350d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x2350d4: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x2350d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2350d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2350d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2350dc: 0xa3a20018  sb          $v0, 0x18($sp)
    ctx->pc = 0x2350dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x2350e0: 0xc08d1cc  jal         func_234730
    ctx->pc = 0x2350E0u;
    SET_GPR_U32(ctx, 31, 0x2350E8u);
    ctx->pc = 0x2350E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2350E0u;
            // 0x2350e4: 0x27a50018  addiu       $a1, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234730u;
    if (runtime->hasFunction(0x234730u)) {
        auto targetFn = runtime->lookupFunction(0x234730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2350E8u; }
        if (ctx->pc != 0x2350E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234730_0x234730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2350E8u; }
        if (ctx->pc != 0x2350E8u) { return; }
    }
    ctx->pc = 0x2350E8u;
label_2350e8:
    // 0x2350e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2350E8u;
    {
        const bool branch_taken_0x2350e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2350ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2350E8u;
            // 0x2350ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2350e8) {
            ctx->pc = 0x23510Cu;
            goto label_23510c;
        }
    }
    ctx->pc = 0x2350F0u;
label_2350f0:
    // 0x2350f0: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x2350f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_2350f4:
    // 0x2350f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2350F4u;
    {
        const bool branch_taken_0x2350f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2350f4) {
            ctx->pc = 0x235108u;
            goto label_235108;
        }
    }
    ctx->pc = 0x2350FCu;
    // 0x2350fc: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x2350fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x235100: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x235100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x235104: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x235104u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_235108:
    // 0x235108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23510c:
    // 0x23510c: 0x3e00008  jr          $ra
    ctx->pc = 0x23510Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23510Cu;
            // 0x235110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x235114u;
    // 0x235114: 0x0  nop
    ctx->pc = 0x235114u;
    // NOP
    // 0x235118: 0x0  nop
    ctx->pc = 0x235118u;
    // NOP
    // 0x23511c: 0x0  nop
    ctx->pc = 0x23511cu;
    // NOP
}
