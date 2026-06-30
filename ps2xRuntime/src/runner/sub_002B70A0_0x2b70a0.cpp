#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B70A0
// Address: 0x2b70a0 - 0x2b7100
void sub_002B70A0_0x2b70a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B70A0_0x2b70a0");
#endif

    switch (ctx->pc) {
        case 0x2b70d4u: goto label_2b70d4;
        default: break;
    }

    ctx->pc = 0x2b70a0u;

    // 0x2b70a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b70a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b70a4: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x2b70a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x2b70a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b70a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b70ac: 0x30c30007  andi        $v1, $a2, 0x7
    ctx->pc = 0x2b70acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x2b70b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b70b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b70b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B70B4u;
    {
        const bool branch_taken_0x2b70b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B70B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B70B4u;
            // 0x2b70b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b70b4) {
            ctx->pc = 0x2B70C4u;
            goto label_2b70c4;
        }
    }
    ctx->pc = 0x2B70BCu;
    // 0x2b70bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B70BCu;
    {
        const bool branch_taken_0x2b70bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B70C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B70BCu;
            // 0x2b70c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b70bc) {
            ctx->pc = 0x2B70C8u;
            goto label_2b70c8;
        }
    }
    ctx->pc = 0x2B70C4u;
label_2b70c4:
    // 0x2b70c4: 0x30c70004  andi        $a3, $a2, 0x4
    ctx->pc = 0x2b70c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_2b70c8:
    // 0x2b70c8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2b70c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b70cc: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2B70CCu;
    SET_GPR_U32(ctx, 31, 0x2B70D4u);
    ctx->pc = 0x2B70D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B70CCu;
            // 0x2b70d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B70D4u; }
        if (ctx->pc != 0x2B70D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B70D4u; }
        if (ctx->pc != 0x2B70D4u) { return; }
    }
    ctx->pc = 0x2B70D4u;
label_2b70d4:
    // 0x2b70d4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b70d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b70d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b70d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b70dc: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2b70dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2b70e0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b70e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b70e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b70e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b70e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b70e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b70ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2B70ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B70F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B70ECu;
            // 0x2b70f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B70F4u;
    // 0x2b70f4: 0x0  nop
    ctx->pc = 0x2b70f4u;
    // NOP
    // 0x2b70f8: 0x0  nop
    ctx->pc = 0x2b70f8u;
    // NOP
    // 0x2b70fc: 0x0  nop
    ctx->pc = 0x2b70fcu;
    // NOP
}
